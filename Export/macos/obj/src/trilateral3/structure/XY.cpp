// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_trilateral3_structure_XY
#include <trilateral3/structure/XY.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_188cfbeac1e70be9_6_new,"trilateral3.structure.XY","new",0xa8b4d795,"trilateral3.structure.XY.new","trilateral3/structure/XY.hx",6,0xab6e76f9)
namespace trilateral3{
namespace structure{

void XY_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_188cfbeac1e70be9_6_new)
HXLINE(   9)		this->w = ((Float)1.);
HXLINE(   8)		this->y = ((Float)0.);
HXLINE(   7)		this->x = ((Float)0.);
HXLINE(  11)		this->x = x;
HXLINE(  12)		this->y = y;
            	}

Dynamic XY_obj::__CreateEmpty() { return new XY_obj; }

void *XY_obj::_hx_vtable = 0;

Dynamic XY_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< XY_obj > _hx_result = new XY_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool XY_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3eb1434d;
}


XY_obj::XY_obj()
{
}

::hx::Val XY_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"w") ) { return ::hx::Val( w ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val XY_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void XY_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("w",77,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo XY_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(XY_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(XY_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(XY_obj,w),HX_("w",77,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *XY_obj_sStaticStorageInfo = 0;
#endif

static ::String XY_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("w",77,00,00,00),
	::String(null()) };

::hx::Class XY_obj::__mClass;

void XY_obj::__register()
{
	XY_obj _hx_dummy;
	XY_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("trilateral3.structure.XY",23,69,0a,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(XY_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< XY_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = XY_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = XY_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace trilateral3
} // end namespace structure
