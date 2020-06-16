// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_app__Future_FutureWork
#include <lime/app/_Future/FutureWork.h>
#endif
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_07b7a29bdf563898_326_queue,"lime.app._Future.FutureWork","queue",0x91987fc9,"lime.app._Future.FutureWork.queue","lime/app/Future.hx",326,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_07b7a29bdf563898_341_threadPool_doWork,"lime.app._Future.FutureWork","threadPool_doWork",0x0c558ecd,"lime.app._Future.FutureWork.threadPool_doWork","lime/app/Future.hx",341,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_07b7a29bdf563898_354_threadPool_onComplete,"lime.app._Future.FutureWork","threadPool_onComplete",0x6b927949,"lime.app._Future.FutureWork.threadPool_onComplete","lime/app/Future.hx",354,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_07b7a29bdf563898_359_threadPool_onError,"lime.app._Future.FutureWork","threadPool_onError",0xc65d5938,"lime.app._Future.FutureWork.threadPool_onError","lime/app/Future.hx",359,0x058e0853)
namespace lime{
namespace app{
namespace _Future{

void FutureWork_obj::__construct() { }

Dynamic FutureWork_obj::__CreateEmpty() { return new FutureWork_obj; }

void *FutureWork_obj::_hx_vtable = 0;

Dynamic FutureWork_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FutureWork_obj > _hx_result = new FutureWork_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FutureWork_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08b8856a;
}

 ::lime::_hx_system::ThreadPool FutureWork_obj::threadPool;

void FutureWork_obj::queue( ::Dynamic state){
            	HX_GC_STACKFRAME(&_hx_pos_07b7a29bdf563898_326_queue)
HXLINE( 327)		if (::hx::IsNull( ::lime::app::_Future::FutureWork_obj::threadPool )) {
HXLINE( 329)			::lime::app::_Future::FutureWork_obj::threadPool =  ::lime::_hx_system::ThreadPool_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 330)			::lime::app::_Future::FutureWork_obj::threadPool->doWork->add(::lime::app::_Future::FutureWork_obj::threadPool_doWork_dyn(),null(),null());
HXLINE( 331)			::lime::app::_Future::FutureWork_obj::threadPool->onComplete->add(::lime::app::_Future::FutureWork_obj::threadPool_onComplete_dyn(),null(),null());
HXLINE( 332)			::lime::app::_Future::FutureWork_obj::threadPool->onError->add(::lime::app::_Future::FutureWork_obj::threadPool_onError_dyn(),null(),null());
            		}
HXLINE( 335)		::lime::app::_Future::FutureWork_obj::threadPool->queue(state);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,queue,(void))

void FutureWork_obj::threadPool_doWork( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_07b7a29bdf563898_341_threadPool_doWork)
HXDLIN( 341)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 343)			 ::Dynamic result = state->__Field(HX_("work",d1,01,fd,4e),::hx::paccDynamic)();
HXLINE( 344)			::lime::app::_Future::FutureWork_obj::threadPool->sendComplete( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("promise",9b,cd,e9,f7), ::Dynamic(state->__Field(HX_("promise",9b,cd,e9,f7),::hx::paccDynamic)))
            				->setFixed(1,HX_("result",dd,68,84,08),result)));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(   1)				{
HXLINE(   1)					null();
            				}
HXDLIN(   1)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 348)				::lime::app::_Future::FutureWork_obj::threadPool->sendError( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("promise",9b,cd,e9,f7), ::Dynamic(state->__Field(HX_("promise",9b,cd,e9,f7),::hx::paccDynamic)))
            					->setFixed(1,HX_("error",c8,cb,29,73),e)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,threadPool_doWork,(void))

void FutureWork_obj::threadPool_onComplete( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_07b7a29bdf563898_354_threadPool_onComplete)
HXDLIN( 354)		 ::Dynamic(state->__Field(HX_("promise",9b,cd,e9,f7),::hx::paccDynamic))->__Field(HX_("complete",b9,00,c8,7f),::hx::paccDynamic)( ::Dynamic(state->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,threadPool_onComplete,(void))

void FutureWork_obj::threadPool_onError( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_07b7a29bdf563898_359_threadPool_onError)
HXDLIN( 359)		 ::Dynamic(state->__Field(HX_("promise",9b,cd,e9,f7),::hx::paccDynamic))->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic)( ::Dynamic(state->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,threadPool_onError,(void))


FutureWork_obj::FutureWork_obj()
{
}

bool FutureWork_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { outValue = queue_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"threadPool") ) { outValue = ( threadPool ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"threadPool_doWork") ) { outValue = threadPool_doWork_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"threadPool_onError") ) { outValue = threadPool_onError_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"threadPool_onComplete") ) { outValue = threadPool_onComplete_dyn(); return true; }
	}
	return false;
}

bool FutureWork_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"threadPool") ) { threadPool=ioValue.Cast<  ::lime::_hx_system::ThreadPool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FutureWork_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FutureWork_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::_hx_system::ThreadPool */ ,(void *) &FutureWork_obj::threadPool,HX_("threadPool",c6,54,25,46)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FutureWork_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FutureWork_obj::threadPool,"threadPool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FutureWork_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FutureWork_obj::threadPool,"threadPool");
};

#endif

::hx::Class FutureWork_obj::__mClass;

static ::String FutureWork_obj_sStaticFields[] = {
	HX_("threadPool",c6,54,25,46),
	HX_("queue",91,8d,ea,5d),
	HX_("threadPool_doWork",95,28,69,50),
	HX_("threadPool_onComplete",11,97,0a,2c),
	HX_("threadPool_onError",70,4e,70,13),
	::String(null())
};

void FutureWork_obj::__register()
{
	FutureWork_obj _hx_dummy;
	FutureWork_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.app._Future.FutureWork",a6,58,06,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FutureWork_obj::__GetStatic;
	__mClass->mSetStaticField = &FutureWork_obj::__SetStatic;
	__mClass->mMarkFunc = FutureWork_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FutureWork_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FutureWork_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FutureWork_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FutureWork_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FutureWork_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
} // end namespace _Future
