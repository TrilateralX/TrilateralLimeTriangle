// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#define INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoFontOptions,CairoFontOptions_Impl_)

namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFontOptions{


class HXCPP_CLASS_ATTRIBUTES CairoFontOptions_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CairoFontOptions_Impl__obj OBJ_;
		CairoFontOptions_Impl__obj();

	public:
		enum { _hx_ClassId = 0x5be09b6d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_"); }

		inline static ::hx::ObjectPtr< CairoFontOptions_Impl__obj > __new() {
			::hx::ObjectPtr< CairoFontOptions_Impl__obj > __this = new CairoFontOptions_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CairoFontOptions_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			CairoFontOptions_Impl__obj *__this = (CairoFontOptions_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CairoFontOptions_Impl__obj), false, "lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_"));
			*(void **)__this = CairoFontOptions_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CairoFontOptions_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CairoFontOptions_Impl_",a7,b1,95,e4); }

		static  ::Dynamic _new();
		static ::Dynamic _new_dyn();

		static int get_antialias( ::Dynamic this1);
		static ::Dynamic get_antialias_dyn();

		static int set_antialias( ::Dynamic this1,int value);
		static ::Dynamic set_antialias_dyn();

		static int get_hintMetrics( ::Dynamic this1);
		static ::Dynamic get_hintMetrics_dyn();

		static int set_hintMetrics( ::Dynamic this1,int value);
		static ::Dynamic set_hintMetrics_dyn();

		static int get_hintStyle( ::Dynamic this1);
		static ::Dynamic get_hintStyle_dyn();

		static int set_hintStyle( ::Dynamic this1,int value);
		static ::Dynamic set_hintStyle_dyn();

		static int get_subpixelOrder( ::Dynamic this1);
		static ::Dynamic get_subpixelOrder_dyn();

		static int set_subpixelOrder( ::Dynamic this1,int value);
		static ::Dynamic set_subpixelOrder_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFontOptions

#endif /* INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_ */ 