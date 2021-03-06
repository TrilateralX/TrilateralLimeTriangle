// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_fracs_DifferencePreference
#include <fracs/DifferencePreference.h>
#endif
namespace fracs{

::fracs::DifferencePreference DifferencePreference_obj::ANTICLOCKWISE;

::fracs::DifferencePreference DifferencePreference_obj::CLOCKWISE;

::fracs::DifferencePreference DifferencePreference_obj::LARGE;

::fracs::DifferencePreference DifferencePreference_obj::SMALL;

bool DifferencePreference_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ANTICLOCKWISE",f0,91,62,14)) { outValue = DifferencePreference_obj::ANTICLOCKWISE; return true; }
	if (inName==HX_("CLOCKWISE",d2,ed,f7,37)) { outValue = DifferencePreference_obj::CLOCKWISE; return true; }
	if (inName==HX_("LARGE",9b,6b,a9,ed)) { outValue = DifferencePreference_obj::LARGE; return true; }
	if (inName==HX_("SMALL",a7,28,59,fd)) { outValue = DifferencePreference_obj::SMALL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(DifferencePreference_obj)

int DifferencePreference_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ANTICLOCKWISE",f0,91,62,14)) return 1;
	if (inName==HX_("CLOCKWISE",d2,ed,f7,37)) return 0;
	if (inName==HX_("LARGE",9b,6b,a9,ed)) return 3;
	if (inName==HX_("SMALL",a7,28,59,fd)) return 2;
	return super::__FindIndex(inName);
}

int DifferencePreference_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ANTICLOCKWISE",f0,91,62,14)) return 0;
	if (inName==HX_("CLOCKWISE",d2,ed,f7,37)) return 0;
	if (inName==HX_("LARGE",9b,6b,a9,ed)) return 0;
	if (inName==HX_("SMALL",a7,28,59,fd)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val DifferencePreference_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ANTICLOCKWISE",f0,91,62,14)) return ANTICLOCKWISE;
	if (inName==HX_("CLOCKWISE",d2,ed,f7,37)) return CLOCKWISE;
	if (inName==HX_("LARGE",9b,6b,a9,ed)) return LARGE;
	if (inName==HX_("SMALL",a7,28,59,fd)) return SMALL;
	return super::__Field(inName,inCallProp);
}

static ::String DifferencePreference_obj_sStaticFields[] = {
	HX_("CLOCKWISE",d2,ed,f7,37),
	HX_("ANTICLOCKWISE",f0,91,62,14),
	HX_("SMALL",a7,28,59,fd),
	HX_("LARGE",9b,6b,a9,ed),
	::String(null())
};

::hx::Class DifferencePreference_obj::__mClass;

Dynamic __Create_DifferencePreference_obj() { return new DifferencePreference_obj; }

void DifferencePreference_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("fracs.DifferencePreference",61,83,5c,d6), ::hx::TCanCast< DifferencePreference_obj >,DifferencePreference_obj_sStaticFields,0,
	&__Create_DifferencePreference_obj, &__Create,
	&super::__SGetClass(), &CreateDifferencePreference_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &DifferencePreference_obj::__GetStatic;
}

void DifferencePreference_obj::__boot()
{
ANTICLOCKWISE = ::hx::CreateConstEnum< DifferencePreference_obj >(HX_("ANTICLOCKWISE",f0,91,62,14),1);
CLOCKWISE = ::hx::CreateConstEnum< DifferencePreference_obj >(HX_("CLOCKWISE",d2,ed,f7,37),0);
LARGE = ::hx::CreateConstEnum< DifferencePreference_obj >(HX_("LARGE",9b,6b,a9,ed),3);
SMALL = ::hx::CreateConstEnum< DifferencePreference_obj >(HX_("SMALL",a7,28,59,fd),2);
}


} // end namespace fracs
