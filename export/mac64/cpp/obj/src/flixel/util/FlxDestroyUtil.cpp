// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

namespace flixel{
namespace util{

void FlxDestroyUtil_obj::__construct() { }

Dynamic FlxDestroyUtil_obj::__CreateEmpty() { return new FlxDestroyUtil_obj; }

hx::ObjectPtr< FlxDestroyUtil_obj > FlxDestroyUtil_obj::__new()
{
	hx::ObjectPtr< FlxDestroyUtil_obj > _hx_result = new FlxDestroyUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FlxDestroyUtil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxDestroyUtil_obj > _hx_result = new FlxDestroyUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic FlxDestroyUtil_obj::destroy(::Dynamic object){
            	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","destroy",0xd7e4dd50,"flixel.util.FlxDestroyUtil.destroy","flixel/util/FlxDestroyUtil.hx",17,0xaf22421a)
            	HX_STACK_ARG(object,"object")
HXLINE(  18)		Bool _hx_tmp = hx::IsNotNull( object );
HXDLIN(  18)		if (_hx_tmp) {
HXLINE(  20)			::flixel::util::IFlxDestroyable_obj::destroy(object);
            		}
HXLINE(  22)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,destroy,return )

::cpp::VirtualArray FlxDestroyUtil_obj::destroyArray(::cpp::VirtualArray array){
            	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","destroyArray",0xa1a3be29,"flixel.util.FlxDestroyUtil.destroyArray","flixel/util/FlxDestroyUtil.hx",32,0xaf22421a)
            	HX_STACK_ARG(array,"array")
HXLINE(  33)		Bool _hx_tmp = hx::IsNotNull( array );
HXDLIN(  33)		if (_hx_tmp) {
HXLINE(  35)			{
HXLINE(  35)				HX_VARI( Int,_g) = (int)0;
HXDLIN(  35)				while((_g < array->get_length())){
HXLINE(  35)					HX_VARI(  ::Dynamic,e) = array->__get(_g);
HXDLIN(  35)					++_g;
HXLINE(  36)					::flixel::util::FlxDestroyUtil_obj::destroy(e);
            				}
            			}
HXLINE(  37)			array->splice((int)0,array->get_length());
            		}
HXLINE(  39)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,destroyArray,return )

 ::Dynamic FlxDestroyUtil_obj::put(::Dynamic object){
            	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","put",0xdd93b025,"flixel.util.FlxDestroyUtil.put","flixel/util/FlxDestroyUtil.hx",49,0xaf22421a)
            	HX_STACK_ARG(object,"object")
HXLINE(  50)		Bool _hx_tmp = hx::IsNotNull( object );
HXDLIN(  50)		if (_hx_tmp) {
HXLINE(  52)			::flixel::util::IFlxPooled_obj::put(object);
            		}
HXLINE(  54)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,put,return )

::cpp::VirtualArray FlxDestroyUtil_obj::putArray(::cpp::VirtualArray array){
            	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","putArray",0x60ff8734,"flixel.util.FlxDestroyUtil.putArray","flixel/util/FlxDestroyUtil.hx",65,0xaf22421a)
            	HX_STACK_ARG(array,"array")
HXLINE(  66)		Bool _hx_tmp = hx::IsNotNull( array );
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  68)			{
HXLINE(  68)				HX_VARI( Int,_g) = (int)0;
HXDLIN(  68)				while((_g < array->get_length())){
HXLINE(  68)					HX_VARI(  ::Dynamic,e) = array->__get(_g);
HXDLIN(  68)					++_g;
HXLINE(  69)					::flixel::util::FlxDestroyUtil_obj::put(e);
            				}
            			}
HXLINE(  70)			array->splice((int)0,array->get_length());
            		}
HXLINE(  72)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,putArray,return )

 ::openfl::_legacy::display::BitmapData FlxDestroyUtil_obj::dispose( ::openfl::_legacy::display::BitmapData bitmapData){
            	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","dispose",0x6eab30f5,"flixel.util.FlxDestroyUtil.dispose","flixel/util/FlxDestroyUtil.hx",83,0xaf22421a)
            	HX_STACK_ARG(bitmapData,"bitmapData")
HXLINE(  84)		Bool _hx_tmp = hx::IsNotNull( bitmapData );
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  86)			bitmapData->dispose();
            		}
HXLINE(  88)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,dispose,return )

 ::openfl::_legacy::display::BitmapData FlxDestroyUtil_obj::disposeIfNotEqual( ::openfl::_legacy::display::BitmapData bitmapData,Float width,Float height){
            	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","disposeIfNotEqual",0x591337f3,"flixel.util.FlxDestroyUtil.disposeIfNotEqual","flixel/util/FlxDestroyUtil.hx",95,0xaf22421a)
            	HX_STACK_ARG(bitmapData,"bitmapData")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE(  96)		Bool _hx_tmp;
HXDLIN(  96)		Bool _hx_tmp1 = hx::IsNotNull( bitmapData );
HXDLIN(  96)		if (_hx_tmp1) {
HXLINE(  96)			Int _hx_tmp2 = bitmapData->get_width();
HXDLIN(  96)			if ((_hx_tmp2 == width)) {
HXLINE(  96)				Int _hx_tmp3 = bitmapData->get_height();
HXDLIN(  96)				_hx_tmp = (_hx_tmp3 != height);
            			}
            			else {
HXLINE(  96)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(  96)			_hx_tmp = false;
            		}
HXDLIN(  96)		if (_hx_tmp) {
HXLINE(  98)			bitmapData->dispose();
HXLINE(  99)			return null();
            		}
            		else {
HXLINE( 101)			Bool _hx_tmp4 = hx::IsNotNull( bitmapData );
HXDLIN( 101)			if (_hx_tmp4) {
HXLINE( 103)				return bitmapData;
            			}
            		}
HXLINE( 106)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxDestroyUtil_obj,disposeIfNotEqual,return )

 ::Dynamic FlxDestroyUtil_obj::removeChild( ::openfl::_legacy::display::DisplayObjectContainer parent, ::Dynamic child){
            	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","removeChild",0x08da1a0e,"flixel.util.FlxDestroyUtil.removeChild","flixel/util/FlxDestroyUtil.hx",110,0xaf22421a)
            	HX_STACK_ARG(parent,"parent")
            	HX_STACK_ARG(child,"child")
HXLINE( 111)		Bool _hx_tmp;
HXDLIN( 111)		Bool _hx_tmp1;
HXDLIN( 111)		Bool _hx_tmp2 = hx::IsNotNull( parent );
HXDLIN( 111)		if (_hx_tmp2) {
HXLINE( 111)			_hx_tmp1 = hx::IsNotNull( child );
            		}
            		else {
HXLINE( 111)			_hx_tmp1 = false;
            		}
HXDLIN( 111)		if (_hx_tmp1) {
HXLINE( 111)			_hx_tmp = parent->contains(child);
            		}
            		else {
HXLINE( 111)			_hx_tmp = false;
            		}
HXDLIN( 111)		if (_hx_tmp) {
HXLINE( 113)			parent->removeChild(child);
            		}
HXLINE( 115)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxDestroyUtil_obj,removeChild,return )


FlxDestroyUtil_obj::FlxDestroyUtil_obj()
{
}

bool FlxDestroyUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { outValue = put_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { outValue = destroy_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"dispose") ) { outValue = dispose_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"putArray") ) { outValue = putArray_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { outValue = removeChild_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"destroyArray") ) { outValue = destroyArray_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"disposeIfNotEqual") ) { outValue = disposeIfNotEqual_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxDestroyUtil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxDestroyUtil_obj_sStaticStorageInfo = 0;
#endif

static void FlxDestroyUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDestroyUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDestroyUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDestroyUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxDestroyUtil_obj::__mClass;

static ::String FlxDestroyUtil_obj_sStaticFields[] = {
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("destroyArray","\x3f","\x66","\x8f","\x17"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("putArray","\x4a","\xec","\x83","\x21"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("disposeIfNotEqual","\x1d","\x80","\xc0","\x4f"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	::String(null())
};

void FlxDestroyUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxDestroyUtil","\xc4","\xca","\x9f","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxDestroyUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxDestroyUtil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxDestroyUtil_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxDestroyUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxDestroyUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDestroyUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDestroyUtil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
