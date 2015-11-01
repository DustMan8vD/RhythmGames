#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_DebuggerLayout
#include <flixel/system/debug/DebuggerLayout.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

::flixel::_system::debug::DebuggerLayout DebuggerLayout_obj::BIG;

::flixel::_system::debug::DebuggerLayout DebuggerLayout_obj::LEFT;

::flixel::_system::debug::DebuggerLayout DebuggerLayout_obj::MICRO;

::flixel::_system::debug::DebuggerLayout DebuggerLayout_obj::RIGHT;

::flixel::_system::debug::DebuggerLayout DebuggerLayout_obj::STANDARD;

::flixel::_system::debug::DebuggerLayout DebuggerLayout_obj::TOP;

HX_DEFINE_CREATE_ENUM(DebuggerLayout_obj)

int DebuggerLayout_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BIG","\xa0","\x54","\x32","\x00")) return 2;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 4;
	if (inName==HX_HCSTRING("MICRO","\xe4","\x5c","\x4e","\x86")) return 1;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 5;
	if (inName==HX_HCSTRING("STANDARD","\x3d","\xc7","\xfd","\x43")) return 0;
	if (inName==HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")) return 3;
	return super::__FindIndex(inName);
}

int DebuggerLayout_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BIG","\xa0","\x54","\x32","\x00")) return 0;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 0;
	if (inName==HX_HCSTRING("MICRO","\xe4","\x5c","\x4e","\x86")) return 0;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 0;
	if (inName==HX_HCSTRING("STANDARD","\x3d","\xc7","\xfd","\x43")) return 0;
	if (inName==HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic DebuggerLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BIG","\xa0","\x54","\x32","\x00")) return BIG;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return LEFT;
	if (inName==HX_HCSTRING("MICRO","\xe4","\x5c","\x4e","\x86")) return MICRO;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return RIGHT;
	if (inName==HX_HCSTRING("STANDARD","\x3d","\xc7","\xfd","\x43")) return STANDARD;
	if (inName==HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")) return TOP;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("STANDARD","\x3d","\xc7","\xfd","\x43"),
	HX_HCSTRING("MICRO","\xe4","\x5c","\x4e","\x86"),
	HX_HCSTRING("BIG","\xa0","\x54","\x32","\x00"),
	HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebuggerLayout_obj::BIG,"BIG");
	HX_MARK_MEMBER_NAME(DebuggerLayout_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(DebuggerLayout_obj::MICRO,"MICRO");
	HX_MARK_MEMBER_NAME(DebuggerLayout_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(DebuggerLayout_obj::STANDARD,"STANDARD");
	HX_MARK_MEMBER_NAME(DebuggerLayout_obj::TOP,"TOP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebuggerLayout_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DebuggerLayout_obj::BIG,"BIG");
	HX_VISIT_MEMBER_NAME(DebuggerLayout_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(DebuggerLayout_obj::MICRO,"MICRO");
	HX_VISIT_MEMBER_NAME(DebuggerLayout_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(DebuggerLayout_obj::STANDARD,"STANDARD");
	HX_VISIT_MEMBER_NAME(DebuggerLayout_obj::TOP,"TOP");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class DebuggerLayout_obj::__mClass;

Dynamic __Create_DebuggerLayout_obj() { return new DebuggerLayout_obj; }

void DebuggerLayout_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.system.debug.DebuggerLayout","\x53","\xf0","\x62","\x55"), hx::TCanCast< DebuggerLayout_obj >,sStaticFields,sMemberFields,
	&__Create_DebuggerLayout_obj, &__Create,
	&super::__SGetClass(), &CreateDebuggerLayout_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void DebuggerLayout_obj::__boot()
{
hx::Static(BIG) = hx::CreateEnum< DebuggerLayout_obj >(HX_HCSTRING("BIG","\xa0","\x54","\x32","\x00"),2);
hx::Static(LEFT) = hx::CreateEnum< DebuggerLayout_obj >(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),4);
hx::Static(MICRO) = hx::CreateEnum< DebuggerLayout_obj >(HX_HCSTRING("MICRO","\xe4","\x5c","\x4e","\x86"),1);
hx::Static(RIGHT) = hx::CreateEnum< DebuggerLayout_obj >(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),5);
hx::Static(STANDARD) = hx::CreateEnum< DebuggerLayout_obj >(HX_HCSTRING("STANDARD","\x3d","\xc7","\xfd","\x43"),0);
hx::Static(TOP) = hx::CreateEnum< DebuggerLayout_obj >(HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),3);
}


} // end namespace flixel
} // end namespace system
} // end namespace debug
