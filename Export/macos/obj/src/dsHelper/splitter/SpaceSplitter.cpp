// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_dsHelper_splitter_SpaceSplitter
#include <dsHelper/splitter/SpaceSplitter.h>
#endif
#ifndef INCLUDED_dsHelper_splitter_StringCodeIterator
#include <dsHelper/splitter/StringCodeIterator.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a78061dff512afe1_6_parse,"dsHelper.splitter.SpaceSplitter","parse",0x1713db1c,"dsHelper.splitter.SpaceSplitter.parse","dsHelper/splitter/SpaceSplitter.hx",6,0x89844c67)
namespace dsHelper{
namespace splitter{

void SpaceSplitter_obj::__construct() { }

Dynamic SpaceSplitter_obj::__CreateEmpty() { return new SpaceSplitter_obj; }

void *SpaceSplitter_obj::_hx_vtable = 0;

Dynamic SpaceSplitter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SpaceSplitter_obj > _hx_result = new SpaceSplitter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SpaceSplitter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d0776a1;
}

::Array< ::Dynamic> SpaceSplitter_obj::parse(::String str){
            	HX_GC_STACKFRAME(&_hx_pos_a78061dff512afe1_6_parse)
HXLINE(   7)		 ::dsHelper::splitter::StringCodeIterator sl =  ::dsHelper::splitter::StringCodeIterator_obj::__alloc( HX_CTX ,str,null());
HXLINE(   8)		sl->c = sl->str.cca(sl->pos++);
HXLINE(   9)		::Array< ::Dynamic> arr = ::Array_obj< ::Dynamic>::__new();
HXLINE(  10)		::Array< ::String > arrTemp = ::Array_obj< ::String >::__new();
HXLINE(  11)		int no = 0;
HXLINE(  12)		int count = 0;
HXLINE(  13)		while((sl->pos < sl->length)){
HXLINE(  14)			switch((int)(sl->c)){
            				case (int)10: case (int)13: {
HXLINE(  16)					sl->last2 = sl->last;
HXDLIN(  16)					sl->last = sl->b->toString();
HXDLIN(  16)					arrTemp[count] = sl->last;
HXLINE(  17)					no = (no + 1);
HXDLIN(  17)					arr[(no - 1)] = arrTemp->copy();
HXLINE(  18)					count = 0;
HXLINE(  19)					sl->b =  ::StringBuf_obj::__alloc( HX_CTX );
            				}
            				break;
            				case (int)32: {
HXLINE(  21)					if ((count == 0)) {
HXLINE(  23)						arrTemp->resize(0);
HXLINE(  24)						sl->last2 = sl->last;
HXDLIN(  24)						sl->last = sl->b->toString();
HXDLIN(  24)						arrTemp[0] = sl->last;
            					}
            					else {
HXLINE(  26)						sl->last2 = sl->last;
HXDLIN(  26)						sl->last = sl->b->toString();
HXDLIN(  26)						arrTemp[count] = sl->last;
            					}
HXLINE(  28)					count = (count + 1);
HXLINE(  29)					sl->b =  ::StringBuf_obj::__alloc( HX_CTX );
            				}
            				break;
            				default:{
HXLINE(  31)					 ::StringBuf _this = sl->b;
HXDLIN(  31)					int c = sl->c;
HXDLIN(  31)					if ((c >= 127)) {
HXLINE(  31)						::String x = ::String::fromCharCode(c);
HXDLIN(  31)						if (::hx::IsNotNull( _this->charBuf )) {
HXLINE(  31)							_this->flush();
            						}
HXDLIN(  31)						if (::hx::IsNull( _this->b )) {
HXLINE(  31)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE(  31)							::Array< ::String > _this1 = _this->b;
HXDLIN(  31)							_this1->push(::Std_obj::string(x));
            						}
            					}
            					else {
HXLINE(  31)						if (::hx::IsNull( _this->charBuf )) {
HXLINE(  31)							_this->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(  31)						_this->charBuf->push(c);
            					}
            				}
            			}
HXLINE(  33)			sl->c = sl->str.cca(sl->pos++);
            		}
HXLINE(  35)		return arr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SpaceSplitter_obj,parse,return )


SpaceSplitter_obj::SpaceSplitter_obj()
{
}

bool SpaceSplitter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SpaceSplitter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SpaceSplitter_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SpaceSplitter_obj::__mClass;

static ::String SpaceSplitter_obj_sStaticFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null())
};

void SpaceSplitter_obj::__register()
{
	SpaceSplitter_obj _hx_dummy;
	SpaceSplitter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("dsHelper.splitter.SpaceSplitter",97,26,0a,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SpaceSplitter_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SpaceSplitter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SpaceSplitter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SpaceSplitter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SpaceSplitter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace dsHelper
} // end namespace splitter