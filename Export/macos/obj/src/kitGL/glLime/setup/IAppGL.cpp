// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_kitGL_glLime_setup_IAppGL
#include <kitGL/glLime/setup/IAppGL.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif

namespace kitGL{
namespace glLime{
namespace setup{


static ::String IAppGL_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	HX_("setup",7d,ae,2f,7a),
	HX_("draw",04,2c,70,42),
	HX_("render",56,6b,29,05),
	HX_("renderDraw",7a,26,7a,df),
	::String(null()) };

::hx::Class IAppGL_obj::__mClass;

void IAppGL_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kitGL.glLime.setup.IAppGL",af,17,8f,0d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IAppGL_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x091f18c5 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kitGL
} // end namespace glLime
} // end namespace setup
