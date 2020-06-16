// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_trilateral3_geom__Transformer_Transformer_Fields_
#define INCLUDED_trilateral3_geom__Transformer_Transformer_Fields_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(trilateral3,geom,_Transformer,Transformer_Fields_)
HX_DECLARE_CLASS2(trilateral3,matrix,MatrixDozen)
HX_DECLARE_CLASS2(trilateral3,matrix,Vertex)

namespace trilateral3{
namespace geom{
namespace _Transformer{


class HXCPP_CLASS_ATTRIBUTES Transformer_Fields__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Transformer_Fields__obj OBJ_;
		Transformer_Fields__obj();

	public:
		enum { _hx_ClassId = 0x1ff08f0b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="trilateral3.geom._Transformer.Transformer_Fields_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"trilateral3.geom._Transformer.Transformer_Fields_"); }

		inline static ::hx::ObjectPtr< Transformer_Fields__obj > __new() {
			::hx::ObjectPtr< Transformer_Fields__obj > __this = new Transformer_Fields__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Transformer_Fields__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Transformer_Fields__obj *__this = (Transformer_Fields__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Transformer_Fields__obj), false, "trilateral3.geom._Transformer.Transformer_Fields_"));
			*(void **)__this = Transformer_Fields__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Transformer_Fields__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Transformer_Fields_",e0,ce,79,c0); }

		static  ::trilateral3::matrix::MatrixDozen multiplyTransform( ::trilateral3::matrix::MatrixDozen r, ::trilateral3::matrix::MatrixDozen s);
		static ::Dynamic multiplyTransform_dyn();

		static  ::trilateral3::matrix::Vertex transformVertex( ::trilateral3::matrix::Vertex v, ::trilateral3::matrix::MatrixDozen t);
		static ::Dynamic transformVertex_dyn();

		static  ::trilateral3::matrix::MatrixDozen unitTransform();
		static ::Dynamic unitTransform_dyn();

};

} // end namespace trilateral3
} // end namespace geom
} // end namespace _Transformer

#endif /* INCLUDED_trilateral3_geom__Transformer_Transformer_Fields_ */ 
