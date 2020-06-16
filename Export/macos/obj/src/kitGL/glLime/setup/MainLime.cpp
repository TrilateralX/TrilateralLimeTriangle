// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_kitGL_glLime_setup_IAppGL
#include <kitGL/glLime/setup/IAppGL.h>
#endif
#ifndef INCLUDED_kitGL_glLime_setup_MainLime
#include <kitGL/glLime/setup/MainLime.h>
#endif
#ifndef INCLUDED_kitGL_glLime_setup_NonGL
#include <kitGL/glLime/setup/NonGL.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5c08072f40a5a8c3_8_new,"kitGL.glLime.setup.MainLime","new",0xe78ac532,"kitGL.glLime.setup.MainLime.new","kitGL/glLime/setup/MainLime.hx",8,0x3a9dfdfd)
HX_LOCAL_STACK_FRAME(_hx_pos_5c08072f40a5a8c3_21_onWindowCreate,"kitGL.glLime.setup.MainLime","onWindowCreate",0x697cdb39,"kitGL.glLime.setup.MainLime.onWindowCreate","kitGL/glLime/setup/MainLime.hx",21,0x3a9dfdfd)
HX_LOCAL_STACK_FRAME(_hx_pos_5c08072f40a5a8c3_34_update,"kitGL.glLime.setup.MainLime","update",0x586de077,"kitGL.glLime.setup.MainLime.update","kitGL/glLime/setup/MainLime.hx",34,0x3a9dfdfd)
HX_LOCAL_STACK_FRAME(_hx_pos_5c08072f40a5a8c3_41_render,"kitGL.glLime.setup.MainLime","render",0xd691c5c4,"kitGL.glLime.setup.MainLime.render","kitGL/glLime/setup/MainLime.hx",41,0x3a9dfdfd)
namespace kitGL{
namespace glLime{
namespace setup{

void MainLime_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5c08072f40a5a8c3_8_new)
HXLINE(  10)		this->runSeconds = ((Float)0);
HXLINE(   9)		this->ready = false;
HXLINE(  18)		super::__construct();
            	}

Dynamic MainLime_obj::__CreateEmpty() { return new MainLime_obj; }

void *MainLime_obj::_hx_vtable = 0;

Dynamic MainLime_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainLime_obj > _hx_result = new MainLime_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MainLime_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4ac01a5e) {
		if (inClassId<=(int)0x431bf104) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x431bf104;
		} else {
			return inClassId==(int)0x4ac01a5e;
		}
	} else {
		return inClassId==(int)0x7f8386d8;
	}
}

void MainLime_obj::onWindowCreate(){
            	HX_GC_STACKFRAME(&_hx_pos_5c08072f40a5a8c3_21_onWindowCreate)
HXLINE(  22)		 ::lime::graphics::RenderContext context = this->_hx___window->context;
HXLINE(  23)		this->other =  ::kitGL::glLime::setup::NonGL_obj::__alloc( HX_CTX ,this->_hx___window->_hx___width,this->_hx___window->_hx___height);
HXLINE(  24)		this->appGL = this->appCreate(this->_hx___window->_hx___width,this->_hx___window->_hx___height);
HXLINE(  25)		::String _hx_switch_0 = context->type;
            		if (  (_hx_switch_0==HX_("opengl",6f,64,94,21)) ||  (_hx_switch_0==HX_("opengles",9d,f6,c9,fa)) ||  (_hx_switch_0==HX_("webgl",b9,4b,bc,c7)) ){
HXLINE(  27)			::kitGL::glLime::setup::IAppGL_obj::setup(this->appGL,context->webgl);
HXDLIN(  27)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  29)			::String _hx_switch_1 = context->type;
            			if (  (_hx_switch_1==HX_("cairo",88,30,19,41)) ||  (_hx_switch_1==HX_("canvas",d8,54,42,b8)) ||  (_hx_switch_1==HX_("dom",82,42,4c,00)) ||  (_hx_switch_1==HX_("flash",b0,35,8c,02)) ){
HXLINE(  29)				goto _hx_goto_1;
            			}
            			/* default */{
            			}
            			_hx_goto_1:;
            		}
            		_hx_goto_2:;
HXLINE(  31)		this->ready = true;
            	}


void MainLime_obj::update(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_5c08072f40a5a8c3_34_update)
HXLINE(  35)		this->runSeconds = (( (Float)(deltaTime) ) / ( (Float)(1000) ));
HXLINE(  36)		if (!(this->ready)) {
HXLINE(  36)			return;
            		}
HXLINE(  38)		::kitGL::glLime::setup::IAppGL_obj::update(this->appGL);
            	}


void MainLime_obj::render( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_5c08072f40a5a8c3_41_render)
HXLINE(  42)		if (!(this->ready)) {
HXLINE(  42)			return;
            		}
HXLINE(  43)		::String _hx_switch_0 = context->type;
            		if (  (_hx_switch_0==HX_("opengl",6f,64,94,21)) ||  (_hx_switch_0==HX_("opengles",9d,f6,c9,fa)) ||  (_hx_switch_0==HX_("webgl",b9,4b,bc,c7)) ){
HXLINE(  45)			::kitGL::glLime::setup::IAppGL_obj::render(this->appGL,context->webgl);
HXDLIN(  45)			goto _hx_goto_6;
            		}
            		/* default */{
HXLINE(  47)			::String _hx_switch_1 = context->type;
            			if (  (_hx_switch_1==HX_("cairo",88,30,19,41)) ||  (_hx_switch_1==HX_("canvas",d8,54,42,b8)) ||  (_hx_switch_1==HX_("dom",82,42,4c,00)) ||  (_hx_switch_1==HX_("flash",b0,35,8c,02)) ){
HXLINE(  47)				goto _hx_goto_5;
            			}
            			/* default */{
            			}
            			_hx_goto_5:;
            		}
            		_hx_goto_6:;
            	}



::hx::ObjectPtr< MainLime_obj > MainLime_obj::__new() {
	::hx::ObjectPtr< MainLime_obj > __this = new MainLime_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MainLime_obj > MainLime_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MainLime_obj *__this = (MainLime_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainLime_obj), true, "kitGL.glLime.setup.MainLime"));
	*(void **)__this = MainLime_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MainLime_obj::MainLime_obj()
{
}

void MainLime_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainLime);
	HX_MARK_MEMBER_NAME(ready,"ready");
	HX_MARK_MEMBER_NAME(runSeconds,"runSeconds");
	HX_MARK_MEMBER_NAME(other,"other");
	HX_MARK_MEMBER_NAME(appGL,"appGL");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(appCreate,"appCreate");
	 ::lime::app::Application_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainLime_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ready,"ready");
	HX_VISIT_MEMBER_NAME(runSeconds,"runSeconds");
	HX_VISIT_MEMBER_NAME(other,"other");
	HX_VISIT_MEMBER_NAME(appGL,"appGL");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(appCreate,"appCreate");
	 ::lime::app::Application_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainLime_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ::hx::Val( ready ); }
		if (HX_FIELD_EQ(inName,"other") ) { return ::hx::Val( other ); }
		if (HX_FIELD_EQ(inName,"appGL") ) { return ::hx::Val( appGL ); }
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"appCreate") ) { return ::hx::Val( appCreate ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"runSeconds") ) { return ::hx::Val( runSeconds ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowCreate") ) { return ::hx::Val( onWindowCreate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MainLime_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { ready=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"other") ) { other=inValue.Cast<  ::kitGL::glLime::setup::NonGL >(); return inValue; }
		if (HX_FIELD_EQ(inName,"appGL") ) { appGL=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"appCreate") ) { appCreate=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"runSeconds") ) { runSeconds=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainLime_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ready",63,a0,ba,e6));
	outFields->push(HX_("runSeconds",74,46,0a,c5));
	outFields->push(HX_("other",d0,66,76,36));
	outFields->push(HX_("appGL",06,65,3b,24));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainLime_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(MainLime_obj,ready),HX_("ready",63,a0,ba,e6)},
	{::hx::fsFloat,(int)offsetof(MainLime_obj,runSeconds),HX_("runSeconds",74,46,0a,c5)},
	{::hx::fsObject /*  ::kitGL::glLime::setup::NonGL */ ,(int)offsetof(MainLime_obj,other),HX_("other",d0,66,76,36)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(MainLime_obj,appGL),HX_("appGL",06,65,3b,24)},
	{::hx::fsInt,(int)offsetof(MainLime_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(MainLime_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MainLime_obj,appCreate),HX_("appCreate",7d,86,92,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MainLime_obj_sStaticStorageInfo = 0;
#endif

static ::String MainLime_obj_sMemberFields[] = {
	HX_("ready",63,a0,ba,e6),
	HX_("runSeconds",74,46,0a,c5),
	HX_("other",d0,66,76,36),
	HX_("appGL",06,65,3b,24),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("appCreate",7d,86,92,d5),
	HX_("onWindowCreate",cb,62,6f,6d),
	HX_("update",09,86,05,87),
	HX_("render",56,6b,29,05),
	::String(null()) };

::hx::Class MainLime_obj::__mClass;

void MainLime_obj::__register()
{
	MainLime_obj _hx_dummy;
	MainLime_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kitGL.glLime.setup.MainLime",40,04,d8,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainLime_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainLime_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainLime_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainLime_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kitGL
} // end namespace glLime
} // end namespace setup
