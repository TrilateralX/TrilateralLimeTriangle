// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_shader_texture_lod
#define INCLUDED_lime_graphics_opengl_ext_EXT_shader_texture_lod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e1acbdc797cf4fd1_7_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_shader_texture_lod)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_shader_texture_lod_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_shader_texture_lod_obj OBJ_;
		EXT_shader_texture_lod_obj();

	public:
		enum { _hx_ClassId = 0x56088033 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_shader_texture_lod")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_shader_texture_lod"); }

		inline static ::hx::ObjectPtr< EXT_shader_texture_lod_obj > __new() {
			::hx::ObjectPtr< EXT_shader_texture_lod_obj > __this = new EXT_shader_texture_lod_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_shader_texture_lod_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_shader_texture_lod_obj *__this = (EXT_shader_texture_lod_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_shader_texture_lod_obj), false, "lime.graphics.opengl.ext.EXT_shader_texture_lod"));
			*(void **)__this = EXT_shader_texture_lod_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e1acbdc797cf4fd1_7_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_shader_texture_lod_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_shader_texture_lod",c1,4c,48,65); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_shader_texture_lod */ 
