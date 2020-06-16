// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_lime__internal_format_BMP
#define INCLUDED_lime__internal_format_BMP

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_internal,format,BMP)
HX_DECLARE_CLASS3(lime,_internal,format,BMPType)
HX_DECLARE_CLASS2(lime,graphics,Image)

namespace lime{
namespace _internal{
namespace format{


class HXCPP_CLASS_ATTRIBUTES BMP_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BMP_obj OBJ_;
		BMP_obj();

	public:
		enum { _hx_ClassId = 0x134aaeeb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.format.BMP")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.format.BMP"); }

		inline static ::hx::ObjectPtr< BMP_obj > __new() {
			::hx::ObjectPtr< BMP_obj > __this = new BMP_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< BMP_obj > __alloc(::hx::Ctx *_hx_ctx) {
			BMP_obj *__this = (BMP_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BMP_obj), false, "lime._internal.format.BMP"));
			*(void **)__this = BMP_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BMP_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BMP",25,58,32,00); }

		static  ::haxe::io::Bytes encode( ::lime::graphics::Image image, ::lime::_internal::format::BMPType type);
		static ::Dynamic encode_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace format

#endif /* INCLUDED_lime__internal_format_BMP */ 
