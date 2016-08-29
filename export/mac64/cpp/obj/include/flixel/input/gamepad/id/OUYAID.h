// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_input_gamepad_id_OUYAID
#define INCLUDED_flixel_input_gamepad_id_OUYAID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,OUYAID)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES OUYAID_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef OUYAID_obj OBJ_;
		OUYAID_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.OUYAID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id.OUYAID"); }
		static hx::ObjectPtr< OUYAID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OUYAID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OUYAID","\xc9","\x5f","\x46","\xc2"); }

		static void __boot();
		static Int O;
		static Int U;
		static Int Y;
		static Int A;
		static Int LB;
		static Int RB;
		static Int LEFT_STICK_CLICK;
		static Int RIGHT_STICK_CLICK;
		static Int HOME;
		static Int LEFT_TRIGGER;
		static Int RIGHT_TRIGGER;
		static Int DPAD_LEFT;
		static Int DPAD_RIGHT;
		static Int DPAD_DOWN;
		static Int DPAD_UP;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
		static Int LEFT_TRIGGER_ANALOG;
		static Int RIGHT_TRIGGER_ANALOG;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_OUYAID */ 