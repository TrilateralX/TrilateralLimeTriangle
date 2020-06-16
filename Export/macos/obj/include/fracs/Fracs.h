// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_fracs_Fracs
#define INCLUDED_fracs_Fracs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(fracs,Fracs)

namespace fracs{


class HXCPP_CLASS_ATTRIBUTES Fracs_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Fracs_obj OBJ_;
		Fracs_obj();

	public:
		enum { _hx_ClassId = 0x07fa29e4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="fracs.Fracs")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"fracs.Fracs"); }

		inline static ::hx::ObjectPtr< Fracs_obj > __new() {
			::hx::ObjectPtr< Fracs_obj > __this = new Fracs_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Fracs_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Fracs_obj *__this = (Fracs_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Fracs_obj), false, "fracs.Fracs"));
			*(void **)__this = Fracs_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Fracs_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Fracs",65,df,b0,99); }

		static Float grabDecimalInput(::String decimalVal);
		static ::Dynamic grabDecimalInput_dyn();

		static ::Array< ::Dynamic> approximateFractions(Float f);
		static ::Dynamic approximateFractions_dyn();

		static Float getMaxNumerator(Float f);
		static ::Dynamic getMaxNumerator_dyn();

		static ::String extractDigitStr(::String fStr);
		static ::Dynamic extractDigitStr_dyn();

		static Float getMaxNumeratorStr(::String fStr);
		static ::Dynamic getMaxNumeratorStr_dyn();

};

} // end namespace fracs

#endif /* INCLUDED_fracs_Fracs */ 
