// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_kitGL_glLime_HelpGL
#include <kitGL/glLime/HelpGL.h>
#endif
#ifndef INCLUDED_kitGL_glLime__HelpGL_HelpGL_Fields_
#include <kitGL/glLime/_HelpGL/HelpGL_Fields_.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5172f50be7e8ee95_48_new,"kitGL.glLime.HelpGL","new",0xcbcc72d9,"kitGL.glLime.HelpGL.new","kitGL/glLime/HelpGL.hx",48,0x0e33b497)
namespace kitGL{
namespace glLime{

void HelpGL_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5172f50be7e8ee95_48_new)
HXLINE(  58)		this->shaderSetup_ = ::kitGL::glLime::_HelpGL::HelpGL_Fields__obj::shaderSetup_dyn();
HXLINE(  54)		this->programSetup_ = ::kitGL::glLime::_HelpGL::HelpGL_Fields__obj::programSetup_dyn();
HXLINE(  50)		this->clearAll_ = ::kitGL::glLime::_HelpGL::HelpGL_Fields__obj::clearAll_dyn();
            	}

Dynamic HelpGL_obj::__CreateEmpty() { return new HelpGL_obj; }

void *HelpGL_obj::_hx_vtable = 0;

Dynamic HelpGL_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HelpGL_obj > _hx_result = new HelpGL_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HelpGL_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x413d129b;
}


::hx::ObjectPtr< HelpGL_obj > HelpGL_obj::__new() {
	::hx::ObjectPtr< HelpGL_obj > __this = new HelpGL_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HelpGL_obj > HelpGL_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HelpGL_obj *__this = (HelpGL_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HelpGL_obj), true, "kitGL.glLime.HelpGL"));
	*(void **)__this = HelpGL_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HelpGL_obj::HelpGL_obj()
{
}

void HelpGL_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HelpGL);
	HX_MARK_MEMBER_NAME(clearAll_,"clearAll_");
	HX_MARK_MEMBER_NAME(programSetup_,"programSetup_");
	HX_MARK_MEMBER_NAME(shaderSetup_,"shaderSetup_");
	HX_MARK_END_CLASS();
}

void HelpGL_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clearAll_,"clearAll_");
	HX_VISIT_MEMBER_NAME(programSetup_,"programSetup_");
	HX_VISIT_MEMBER_NAME(shaderSetup_,"shaderSetup_");
}

::hx::Val HelpGL_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"clearAll_") ) { return ::hx::Val( clearAll_ ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shaderSetup_") ) { return ::hx::Val( shaderSetup_ ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"programSetup_") ) { return ::hx::Val( programSetup_ ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HelpGL_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"clearAll_") ) { clearAll_=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shaderSetup_") ) { shaderSetup_=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"programSetup_") ) { programSetup_=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HelpGL_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HelpGL_obj,clearAll_),HX_("clearAll_",4b,ec,30,b4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HelpGL_obj,programSetup_),HX_("programSetup_",e6,78,3b,fe)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HelpGL_obj,shaderSetup_),HX_("shaderSetup_",47,9c,71,df)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HelpGL_obj_sStaticStorageInfo = 0;
#endif

static ::String HelpGL_obj_sMemberFields[] = {
	HX_("clearAll_",4b,ec,30,b4),
	HX_("programSetup_",e6,78,3b,fe),
	HX_("shaderSetup_",47,9c,71,df),
	::String(null()) };

::hx::Class HelpGL_obj::__mClass;

void HelpGL_obj::__register()
{
	HelpGL_obj _hx_dummy;
	HelpGL_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kitGL.glLime.HelpGL",67,12,5a,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HelpGL_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HelpGL_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HelpGL_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HelpGL_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kitGL
} // end namespace glLime
