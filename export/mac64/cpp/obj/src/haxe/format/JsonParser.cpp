// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif

namespace haxe{
namespace format{

void JsonParser_obj::__construct(::String str){
            	HX_STACK_FRAME("haxe.format.JsonParser","new",0xa017eec8,"haxe.format.JsonParser.new","/usr/local/lib/haxe/std/haxe/format/JsonParser.hx",51,0x4a8b222b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(str,"str")
HXLINE(  52)		this->str = str;
HXLINE(  53)		this->pos = (int)0;
            	}

Dynamic JsonParser_obj::__CreateEmpty() { return new JsonParser_obj; }

hx::ObjectPtr< JsonParser_obj > JsonParser_obj::__new(::String str)
{
	hx::ObjectPtr< JsonParser_obj > _hx_result = new JsonParser_obj();
	_hx_result->__construct(str);
	return _hx_result;
}

Dynamic JsonParser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JsonParser_obj > _hx_result = new JsonParser_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

 ::Dynamic JsonParser_obj::parseRec(){
            	HX_STACK_FRAME("haxe.format.JsonParser","parseRec",0xda258b75,"haxe.format.JsonParser.parseRec","/usr/local/lib/haxe/std/haxe/format/JsonParser.hx",57,0x4a8b222b)
            	HX_STACK_THIS(this)
HXLINE(  57)		while(true){
HXLINE(  58)			Int index = this->pos++;
HXDLIN(  58)			HX_VARI( Int,c) = this->str.cca(index);
HXLINE(  59)			switch((int)(c)){
            				case (int)9: case (int)10: case (int)13: case (int)32: {
            				}
            				break;
            				case (int)34: {
HXLINE( 129)					return this->parseString();
            				}
            				break;
            				case (int)45: case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE( 131)					HX_VARI_NAME( Int,c1,"c") = c;
HXDLIN( 131)					HX_VARI( Int,start) = (this->pos - (int)1);
HXDLIN( 131)					HX_VARI( Bool,minus) = (c == (int)45);
HXDLIN( 131)					HX_VARI( Bool,digit) = !(minus);
HXDLIN( 131)					HX_VARI( Bool,zero) = (c == (int)48);
HXDLIN( 131)					HX_VARI( Bool,point) = false;
HXDLIN( 131)					HX_VARI( Bool,e) = false;
HXDLIN( 131)					HX_VARI( Bool,pm) = false;
HXDLIN( 131)					HX_VARI( Bool,end) = false;
HXDLIN( 131)					while(true){
HXLINE( 131)						Int index1 = this->pos++;
HXDLIN( 131)						c1 = this->str.cca(index1);
HXDLIN( 131)						switch((int)(c1)){
            							case (int)43: case (int)45: {
HXLINE( 131)								Bool _hx_tmp;
HXDLIN( 131)								if (!(!(e))) {
HXLINE( 131)									_hx_tmp = pm;
            								}
            								else {
HXLINE( 131)									_hx_tmp = true;
            								}
HXDLIN( 131)								if (_hx_tmp) {
HXLINE( 131)									this->invalidNumber(start);
            								}
HXDLIN( 131)								digit = false;
HXDLIN( 131)								pm = true;
            							}
            							break;
            							case (int)46: {
HXLINE( 131)								Bool _hx_tmp1;
HXDLIN( 131)								if (!(minus)) {
HXLINE( 131)									_hx_tmp1 = point;
            								}
            								else {
HXLINE( 131)									_hx_tmp1 = true;
            								}
HXDLIN( 131)								if (_hx_tmp1) {
HXLINE( 131)									this->invalidNumber(start);
            								}
HXDLIN( 131)								digit = false;
HXDLIN( 131)								point = true;
            							}
            							break;
            							case (int)48: {
HXLINE( 131)								Bool _hx_tmp2;
HXDLIN( 131)								if (zero) {
HXLINE( 131)									_hx_tmp2 = !(point);
            								}
            								else {
HXLINE( 131)									_hx_tmp2 = false;
            								}
HXDLIN( 131)								if (_hx_tmp2) {
HXLINE( 131)									this->invalidNumber(start);
            								}
HXDLIN( 131)								Bool _hx_tmp3 = minus;
HXDLIN( 131)								if (_hx_tmp3) {
HXLINE( 131)									minus = false;
HXDLIN( 131)									zero = true;
            								}
HXDLIN( 131)								digit = true;
            							}
            							break;
            							case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE( 131)								Bool _hx_tmp4;
HXDLIN( 131)								if (zero) {
HXLINE( 131)									_hx_tmp4 = !(point);
            								}
            								else {
HXLINE( 131)									_hx_tmp4 = false;
            								}
HXDLIN( 131)								if (_hx_tmp4) {
HXLINE( 131)									this->invalidNumber(start);
            								}
HXDLIN( 131)								Bool _hx_tmp5 = minus;
HXDLIN( 131)								if (_hx_tmp5) {
HXLINE( 131)									minus = false;
            								}
HXDLIN( 131)								digit = true;
HXDLIN( 131)								zero = false;
            							}
            							break;
            							case (int)69: case (int)101: {
HXLINE( 131)								Bool _hx_tmp6;
HXDLIN( 131)								Bool _hx_tmp7;
HXDLIN( 131)								if (!(minus)) {
HXLINE( 131)									_hx_tmp7 = zero;
            								}
            								else {
HXLINE( 131)									_hx_tmp7 = true;
            								}
HXDLIN( 131)								if (!(_hx_tmp7)) {
HXLINE( 131)									_hx_tmp6 = e;
            								}
            								else {
HXLINE( 131)									_hx_tmp6 = true;
            								}
HXDLIN( 131)								if (_hx_tmp6) {
HXLINE( 131)									this->invalidNumber(start);
            								}
HXDLIN( 131)								digit = false;
HXDLIN( 131)								e = true;
            							}
            							break;
            							default:{
HXLINE( 131)								if (!(digit)) {
HXLINE( 131)									this->invalidNumber(start);
            								}
HXDLIN( 131)								this->pos--;
HXDLIN( 131)								end = true;
            							}
            						}
HXDLIN( 131)						if (end) {
HXLINE( 131)							goto _hx_goto_1;
            						}
            					}
            					_hx_goto_1:;
HXDLIN( 131)					Int _hx_tmp8 = (this->pos - start);
HXDLIN( 131)					::String _hx_tmp9 = this->str.substr(start,_hx_tmp8);
HXDLIN( 131)					HX_VARI( Float,f) = ::Std_obj::parseFloat(_hx_tmp9);
HXDLIN( 131)					HX_VARI( Int,i) = ::Std_obj::_hx_int(f);
HXDLIN( 131)					if ((i == f)) {
HXLINE( 131)						return i;
            					}
            					else {
HXLINE( 131)						return f;
            					}
            				}
            				break;
            				case (int)91: {
HXLINE(  89)					HX_VARI( ::cpp::VirtualArray,arr) = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  89)					HX_VARI(  ::Dynamic,comma) = null();
HXLINE(  90)					while(true){
HXLINE(  91)						Int index2 = this->pos++;
HXDLIN(  91)						HX_VARI_NAME( Int,c2,"c") = this->str.cca(index2);
HXLINE(  92)						switch((int)(c2)){
            							case (int)9: case (int)10: case (int)13: case (int)32: {
            							}
            							break;
            							case (int)44: {
HXLINE(  99)								if (comma) {
HXLINE(  99)									comma = false;
            								}
            								else {
HXLINE(  99)									this->invalidChar();
            								}
            							}
            							break;
            							case (int)93: {
HXLINE(  96)								if (hx::IsEq( comma,false )) {
HXLINE(  96)									this->invalidChar();
            								}
HXLINE(  97)								return arr;
            							}
            							break;
            							default:{
HXLINE( 101)								if (comma) {
HXLINE( 101)									this->invalidChar();
            								}
HXLINE( 102)								this->pos--;
HXLINE( 103)								 ::Dynamic _hx_tmp10 = this->parseRec();
HXDLIN( 103)								arr->push(_hx_tmp10);
HXLINE( 104)								comma = true;
            							}
            						}
            					}
            				}
            				break;
            				case (int)102: {
HXLINE( 115)					HX_VARI( Int,save) = this->pos;
HXLINE( 116)					Bool _hx_tmp11;
HXDLIN( 116)					Bool _hx_tmp12;
HXDLIN( 116)					Bool _hx_tmp13;
HXDLIN( 116)					Int index3 = this->pos++;
HXDLIN( 116)					Int _hx_tmp14 = this->str.cca(index3);
HXDLIN( 116)					if ((_hx_tmp14 == (int)97)) {
HXLINE( 116)						Int index4 = this->pos++;
HXDLIN( 116)						Int _hx_tmp15 = this->str.cca(index4);
HXDLIN( 116)						_hx_tmp13 = (_hx_tmp15 != (int)108);
            					}
            					else {
HXLINE( 116)						_hx_tmp13 = true;
            					}
HXDLIN( 116)					if (!(_hx_tmp13)) {
HXLINE( 116)						Int index5 = this->pos++;
HXDLIN( 116)						Int _hx_tmp16 = this->str.cca(index5);
HXDLIN( 116)						_hx_tmp12 = (_hx_tmp16 != (int)115);
            					}
            					else {
HXLINE( 116)						_hx_tmp12 = true;
            					}
HXDLIN( 116)					if (!(_hx_tmp12)) {
HXLINE( 116)						Int index6 = this->pos++;
HXDLIN( 116)						Int _hx_tmp17 = this->str.cca(index6);
HXDLIN( 116)						_hx_tmp11 = (_hx_tmp17 != (int)101);
            					}
            					else {
HXLINE( 116)						_hx_tmp11 = true;
            					}
HXDLIN( 116)					if (_hx_tmp11) {
HXLINE( 117)						this->pos = save;
HXLINE( 118)						this->invalidChar();
            					}
HXLINE( 120)					return false;
            				}
            				break;
            				case (int)110: {
HXLINE( 122)					HX_VARI_NAME( Int,save1,"save") = this->pos;
HXLINE( 123)					Bool _hx_tmp18;
HXDLIN( 123)					Bool _hx_tmp19;
HXDLIN( 123)					Int index7 = this->pos++;
HXDLIN( 123)					Int _hx_tmp20 = this->str.cca(index7);
HXDLIN( 123)					if ((_hx_tmp20 == (int)117)) {
HXLINE( 123)						Int index8 = this->pos++;
HXDLIN( 123)						Int _hx_tmp21 = this->str.cca(index8);
HXDLIN( 123)						_hx_tmp19 = (_hx_tmp21 != (int)108);
            					}
            					else {
HXLINE( 123)						_hx_tmp19 = true;
            					}
HXDLIN( 123)					if (!(_hx_tmp19)) {
HXLINE( 123)						Int index9 = this->pos++;
HXDLIN( 123)						Int _hx_tmp22 = this->str.cca(index9);
HXDLIN( 123)						_hx_tmp18 = (_hx_tmp22 != (int)108);
            					}
            					else {
HXLINE( 123)						_hx_tmp18 = true;
            					}
HXDLIN( 123)					if (_hx_tmp18) {
HXLINE( 124)						this->pos = save1;
HXLINE( 125)						this->invalidChar();
            					}
HXLINE( 127)					return null();
            				}
            				break;
            				case (int)116: {
HXLINE( 108)					HX_VARI_NAME( Int,save2,"save") = this->pos;
HXLINE( 109)					Bool _hx_tmp23;
HXDLIN( 109)					Bool _hx_tmp24;
HXDLIN( 109)					Int index10 = this->pos++;
HXDLIN( 109)					Int _hx_tmp25 = this->str.cca(index10);
HXDLIN( 109)					if ((_hx_tmp25 == (int)114)) {
HXLINE( 109)						Int index11 = this->pos++;
HXDLIN( 109)						Int _hx_tmp26 = this->str.cca(index11);
HXDLIN( 109)						_hx_tmp24 = (_hx_tmp26 != (int)117);
            					}
            					else {
HXLINE( 109)						_hx_tmp24 = true;
            					}
HXDLIN( 109)					if (!(_hx_tmp24)) {
HXLINE( 109)						Int index12 = this->pos++;
HXDLIN( 109)						Int _hx_tmp27 = this->str.cca(index12);
HXDLIN( 109)						_hx_tmp23 = (_hx_tmp27 != (int)101);
            					}
            					else {
HXLINE( 109)						_hx_tmp23 = true;
            					}
HXDLIN( 109)					if (_hx_tmp23) {
HXLINE( 110)						this->pos = save2;
HXLINE( 111)						this->invalidChar();
            					}
HXLINE( 113)					return true;
            				}
            				break;
            				case (int)123: {
HXLINE(  63)					HX_VARI(  ::Dynamic,obj) =  ::Dynamic(hx::Anon_obj::Create(0));
HXDLIN(  63)					HX_VARI( ::String,field) = null();
HXDLIN(  63)					HX_VARI_NAME(  ::Dynamic,comma1,"comma") = null();
HXLINE(  64)					while(true){
HXLINE(  65)						Int index13 = this->pos++;
HXDLIN(  65)						HX_VARI_NAME( Int,c3,"c") = this->str.cca(index13);
HXLINE(  66)						switch((int)(c3)){
            							case (int)9: case (int)10: case (int)13: case (int)32: {
            							}
            							break;
            							case (int)34: {
HXLINE(  82)								if (comma1) {
HXLINE(  82)									this->invalidChar();
            								}
HXLINE(  83)								field = this->parseString();
            							}
            							break;
            							case (int)44: {
HXLINE(  80)								if (comma1) {
HXLINE(  80)									comma1 = false;
            								}
            								else {
HXLINE(  80)									this->invalidChar();
            								}
            							}
            							break;
            							case (int)58: {
HXLINE(  74)								Bool _hx_tmp28 = hx::IsNull( field );
HXDLIN(  74)								if (_hx_tmp28) {
HXLINE(  75)									this->invalidChar();
            								}
HXLINE(  76)								 ::Dynamic _hx_tmp29 = this->parseRec();
HXDLIN(  76)								::Reflect_obj::setField(obj,field,_hx_tmp29);
HXLINE(  77)								field = null();
HXLINE(  78)								comma1 = true;
            							}
            							break;
            							case (int)125: {
HXLINE(  70)								Bool _hx_tmp30;
HXDLIN(  70)								Bool _hx_tmp31 = hx::IsNull( field );
HXDLIN(  70)								if (_hx_tmp31) {
HXLINE(  70)									_hx_tmp30 = hx::IsEq( comma1,false );
            								}
            								else {
HXLINE(  70)									_hx_tmp30 = true;
            								}
HXDLIN(  70)								if (_hx_tmp30) {
HXLINE(  71)									this->invalidChar();
            								}
HXLINE(  72)								return obj;
            							}
            							break;
            							default:{
HXLINE(  85)								this->invalidChar();
            							}
            						}
            					}
            				}
            				break;
            				default:{
HXLINE( 133)					this->invalidChar();
            				}
            			}
            		}
HXLINE(  57)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(JsonParser_obj,parseRec,return )

::String JsonParser_obj::parseString(){
            	HX_STACK_FRAME("haxe.format.JsonParser","parseString",0x8c919bcc,"haxe.format.JsonParser.parseString","/usr/local/lib/haxe/std/haxe/format/JsonParser.hx",138,0x4a8b222b)
            	HX_STACK_THIS(this)
HXLINE( 139)		HX_VARI( Int,start) = this->pos;
HXLINE( 140)		HX_VARI(  ::StringBuf,buf) = null();
HXLINE( 141)		while(true){
HXLINE( 142)			Int index = this->pos++;
HXDLIN( 142)			HX_VARI( Int,c) = this->str.cca(index);
HXLINE( 143)			if ((c == (int)34)) {
HXLINE( 144)				goto _hx_goto_4;
            			}
HXLINE( 145)			if ((c == (int)92)) {
HXLINE( 146)				Bool _hx_tmp = hx::IsNull( buf );
HXDLIN( 146)				if (_hx_tmp) {
HXLINE( 147)					buf =  ::StringBuf_obj::__new();
            				}
HXLINE( 149)				{
HXLINE( 149)					 ::Dynamic len = ((this->pos - start) - (int)1);
HXDLIN( 149)					Bool _hx_tmp1 = hx::IsNotNull( buf->charBuf );
HXDLIN( 149)					if (_hx_tmp1) {
HXLINE( 149)						buf->flush();
            					}
HXDLIN( 149)					::String _hx_tmp2 = this->str.substr(start,len);
HXDLIN( 149)					buf->b->push(_hx_tmp2);
            				}
HXLINE( 150)				Int index1 = this->pos++;
HXDLIN( 150)				c = this->str.cca(index1);
HXLINE( 151)				switch((int)(c)){
            					case (int)34: case (int)47: case (int)92: {
HXLINE( 157)						Bool _hx_tmp3 = hx::IsNull( buf->charBuf );
HXDLIN( 157)						if (_hx_tmp3) {
HXLINE( 157)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 157)						buf->charBuf->push(c);
            					}
            					break;
            					case (int)98: {
HXLINE( 155)						Bool _hx_tmp4 = hx::IsNull( buf->charBuf );
HXDLIN( 155)						if (_hx_tmp4) {
HXLINE( 155)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 155)						buf->charBuf->push((int)8);
            					}
            					break;
            					case (int)102: {
HXLINE( 156)						Bool _hx_tmp5 = hx::IsNull( buf->charBuf );
HXDLIN( 156)						if (_hx_tmp5) {
HXLINE( 156)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 156)						buf->charBuf->push((int)12);
            					}
            					break;
            					case (int)110: {
HXLINE( 153)						Bool _hx_tmp6 = hx::IsNull( buf->charBuf );
HXDLIN( 153)						if (_hx_tmp6) {
HXLINE( 153)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 153)						buf->charBuf->push((int)10);
            					}
            					break;
            					case (int)114: {
HXLINE( 152)						Bool _hx_tmp7 = hx::IsNull( buf->charBuf );
HXDLIN( 152)						if (_hx_tmp7) {
HXLINE( 152)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 152)						buf->charBuf->push((int)13);
            					}
            					break;
            					case (int)116: {
HXLINE( 154)						Bool _hx_tmp8 = hx::IsNull( buf->charBuf );
HXDLIN( 154)						if (_hx_tmp8) {
HXLINE( 154)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 154)						buf->charBuf->push((int)9);
            					}
            					break;
            					case (int)117: {
HXLINE( 159)						::String _hx_tmp9 = this->str.substr(this->pos,(int)4);
HXDLIN( 159)						HX_VARI(  ::Dynamic,uc) = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + _hx_tmp9));
HXLINE( 160)						hx::AddEq(this->pos,(int)4);
HXLINE( 162)						if (hx::IsLessEq( uc,(int)127 )) {
HXLINE( 163)							Int c1 = uc;
HXDLIN( 163)							Bool _hx_tmp10 = hx::IsNull( buf->charBuf );
HXDLIN( 163)							if (_hx_tmp10) {
HXLINE( 163)								buf->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN( 163)							buf->charBuf->push(c1);
            						}
            						else {
HXLINE( 164)							if (hx::IsLessEq( uc,(int)2047 )) {
HXLINE( 165)								{
HXLINE( 165)									Bool _hx_tmp11 = hx::IsNull( buf->charBuf );
HXDLIN( 165)									if (_hx_tmp11) {
HXLINE( 165)										buf->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 165)									buf->charBuf->push(((int)(int)192 | (int)((int)uc >> (int)(int)6)));
            								}
HXLINE( 166)								{
HXLINE( 166)									Bool _hx_tmp12 = hx::IsNull( buf->charBuf );
HXDLIN( 166)									if (_hx_tmp12) {
HXLINE( 166)										buf->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 166)									buf->charBuf->push(((int)(int)128 | (int)((int)uc & (int)(int)63)));
            								}
            							}
            							else {
HXLINE( 167)								if (hx::IsLessEq( uc,(int)65535 )) {
HXLINE( 168)									{
HXLINE( 168)										Bool _hx_tmp13 = hx::IsNull( buf->charBuf );
HXDLIN( 168)										if (_hx_tmp13) {
HXLINE( 168)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 168)										buf->charBuf->push(((int)(int)224 | (int)((int)uc >> (int)(int)12)));
            									}
HXLINE( 169)									{
HXLINE( 169)										Bool _hx_tmp14 = hx::IsNull( buf->charBuf );
HXDLIN( 169)										if (_hx_tmp14) {
HXLINE( 169)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 169)										buf->charBuf->push(((int)(int)128 | (int)((int)((int)uc >> (int)(int)6) & (int)(int)63)));
            									}
HXLINE( 170)									{
HXLINE( 170)										Bool _hx_tmp15 = hx::IsNull( buf->charBuf );
HXDLIN( 170)										if (_hx_tmp15) {
HXLINE( 170)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 170)										buf->charBuf->push(((int)(int)128 | (int)((int)uc & (int)(int)63)));
            									}
            								}
            								else {
HXLINE( 172)									{
HXLINE( 172)										Bool _hx_tmp16 = hx::IsNull( buf->charBuf );
HXDLIN( 172)										if (_hx_tmp16) {
HXLINE( 172)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 172)										buf->charBuf->push(((int)(int)240 | (int)((int)uc >> (int)(int)18)));
            									}
HXLINE( 173)									{
HXLINE( 173)										Bool _hx_tmp17 = hx::IsNull( buf->charBuf );
HXDLIN( 173)										if (_hx_tmp17) {
HXLINE( 173)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 173)										buf->charBuf->push(((int)(int)128 | (int)((int)((int)uc >> (int)(int)12) & (int)(int)63)));
            									}
HXLINE( 174)									{
HXLINE( 174)										Bool _hx_tmp18 = hx::IsNull( buf->charBuf );
HXDLIN( 174)										if (_hx_tmp18) {
HXLINE( 174)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 174)										buf->charBuf->push(((int)(int)128 | (int)((int)((int)uc >> (int)(int)6) & (int)(int)63)));
            									}
HXLINE( 175)									{
HXLINE( 175)										Bool _hx_tmp19 = hx::IsNull( buf->charBuf );
HXDLIN( 175)										if (_hx_tmp19) {
HXLINE( 175)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 175)										buf->charBuf->push(((int)(int)128 | (int)((int)uc & (int)(int)63)));
            									}
            								}
            							}
            						}
            					}
            					break;
            					default:{
HXLINE( 181)						HX_STACK_DO_THROW((((HX_("Invalid escape sequence \\",73,af,f7,b2) + ::String::fromCharCode(c)) + HX_(" at position ",0a,c2,01,e0)) + (this->pos - (int)1)));
            					}
            				}
HXLINE( 183)				start = this->pos;
            			}
            			else {
HXLINE( 187)				if ((c >= (int)128)) {
HXLINE( 188)					this->pos++;
HXLINE( 189)					if ((c >= (int)252)) {
HXLINE( 189)						hx::AddEq(this->pos,(int)4);
            					}
            					else {
HXLINE( 190)						if ((c >= (int)248)) {
HXLINE( 190)							hx::AddEq(this->pos,(int)3);
            						}
            						else {
HXLINE( 191)							if ((c >= (int)240)) {
HXLINE( 191)								hx::AddEq(this->pos,(int)2);
            							}
            							else {
HXLINE( 192)								if ((c >= (int)224)) {
HXLINE( 192)									this->pos++;
            								}
            							}
            						}
            					}
            				}
            				else {
HXLINE( 195)					if ((c == (int)0)) {
HXLINE( 196)						HX_STACK_DO_THROW(HX_("Unclosed string",ac,02,ef,ea));
            					}
            				}
            			}
            		}
            		_hx_goto_4:;
HXLINE( 198)		Bool _hx_tmp20 = hx::IsNull( buf );
HXDLIN( 198)		if (_hx_tmp20) {
HXLINE( 199)			Int _hx_tmp21 = ((this->pos - start) - (int)1);
HXDLIN( 199)			return this->str.substr(start,_hx_tmp21);
            		}
            		else {
HXLINE( 202)			{
HXLINE( 202)				 ::Dynamic len1 = ((this->pos - start) - (int)1);
HXDLIN( 202)				Bool _hx_tmp22 = hx::IsNotNull( buf->charBuf );
HXDLIN( 202)				if (_hx_tmp22) {
HXLINE( 202)					buf->flush();
            				}
HXDLIN( 202)				::String _hx_tmp23 = this->str.substr(start,len1);
HXDLIN( 202)				buf->b->push(_hx_tmp23);
            			}
HXLINE( 203)			Bool _hx_tmp24 = hx::IsNotNull( buf->charBuf );
HXDLIN( 203)			if (_hx_tmp24) {
HXLINE( 203)				buf->flush();
            			}
HXDLIN( 203)			return buf->b->join(HX_("",00,00,00,00));
            		}
HXLINE( 198)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(JsonParser_obj,parseString,return )

void JsonParser_obj::invalidChar(){
            	HX_STACK_FRAME("haxe.format.JsonParser","invalidChar",0xa9f373d5,"haxe.format.JsonParser.invalidChar","/usr/local/lib/haxe/std/haxe/format/JsonParser.hx",249,0x4a8b222b)
            	HX_STACK_THIS(this)
HXLINE( 250)		this->pos--;
HXLINE( 251)		Int index = this->pos;
HXDLIN( 251)		Int _hx_tmp = this->str.cca(index);
HXDLIN( 251)		HX_STACK_DO_THROW((((HX_("Invalid char ",81,66,ec,29) + _hx_tmp) + HX_(" at position ",0a,c2,01,e0)) + this->pos));
            	}


HX_DEFINE_DYNAMIC_FUNC0(JsonParser_obj,invalidChar,(void))

void JsonParser_obj::invalidNumber(Int start){
            	HX_STACK_FRAME("haxe.format.JsonParser","invalidNumber",0x8e9d1988,"haxe.format.JsonParser.invalidNumber","/usr/local/lib/haxe/std/haxe/format/JsonParser.hx",255,0x4a8b222b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(start,"start")
HXLINE( 255)		::String _hx_tmp = ((HX_("Invalid number at position ",d8,9d,6f,13) + start) + HX_(": ",a6,32,00,00));
HXDLIN( 255)		Int _hx_tmp1 = (this->pos - start);
HXDLIN( 255)		::String _hx_tmp2 = this->str.substr(start,_hx_tmp1);
HXDLIN( 255)		HX_STACK_DO_THROW((_hx_tmp + _hx_tmp2));
            	}


HX_DEFINE_DYNAMIC_FUNC1(JsonParser_obj,invalidNumber,(void))


JsonParser_obj::JsonParser_obj()
{
}

void JsonParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JsonParser);
	HX_MARK_MEMBER_NAME(str,"str");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void JsonParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(str,"str");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

hx::Val JsonParser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { return hx::Val( str); }
		if (HX_FIELD_EQ(inName,"pos") ) { return hx::Val( pos); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"parseRec") ) { return hx::Val( parseRec_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseString") ) { return hx::Val( parseString_dyn()); }
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return hx::Val( invalidChar_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"invalidNumber") ) { return hx::Val( invalidNumber_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val JsonParser_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { str=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JsonParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo JsonParser_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(JsonParser_obj,str),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00")},
	{hx::fsInt,(int)offsetof(JsonParser_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *JsonParser_obj_sStaticStorageInfo = 0;
#endif

static ::String JsonParser_obj_sMemberFields[] = {
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("parseRec","\xdd","\xe2","\x78","\xd6"),
	HX_HCSTRING("parseString","\x64","\xd5","\x6c","\x8c"),
	HX_HCSTRING("invalidChar","\x6d","\xad","\xce","\xa9"),
	HX_HCSTRING("invalidNumber","\x20","\xe9","\xeb","\xa6"),
	::String(null()) };

static void JsonParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JsonParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JsonParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JsonParser_obj::__mClass,"__mClass");
};

#endif

hx::Class JsonParser_obj::__mClass;

void JsonParser_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.format.JsonParser","\xd6","\x2a","\xbf","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JsonParser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(JsonParser_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JsonParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JsonParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JsonParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JsonParser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace format
