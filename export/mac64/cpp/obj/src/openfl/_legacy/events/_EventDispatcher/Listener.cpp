// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl__legacy_events__EventDispatcher_Listener
#include <openfl/_legacy/events/_EventDispatcher/Listener.h>
#endif

namespace openfl{
namespace _legacy{
namespace events{
namespace _EventDispatcher{

void Listener_obj::__construct( ::Dynamic callback,Bool useCapture,Int priority){
            	HX_STACK_FRAME("openfl._legacy.events._EventDispatcher.Listener","new",0x937dd281,"openfl._legacy.events._EventDispatcher.Listener.new","openfl/_legacy/events/EventDispatcher.hx",212,0xebfd71ed)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(callback,"callback")
            	HX_STACK_ARG(useCapture,"useCapture")
            	HX_STACK_ARG(priority,"priority")
HXLINE( 214)		this->callback = callback;
HXLINE( 215)		this->useCapture = useCapture;
HXLINE( 216)		this->priority = priority;
            	}

Dynamic Listener_obj::__CreateEmpty() { return new Listener_obj; }

hx::ObjectPtr< Listener_obj > Listener_obj::__new( ::Dynamic callback,Bool useCapture,Int priority)
{
	hx::ObjectPtr< Listener_obj > _hx_result = new Listener_obj();
	_hx_result->__construct(callback,useCapture,priority);
	return _hx_result;
}

Dynamic Listener_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Listener_obj > _hx_result = new Listener_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

Bool Listener_obj::match( ::Dynamic callback,Bool useCapture){
            	HX_STACK_FRAME("openfl._legacy.events._EventDispatcher.Listener","match",0x366ad5a6,"openfl._legacy.events._EventDispatcher.Listener.match","openfl/_legacy/events/EventDispatcher.hx",223,0xebfd71ed)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(callback,"callback")
            	HX_STACK_ARG(useCapture,"useCapture")
HXLINE( 223)		Bool _hx_tmp = ::Reflect_obj::compareMethods(this->callback,callback);
HXDLIN( 223)		if (_hx_tmp) {
HXLINE( 223)			return (this->useCapture == useCapture);
            		}
            		else {
HXLINE( 223)			return false;
            		}
HXDLIN( 223)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Listener_obj,match,return )


Listener_obj::Listener_obj()
{
}

void Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Listener);
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_MEMBER_NAME(useCapture,"useCapture");
	HX_MARK_END_CLASS();
}

void Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(priority,"priority");
	HX_VISIT_MEMBER_NAME(useCapture,"useCapture");
}

hx::Val Listener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return hx::Val( match_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return hx::Val( callback); }
		if (HX_FIELD_EQ(inName,"priority") ) { return hx::Val( priority); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useCapture") ) { return hx::Val( useCapture); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Listener_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< Int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useCapture") ) { useCapture=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb"));
	outFields->push(HX_HCSTRING("useCapture","\xff","\xf2","\x04","\xaa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Listener_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Listener_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{hx::fsInt,(int)offsetof(Listener_obj,priority),HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb")},
	{hx::fsBool,(int)offsetof(Listener_obj,useCapture),HX_HCSTRING("useCapture","\xff","\xf2","\x04","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Listener_obj_sStaticStorageInfo = 0;
#endif

static ::String Listener_obj_sMemberFields[] = {
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb"),
	HX_HCSTRING("useCapture","\xff","\xf2","\x04","\xaa"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	::String(null()) };

static void Listener_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Listener_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
};

#endif

hx::Class Listener_obj::__mClass;

void Listener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.events._EventDispatcher.Listener","\x0f","\x7e","\xa8","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Listener_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Listener_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Listener_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Listener_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Listener_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Listener_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
} // end namespace _EventDispatcher
