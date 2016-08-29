// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

namespace flixel{
namespace _hx_system{
namespace frontEnds{

void CameraFrontEnd_obj::__construct(){
            	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","new",0xc6f5a1a3,"flixel.system.frontEnds.CameraFrontEnd.new","flixel/system/frontEnds/CameraFrontEnd.hx",9,0x7a57d3ec)
            	HX_STACK_THIS(this)
HXLINE(  30)		this->_cameraRect =  ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
HXLINE(  26)		this->useBufferLocking = false;
HXLINE(  15)		this->list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 160)		::flixel::FlxCamera_obj::defaultCameras = this->list;
            	}

Dynamic CameraFrontEnd_obj::__CreateEmpty() { return new CameraFrontEnd_obj; }

hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__new()
{
	hx::ObjectPtr< CameraFrontEnd_obj > _hx_result = new CameraFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic CameraFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CameraFrontEnd_obj > _hx_result = new CameraFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic CameraFrontEnd_obj::add( ::Dynamic NewCamera){
            	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","add",0xc6ebc364,"flixel.system.frontEnds.CameraFrontEnd.add","flixel/system/frontEnds/CameraFrontEnd.hx",40,0x7a57d3ec)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(NewCamera,"NewCamera")
HXLINE(  41)		Int _hx_tmp = ::flixel::FlxG_obj::game->getChildIndex(::flixel::FlxG_obj::game->_inputContainer);
HXDLIN(  41)		::flixel::FlxG_obj::game->addChildAt(( ( ::flixel::FlxCamera)(NewCamera) )->flashSprite,_hx_tmp);
HXLINE(  42)		::flixel::FlxG_obj::cameras->list->push(NewCamera);
HXLINE(  43)		( ( ::flixel::FlxBasic)(NewCamera) )->ID = (::flixel::FlxG_obj::cameras->list->length - (int)1);
HXLINE(  44)		return NewCamera;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,add,return )

void CameraFrontEnd_obj::remove( ::flixel::FlxCamera Camera,hx::Null< Bool >  __o_Destroy){
Bool Destroy = __o_Destroy.Default(true);
            	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","remove",0xaa68b6e1,"flixel.system.frontEnds.CameraFrontEnd.remove","flixel/system/frontEnds/CameraFrontEnd.hx",54,0x7a57d3ec)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Camera,"Camera")
            	HX_STACK_ARG(Destroy,"Destroy")
HXLINE(  55)		HX_VARI( Int,index) = this->list->indexOf(Camera,null());
HXLINE(  56)		Bool _hx_tmp;
HXDLIN(  56)		Bool _hx_tmp1 = hx::IsNotNull( Camera );
HXDLIN(  56)		if (_hx_tmp1) {
HXLINE(  56)			_hx_tmp = (index != (int)-1);
            		}
            		else {
HXLINE(  56)			_hx_tmp = false;
            		}
HXDLIN(  56)		if (_hx_tmp) {
HXLINE(  58)			::flixel::FlxG_obj::game->removeChild(Camera->flashSprite);
HXLINE(  59)			this->list->removeRange(index,(int)1);
            		}
HXLINE(  66)		Bool _hx_tmp2 = ::flixel::FlxG_obj::renderTile;
HXDLIN(  66)		if (_hx_tmp2) {
HXLINE(  68)			HX_VARI( Int,_g1) = (int)0;
HXDLIN(  68)			HX_VARI( Int,_g) = this->list->length;
HXDLIN(  68)			while((_g1 < _g)){
HXLINE(  68)				HX_VARI( Int,i) = _g1++;
HXLINE(  70)				this->list->__get(i).StaticCast<  ::flixel::FlxCamera >()->ID = i;
            			}
            		}
HXLINE(  74)		if (Destroy) {
HXLINE(  76)			Camera->destroy();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,remove,(void))

void CameraFrontEnd_obj::reset( ::flixel::FlxCamera NewCamera){
            	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","reset",0xf67331d2,"flixel.system.frontEnds.CameraFrontEnd.reset","flixel/system/frontEnds/CameraFrontEnd.hx",87,0x7a57d3ec)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(NewCamera,"NewCamera")
HXLINE(  88)		{
HXLINE(  88)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  88)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN(  88)			while((_g < _g1->length)){
HXLINE(  88)				HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN(  88)				++_g;
HXLINE(  90)				::flixel::FlxG_obj::game->removeChild(camera->flashSprite);
HXLINE(  91)				camera->destroy();
            			}
            		}
HXLINE(  94)		this->list->removeRange((int)0,this->list->length);
HXLINE(  96)		Bool _hx_tmp = hx::IsNull( NewCamera );
HXDLIN(  96)		if (_hx_tmp) {
HXLINE(  98)			NewCamera =  ::flixel::FlxCamera_obj::__new((int)0,(int)0,::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,null());
            		}
HXLINE( 101)		::flixel::FlxG_obj::camera = ( ( ::flixel::FlxCamera)(this->add(NewCamera)) );
HXLINE( 102)		NewCamera->ID = (int)0;
HXLINE( 104)		::flixel::FlxCamera_obj::defaultCameras = this->list;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,reset,(void))

void CameraFrontEnd_obj::flash(hx::Null< Int >  __o_Color,hx::Null< Float >  __o_Duration, ::Dynamic OnComplete,hx::Null< Bool >  __o_Force){
Int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
Bool Force = __o_Force.Default(false);
            	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","flash",0x12371db3,"flixel.system.frontEnds.CameraFrontEnd.flash","flixel/system/frontEnds/CameraFrontEnd.hx",117,0x7a57d3ec)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Color,"Color")
            	HX_STACK_ARG(Duration,"Duration")
            	HX_STACK_ARG(OnComplete,"OnComplete")
            	HX_STACK_ARG(Force,"Force")
HXLINE( 117)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 117)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 117)		while((_g < _g1->length)){
HXLINE( 117)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 117)			++_g;
HXLINE( 119)			camera->flash(Color,Duration,OnComplete,Force);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(CameraFrontEnd_obj,flash,(void))

void CameraFrontEnd_obj::fade(hx::Null< Int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< Bool >  __o_FadeIn, ::Dynamic OnComplete,hx::Null< Bool >  __o_Force){
Int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
Bool FadeIn = __o_FadeIn.Default(false);
Bool Force = __o_Force.Default(false);
            	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","fade",0x4aaafed9,"flixel.system.frontEnds.CameraFrontEnd.fade","flixel/system/frontEnds/CameraFrontEnd.hx",134,0x7a57d3ec)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Color,"Color")
            	HX_STACK_ARG(Duration,"Duration")
            	HX_STACK_ARG(FadeIn,"FadeIn")
            	HX_STACK_ARG(OnComplete,"OnComplete")
            	HX_STACK_ARG(Force,"Force")
HXLINE( 134)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 134)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 134)		while((_g < _g1->length)){
HXLINE( 134)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 134)			++_g;
HXLINE( 136)			camera->fade(Color,Duration,FadeIn,OnComplete,Force);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,fade,(void))

void CameraFrontEnd_obj::shake(hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration, ::Dynamic OnComplete,hx::Null< Bool >  __o_Force,::hx::EnumBase Axes){
Float Intensity = __o_Intensity.Default(((Float)0.05));
Float Duration = __o_Duration.Default(((Float)0.5));
Bool Force = __o_Force.Default(true);
            	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","shake",0x8bc7c6c9,"flixel.system.frontEnds.CameraFrontEnd.shake","flixel/system/frontEnds/CameraFrontEnd.hx",151,0x7a57d3ec)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Intensity,"Intensity")
            	HX_STACK_ARG(Duration,"Duration")
            	HX_STACK_ARG(OnComplete,"OnComplete")
            	HX_STACK_ARG(Force,"Force")
            	HX_STACK_ARG(Axes,"Axes")
HXLINE( 151)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 151)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 151)		while((_g < _g1->length)){
HXLINE( 151)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 151)			++_g;
HXLINE( 153)			camera->shake(Intensity,Duration,OnComplete,Force,Axes);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,shake,(void))

void CameraFrontEnd_obj::lock(){
            	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","lock",0x4eace548,"flixel.system.frontEnds.CameraFrontEnd.lock","flixel/system/frontEnds/CameraFrontEnd.hx",169,0x7a57d3ec)
            	HX_STACK_THIS(this)
HXLINE( 169)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 169)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 169)		while((_g < _g1->length)){
HXLINE( 169)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 169)			++_g;
HXLINE( 171)			Bool _hx_tmp;
HXDLIN( 171)			Bool _hx_tmp1;
HXDLIN( 171)			Bool _hx_tmp2 = hx::IsNotNull( camera );
HXDLIN( 171)			if (_hx_tmp2) {
HXLINE( 171)				_hx_tmp1 = !(camera->exists);
            			}
            			else {
HXLINE( 171)				_hx_tmp1 = true;
            			}
HXDLIN( 171)			if (!(_hx_tmp1)) {
HXLINE( 171)				_hx_tmp = !(camera->visible);
            			}
            			else {
HXLINE( 171)				_hx_tmp = true;
            			}
HXDLIN( 171)			if (_hx_tmp) {
HXLINE( 173)				continue;
            			}
HXLINE( 176)			Bool _hx_tmp3 = ::flixel::FlxG_obj::renderBlit;
HXDLIN( 176)			if (_hx_tmp3) {
HXLINE( 178)				camera->checkResize();
HXLINE( 180)				Bool _hx_tmp4 = this->useBufferLocking;
HXDLIN( 180)				if (_hx_tmp4) {
HXLINE( 182)					camera->buffer->lock();
            				}
            			}
HXLINE( 186)			Bool _hx_tmp5 = ::flixel::FlxG_obj::renderTile;
HXDLIN( 186)			if (_hx_tmp5) {
HXLINE( 188)				camera->clearDrawStack();
HXLINE( 189)				camera->canvas->get_graphics()->clear();
            			}
HXLINE( 196)			Bool _hx_tmp6 = ::flixel::FlxG_obj::renderBlit;
HXDLIN( 196)			if (_hx_tmp6) {
HXLINE( 198)				camera->fill(camera->bgColor,camera->useBgAlphaBlending,null(),null());
HXLINE( 199)				camera->screen->dirty = true;
            			}
            			else {
HXLINE( 203)				Int _hx_tmp7 = ((int)camera->bgColor & (int)(int)16777215);
HXDLIN( 203)				Float _hx_tmp8 = ((Float)((int)((int)camera->bgColor >> (int)(int)24) & (int)(int)255) / (Float)(int)255);
HXDLIN( 203)				camera->fill(_hx_tmp7,camera->useBgAlphaBlending,_hx_tmp8,null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,lock,(void))

void CameraFrontEnd_obj::render(){
            	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","render",0xab0985f3,"flixel.system.frontEnds.CameraFrontEnd.render","flixel/system/frontEnds/CameraFrontEnd.hx",211,0x7a57d3ec)
            	HX_STACK_THIS(this)
HXLINE( 211)		Bool _hx_tmp = ::flixel::FlxG_obj::renderTile;
HXDLIN( 211)		if (_hx_tmp) {
HXLINE( 213)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 213)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 213)			while((_g < _g1->length)){
HXLINE( 213)				HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 213)				++_g;
HXLINE( 215)				Bool _hx_tmp1;
HXDLIN( 215)				Bool _hx_tmp2;
HXDLIN( 215)				Bool _hx_tmp3 = hx::IsNotNull( camera );
HXDLIN( 215)				if (_hx_tmp3) {
HXLINE( 215)					_hx_tmp2 = camera->exists;
            				}
            				else {
HXLINE( 215)					_hx_tmp2 = false;
            				}
HXDLIN( 215)				if (_hx_tmp2) {
HXLINE( 215)					_hx_tmp1 = camera->visible;
            				}
            				else {
HXLINE( 215)					_hx_tmp1 = false;
            				}
HXDLIN( 215)				if (_hx_tmp1) {
HXLINE( 217)					camera->render();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,render,(void))

void CameraFrontEnd_obj::unlock(){
            	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","unlock",0x0b6cbd61,"flixel.system.frontEnds.CameraFrontEnd.unlock","flixel/system/frontEnds/CameraFrontEnd.hx",229,0x7a57d3ec)
            	HX_STACK_THIS(this)
HXLINE( 229)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 229)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 229)		while((_g < _g1->length)){
HXLINE( 229)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 229)			++_g;
HXLINE( 231)			Bool _hx_tmp;
HXDLIN( 231)			Bool _hx_tmp1;
HXDLIN( 231)			Bool _hx_tmp2 = hx::IsNotNull( camera );
HXDLIN( 231)			if (_hx_tmp2) {
HXLINE( 231)				_hx_tmp1 = !(camera->exists);
            			}
            			else {
HXLINE( 231)				_hx_tmp1 = true;
            			}
HXDLIN( 231)			if (!(_hx_tmp1)) {
HXLINE( 231)				_hx_tmp = !(camera->visible);
            			}
            			else {
HXLINE( 231)				_hx_tmp = true;
            			}
HXDLIN( 231)			if (_hx_tmp) {
HXLINE( 233)				continue;
            			}
HXLINE( 236)			camera->drawFX();
HXLINE( 238)			Bool _hx_tmp3 = ::flixel::FlxG_obj::renderBlit;
HXDLIN( 238)			if (_hx_tmp3) {
HXLINE( 240)				Bool _hx_tmp4 = this->useBufferLocking;
HXDLIN( 240)				if (_hx_tmp4) {
HXLINE( 242)					camera->buffer->unlock(null());
            				}
HXLINE( 245)				camera->screen->dirty = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,unlock,(void))

void CameraFrontEnd_obj::update(Float elapsed){
            	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","update",0x2ce5a0a6,"flixel.system.frontEnds.CameraFrontEnd.update","flixel/system/frontEnds/CameraFrontEnd.hx",256,0x7a57d3ec)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE( 256)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 256)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 256)		while((_g < _g1->length)){
HXLINE( 256)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 256)			++_g;
HXLINE( 258)			Bool _hx_tmp;
HXDLIN( 258)			Bool _hx_tmp1;
HXDLIN( 258)			Bool _hx_tmp2 = hx::IsNotNull( camera );
HXDLIN( 258)			if (_hx_tmp2) {
HXLINE( 258)				_hx_tmp1 = camera->exists;
            			}
            			else {
HXLINE( 258)				_hx_tmp1 = false;
            			}
HXDLIN( 258)			if (_hx_tmp1) {
HXLINE( 258)				_hx_tmp = camera->active;
            			}
            			else {
HXLINE( 258)				_hx_tmp = false;
            			}
HXDLIN( 258)			if (_hx_tmp) {
HXLINE( 260)				camera->update(elapsed);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,update,(void))

void CameraFrontEnd_obj::resize(){
            	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","resize",0xae5b7491,"flixel.system.frontEnds.CameraFrontEnd.resize","flixel/system/frontEnds/CameraFrontEnd.hx",271,0x7a57d3ec)
            	HX_STACK_THIS(this)
HXLINE( 271)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 271)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 271)		while((_g < _g1->length)){
HXLINE( 271)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 271)			++_g;
HXLINE( 273)			camera->onResize();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,resize,(void))

Int CameraFrontEnd_obj::get_bgColor(){
            	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","get_bgColor",0x99072db8,"flixel.system.frontEnds.CameraFrontEnd.get_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",279,0x7a57d3ec)
            	HX_STACK_THIS(this)
HXLINE( 279)		Bool _hx_tmp = hx::IsNull( ::flixel::FlxG_obj::camera );
HXDLIN( 279)		if (_hx_tmp) {
HXLINE( 279)			return (int)-16777216;
            		}
            		else {
HXLINE( 279)			return ::flixel::FlxG_obj::camera->bgColor;
            		}
HXDLIN( 279)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,get_bgColor,return )

Int CameraFrontEnd_obj::set_bgColor(Int Color){
            	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","set_bgColor",0xa37434c4,"flixel.system.frontEnds.CameraFrontEnd.set_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",283,0x7a57d3ec)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Color,"Color")
HXLINE( 284)		{
HXLINE( 284)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 284)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 284)			while((_g < _g1->length)){
HXLINE( 284)				HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 284)				++_g;
HXLINE( 286)				camera->bgColor = Color;
            			}
            		}
HXLINE( 289)		return Color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,set_bgColor,return )


CameraFrontEnd_obj::CameraFrontEnd_obj()
{
}

void CameraFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_MARK_MEMBER_NAME(_cameraRect,"_cameraRect");
	HX_MARK_END_CLASS();
}

void CameraFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_VISIT_MEMBER_NAME(_cameraRect,"_cameraRect");
}

hx::Val CameraFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return hx::Val( list); }
		if (HX_FIELD_EQ(inName,"fade") ) { return hx::Val( fade_dyn()); }
		if (HX_FIELD_EQ(inName,"lock") ) { return hx::Val( lock_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn()); }
		if (HX_FIELD_EQ(inName,"flash") ) { return hx::Val( flash_dyn()); }
		if (HX_FIELD_EQ(inName,"shake") ) { return hx::Val( shake_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn()); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn()); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return hx::Val( unlock_dyn()); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_bgColor()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { return hx::Val( _cameraRect); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return hx::Val( get_bgColor_dyn()); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return hx::Val( set_bgColor_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { return hx::Val( useBufferLocking); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CameraFrontEnd_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bgColor(inValue) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { _cameraRect=inValue.Cast<  ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { useBufferLocking=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"));
	outFields->push(HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76"));
	outFields->push(HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CameraFrontEnd_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CameraFrontEnd_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsBool,(int)offsetof(CameraFrontEnd_obj,useBufferLocking),HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(CameraFrontEnd_obj,_cameraRect),HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CameraFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String CameraFrontEnd_obj_sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76"),
	HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("flash","\xb0","\x35","\x8c","\x02"),
	HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"),
	HX_HCSTRING("shake","\xc6","\xde","\x1c","\x7c"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"),
	HX_HCSTRING("set_bgColor","\x81","\xe8","\xea","\x87"),
	::String(null()) };

static void CameraFrontEnd_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CameraFrontEnd_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class CameraFrontEnd_obj::__mClass;

void CameraFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.CameraFrontEnd","\x31","\x94","\x3d","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CameraFrontEnd_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CameraFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CameraFrontEnd_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CameraFrontEnd_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CameraFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CameraFrontEnd_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds