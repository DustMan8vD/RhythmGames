#ifndef INCLUDED_flixel_system_debug_ConsoleUtil
#define INCLUDED_flixel_system_debug_ConsoleUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,debug,ConsoleUtil)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace _system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  ConsoleUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConsoleUtil_obj OBJ_;
		ConsoleUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.system.debug.ConsoleUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConsoleUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConsoleUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ConsoleUtil","\xd9","\xfe","\x3d","\x06"); }

		static Dynamic attemptToCreateInstance_flixel_FlxObject( ::String ClassName,::hx::Class type,Array< ::String > Params);
		static Dynamic attemptToCreateInstance_flixel_FlxObject_dyn();

		static Dynamic attemptToCreateInstance_flixel_FlxState( ::String ClassName,::hx::Class type,Array< ::String > Params);
		static Dynamic attemptToCreateInstance_flixel_FlxState_dyn();

		static bool callFunction( Dynamic Function,cpp::ArrayBase Args);
		static Dynamic callFunction_dyn();

		static Dynamic findCommand( ::String Alias,cpp::ArrayBase Commands);
		static Dynamic findCommand_dyn();

		static Dynamic resolveObjectAndVariable( ::String ObjectAndVariable,Dynamic Object);
		static Dynamic resolveObjectAndVariable_dyn();

		static Dynamic resolveObjectAndVariableFromMap( ::String ObjectAndVariable,::haxe::ds::StringMap ObjectMap);
		static Dynamic resolveObjectAndVariableFromMap_dyn();

		static Array< ::String > getInstanceFieldsAdvanced( ::hx::Class cl,hx::Null< int >  numSuperClassesToInclude);
		static Dynamic getInstanceFieldsAdvanced_dyn();

		static Dynamic parseBool( ::String s);
		static Dynamic parseBool_dyn();

		static Void log( Dynamic Text);
		static Dynamic log_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_ConsoleUtil */ 
