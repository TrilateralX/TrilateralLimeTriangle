// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_fracs__Fraction_FractionArray_Impl_
#define INCLUDED_fracs__Fraction_FractionArray_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(fracs,_Fraction,FractionArray_Impl_)

namespace fracs{
namespace _Fraction{


class HXCPP_CLASS_ATTRIBUTES FractionArray_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FractionArray_Impl__obj OBJ_;
		FractionArray_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2553099b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="fracs._Fraction.FractionArray_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"fracs._Fraction.FractionArray_Impl_"); }

		inline static ::hx::ObjectPtr< FractionArray_Impl__obj > __new() {
			::hx::ObjectPtr< FractionArray_Impl__obj > __this = new FractionArray_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FractionArray_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FractionArray_Impl__obj *__this = (FractionArray_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FractionArray_Impl__obj), false, "fracs._Fraction.FractionArray_Impl_"));
			*(void **)__this = FractionArray_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FractionArray_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FractionArray_Impl_",f7,77,58,fb); }

		static ::Array< ::Dynamic> _new(::Array< ::Dynamic> val);
		static ::Dynamic _new_dyn();

		static void add(::Array< ::Dynamic> this1, ::Dynamic val);
		static ::Dynamic add_dyn();

		static ::String toString(::Array< ::Dynamic> this1);
		static ::Dynamic toString_dyn();

};

} // end namespace fracs
} // end namespace _Fraction

#endif /* INCLUDED_fracs__Fraction_FractionArray_Impl_ */ 
