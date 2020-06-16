// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_lime_system_Sensor
#define INCLUDED_lime_system_Sensor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(lime,app,_Event_Float_Float_Float_Void)
HX_DECLARE_CLASS2(lime,_hx_system,Sensor)
HX_DECLARE_CLASS2(lime,_hx_system,SensorType)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES Sensor_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Sensor_obj OBJ_;
		Sensor_obj();

	public:
		enum { _hx_ClassId = 0x6947ed9e };

		void __construct( ::lime::_hx_system::SensorType type,int id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.system.Sensor")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.system.Sensor"); }
		static ::hx::ObjectPtr< Sensor_obj > __new( ::lime::_hx_system::SensorType type,int id);
		static ::hx::ObjectPtr< Sensor_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::_hx_system::SensorType type,int id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Sensor_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Sensor",5a,a6,24,a0); }

		static void __boot();
		static  ::haxe::ds::IntMap sensorByID;
		static ::Array< ::Dynamic> sensors;
		static ::Array< ::Dynamic> getSensors( ::lime::_hx_system::SensorType type);
		static ::Dynamic getSensors_dyn();

		static  ::lime::_hx_system::Sensor registerSensor( ::lime::_hx_system::SensorType type,int id);
		static ::Dynamic registerSensor_dyn();

		int id;
		 ::lime::app::_Event_Float_Float_Float_Void onUpdate;
		 ::lime::_hx_system::SensorType type;
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_Sensor */ 
