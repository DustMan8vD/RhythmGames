#ifndef INCLUDED_haxe_Log
#define INCLUDED_haxe_Log

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Log)
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES  Log_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Log_obj OBJ_;
		Log_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.Log")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Log_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Log_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Log","\x64","\x0c","\x3a","\x00"); }

		static void __boot();
		static Dynamic trace;
		static inline Dynamic &trace_dyn() {return trace; }

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Log */ 
