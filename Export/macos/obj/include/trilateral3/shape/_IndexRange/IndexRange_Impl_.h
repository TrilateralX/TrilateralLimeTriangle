// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_trilateral3_shape__IndexRange_IndexRange_Impl_
#define INCLUDED_trilateral3_shape__IndexRange_IndexRange_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(trilateral3,shape,_IndexRange,IndexRange_Impl_)
HX_DECLARE_CLASS2(trilateral3,structure,StartEnd)

namespace trilateral3{
namespace shape{
namespace _IndexRange{


class HXCPP_CLASS_ATTRIBUTES IndexRange_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef IndexRange_Impl__obj OBJ_;
		IndexRange_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7ca27cef };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="trilateral3.shape._IndexRange.IndexRange_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"trilateral3.shape._IndexRange.IndexRange_Impl_"); }

		inline static ::hx::ObjectPtr< IndexRange_Impl__obj > __new() {
			::hx::ObjectPtr< IndexRange_Impl__obj > __this = new IndexRange_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< IndexRange_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			IndexRange_Impl__obj *__this = (IndexRange_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IndexRange_Impl__obj), false, "trilateral3.shape._IndexRange.IndexRange_Impl_"));
			*(void **)__this = IndexRange_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IndexRange_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IndexRange_Impl_",4b,bc,39,b2); }

		static  ::trilateral3::structure::StartEnd _new( ::trilateral3::structure::StartEnd startEnd);
		static ::Dynamic _new_dyn();

		static  ::trilateral3::structure::StartEnd adding( ::trilateral3::structure::StartEnd a, ::trilateral3::structure::StartEnd b);
		static ::Dynamic adding_dyn();

		static  ::trilateral3::structure::StartEnd add( ::trilateral3::structure::StartEnd this1, ::trilateral3::structure::StartEnd b);
		static ::Dynamic add_dyn();

		static int get_length( ::trilateral3::structure::StartEnd this1);
		static ::Dynamic get_length_dyn();

};

} // end namespace trilateral3
} // end namespace shape
} // end namespace _IndexRange

#endif /* INCLUDED_trilateral3_shape__IndexRange_IndexRange_Impl_ */ 