// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

namespace flixel{
namespace ui{
namespace _FlxButton{

void FlxButtonEvent_obj::__construct( ::Dynamic Callback, ::flixel::_hx_system::FlxSound sound){
            	HX_STACK_FRAME("flixel.ui._FlxButton.FlxButtonEvent","new",0xea40fb69,"flixel.ui._FlxButton.FlxButtonEvent.new","flixel/ui/FlxButton.hx",636,0xc64cf442)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Callback,"Callback")
            	HX_STACK_ARG(sound,"sound")
HXLINE( 637)		this->callback = Callback;
HXLINE( 640)		this->sound = sound;
            	}

Dynamic FlxButtonEvent_obj::__CreateEmpty() { return new FlxButtonEvent_obj; }

hx::ObjectPtr< FlxButtonEvent_obj > FlxButtonEvent_obj::__new( ::Dynamic Callback, ::flixel::_hx_system::FlxSound sound)
{
	hx::ObjectPtr< FlxButtonEvent_obj > _hx_result = new FlxButtonEvent_obj();
	_hx_result->__construct(Callback,sound);
	return _hx_result;
}

Dynamic FlxButtonEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxButtonEvent_obj > _hx_result = new FlxButtonEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_ui__FlxButton_FlxButtonEvent__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::ui::_FlxButton::FlxButtonEvent_obj::destroy,
};

void *FlxButtonEvent_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_ui__FlxButton_FlxButtonEvent__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxButtonEvent_obj::destroy(){
            	HX_STACK_FRAME("flixel.ui._FlxButton.FlxButtonEvent","destroy",0x72801083,"flixel.ui._FlxButton.FlxButtonEvent.destroy","flixel/ui/FlxButton.hx",648,0xc64cf442)
            	HX_STACK_THIS(this)
HXLINE( 649)		this->callback = null();
HXLINE( 652)		this->sound = ( ( ::flixel::_hx_system::FlxSound)(::flixel::util::FlxDestroyUtil_obj::destroy(this->sound)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxButtonEvent_obj,destroy,(void))

void FlxButtonEvent_obj::fire(){
            	HX_STACK_FRAME("flixel.ui._FlxButton.FlxButtonEvent","fire",0x0954508d,"flixel.ui._FlxButton.FlxButtonEvent.fire","flixel/ui/FlxButton.hx",660,0xc64cf442)
            	HX_STACK_THIS(this)
HXLINE( 661)		Bool _hx_tmp = hx::IsNotNull( this->callback );
HXDLIN( 661)		if (_hx_tmp) {
HXLINE( 663)			this->callback();
            		}
HXLINE( 667)		Bool _hx_tmp1 = hx::IsNotNull( this->sound );
HXDLIN( 667)		if (_hx_tmp1) {
HXLINE( 669)			this->sound->play(true,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxButtonEvent_obj,fire,(void))


FlxButtonEvent_obj::FlxButtonEvent_obj()
{
}

void FlxButtonEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxButtonEvent);
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_END_CLASS();
}

void FlxButtonEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(sound,"sound");
}

hx::Val FlxButtonEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return hx::Val( fire_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return hx::Val( sound); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return hx::Val( callback); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxButtonEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxButtonEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxButtonEvent_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxButtonEvent_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{hx::fsObject /*::flixel::_hx_system::FlxSound*/ ,(int)offsetof(FlxButtonEvent_obj,sound),HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxButtonEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxButtonEvent_obj_sMemberFields[] = {
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	::String(null()) };

static void FlxButtonEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxButtonEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxButtonEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxButtonEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxButtonEvent_obj::__mClass;

void FlxButtonEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui._FlxButton.FlxButtonEvent","\xf7","\x12","\x9b","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxButtonEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxButtonEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxButtonEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxButtonEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxButtonEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxButtonEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace ui
} // end namespace _FlxButton