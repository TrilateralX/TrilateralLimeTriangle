// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_lime_graphics_opengl__GLRenderbuffer_GLRenderbuffer_Impl_
#define INCLUDED_lime_graphics_opengl__GLRenderbuffer_GLRenderbuffer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS4(lime,graphics,opengl,_GLRenderbuffer,GLRenderbuffer_Impl_)

namespace lime{
namespace graphics{
namespace opengl{
namespace _GLRenderbuffer{


class HXCPP_CLASS_ATTRIBUTES GLRenderbuffer_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GLRenderbuffer_Impl__obj OBJ_;
		GLRenderbuffer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7c55a00a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._GLRenderbuffer.GLRenderbuffer_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl._GLRenderbuffer.GLRenderbuffer_Impl_"); }

		inline static ::hx::ObjectPtr< GLRenderbuffer_Impl__obj > __new() {
			::hx::ObjectPtr< GLRenderbuffer_Impl__obj > __this = new GLRenderbuffer_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GLRenderbuffer_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			GLRenderbuffer_Impl__obj *__this = (GLRenderbuffer_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GLRenderbuffer_Impl__obj), false, "lime.graphics.opengl._GLRenderbuffer.GLRenderbuffer_Impl_"));
			*(void **)__this = GLRenderbuffer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GLRenderbuffer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GLRenderbuffer_Impl_",7b,9d,df,37); }

		static  ::lime::graphics::opengl::GLObject fromInt(int id);
		static ::Dynamic fromInt_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLRenderbuffer

#endif /* INCLUDED_lime_graphics_opengl__GLRenderbuffer_GLRenderbuffer_Impl_ */ 
