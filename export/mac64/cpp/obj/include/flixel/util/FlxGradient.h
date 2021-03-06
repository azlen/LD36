// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_util_FlxGradient
#define INCLUDED_flixel_util_FlxGradient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,FlxGradient)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxGradient_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxGradient_obj OBJ_;
		FlxGradient_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxGradient")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.util.FlxGradient"); }
		static hx::ObjectPtr< FlxGradient_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGradient_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxGradient","\x62","\x14","\x56","\x41"); }

		static  ::Dynamic createGradientMatrix(Int width,Int height,::Array< Int > colors,hx::Null< Int >  chunkSize,hx::Null< Int >  rotation);
		static ::Dynamic createGradientMatrix_dyn();

		static ::Array< Int > createGradientArray(Int width,Int height,::Array< Int > colors,hx::Null< Int >  chunkSize,hx::Null< Int >  rotation,hx::Null< Bool >  interpolate);
		static ::Dynamic createGradientArray_dyn();

		static  ::flixel::FlxSprite createGradientFlxSprite(Int width,Int height,::Array< Int > colors,hx::Null< Int >  chunkSize,hx::Null< Int >  rotation,hx::Null< Bool >  interpolate);
		static ::Dynamic createGradientFlxSprite_dyn();

		static  ::openfl::_legacy::display::BitmapData createGradientBitmapData(Int width,Int height,::Array< Int > colors,hx::Null< Int >  chunkSize,hx::Null< Int >  rotation,hx::Null< Bool >  interpolate);
		static ::Dynamic createGradientBitmapData_dyn();

		static  ::flixel::FlxSprite overlayGradientOnFlxSprite( ::flixel::FlxSprite dest,Int width,Int height,::Array< Int > colors,hx::Null< Int >  destX,hx::Null< Int >  destY,hx::Null< Int >  chunkSize,hx::Null< Int >  rotation,hx::Null< Bool >  interpolate);
		static ::Dynamic overlayGradientOnFlxSprite_dyn();

		static  ::openfl::_legacy::display::BitmapData overlayGradientOnBitmapData( ::openfl::_legacy::display::BitmapData dest,Int width,Int height,::Array< Int > colors,hx::Null< Int >  destX,hx::Null< Int >  destY,hx::Null< Int >  chunkSize,hx::Null< Int >  rotation,hx::Null< Bool >  interpolate);
		static ::Dynamic overlayGradientOnBitmapData_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxGradient */ 
