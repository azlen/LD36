// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_input_FlxKeyManager
#define INCLUDED_flixel_input_FlxKeyManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,FlxKeyManager)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)

namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES FlxKeyManager_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxKeyManager_obj OBJ_;
		FlxKeyManager_obj();

	public:
		void __construct(hx::Class keyListClass);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.FlxKeyManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.input.FlxKeyManager"); }
		static hx::ObjectPtr< FlxKeyManager_obj > __new(hx::Class keyListClass);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxKeyManager_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("FlxKeyManager","\x80","\x0d","\xa1","\xb0"); }

		Bool enabled;
		::cpp::VirtualArray preventDefaultKeys;
		 ::Dynamic pressed;
		 ::Dynamic justPressed;
		 ::Dynamic justReleased;
		::Array< ::Dynamic> _keyListArray;
		 ::haxe::ds::IntMap _keyListMap;
		Bool anyPressed(::cpp::VirtualArray KeyArray);
		::Dynamic anyPressed_dyn();

		Bool anyJustPressed(::cpp::VirtualArray KeyArray);
		::Dynamic anyJustPressed_dyn();

		Bool anyJustReleased(::cpp::VirtualArray KeyArray);
		::Dynamic anyJustReleased_dyn();

		Int firstPressed();
		::Dynamic firstPressed_dyn();

		Int firstJustPressed();
		::Dynamic firstJustPressed_dyn();

		Int firstJustReleased();
		::Dynamic firstJustReleased_dyn();

		Bool checkStatus( ::Dynamic KeyCode,Int Status);
		::Dynamic checkStatus_dyn();

		::Array< ::Dynamic> getIsDown();
		::Dynamic getIsDown_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void reset();
		::Dynamic reset_dyn();

		void update();
		::Dynamic update_dyn();

		Bool checkKeyArrayState(::cpp::VirtualArray KeyArray,Int State);
		::Dynamic checkKeyArrayState_dyn();

		virtual void onKeyUp( ::openfl::_legacy::events::KeyboardEvent event);
		::Dynamic onKeyUp_dyn();

		virtual void onKeyDown( ::openfl::_legacy::events::KeyboardEvent event);
		::Dynamic onKeyDown_dyn();

		void handlePreventDefaultKeys(Int keyCode, ::openfl::_legacy::events::KeyboardEvent event);
		::Dynamic handlePreventDefaultKeys_dyn();

		Bool inKeyArray(::cpp::VirtualArray KeyArray, ::Dynamic Key);
		::Dynamic inKeyArray_dyn();

		virtual Int resolveKeyCode( ::openfl::_legacy::events::KeyboardEvent e);
		::Dynamic resolveKeyCode_dyn();

		void updateKeyStates(Int KeyCode,Bool Down);
		::Dynamic updateKeyStates_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

		 ::flixel::input::FlxInput getKey(Int KeyCode);
		::Dynamic getKey_dyn();

};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_FlxKeyManager */ 
