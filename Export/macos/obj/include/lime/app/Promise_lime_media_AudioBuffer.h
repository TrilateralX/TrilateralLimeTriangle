// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_lime_app_Promise_lime_media_AudioBuffer
#define INCLUDED_lime_app_Promise_lime_media_AudioBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,app,Promise_lime_media_AudioBuffer)
HX_DECLARE_CLASS2(lime,media,AudioBuffer)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES Promise_lime_media_AudioBuffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Promise_lime_media_AudioBuffer_obj OBJ_;
		Promise_lime_media_AudioBuffer_obj();

	public:
		enum { _hx_ClassId = 0x3a0348b9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.app.Promise_lime_media_AudioBuffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.app.Promise_lime_media_AudioBuffer"); }
		static ::hx::ObjectPtr< Promise_lime_media_AudioBuffer_obj > __new();
		static ::hx::ObjectPtr< Promise_lime_media_AudioBuffer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Promise_lime_media_AudioBuffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Promise_lime_media_AudioBuffer",d5,fd,ab,8d); }

		 ::lime::app::Future future;
		bool isComplete;
		bool isError;
		 ::lime::app::Promise_lime_media_AudioBuffer complete( ::lime::media::AudioBuffer data);
		::Dynamic complete_dyn();

		 ::lime::app::Promise_lime_media_AudioBuffer completeWith( ::lime::app::Future future);
		::Dynamic completeWith_dyn();

		 ::lime::app::Promise_lime_media_AudioBuffer error( ::Dynamic msg);
		::Dynamic error_dyn();

		 ::lime::app::Promise_lime_media_AudioBuffer progress(int progress,int total);
		::Dynamic progress_dyn();

		bool get_isComplete();
		::Dynamic get_isComplete_dyn();

		bool get_isError();
		::Dynamic get_isError_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Promise_lime_media_AudioBuffer */ 
