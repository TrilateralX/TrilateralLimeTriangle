// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_format_BMP
#include <lime/_internal/format/BMP.h>
#endif
#ifndef INCLUDED_lime__internal_format_BMPType
#include <lime/_internal/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b7d25674645dcbd1_14_encode,"lime._internal.format.BMP","encode",0xed49c7eb,"lime._internal.format.BMP.encode","lime/_internal/format/BMP.hx",14,0x5d470ca4)
namespace lime{
namespace _internal{
namespace format{

void BMP_obj::__construct() { }

Dynamic BMP_obj::__CreateEmpty() { return new BMP_obj; }

void *BMP_obj::_hx_vtable = 0;

Dynamic BMP_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BMP_obj > _hx_result = new BMP_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BMP_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x134aaeeb;
}

 ::haxe::io::Bytes BMP_obj::encode( ::lime::graphics::Image image, ::lime::_internal::format::BMPType type){
            	HX_GC_STACKFRAME(&_hx_pos_b7d25674645dcbd1_14_encode)
HXLINE(  15)		bool _hx_tmp;
HXDLIN(  15)		if (!(image->get_premultiplied())) {
HXLINE(  15)			_hx_tmp = (image->get_format() != 0);
            		}
            		else {
HXLINE(  15)			_hx_tmp = true;
            		}
HXDLIN(  15)		if (_hx_tmp) {
HXLINE(  19)			image = image->clone();
HXLINE(  20)			image->set_premultiplied(false);
HXLINE(  21)			image->set_format(0);
            		}
HXLINE(  24)		if (::hx::IsNull( type )) {
HXLINE(  26)			type = ::lime::_internal::format::BMPType_obj::RGB_dyn();
            		}
HXLINE(  29)		int fileHeaderLength = 14;
HXLINE(  30)		int infoHeaderLength = 40;
HXLINE(  31)		int pixelValuesLength = ((image->width * image->height) * 4);
HXLINE(  33)		if (::hx::IsNotNull( type )) {
HXLINE(  33)			switch((int)(type->_hx_getIndex())){
            				case (int)0: {
HXLINE(  43)					pixelValuesLength = (((image->width * 3) + ::hx::Mod((image->width * 3),4)) * image->height);
            				}
            				break;
            				case (int)1: {
HXLINE(  36)					infoHeaderLength = 108;
            				}
            				break;
            				case (int)2: {
HXLINE(  39)					fileHeaderLength = 0;
HXLINE(  40)					pixelValuesLength = (pixelValuesLength + (image->width * image->height));
            				}
            				break;
            			}
            		}
HXLINE(  48)		 ::haxe::io::Bytes data = ::haxe::io::Bytes_obj::alloc(((fileHeaderLength + infoHeaderLength) + pixelValuesLength));
HXLINE(  49)		int position = 0;
HXLINE(  51)		if ((fileHeaderLength > 0)) {
HXLINE(  53)			{
HXLINE(  53)				position = (position + 1);
HXDLIN(  53)				data->b[(position - 1)] = ( (unsigned char)(66) );
            			}
HXLINE(  54)			{
HXLINE(  54)				position = (position + 1);
HXDLIN(  54)				data->b[(position - 1)] = ( (unsigned char)(77) );
            			}
HXLINE(  55)			{
HXLINE(  55)				int v = data->length;
HXDLIN(  55)				data->b[position] = ( (unsigned char)((v & 255)) );
HXDLIN(  55)				data->b[(position + 1)] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN(  55)				data->b[(position + 2)] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN(  55)				data->b[(position + 3)] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            			}
HXLINE(  56)			position = (position + 4);
HXLINE(  57)			{
HXLINE(  57)				data->b[position] = ( (unsigned char)(0) );
HXDLIN(  57)				data->b[(position + 1)] = ( (unsigned char)(0) );
            			}
HXLINE(  58)			position = (position + 2);
HXLINE(  59)			{
HXLINE(  59)				data->b[position] = ( (unsigned char)(0) );
HXDLIN(  59)				data->b[(position + 1)] = ( (unsigned char)(0) );
            			}
HXLINE(  60)			position = (position + 2);
HXLINE(  61)			{
HXLINE(  61)				int v1 = (fileHeaderLength + infoHeaderLength);
HXDLIN(  61)				data->b[position] = ( (unsigned char)((v1 & 255)) );
HXDLIN(  61)				data->b[(position + 1)] = ( (unsigned char)(((v1 >> 8) & 255)) );
HXDLIN(  61)				data->b[(position + 2)] = ( (unsigned char)(((v1 >> 16) & 255)) );
HXDLIN(  61)				data->b[(position + 3)] = ( (unsigned char)((::hx::UShr(v1,24) & 255)) );
            			}
HXLINE(  62)			position = (position + 4);
            		}
HXLINE(  65)		{
HXLINE(  65)			data->b[position] = ( (unsigned char)((infoHeaderLength & 255)) );
HXDLIN(  65)			data->b[(position + 1)] = ( (unsigned char)(((infoHeaderLength >> 8) & 255)) );
HXDLIN(  65)			data->b[(position + 2)] = ( (unsigned char)(((infoHeaderLength >> 16) & 255)) );
HXDLIN(  65)			data->b[(position + 3)] = ( (unsigned char)((::hx::UShr(infoHeaderLength,24) & 255)) );
            		}
HXLINE(  66)		position = (position + 4);
HXLINE(  67)		{
HXLINE(  67)			int v = image->width;
HXDLIN(  67)			data->b[position] = ( (unsigned char)((v & 255)) );
HXDLIN(  67)			data->b[(position + 1)] = ( (unsigned char)(((v >> 8) & 255)) );
HXDLIN(  67)			data->b[(position + 2)] = ( (unsigned char)(((v >> 16) & 255)) );
HXDLIN(  67)			data->b[(position + 3)] = ( (unsigned char)((::hx::UShr(v,24) & 255)) );
            		}
HXLINE(  68)		position = (position + 4);
HXLINE(  69)		{
HXLINE(  69)			int v1;
HXDLIN(  69)			if (::hx::IsPointerEq( type,::lime::_internal::format::BMPType_obj::ICO_dyn() )) {
HXLINE(  69)				v1 = (image->height * 2);
            			}
            			else {
HXLINE(  69)				v1 = image->height;
            			}
HXDLIN(  69)			data->b[position] = ( (unsigned char)((v1 & 255)) );
HXDLIN(  69)			data->b[(position + 1)] = ( (unsigned char)(((v1 >> 8) & 255)) );
HXDLIN(  69)			data->b[(position + 2)] = ( (unsigned char)(((v1 >> 16) & 255)) );
HXDLIN(  69)			data->b[(position + 3)] = ( (unsigned char)((::hx::UShr(v1,24) & 255)) );
            		}
HXLINE(  70)		position = (position + 4);
HXLINE(  71)		{
HXLINE(  71)			data->b[position] = ( (unsigned char)(1) );
HXDLIN(  71)			data->b[(position + 1)] = ( (unsigned char)(0) );
            		}
HXLINE(  72)		position = (position + 2);
HXLINE(  73)		{
HXLINE(  73)			int v2;
HXDLIN(  73)			if (::hx::IsPointerEq( type,::lime::_internal::format::BMPType_obj::RGB_dyn() )) {
HXLINE(  73)				v2 = 24;
            			}
            			else {
HXLINE(  73)				v2 = 32;
            			}
HXDLIN(  73)			data->b[position] = ( (unsigned char)(v2) );
HXDLIN(  73)			data->b[(position + 1)] = ( (unsigned char)((v2 >> 8)) );
            		}
HXLINE(  74)		position = (position + 2);
HXLINE(  75)		{
HXLINE(  75)			int v3;
HXDLIN(  75)			if (::hx::IsPointerEq( type,::lime::_internal::format::BMPType_obj::BITFIELD_dyn() )) {
HXLINE(  75)				v3 = 3;
            			}
            			else {
HXLINE(  75)				v3 = 0;
            			}
HXDLIN(  75)			data->b[position] = ( (unsigned char)((v3 & 255)) );
HXDLIN(  75)			data->b[(position + 1)] = ( (unsigned char)(((v3 >> 8) & 255)) );
HXDLIN(  75)			data->b[(position + 2)] = ( (unsigned char)(((v3 >> 16) & 255)) );
HXDLIN(  75)			data->b[(position + 3)] = ( (unsigned char)((::hx::UShr(v3,24) & 255)) );
            		}
HXLINE(  76)		position = (position + 4);
HXLINE(  77)		{
HXLINE(  77)			data->b[position] = ( (unsigned char)((pixelValuesLength & 255)) );
HXDLIN(  77)			data->b[(position + 1)] = ( (unsigned char)(((pixelValuesLength >> 8) & 255)) );
HXDLIN(  77)			data->b[(position + 2)] = ( (unsigned char)(((pixelValuesLength >> 16) & 255)) );
HXDLIN(  77)			data->b[(position + 3)] = ( (unsigned char)((::hx::UShr(pixelValuesLength,24) & 255)) );
            		}
HXLINE(  78)		position = (position + 4);
HXLINE(  79)		{
HXLINE(  79)			data->b[position] = ( (unsigned char)(48) );
HXDLIN(  79)			data->b[(position + 1)] = ( (unsigned char)(46) );
HXDLIN(  79)			data->b[(position + 2)] = ( (unsigned char)(0) );
HXDLIN(  79)			data->b[(position + 3)] = ( (unsigned char)(0) );
            		}
HXLINE(  80)		position = (position + 4);
HXLINE(  81)		{
HXLINE(  81)			data->b[position] = ( (unsigned char)(48) );
HXDLIN(  81)			data->b[(position + 1)] = ( (unsigned char)(46) );
HXDLIN(  81)			data->b[(position + 2)] = ( (unsigned char)(0) );
HXDLIN(  81)			data->b[(position + 3)] = ( (unsigned char)(0) );
            		}
HXLINE(  82)		position = (position + 4);
HXLINE(  83)		{
HXLINE(  83)			data->b[position] = ( (unsigned char)(0) );
HXDLIN(  83)			data->b[(position + 1)] = ( (unsigned char)(0) );
HXDLIN(  83)			data->b[(position + 2)] = ( (unsigned char)(0) );
HXDLIN(  83)			data->b[(position + 3)] = ( (unsigned char)(0) );
            		}
HXLINE(  84)		position = (position + 4);
HXLINE(  85)		{
HXLINE(  85)			data->b[position] = ( (unsigned char)(0) );
HXDLIN(  85)			data->b[(position + 1)] = ( (unsigned char)(0) );
HXDLIN(  85)			data->b[(position + 2)] = ( (unsigned char)(0) );
HXDLIN(  85)			data->b[(position + 3)] = ( (unsigned char)(0) );
            		}
HXLINE(  86)		position = (position + 4);
HXLINE(  88)		if (::hx::IsPointerEq( type,::lime::_internal::format::BMPType_obj::BITFIELD_dyn() )) {
HXLINE(  90)			{
HXLINE(  90)				data->b[position] = ( (unsigned char)(0) );
HXDLIN(  90)				data->b[(position + 1)] = ( (unsigned char)(0) );
HXDLIN(  90)				data->b[(position + 2)] = ( (unsigned char)(255) );
HXDLIN(  90)				data->b[(position + 3)] = ( (unsigned char)(0) );
            			}
HXLINE(  91)			position = (position + 4);
HXLINE(  92)			{
HXLINE(  92)				data->b[position] = ( (unsigned char)(0) );
HXDLIN(  92)				data->b[(position + 1)] = ( (unsigned char)(255) );
HXDLIN(  92)				data->b[(position + 2)] = ( (unsigned char)(0) );
HXDLIN(  92)				data->b[(position + 3)] = ( (unsigned char)(0) );
            			}
HXLINE(  93)			position = (position + 4);
HXLINE(  94)			{
HXLINE(  94)				data->b[position] = ( (unsigned char)(255) );
HXDLIN(  94)				data->b[(position + 1)] = ( (unsigned char)(0) );
HXDLIN(  94)				data->b[(position + 2)] = ( (unsigned char)(0) );
HXDLIN(  94)				data->b[(position + 3)] = ( (unsigned char)(0) );
            			}
HXLINE(  95)			position = (position + 4);
HXLINE(  96)			{
HXLINE(  96)				data->b[position] = ( (unsigned char)(0) );
HXDLIN(  96)				data->b[(position + 1)] = ( (unsigned char)(0) );
HXDLIN(  96)				data->b[(position + 2)] = ( (unsigned char)(0) );
HXDLIN(  96)				data->b[(position + 3)] = ( (unsigned char)(255) );
            			}
HXLINE(  97)			position = (position + 4);
HXLINE(  99)			{
HXLINE(  99)				position = (position + 1);
HXDLIN(  99)				data->b[(position - 1)] = ( (unsigned char)(32) );
            			}
HXLINE( 100)			{
HXLINE( 100)				position = (position + 1);
HXDLIN( 100)				data->b[(position - 1)] = ( (unsigned char)(110) );
            			}
HXLINE( 101)			{
HXLINE( 101)				position = (position + 1);
HXDLIN( 101)				data->b[(position - 1)] = ( (unsigned char)(105) );
            			}
HXLINE( 102)			{
HXLINE( 102)				position = (position + 1);
HXDLIN( 102)				data->b[(position - 1)] = ( (unsigned char)(87) );
            			}
HXLINE( 104)			{
HXLINE( 104)				int _g = 0;
HXDLIN( 104)				while((_g < 48)){
HXLINE( 104)					_g = (_g + 1);
HXDLIN( 104)					int i = (_g - 1);
HXLINE( 106)					{
HXLINE( 106)						position = (position + 1);
HXDLIN( 106)						data->b[(position - 1)] = ( (unsigned char)(0) );
            					}
            				}
            			}
            		}
HXLINE( 110)		 ::haxe::io::Bytes pixels = image->getPixels( ::lime::math::Rectangle_obj::__alloc( HX_CTX ,0,0,image->width,image->height),1);
HXLINE( 111)		int readPosition = 0;
HXLINE( 112)		int a;
HXDLIN( 112)		int r;
HXDLIN( 112)		int g;
HXDLIN( 112)		int b;
HXLINE( 114)		if (::hx::IsNotNull( type )) {
HXLINE( 114)			switch((int)(type->_hx_getIndex())){
            				case (int)0: {
HXLINE( 170)					int _g = 0;
HXDLIN( 170)					int _g1 = image->height;
HXDLIN( 170)					while((_g < _g1)){
HXLINE( 170)						_g = (_g + 1);
HXDLIN( 170)						int y = (_g - 1);
HXLINE( 172)						readPosition = ((((image->height - 1) - y) * 4) * image->width);
HXLINE( 174)						{
HXLINE( 174)							int _g1 = 0;
HXDLIN( 174)							int _g2 = image->width;
HXDLIN( 174)							while((_g1 < _g2)){
HXLINE( 174)								_g1 = (_g1 + 1);
HXDLIN( 174)								int x = (_g1 - 1);
HXLINE( 176)								readPosition = (readPosition + 1);
HXDLIN( 176)								a = ( (int)(pixels->b->__get((readPosition - 1))) );
HXLINE( 177)								readPosition = (readPosition + 1);
HXDLIN( 177)								r = ( (int)(pixels->b->__get((readPosition - 1))) );
HXLINE( 178)								readPosition = (readPosition + 1);
HXDLIN( 178)								g = ( (int)(pixels->b->__get((readPosition - 1))) );
HXLINE( 179)								readPosition = (readPosition + 1);
HXDLIN( 179)								b = ( (int)(pixels->b->__get((readPosition - 1))) );
HXLINE( 181)								{
HXLINE( 181)									position = (position + 1);
HXDLIN( 181)									data->b[(position - 1)] = ( (unsigned char)(b) );
            								}
HXLINE( 182)								{
HXLINE( 182)									position = (position + 1);
HXDLIN( 182)									data->b[(position - 1)] = ( (unsigned char)(g) );
            								}
HXLINE( 183)								{
HXLINE( 183)									position = (position + 1);
HXDLIN( 183)									data->b[(position - 1)] = ( (unsigned char)(r) );
            								}
            							}
            						}
HXLINE( 186)						{
HXLINE( 186)							int _g3 = 0;
HXDLIN( 186)							int _g4 = ::hx::Mod((image->width * 3),4);
HXDLIN( 186)							while((_g3 < _g4)){
HXLINE( 186)								_g3 = (_g3 + 1);
HXDLIN( 186)								int i = (_g3 - 1);
HXLINE( 188)								{
HXLINE( 188)									position = (position + 1);
HXDLIN( 188)									data->b[(position - 1)] = ( (unsigned char)(0) );
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 117)					int _g = 0;
HXDLIN( 117)					int _g1 = image->height;
HXDLIN( 117)					while((_g < _g1)){
HXLINE( 117)						_g = (_g + 1);
HXDLIN( 117)						int y = (_g - 1);
HXLINE( 119)						readPosition = ((((image->height - 1) - y) * 4) * image->width);
HXLINE( 121)						{
HXLINE( 121)							int _g1 = 0;
HXDLIN( 121)							int _g2 = image->width;
HXDLIN( 121)							while((_g1 < _g2)){
HXLINE( 121)								_g1 = (_g1 + 1);
HXDLIN( 121)								int x = (_g1 - 1);
HXLINE( 123)								readPosition = (readPosition + 1);
HXDLIN( 123)								a = ( (int)(pixels->b->__get((readPosition - 1))) );
HXLINE( 124)								readPosition = (readPosition + 1);
HXDLIN( 124)								r = ( (int)(pixels->b->__get((readPosition - 1))) );
HXLINE( 125)								readPosition = (readPosition + 1);
HXDLIN( 125)								g = ( (int)(pixels->b->__get((readPosition - 1))) );
HXLINE( 126)								readPosition = (readPosition + 1);
HXDLIN( 126)								b = ( (int)(pixels->b->__get((readPosition - 1))) );
HXLINE( 128)								{
HXLINE( 128)									position = (position + 1);
HXDLIN( 128)									data->b[(position - 1)] = ( (unsigned char)(b) );
            								}
HXLINE( 129)								{
HXLINE( 129)									position = (position + 1);
HXDLIN( 129)									data->b[(position - 1)] = ( (unsigned char)(g) );
            								}
HXLINE( 130)								{
HXLINE( 130)									position = (position + 1);
HXDLIN( 130)									data->b[(position - 1)] = ( (unsigned char)(r) );
            								}
HXLINE( 131)								{
HXLINE( 131)									position = (position + 1);
HXDLIN( 131)									data->b[(position - 1)] = ( (unsigned char)(a) );
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 136)					 ::haxe::io::Bytes andMask = ::haxe::io::Bytes_obj::alloc((image->width * image->height));
HXLINE( 137)					int maskPosition = 0;
HXLINE( 139)					{
HXLINE( 139)						int _g = 0;
HXDLIN( 139)						int _g1 = image->height;
HXDLIN( 139)						while((_g < _g1)){
HXLINE( 139)							_g = (_g + 1);
HXDLIN( 139)							int y = (_g - 1);
HXLINE( 141)							readPosition = ((((image->height - 1) - y) * 4) * image->width);
HXLINE( 143)							{
HXLINE( 143)								int _g1 = 0;
HXDLIN( 143)								int _g2 = image->width;
HXDLIN( 143)								while((_g1 < _g2)){
HXLINE( 143)									_g1 = (_g1 + 1);
HXDLIN( 143)									int x = (_g1 - 1);
HXLINE( 145)									readPosition = (readPosition + 1);
HXDLIN( 145)									a = ( (int)(pixels->b->__get((readPosition - 1))) );
HXLINE( 146)									readPosition = (readPosition + 1);
HXDLIN( 146)									r = ( (int)(pixels->b->__get((readPosition - 1))) );
HXLINE( 147)									readPosition = (readPosition + 1);
HXDLIN( 147)									g = ( (int)(pixels->b->__get((readPosition - 1))) );
HXLINE( 148)									readPosition = (readPosition + 1);
HXDLIN( 148)									b = ( (int)(pixels->b->__get((readPosition - 1))) );
HXLINE( 150)									{
HXLINE( 150)										position = (position + 1);
HXDLIN( 150)										data->b[(position - 1)] = ( (unsigned char)(b) );
            									}
HXLINE( 151)									{
HXLINE( 151)										position = (position + 1);
HXDLIN( 151)										data->b[(position - 1)] = ( (unsigned char)(g) );
            									}
HXLINE( 152)									{
HXLINE( 152)										position = (position + 1);
HXDLIN( 152)										data->b[(position - 1)] = ( (unsigned char)(r) );
            									}
HXLINE( 153)									{
HXLINE( 153)										position = (position + 1);
HXDLIN( 153)										data->b[(position - 1)] = ( (unsigned char)(a) );
            									}
HXLINE( 161)									{
HXLINE( 161)										maskPosition = (maskPosition + 1);
HXDLIN( 161)										andMask->b[(maskPosition - 1)] = ( (unsigned char)(0) );
            									}
            								}
            							}
            						}
            					}
HXLINE( 167)					data->blit(position,andMask,0,(image->width * image->height));
            				}
            				break;
            			}
            		}
HXLINE( 195)		return data;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BMP_obj,encode,return )


BMP_obj::BMP_obj()
{
}

bool BMP_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BMP_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BMP_obj_sStaticStorageInfo = 0;
#endif

::hx::Class BMP_obj::__mClass;

static ::String BMP_obj_sStaticFields[] = {
	HX_("encode",16,f2,e3,f9),
	::String(null())
};

void BMP_obj::__register()
{
	BMP_obj _hx_dummy;
	BMP_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.format.BMP",f9,a1,cc,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMP_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BMP_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BMP_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMP_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMP_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace format
