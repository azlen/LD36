// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif

namespace openfl{
namespace _legacy{
namespace gl{

void GLObject_obj::__construct(Int version, ::Dynamic id){
            	HX_STACK_FRAME("openfl._legacy.gl.GLObject","new",0xbbc2463b,"openfl._legacy.gl.GLObject.new","openfl/_legacy/gl/GLObject.hx",14,0xeab66fb6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(version,"version")
            	HX_STACK_ARG(id,"id")
HXLINE(  16)		this->version = version;
HXLINE(  17)		this->id = id;
            	}

Dynamic GLObject_obj::__CreateEmpty() { return new GLObject_obj; }

hx::ObjectPtr< GLObject_obj > GLObject_obj::__new(Int version, ::Dynamic id)
{
	hx::ObjectPtr< GLObject_obj > _hx_result = new GLObject_obj();
	_hx_result->__construct(version,id);
	return _hx_result;
}

Dynamic GLObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLObject_obj > _hx_result = new GLObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

::String GLObject_obj::getType(){
            	HX_STACK_FRAME("openfl._legacy.gl.GLObject","getType",0x2499a1cb,"openfl._legacy.gl.GLObject.getType","openfl/_legacy/gl/GLObject.hx",24,0xeab66fb6)
            	HX_STACK_THIS(this)
HXLINE(  24)		return HX_("GLObject",c4,da,30,7f);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,getType,return )

void GLObject_obj::invalidate(){
            	HX_STACK_FRAME("openfl._legacy.gl.GLObject","invalidate",0x31cbe500,"openfl._legacy.gl.GLObject.invalidate","openfl/_legacy/gl/GLObject.hx",31,0xeab66fb6)
            	HX_STACK_THIS(this)
HXLINE(  31)		this->id = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,invalidate,(void))

Bool GLObject_obj::isValid(){
            	HX_STACK_FRAME("openfl._legacy.gl.GLObject","isValid",0xd34c180d,"openfl._legacy.gl.GLObject.isValid","openfl/_legacy/gl/GLObject.hx",38,0xeab66fb6)
            	HX_STACK_THIS(this)
HXLINE(  38)		Bool _hx_tmp = hx::IsNotNull( this->id );
HXDLIN(  38)		if (_hx_tmp) {
HXLINE(  38)			Int _hx_tmp1 = this->version;
HXDLIN(  38)			Int _hx_tmp2 = ::openfl::_legacy::gl::GL_obj::get_version();
HXDLIN(  38)			return (_hx_tmp1 == _hx_tmp2);
            		}
            		else {
HXLINE(  38)			return false;
            		}
HXDLIN(  38)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,isValid,return )

Bool GLObject_obj::isInvalid(){
            	HX_STACK_FRAME("openfl._legacy.gl.GLObject","isInvalid",0x23572448,"openfl._legacy.gl.GLObject.isInvalid","openfl/_legacy/gl/GLObject.hx",45,0xeab66fb6)
            	HX_STACK_THIS(this)
HXLINE(  45)		return !(this->isValid());
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,isInvalid,return )

::String GLObject_obj::toString(){
            	HX_STACK_FRAME("openfl._legacy.gl.GLObject","toString",0x9fa040f1,"openfl._legacy.gl.GLObject.toString","openfl/_legacy/gl/GLObject.hx",52,0xeab66fb6)
            	HX_STACK_THIS(this)
HXLINE(  52)		::String _hx_tmp = this->getType();
HXDLIN(  52)		::String _hx_tmp1 = (_hx_tmp + HX_("(",28,00,00,00));
HXDLIN(  52)		::String _hx_tmp2 = ::Std_obj::string(this->id);
HXDLIN(  52)		return ((_hx_tmp1 + _hx_tmp2) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,toString,return )

Bool GLObject_obj::get_invalidated(){
            	HX_STACK_FRAME("openfl._legacy.gl.GLObject","get_invalidated",0x4c033c7b,"openfl._legacy.gl.GLObject.get_invalidated","openfl/_legacy/gl/GLObject.hx",66,0xeab66fb6)
            	HX_STACK_THIS(this)
HXLINE(  66)		return this->isInvalid();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,get_invalidated,return )

Bool GLObject_obj::get_valid(){
            	HX_STACK_FRAME("openfl._legacy.gl.GLObject","get_valid",0x59729d6e,"openfl._legacy.gl.GLObject.get_valid","openfl/_legacy/gl/GLObject.hx",73,0xeab66fb6)
            	HX_STACK_THIS(this)
HXLINE(  73)		return this->isValid();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,get_valid,return )


GLObject_obj::GLObject_obj()
{
}

void GLObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLObject);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(invalidated,"invalidated");
	HX_MARK_MEMBER_NAME(valid,"valid");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void GLObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(invalidated,"invalidated");
	HX_VISIT_MEMBER_NAME(valid,"valid");
	HX_VISIT_MEMBER_NAME(version,"version");
}

hx::Val GLObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"valid") ) { return hx::Val( inCallProp == hx::paccAlways ? get_valid() : valid); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return hx::Val( version); }
		if (HX_FIELD_EQ(inName,"getType") ) { return hx::Val( getType_dyn()); }
		if (HX_FIELD_EQ(inName,"isValid") ) { return hx::Val( isValid_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isInvalid") ) { return hx::Val( isInvalid_dyn()); }
		if (HX_FIELD_EQ(inName,"get_valid") ) { return hx::Val( get_valid_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return hx::Val( invalidate_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidated") ) { return hx::Val( inCallProp == hx::paccAlways ? get_invalidated() : invalidated); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_invalidated") ) { return hx::Val( get_invalidated_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GLObject_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"valid") ) { valid=inValue.Cast< Bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< Int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidated") ) { invalidated=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd"));
	outFields->push(HX_HCSTRING("valid","\xfc","\x74","\xb8","\x31"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLObject_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLObject_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(GLObject_obj,invalidated),HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd")},
	{hx::fsBool,(int)offsetof(GLObject_obj,valid),HX_HCSTRING("valid","\xfc","\x74","\xb8","\x31")},
	{hx::fsInt,(int)offsetof(GLObject_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GLObject_obj_sStaticStorageInfo = 0;
#endif

static ::String GLObject_obj_sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd"),
	HX_HCSTRING("valid","\xfc","\x74","\xb8","\x31"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("isValid","\xb2","\x18","\x3e","\xce"),
	HX_HCSTRING("isInvalid","\x2d","\x58","\x46","\x3f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_invalidated","\x20","\xea","\x8d","\x7e"),
	HX_HCSTRING("get_valid","\x53","\xd1","\x61","\x75"),
	::String(null()) };

static void GLObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLObject_obj::__mClass,"__mClass");
};

#endif

hx::Class GLObject_obj::__mClass;

void GLObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.gl.GLObject","\xc9","\x0c","\x86","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLObject_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl