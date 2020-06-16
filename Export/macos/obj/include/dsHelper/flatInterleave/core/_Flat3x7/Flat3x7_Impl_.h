// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_dsHelper_flatInterleave_core__Flat3x7_Flat3x7_Impl_
#define INCLUDED_dsHelper_flatInterleave_core__Flat3x7_Flat3x7_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(dsHelper,flatInterleave,core,_Flat3x7,Flat3x7_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace dsHelper{
namespace flatInterleave{
namespace core{
namespace _Flat3x7{


class HXCPP_CLASS_ATTRIBUTES Flat3x7_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Flat3x7_Impl__obj OBJ_;
		Flat3x7_Impl__obj();

	public:
		enum { _hx_ClassId = 0x14ae6bdf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="dsHelper.flatInterleave.core._Flat3x7.Flat3x7_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"dsHelper.flatInterleave.core._Flat3x7.Flat3x7_Impl_"); }

		inline static ::hx::ObjectPtr< Flat3x7_Impl__obj > __new() {
			::hx::ObjectPtr< Flat3x7_Impl__obj > __this = new Flat3x7_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Flat3x7_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Flat3x7_Impl__obj *__this = (Flat3x7_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Flat3x7_Impl__obj), false, "dsHelper.flatInterleave.core._Flat3x7.Flat3x7_Impl_"));
			*(void **)__this = Flat3x7_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Flat3x7_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Flat3x7_Impl_",d9,ae,cc,d6); }

		static Float readItem( ::lime::utils::ArrayBufferView this1,int k);
		static ::Dynamic readItem_dyn();

		static Float writeItem( ::lime::utils::ArrayBufferView this1,int k,Float v);
		static ::Dynamic writeItem_dyn();

		static  ::lime::utils::ArrayBufferView _new(int len);
		static ::Dynamic _new_dyn();

		static int get_index( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_index_dyn();

		static int set_index( ::lime::utils::ArrayBufferView this1,int id);
		static ::Dynamic set_index_dyn();

		static  ::lime::utils::ArrayBufferView getArray( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic getArray_dyn();

};

} // end namespace dsHelper
} // end namespace flatInterleave
} // end namespace core
} // end namespace _Flat3x7

#endif /* INCLUDED_dsHelper_flatInterleave_core__Flat3x7_Flat3x7_Impl_ */ 