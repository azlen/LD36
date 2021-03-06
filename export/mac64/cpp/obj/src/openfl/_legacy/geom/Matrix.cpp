// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

namespace openfl{
namespace _legacy{
namespace geom{

void Matrix_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float a = __o_a.Default(1);
Float b = __o_b.Default(0);
Float c = __o_c.Default(0);
Float d = __o_d.Default(1);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","new",0x800630e1,"openfl._legacy.geom.Matrix.new","openfl/_legacy/geom/Matrix.hx",18,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
            	HX_STACK_ARG(tx,"tx")
            	HX_STACK_ARG(ty,"ty")
HXLINE(  20)		this->a = a;
HXLINE(  21)		this->b = b;
HXLINE(  22)		this->c = c;
HXLINE(  23)		this->d = d;
HXLINE(  24)		this->tx = tx;
HXLINE(  25)		this->ty = ty;
            	}

Dynamic Matrix_obj::__CreateEmpty() { return new Matrix_obj; }

hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{
	hx::ObjectPtr< Matrix_obj > _hx_result = new Matrix_obj();
	_hx_result->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return _hx_result;
}

Dynamic Matrix_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Matrix_obj > _hx_result = new Matrix_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

 ::openfl::_legacy::geom::Matrix Matrix_obj::clone(){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","clone",0xe1cf561e,"openfl._legacy.geom.Matrix.clone","openfl/_legacy/geom/Matrix.hx",32,0x35542610)
            	HX_STACK_THIS(this)
HXLINE(  32)		return  ::openfl::_legacy::geom::Matrix_obj::__new(this->a,this->b,this->c,this->d,this->tx,this->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )

void Matrix_obj::concat( ::openfl::_legacy::geom::Matrix m){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","concat",0x6d1e2f33,"openfl._legacy.geom.Matrix.concat","openfl/_legacy/geom/Matrix.hx",37,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(m,"m")
HXLINE(  39)		HX_VARI( Float,a1) = ((this->a * m->a) + (this->b * m->c));
HXLINE(  40)		Float _hx_tmp = (this->a * m->b);
HXDLIN(  40)		Float _hx_tmp1 = (this->b * m->d);
HXDLIN(  40)		this->b = (_hx_tmp + _hx_tmp1);
HXLINE(  41)		this->a = a1;
HXLINE(  43)		HX_VARI( Float,c1) = ((this->c * m->a) + (this->d * m->c));
HXLINE(  44)		Float _hx_tmp2 = (this->c * m->b);
HXDLIN(  44)		Float _hx_tmp3 = (this->d * m->d);
HXDLIN(  44)		this->d = (_hx_tmp2 + _hx_tmp3);
HXLINE(  46)		this->c = c1;
HXLINE(  48)		HX_VARI( Float,tx1) = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);
HXLINE(  49)		Float _hx_tmp4 = ((this->tx * m->b) + (this->ty * m->d));
HXDLIN(  49)		this->ty = (_hx_tmp4 + m->ty);
HXLINE(  50)		this->tx = tx1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,concat,(void))

void Matrix_obj::copyColumnFrom(Int column, ::openfl::geom::Vector3D vector3D){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","copyColumnFrom",0x3ed57494,"openfl._legacy.geom.Matrix.copyColumnFrom","openfl/_legacy/geom/Matrix.hx",57,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(column,"column")
            	HX_STACK_ARG(vector3D,"vector3D")
HXLINE(  57)		if ((column > (int)2)) {
HXLINE(  59)			HX_STACK_DO_THROW(((HX_("Column ",6a,d4,aa,c0) + column) + HX_(" out of bounds (2)",eb,c3,f0,de)));
            		}
            		else {
HXLINE(  61)			if ((column == (int)0)) {
HXLINE(  63)				this->a = vector3D->x;
HXLINE(  64)				this->c = vector3D->y;
            			}
            			else {
HXLINE(  66)				if ((column == (int)1)) {
HXLINE(  68)					this->b = vector3D->x;
HXLINE(  69)					this->d = vector3D->y;
            				}
            				else {
HXLINE(  73)					this->tx = vector3D->x;
HXLINE(  74)					this->ty = vector3D->y;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnFrom,(void))

void Matrix_obj::copyColumnTo(Int column, ::openfl::geom::Vector3D vector3D){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","copyColumnTo",0xc37e3625,"openfl._legacy.geom.Matrix.copyColumnTo","openfl/_legacy/geom/Matrix.hx",83,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(column,"column")
            	HX_STACK_ARG(vector3D,"vector3D")
HXLINE(  83)		if ((column > (int)2)) {
HXLINE(  85)			HX_STACK_DO_THROW(((HX_("Column ",6a,d4,aa,c0) + column) + HX_(" out of bounds (2)",eb,c3,f0,de)));
            		}
            		else {
HXLINE(  87)			if ((column == (int)0)) {
HXLINE(  89)				vector3D->x = this->a;
HXLINE(  90)				vector3D->y = this->c;
HXLINE(  91)				vector3D->z = (int)0;
            			}
            			else {
HXLINE(  93)				if ((column == (int)1)) {
HXLINE(  95)					vector3D->x = this->b;
HXLINE(  96)					vector3D->y = this->d;
HXLINE(  97)					vector3D->z = (int)0;
            				}
            				else {
HXLINE( 101)					vector3D->x = this->tx;
HXLINE( 102)					vector3D->y = this->ty;
HXLINE( 103)					vector3D->z = (int)1;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnTo,(void))

void Matrix_obj::copyFrom( ::openfl::_legacy::geom::Matrix other){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","copyFrom",0xfa1c379e,"openfl._legacy.geom.Matrix.copyFrom","openfl/_legacy/geom/Matrix.hx",110,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(other,"other")
HXLINE( 112)		this->a = other->a;
HXLINE( 113)		this->b = other->b;
HXLINE( 114)		this->c = other->c;
HXLINE( 115)		this->d = other->d;
HXLINE( 116)		this->tx = other->tx;
HXLINE( 117)		this->ty = other->ty;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,copyFrom,(void))

void Matrix_obj::copyRowFrom(Int row, ::openfl::geom::Vector3D vector3D){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","copyRowFrom",0x44438ef0,"openfl._legacy.geom.Matrix.copyRowFrom","openfl/_legacy/geom/Matrix.hx",124,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(row,"row")
            	HX_STACK_ARG(vector3D,"vector3D")
HXLINE( 124)		if ((row > (int)2)) {
HXLINE( 126)			HX_STACK_DO_THROW(((HX_("Row ",e6,20,88,36) + row) + HX_(" out of bounds (2)",eb,c3,f0,de)));
            		}
            		else {
HXLINE( 128)			if ((row == (int)0)) {
HXLINE( 130)				this->a = vector3D->x;
HXLINE( 131)				this->c = vector3D->y;
            			}
            			else {
HXLINE( 133)				if ((row == (int)1)) {
HXLINE( 135)					this->b = vector3D->x;
HXLINE( 136)					this->d = vector3D->y;
            				}
            				else {
HXLINE( 140)					this->tx = vector3D->x;
HXLINE( 141)					this->ty = vector3D->y;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowFrom,(void))

void Matrix_obj::copyRowTo(Int row, ::openfl::geom::Vector3D vector3D){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","copyRowTo",0xc56dc181,"openfl._legacy.geom.Matrix.copyRowTo","openfl/_legacy/geom/Matrix.hx",150,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(row,"row")
            	HX_STACK_ARG(vector3D,"vector3D")
HXLINE( 150)		if ((row > (int)2)) {
HXLINE( 152)			HX_STACK_DO_THROW(((HX_("Row ",e6,20,88,36) + row) + HX_(" out of bounds (2)",eb,c3,f0,de)));
            		}
            		else {
HXLINE( 154)			if ((row == (int)0)) {
HXLINE( 156)				vector3D->x = this->a;
HXLINE( 157)				vector3D->y = this->b;
HXLINE( 158)				vector3D->z = this->tx;
            			}
            			else {
HXLINE( 160)				if ((row == (int)1)) {
HXLINE( 162)					vector3D->x = this->c;
HXLINE( 163)					vector3D->y = this->d;
HXLINE( 164)					vector3D->z = this->ty;
            				}
            				else {
HXLINE( 168)					vector3D->setTo((int)0,(int)0,(int)1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowTo,(void))

void Matrix_obj::createBox(Float scaleX,Float scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","createBox",0x9be3cbb0,"openfl._legacy.geom.Matrix.createBox","openfl/_legacy/geom/Matrix.hx",175,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(scaleX,"scaleX")
            	HX_STACK_ARG(scaleY,"scaleY")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(tx,"tx")
            	HX_STACK_ARG(ty,"ty")
HXLINE( 182)		if ((rotation != (int)0)) {
HXLINE( 184)			HX_VARI( Float,cos) = ::Math_obj::cos(rotation);
HXLINE( 185)			HX_VARI( Float,sin) = ::Math_obj::sin(rotation);
HXLINE( 187)			this->a = (cos * scaleX);
HXLINE( 188)			this->b = (sin * scaleY);
HXLINE( 189)			this->c = (-(sin) * scaleX);
HXLINE( 190)			this->d = (cos * scaleY);
            		}
            		else {
HXLINE( 194)			this->a = scaleX;
HXLINE( 195)			this->b = (int)0;
HXLINE( 196)			this->c = (int)0;
HXLINE( 197)			this->d = scaleY;
            		}
HXLINE( 201)		this->tx = tx;
HXLINE( 202)		this->ty = ty;
            	}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createBox,(void))

void Matrix_obj::createGradientBox(Float width,Float height,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","createGradientBox",0x67a6cca0,"openfl._legacy.geom.Matrix.createGradientBox","openfl/_legacy/geom/Matrix.hx",207,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(tx,"tx")
            	HX_STACK_ARG(ty,"ty")
HXLINE( 209)		this->a = ((Float)width / (Float)((Float)1638.4));
HXLINE( 210)		this->d = ((Float)height / (Float)((Float)1638.4));
HXLINE( 212)		if ((rotation != ((Float)0.0))) {
HXLINE( 214)			HX_VARI( Float,cos) = ::Math_obj::cos(rotation);
HXLINE( 215)			HX_VARI( Float,sin) = ::Math_obj::sin(rotation);
HXLINE( 216)			this->b = (sin * this->d);
HXLINE( 217)			this->c = (-(sin) * this->a);
HXLINE( 218)			hx::MultEq(this->a,cos);
HXLINE( 219)			hx::MultEq(this->d,cos);
            		}
            		else {
HXLINE( 223)			this->b = (this->c = (int)0);
            		}
HXLINE( 227)		this->tx = (tx + ((Float)width / (Float)(int)2));
HXLINE( 228)		this->ty = (ty + ((Float)height / (Float)(int)2));
            	}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createGradientBox,(void))

 ::openfl::_legacy::geom::Point Matrix_obj::deltaTransformPoint( ::openfl::_legacy::geom::Point point){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","deltaTransformPoint",0x05467fdd,"openfl._legacy.geom.Matrix.deltaTransformPoint","openfl/_legacy/geom/Matrix.hx",235,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(point,"point")
HXLINE( 235)		return  ::openfl::_legacy::geom::Point_obj::__new(((point->x * this->a) + (point->y * this->c)),((point->x * this->b) + (point->y * this->d)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,deltaTransformPoint,return )

Bool Matrix_obj::equals( ::Dynamic matrix){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","equals",0x6541145e,"openfl._legacy.geom.Matrix.equals","openfl/_legacy/geom/Matrix.hx",242,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(matrix,"matrix")
HXLINE( 242)		Bool _hx_tmp;
HXDLIN( 242)		Bool _hx_tmp1;
HXDLIN( 242)		Bool _hx_tmp2;
HXDLIN( 242)		Bool _hx_tmp3;
HXDLIN( 242)		Bool _hx_tmp4;
HXDLIN( 242)		Bool _hx_tmp5 = hx::IsNotNull( matrix );
HXDLIN( 242)		if (_hx_tmp5) {
HXLINE( 242)			_hx_tmp4 = (this->tx == ( (Float)(matrix->__Field(HX_("tx",84,65,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 242)			_hx_tmp4 = false;
            		}
HXDLIN( 242)		if (_hx_tmp4) {
HXLINE( 242)			_hx_tmp3 = (this->ty == ( (Float)(matrix->__Field(HX_("ty",85,65,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 242)			_hx_tmp3 = false;
            		}
HXDLIN( 242)		if (_hx_tmp3) {
HXLINE( 242)			_hx_tmp2 = (this->a == ( (Float)(matrix->__Field(HX_("a",61,00,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 242)			_hx_tmp2 = false;
            		}
HXDLIN( 242)		if (_hx_tmp2) {
HXLINE( 242)			_hx_tmp1 = (this->b == ( (Float)(matrix->__Field(HX_("b",62,00,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 242)			_hx_tmp1 = false;
            		}
HXDLIN( 242)		if (_hx_tmp1) {
HXLINE( 242)			_hx_tmp = (this->c == ( (Float)(matrix->__Field(HX_("c",63,00,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 242)			_hx_tmp = false;
            		}
HXDLIN( 242)		if (_hx_tmp) {
HXLINE( 242)			return (this->d == ( (Float)(matrix->__Field(HX_("d",64,00,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 242)			return false;
            		}
HXDLIN( 242)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,equals,return )

void Matrix_obj::identity(){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","identity",0xeaea711d,"openfl._legacy.geom.Matrix.identity","openfl/_legacy/geom/Matrix.hx",247,0x35542610)
            	HX_STACK_THIS(this)
HXLINE( 249)		this->a = (int)1;
HXLINE( 250)		this->b = (int)0;
HXLINE( 251)		this->c = (int)0;
HXLINE( 252)		this->d = (int)1;
HXLINE( 253)		this->tx = (int)0;
HXLINE( 254)		this->ty = (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,(void))

 ::openfl::_legacy::geom::Matrix Matrix_obj::invert(){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","invert",0x45270d35,"openfl._legacy.geom.Matrix.invert","openfl/_legacy/geom/Matrix.hx",259,0x35542610)
            	HX_STACK_THIS(this)
HXLINE( 261)		HX_VARI( Float,norm) = ((this->a * this->d) - (this->b * this->c));
HXLINE( 263)		if ((norm == (int)0)) {
HXLINE( 265)			this->a = (this->b = (this->c = (this->d = (int)0)));
HXLINE( 266)			this->tx = -(this->tx);
HXLINE( 267)			this->ty = -(this->ty);
            		}
            		else {
HXLINE( 271)			norm = ((Float)((Float)1.0) / (Float)norm);
HXLINE( 272)			HX_VARI( Float,a1) = (this->d * norm);
HXLINE( 273)			this->d = (this->a * norm);
HXLINE( 274)			this->a = a1;
HXLINE( 275)			hx::MultEq(this->b,-(norm));
HXLINE( 276)			hx::MultEq(this->c,-(norm));
HXLINE( 278)			HX_VARI( Float,tx1) = ((-(this->a) * this->tx) - (this->c * this->ty));
HXLINE( 279)			Float _hx_tmp = (-(this->b) * this->tx);
HXDLIN( 279)			Float _hx_tmp1 = (this->d * this->ty);
HXDLIN( 279)			this->ty = (_hx_tmp - _hx_tmp1);
HXLINE( 280)			this->tx = tx1;
            		}
HXLINE( 284)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,return )

 ::openfl::_legacy::geom::Matrix Matrix_obj::mult( ::openfl::_legacy::geom::Matrix m){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","mult",0x84c7784f,"openfl._legacy.geom.Matrix.mult","openfl/_legacy/geom/Matrix.hx",289,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(m,"m")
HXLINE( 291)		HX_VARI(  ::openfl::_legacy::geom::Matrix,result) =  ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
HXLINE( 293)		Float _hx_tmp = (this->a * m->a);
HXDLIN( 293)		Float _hx_tmp1 = (this->b * m->c);
HXDLIN( 293)		result->a = (_hx_tmp + _hx_tmp1);
HXLINE( 294)		Float _hx_tmp2 = (this->a * m->b);
HXDLIN( 294)		Float _hx_tmp3 = (this->b * m->d);
HXDLIN( 294)		result->b = (_hx_tmp2 + _hx_tmp3);
HXLINE( 295)		Float _hx_tmp4 = (this->c * m->a);
HXDLIN( 295)		Float _hx_tmp5 = (this->d * m->c);
HXDLIN( 295)		result->c = (_hx_tmp4 + _hx_tmp5);
HXLINE( 296)		Float _hx_tmp6 = (this->c * m->b);
HXDLIN( 296)		Float _hx_tmp7 = (this->d * m->d);
HXDLIN( 296)		result->d = (_hx_tmp6 + _hx_tmp7);
HXLINE( 298)		Float _hx_tmp8 = ((this->tx * m->a) + (this->ty * m->c));
HXDLIN( 298)		result->tx = (_hx_tmp8 + m->tx);
HXLINE( 299)		Float _hx_tmp9 = ((this->tx * m->b) + (this->ty * m->d));
HXDLIN( 299)		result->ty = (_hx_tmp9 + m->ty);
HXLINE( 301)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,mult,return )

void Matrix_obj::rotate(Float angle){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","rotate",0x706e6c7a,"openfl._legacy.geom.Matrix.rotate","openfl/_legacy/geom/Matrix.hx",306,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(angle,"angle")
HXLINE( 308)		HX_VARI( Float,cos) = ::Math_obj::cos(angle);
HXLINE( 309)		HX_VARI( Float,sin) = ::Math_obj::sin(angle);
HXLINE( 311)		HX_VARI( Float,a1) = ((this->a * cos) - (this->b * sin));
HXLINE( 312)		Float _hx_tmp = (this->a * sin);
HXDLIN( 312)		Float _hx_tmp1 = (this->b * cos);
HXDLIN( 312)		this->b = (_hx_tmp + _hx_tmp1);
HXLINE( 313)		this->a = a1;
HXLINE( 315)		HX_VARI( Float,c1) = ((this->c * cos) - (this->d * sin));
HXLINE( 316)		Float _hx_tmp2 = (this->c * sin);
HXDLIN( 316)		Float _hx_tmp3 = (this->d * cos);
HXDLIN( 316)		this->d = (_hx_tmp2 + _hx_tmp3);
HXLINE( 317)		this->c = c1;
HXLINE( 319)		HX_VARI( Float,tx1) = ((this->tx * cos) - (this->ty * sin));
HXLINE( 320)		Float _hx_tmp4 = (this->tx * sin);
HXDLIN( 320)		Float _hx_tmp5 = (this->ty * cos);
HXDLIN( 320)		this->ty = (_hx_tmp4 + _hx_tmp5);
HXLINE( 321)		this->tx = tx1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotate,(void))

void Matrix_obj::scale(Float x,Float y){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","scale",0x123b114b,"openfl._legacy.geom.Matrix.scale","openfl/_legacy/geom/Matrix.hx",326,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE( 328)		hx::MultEq(this->a,x);
HXLINE( 329)		hx::MultEq(this->b,y);
HXLINE( 331)		hx::MultEq(this->c,x);
HXLINE( 332)		hx::MultEq(this->d,y);
HXLINE( 334)		hx::MultEq(this->tx,x);
HXLINE( 335)		hx::MultEq(this->ty,y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale,(void))

void Matrix_obj::setRotation(Float angle,hx::Null< Float >  __o_scale){
Float scale = __o_scale.Default(1);
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","setRotation",0x8d9f5081,"openfl._legacy.geom.Matrix.setRotation","openfl/_legacy/geom/Matrix.hx",340,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(angle,"angle")
            	HX_STACK_ARG(scale,"scale")
HXLINE( 342)		Float _hx_tmp = ::Math_obj::cos(angle);
HXDLIN( 342)		this->a = (_hx_tmp * scale);
HXLINE( 343)		Float _hx_tmp1 = ::Math_obj::sin(angle);
HXDLIN( 343)		this->c = (_hx_tmp1 * scale);
HXLINE( 344)		this->b = -(this->c);
HXLINE( 345)		this->d = this->a;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,setRotation,(void))

void Matrix_obj::setTo(Float a,Float b,Float c,Float d,Float tx,Float ty){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","setTo",0x139bd47e,"openfl._legacy.geom.Matrix.setTo","openfl/_legacy/geom/Matrix.hx",350,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
            	HX_STACK_ARG(tx,"tx")
            	HX_STACK_ARG(ty,"ty")
HXLINE( 352)		this->a = a;
HXLINE( 353)		this->b = b;
HXLINE( 354)		this->c = c;
HXLINE( 355)		this->d = d;
HXLINE( 356)		this->tx = tx;
HXLINE( 357)		this->ty = ty;
            	}


HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,setTo,(void))

::String Matrix_obj::toString(){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","toString",0x6a29fc8b,"openfl._legacy.geom.Matrix.toString","openfl/_legacy/geom/Matrix.hx",364,0x35542610)
            	HX_STACK_THIS(this)
HXLINE( 364)		return ((((((((((((HX_("(a=",e4,ae,1e,00) + this->a) + HX_(", b=",0f,01,2e,1d)) + this->b) + HX_(", c=",ee,01,2e,1d)) + this->c) + HX_(", d=",cd,02,2e,1d)) + this->d) + HX_(", tx=",45,c8,20,6b)) + this->tx) + HX_(", ty=",24,c9,20,6b)) + this->ty) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toString,return )

 ::openfl::_legacy::geom::Point Matrix_obj::transformPoint( ::openfl::_legacy::geom::Point point){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","transformPoint",0x4131ac63,"openfl._legacy.geom.Matrix.transformPoint","openfl/_legacy/geom/Matrix.hx",371,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(point,"point")
HXLINE( 371)		return  ::openfl::_legacy::geom::Point_obj::__new((((point->x * this->a) + (point->y * this->c)) + this->tx),(((point->x * this->b) + (point->y * this->d)) + this->ty));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transformPoint,return )

void Matrix_obj::translate(Float x,Float y){
            	HX_STACK_FRAME("openfl._legacy.geom.Matrix","translate",0x9b8b0e8f,"openfl._legacy.geom.Matrix.translate","openfl/_legacy/geom/Matrix.hx",376,0x35542610)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE( 378)		hx::AddEq(this->tx,x);
HXLINE( 379)		hx::AddEq(this->ty,y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,translate,(void))


Matrix_obj::Matrix_obj()
{
}

hx::Val Matrix_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return hx::Val( a); }
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b); }
		if (HX_FIELD_EQ(inName,"c") ) { return hx::Val( c); }
		if (HX_FIELD_EQ(inName,"d") ) { return hx::Val( d); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return hx::Val( tx); }
		if (HX_FIELD_EQ(inName,"ty") ) { return hx::Val( ty); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return hx::Val( mult_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		if (HX_FIELD_EQ(inName,"scale") ) { return hx::Val( scale_dyn()); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return hx::Val( setTo_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return hx::Val( concat_dyn()); }
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn()); }
		if (HX_FIELD_EQ(inName,"invert") ) { return hx::Val( invert_dyn()); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return hx::Val( rotate_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return hx::Val( copyFrom_dyn()); }
		if (HX_FIELD_EQ(inName,"identity") ) { return hx::Val( identity_dyn()); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return hx::Val( copyRowTo_dyn()); }
		if (HX_FIELD_EQ(inName,"createBox") ) { return hx::Val( createBox_dyn()); }
		if (HX_FIELD_EQ(inName,"translate") ) { return hx::Val( translate_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return hx::Val( copyRowFrom_dyn()); }
		if (HX_FIELD_EQ(inName,"setRotation") ) { return hx::Val( setRotation_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return hx::Val( copyColumnTo_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return hx::Val( copyColumnFrom_dyn()); }
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return hx::Val( transformPoint_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return hx::Val( createGradientBox_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"deltaTransformPoint") ) { return hx::Val( deltaTransformPoint_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Matrix_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Matrix_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,tx),HX_HCSTRING("tx","\x84","\x65","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,ty),HX_HCSTRING("ty","\x85","\x65","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Matrix_obj_sStaticStorageInfo = 0;
#endif

static ::String Matrix_obj_sMemberFields[] = {
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("tx","\x84","\x65","\x00","\x00"),
	HX_HCSTRING("ty","\x85","\x65","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("createBox","\x6f","\x94","\xd8","\x49"),
	HX_HCSTRING("createGradientBox","\x5f","\xec","\xc0","\x25"),
	HX_HCSTRING("deltaTransformPoint","\x5c","\x4d","\xf7","\x15"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("mult","\xf0","\x67","\x65","\x48"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("setRotation","\x00","\x07","\xe7","\x38"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("transformPoint","\x44","\xcf","\x11","\x3d"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	::String(null()) };

static void Matrix_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Matrix_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

#endif

hx::Class Matrix_obj::__mClass;

void Matrix_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.geom.Matrix","\x6f","\x2c","\x4a","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Matrix_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Matrix_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Matrix_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Matrix_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Matrix_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace geom
