// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_lime_system_JNIMemberField
#include <lime/system/JNIMemberField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6a03f50885e20814_200_new,"lime.system.JNIMemberField","new",0x7a00f0f3,"lime.system.JNIMemberField.new","lime/system/JNI.hx",200,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_6a03f50885e20814_208_get,"lime.system.JNIMemberField","get",0x79fba129,"lime.system.JNIMemberField.get","lime/system/JNI.hx",208,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_6a03f50885e20814_217_set,"lime.system.JNIMemberField","set",0x7a04bc35,"lime.system.JNIMemberField.set","lime/system/JNI.hx",217,0x21970b7f)
namespace lime{
namespace _hx_system{

void JNIMemberField_obj::__construct( ::Dynamic field){
            	HX_STACKFRAME(&_hx_pos_6a03f50885e20814_200_new)
HXDLIN( 200)		this->field = field;
            	}

Dynamic JNIMemberField_obj::__CreateEmpty() { return new JNIMemberField_obj; }

void *JNIMemberField_obj::_hx_vtable = 0;

Dynamic JNIMemberField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JNIMemberField_obj > _hx_result = new JNIMemberField_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool JNIMemberField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d81b83f;
}

 ::Dynamic JNIMemberField_obj::get( ::Dynamic jobject){
            	HX_STACKFRAME(&_hx_pos_6a03f50885e20814_208_get)
HXDLIN( 208)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(JNIMemberField_obj,get,return )

 ::Dynamic JNIMemberField_obj::set( ::Dynamic jobject, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_6a03f50885e20814_217_set)
HXDLIN( 217)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(JNIMemberField_obj,set,return )


JNIMemberField_obj::JNIMemberField_obj()
{
}

void JNIMemberField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIMemberField);
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_END_CLASS();
}

void JNIMemberField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(field,"field");
}

::hx::Val JNIMemberField_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return ::hx::Val( field ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val JNIMemberField_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JNIMemberField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("field",ba,94,93,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo JNIMemberField_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(JNIMemberField_obj,field),HX_("field",ba,94,93,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *JNIMemberField_obj_sStaticStorageInfo = 0;
#endif

static ::String JNIMemberField_obj_sMemberFields[] = {
	HX_("field",ba,94,93,00),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class JNIMemberField_obj::__mClass;

void JNIMemberField_obj::__register()
{
	JNIMemberField_obj _hx_dummy;
	JNIMemberField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.JNIMemberField",81,fb,fa,fb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(JNIMemberField_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< JNIMemberField_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JNIMemberField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JNIMemberField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
