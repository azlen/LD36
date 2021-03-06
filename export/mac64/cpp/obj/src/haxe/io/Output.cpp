// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif

namespace haxe{
namespace io{

void Output_obj::__construct() { }

Dynamic Output_obj::__CreateEmpty() { return new Output_obj; }

hx::ObjectPtr< Output_obj > Output_obj::__new()
{
	hx::ObjectPtr< Output_obj > _hx_result = new Output_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Output_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Output_obj > _hx_result = new Output_obj();
	_hx_result->__construct();
	return _hx_result;
}

void Output_obj::writeByte(Int c){
            	HX_STACK_FRAME("haxe.io.Output","writeByte",0xb4fe513a,"haxe.io.Output.writeByte","/usr/local/lib/haxe/std/haxe/io/Output.hx",47,0x72d66600)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(c,"c")
HXLINE(  47)		HX_STACK_DO_THROW(HX_("Not implemented",15,1e,32,34));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeByte,(void))

Int Output_obj::writeBytes( ::haxe::io::Bytes s,Int pos,Int len){
            	HX_STACK_FRAME("haxe.io.Output","writeBytes",0xa988c1f9,"haxe.io.Output.writeBytes","/usr/local/lib/haxe/std/haxe/io/Output.hx",57,0x72d66600)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(len,"len")
HXLINE(  59)		Bool _hx_tmp;
HXDLIN(  59)		Bool _hx_tmp1;
HXDLIN(  59)		if ((pos >= (int)0)) {
HXLINE(  59)			_hx_tmp1 = (len < (int)0);
            		}
            		else {
HXLINE(  59)			_hx_tmp1 = true;
            		}
HXDLIN(  59)		if (!(_hx_tmp1)) {
HXLINE(  59)			_hx_tmp = ((pos + len) > s->length);
            		}
            		else {
HXLINE(  59)			_hx_tmp = true;
            		}
HXDLIN(  59)		if (_hx_tmp) {
HXLINE(  60)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE(  62)		HX_VARI( ::Array< unsigned char >,b) = s->b;
HXLINE(  63)		HX_VARI( Int,k) = len;
HXLINE(  64)		while((k > (int)0)){
HXLINE(  70)			Int _hx_tmp2 = b->__get(pos);
HXDLIN(  70)			this->writeByte(_hx_tmp2);
HXLINE(  76)			++pos;
HXLINE(  77)			--k;
            		}
HXLINE(  79)		return len;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Output_obj,writeBytes,return )

void Output_obj::close(){
            	HX_STACK_FRAME("haxe.io.Output","close",0xe726bfeb,"haxe.io.Output.close","/usr/local/lib/haxe/std/haxe/io/Output.hx",93,0x72d66600)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,close,(void))

void Output_obj::write( ::haxe::io::Bytes s){
            	HX_STACK_FRAME("haxe.io.Output","write",0x6f1d1512,"haxe.io.Output.write","/usr/local/lib/haxe/std/haxe/io/Output.hx",106,0x72d66600)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
HXLINE( 107)		HX_VARI( Int,l) = s->length;
HXLINE( 108)		HX_VARI( Int,p) = (int)0;
HXLINE( 109)		while((l > (int)0)){
HXLINE( 110)			HX_VARI( Int,k) = this->writeBytes(s,p,l);
HXLINE( 111)			if ((k == (int)0)) {
HXLINE( 111)				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            			}
HXLINE( 112)			hx::AddEq(p,k);
HXLINE( 113)			hx::SubEq(l,k);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,write,(void))

void Output_obj::writeFullBytes( ::haxe::io::Bytes s,Int pos,Int len){
            	HX_STACK_FRAME("haxe.io.Output","writeFullBytes",0xc2c420ea,"haxe.io.Output.writeFullBytes","/usr/local/lib/haxe/std/haxe/io/Output.hx",123,0x72d66600)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(len,"len")
HXLINE( 123)		while((len > (int)0)){
HXLINE( 124)			HX_VARI( Int,k) = this->writeBytes(s,pos,len);
HXLINE( 125)			hx::AddEq(pos,k);
HXLINE( 126)			hx::SubEq(len,k);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Output_obj,writeFullBytes,(void))

void Output_obj::writeString(::String s){
            	HX_STACK_FRAME("haxe.io.Output","writeString",0x97e1cb83,"haxe.io.Output.writeString","/usr/local/lib/haxe/std/haxe/io/Output.hx",278,0x72d66600)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
HXLINE( 282)		HX_VARI(  ::haxe::io::Bytes,b) = ::haxe::io::Bytes_obj::ofString(s);
HXLINE( 284)		this->writeFullBytes(b,(int)0,b->length);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeString,(void))


Output_obj::Output_obj()
{
}

hx::Val Output_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		if (HX_FIELD_EQ(inName,"write") ) { return hx::Val( write_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return hx::Val( writeByte_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return hx::Val( writeBytes_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeString") ) { return hx::Val( writeString_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"writeFullBytes") ) { return hx::Val( writeFullBytes_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Output_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Output_obj_sStaticStorageInfo = 0;
#endif

static ::String Output_obj_sMemberFields[] = {
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	HX_HCSTRING("writeFullBytes","\x7d","\xe7","\x66","\xa4"),
	HX_HCSTRING("writeString","\x10","\x7b","\x29","\xa6"),
	::String(null()) };

static void Output_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Output_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#endif

hx::Class Output_obj::__mClass;

void Output_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Output","\x61","\x10","\x0b","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Output_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Output_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Output_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Output_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Output_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Output_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
