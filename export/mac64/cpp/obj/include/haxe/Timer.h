// Generated by Haxe 3.3.0
#ifndef INCLUDED_haxe_Timer
#define INCLUDED_haxe_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Timer)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES Timer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Timer_obj OBJ_;
		Timer_obj();

	public:
		void __construct(Float time);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.Timer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.Timer"); }
		static hx::ObjectPtr< Timer_obj > __new(Float time);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Timer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Timer","\xa5","\x2f","\x63","\xa3"); }

		static void __boot();
		static ::Array< ::Dynamic> sRunningTimers;
		static  ::haxe::Timer delay( ::Dynamic f,Int time);
		static ::Dynamic delay_dyn();

		static Float getMS();
		static ::Dynamic getMS_dyn();

		static  ::Dynamic measure( ::Dynamic f, ::Dynamic pos);
		static ::Dynamic measure_dyn();

		static Float stamp();
		static ::Dynamic stamp_dyn();

		static void _hx___checkTimers();
		static ::Dynamic _hx___checkTimers_dyn();

		static Float _hx___nextWake(Float limit);
		static ::Dynamic _hx___nextWake_dyn();

		static  ::Dynamic lime_time_stamp;
		static  ::Dynamic &lime_time_stamp_dyn() { return lime_time_stamp;}
		Float mTime;
		Float mFireAt;
		Bool mRunning;
		::Dynamic run;
		inline ::Dynamic &run_dyn() {return run; }

		void stop();
		::Dynamic stop_dyn();

		void _hx___check(Float inTime);
		::Dynamic _hx___check_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Timer */ 
