// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_trilateral3_drawing__DrawAbstract_DrawAbstract_Impl_
#define INCLUDED_trilateral3_drawing__DrawAbstract_DrawAbstract_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(trilateral3,drawing,_DrawAbstract,DrawAbstract_Impl_)

namespace trilateral3{
namespace drawing{
namespace _DrawAbstract{


class HXCPP_CLASS_ATTRIBUTES DrawAbstract_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DrawAbstract_Impl__obj OBJ_;
		DrawAbstract_Impl__obj();

	public:
		enum { _hx_ClassId = 0x02344808 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="trilateral3.drawing._DrawAbstract.DrawAbstract_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"trilateral3.drawing._DrawAbstract.DrawAbstract_Impl_"); }

		inline static ::hx::ObjectPtr< DrawAbstract_Impl__obj > __new() {
			::hx::ObjectPtr< DrawAbstract_Impl__obj > __this = new DrawAbstract_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DrawAbstract_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			DrawAbstract_Impl__obj *__this = (DrawAbstract_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DrawAbstract_Impl__obj), false, "trilateral3.drawing._DrawAbstract.DrawAbstract_Impl_"));
			*(void **)__this = DrawAbstract_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DrawAbstract_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DrawAbstract_Impl_",46,36,36,ce); }

		static  ::Dynamic _new( ::Dynamic drawType);
		static ::Dynamic _new_dyn();

		static Float get_pos( ::Dynamic this1);
		static ::Dynamic get_pos_dyn();

		static Float set_pos( ::Dynamic this1,Float v);
		static ::Dynamic set_pos_dyn();

		static int set_size( ::Dynamic this1,int v);
		static ::Dynamic set_size_dyn();

		static int get_size( ::Dynamic this1);
		static ::Dynamic get_size_dyn();

};

} // end namespace trilateral3
} // end namespace drawing
} // end namespace _DrawAbstract

#endif /* INCLUDED_trilateral3_drawing__DrawAbstract_DrawAbstract_Impl_ */ 
