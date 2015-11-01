#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_plugin_TimerManager
#include <flixel/plugin/TimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
namespace flixel{
namespace util{

Void FlxTimer_obj::__construct(Dynamic Time,Dynamic Callback,hx::Null< int >  __o_Loops)
{
HX_STACK_FRAME("flixel.util.FlxTimer","new",0xb89241df,"flixel.util.FlxTimer.new","flixel/util/FlxTimer.hx",14,0x0a681e11)
HX_STACK_THIS(this)
HX_STACK_ARG(Time,"Time")
HX_STACK_ARG(Callback,"Callback")
HX_STACK_ARG(__o_Loops,"Loops")
int Loops = __o_Loops.Default(1);
{
	HX_STACK_LINE(69)
	this->_inManager = false;
	HX_STACK_LINE(67)
	this->_loopsCounter = (int)0;
	HX_STACK_LINE(63)
	this->_timeCounter = ((Float)0);
	HX_STACK_LINE(33)
	this->finished = false;
	HX_STACK_LINE(29)
	this->active = true;
	HX_STACK_LINE(25)
	this->loops = (int)0;
	HX_STACK_LINE(21)
	this->time = ((Float)0);
	HX_STACK_LINE(80)
	bool tmp = (Time != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	if ((tmp)){
		HX_STACK_LINE(82)
		Dynamic tmp1 = Time;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		Dynamic tmp2 = Callback;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		int tmp3 = Loops;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		this->start(tmp1,tmp2,tmp3);
	}
}
;
	return null();
}

//FlxTimer_obj::~FlxTimer_obj() { }

Dynamic FlxTimer_obj::__CreateEmpty() { return  new FlxTimer_obj; }
hx::ObjectPtr< FlxTimer_obj > FlxTimer_obj::__new(Dynamic Time,Dynamic Callback,hx::Null< int >  __o_Loops)
{  hx::ObjectPtr< FlxTimer_obj > _result_ = new FlxTimer_obj();
	_result_->__construct(Time,Callback,__o_Loops);
	return _result_;}

Dynamic FlxTimer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTimer_obj > _result_ = new FlxTimer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *FlxTimer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxTimer_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxTimer_obj >(this); }
Void FlxTimer_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxTimer","destroy",0x3b34c9f9,"flixel.util.FlxTimer.destroy","flixel/util/FlxTimer.hx",91,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		this->complete = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,destroy,(void))

::flixel::util::FlxTimer FlxTimer_obj::start( hx::Null< Float >  __o_Time,Dynamic Callback,hx::Null< int >  __o_Loops){
Float Time = __o_Time.Default(1);
int Loops = __o_Loops.Default(1);
	HX_STACK_FRAME("flixel.util.FlxTimer","start",0x9de883a1,"flixel.util.FlxTimer.start","flixel/util/FlxTimer.hx",103,0x0a681e11)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Time,"Time")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(Loops,"Loops")
{
		HX_STACK_LINE(104)
		::flixel::plugin::TimerManager tmp = ::flixel::util::FlxTimer_obj::manager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		if ((tmp1)){
			HX_STACK_LINE(104)
			bool tmp3 = this->_inManager;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(104)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(104)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(104)
			tmp2 = !(tmp5);
		}
		else{
			HX_STACK_LINE(104)
			tmp2 = false;
		}
		HX_STACK_LINE(104)
		if ((tmp2)){
			HX_STACK_LINE(106)
			::flixel::plugin::TimerManager tmp3 = ::flixel::util::FlxTimer_obj::manager;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			tmp3->add(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(107)
			this->_inManager = true;
		}
		HX_STACK_LINE(110)
		this->active = true;
		HX_STACK_LINE(111)
		this->finished = false;
		HX_STACK_LINE(112)
		Float tmp3 = Time;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		this->time = tmp4;
		HX_STACK_LINE(114)
		bool tmp5 = (Loops < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(114)
		if ((tmp5)){
			HX_STACK_LINE(116)
			hx::MultEq(Loops,(int)-1);
		}
		HX_STACK_LINE(119)
		this->loops = Loops;
		HX_STACK_LINE(120)
		this->complete = Callback;
		HX_STACK_LINE(121)
		this->_timeCounter = (int)0;
		HX_STACK_LINE(122)
		this->_loopsCounter = (int)0;
		HX_STACK_LINE(123)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTimer_obj,start,return )

::flixel::util::FlxTimer FlxTimer_obj::reset( hx::Null< Float >  __o_NewTime){
Float NewTime = __o_NewTime.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxTimer","reset",0x00a5590e,"flixel.util.FlxTimer.reset","flixel/util/FlxTimer.hx",131,0x0a681e11)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewTime,"NewTime")
{
		HX_STACK_LINE(132)
		bool tmp = (NewTime < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		if ((tmp)){
			HX_STACK_LINE(134)
			Float tmp1 = this->time;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(134)
			NewTime = tmp1;
		}
		HX_STACK_LINE(136)
		Float tmp1 = NewTime;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		Dynamic tmp2 = this->complete_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		int tmp3 = this->loops;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		this->start(tmp1,tmp2,tmp3);
		HX_STACK_LINE(137)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimer_obj,reset,return )

Void FlxTimer_obj::cancel( ){
{
		HX_STACK_FRAME("flixel.util.FlxTimer","cancel",0x3fc4355b,"flixel.util.FlxTimer.cancel","flixel/util/FlxTimer.hx",144,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(145)
		this->finished = true;
		HX_STACK_LINE(146)
		::flixel::plugin::TimerManager tmp = ::flixel::util::FlxTimer_obj::manager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(146)
			tmp2 = this->_inManager;
		}
		else{
			HX_STACK_LINE(146)
			tmp2 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp2)){
			HX_STACK_LINE(148)
			::flixel::plugin::TimerManager tmp3 = ::flixel::util::FlxTimer_obj::manager;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(148)
			tmp3->remove(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(149)
			this->_inManager = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,cancel,(void))

Void FlxTimer_obj::update( ){
{
		HX_STACK_FRAME("flixel.util.FlxTimer","update",0x0e95cdea,"flixel.util.FlxTimer.update","flixel/util/FlxTimer.hx",160,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(161)
		Float tmp = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		hx::AddEq(this->_timeCounter,tmp);
		HX_STACK_LINE(163)
		while((true)){
			HX_STACK_LINE(163)
			Float tmp1 = this->_timeCounter;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(163)
			Float tmp2 = this->time;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(163)
			bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(163)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(163)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(163)
			if ((tmp4)){
				HX_STACK_LINE(163)
				tmp5 = this->active;
			}
			else{
				HX_STACK_LINE(163)
				tmp5 = false;
			}
			HX_STACK_LINE(163)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(163)
			if ((tmp5)){
				HX_STACK_LINE(163)
				bool tmp7 = this->finished;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(163)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(163)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(163)
				tmp6 = !(tmp9);
			}
			else{
				HX_STACK_LINE(163)
				tmp6 = false;
			}
			HX_STACK_LINE(163)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(163)
			if ((tmp7)){
				HX_STACK_LINE(163)
				break;
			}
			HX_STACK_LINE(165)
			Float tmp8 = this->time;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(165)
			hx::SubEq(this->_timeCounter,tmp8);
			HX_STACK_LINE(166)
			(this->_loopsCounter)++;
			HX_STACK_LINE(168)
			Dynamic tmp9 = this->complete_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(168)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(168)
			if ((tmp10)){
				HX_STACK_LINE(170)
				this->complete(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(173)
			int tmp11 = this->loops;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(173)
			bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(173)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(173)
			if ((tmp12)){
				HX_STACK_LINE(173)
				int tmp14 = this->_loopsCounter;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(173)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(173)
				int tmp16 = this->loops;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(173)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(173)
				tmp13 = (tmp15 >= tmp17);
			}
			else{
				HX_STACK_LINE(173)
				tmp13 = false;
			}
			HX_STACK_LINE(173)
			if ((tmp13)){
				HX_STACK_LINE(175)
				this->cancel();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,update,(void))

Float FlxTimer_obj::get_timeLeft( ){
	HX_STACK_FRAME("flixel.util.FlxTimer","get_timeLeft",0x3108255e,"flixel.util.FlxTimer.get_timeLeft","flixel/util/FlxTimer.hx",181,0x0a681e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(182)
	Float tmp = this->time;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	Float tmp1 = this->_timeCounter;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_timeLeft,return )

Float FlxTimer_obj::get_elapsedTime( ){
	HX_STACK_FRAME("flixel.util.FlxTimer","get_elapsedTime",0x36d149ff,"flixel.util.FlxTimer.get_elapsedTime","flixel/util/FlxTimer.hx",186,0x0a681e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(187)
	Float tmp = this->_timeCounter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_elapsedTime,return )

int FlxTimer_obj::get_loopsLeft( ){
	HX_STACK_FRAME("flixel.util.FlxTimer","get_loopsLeft",0x92ed534c,"flixel.util.FlxTimer.get_loopsLeft","flixel/util/FlxTimer.hx",191,0x0a681e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	int tmp = this->loops;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	int tmp1 = this->_loopsCounter;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_loopsLeft,return )

int FlxTimer_obj::get_elapsedLoops( ){
	HX_STACK_FRAME("flixel.util.FlxTimer","get_elapsedLoops",0x2913a75d,"flixel.util.FlxTimer.get_elapsedLoops","flixel/util/FlxTimer.hx",196,0x0a681e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(197)
	int tmp = this->_loopsCounter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_elapsedLoops,return )

Float FlxTimer_obj::get_progress( ){
	HX_STACK_FRAME("flixel.util.FlxTimer","get_progress",0xcf219257,"flixel.util.FlxTimer.get_progress","flixel/util/FlxTimer.hx",201,0x0a681e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(202)
	Float tmp = this->time;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(202)
	if ((tmp1)){
		HX_STACK_LINE(202)
		Float tmp3 = this->_timeCounter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		Float tmp4 = this->time;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		tmp2 = (Float(tmp3) / Float(tmp4));
	}
	else{
		HX_STACK_LINE(202)
		tmp2 = (int)0;
	}
	HX_STACK_LINE(202)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_progress,return )

::flixel::plugin::TimerManager FlxTimer_obj::manager;


FlxTimer_obj::FlxTimer_obj()
{
}

void FlxTimer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTimer);
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(loops,"loops");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(_timeCounter,"_timeCounter");
	HX_MARK_MEMBER_NAME(_loopsCounter,"_loopsCounter");
	HX_MARK_MEMBER_NAME(_inManager,"_inManager");
	HX_MARK_END_CLASS();
}

void FlxTimer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(loops,"loops");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(_timeCounter,"_timeCounter");
	HX_VISIT_MEMBER_NAME(_loopsCounter,"_loopsCounter");
	HX_VISIT_MEMBER_NAME(_inManager,"_inManager");
}

Dynamic FlxTimer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { return loops; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		if (HX_FIELD_EQ(inName,"timeLeft") ) { if (inCallProp == hx::paccAlways) return get_timeLeft(); }
		if (HX_FIELD_EQ(inName,"progress") ) { if (inCallProp == hx::paccAlways) return get_progress(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopsLeft") ) { if (inCallProp == hx::paccAlways) return get_loopsLeft(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_inManager") ) { return _inManager; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { if (inCallProp == hx::paccAlways) return get_elapsedTime(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elapsedLoops") ) { if (inCallProp == hx::paccAlways) return get_elapsedLoops(); }
		if (HX_FIELD_EQ(inName,"_timeCounter") ) { return _timeCounter; }
		if (HX_FIELD_EQ(inName,"get_timeLeft") ) { return get_timeLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"get_progress") ) { return get_progress_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_loopsCounter") ) { return _loopsCounter; }
		if (HX_FIELD_EQ(inName,"get_loopsLeft") ) { return get_loopsLeft_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_elapsedTime") ) { return get_elapsedTime_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_elapsedLoops") ) { return get_elapsedLoops_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTimer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { outValue = manager; return true;  }
	}
	return false;
}

Dynamic FlxTimer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { loops=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_inManager") ) { _inManager=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_timeCounter") ) { _timeCounter=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_loopsCounter") ) { _loopsCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTimer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=ioValue.Cast< ::flixel::plugin::TimerManager >(); return true; }
	}
	return false;
}

void FlxTimer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	outFields->push(HX_HCSTRING("timeLeft","\xb4","\x8a","\x11","\xe8"));
	outFields->push(HX_HCSTRING("elapsedTime","\x69","\x5e","\xcd","\xc6"));
	outFields->push(HX_HCSTRING("loopsLeft","\x36","\x99","\x1c","\x04"));
	outFields->push(HX_HCSTRING("elapsedLoops","\xb3","\x6f","\xa9","\x95"));
	outFields->push(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"));
	outFields->push(HX_HCSTRING("_timeCounter","\x70","\x04","\xb9","\xf5"));
	outFields->push(HX_HCSTRING("_loopsCounter","\x0c","\x58","\xdd","\xc5"));
	outFields->push(HX_HCSTRING("_inManager","\xc9","\x50","\x66","\x55"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxTimer_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsInt,(int)offsetof(FlxTimer_obj,loops),HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78")},
	{hx::fsBool,(int)offsetof(FlxTimer_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(FlxTimer_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTimer_obj,complete),HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f")},
	{hx::fsFloat,(int)offsetof(FlxTimer_obj,_timeCounter),HX_HCSTRING("_timeCounter","\x70","\x04","\xb9","\xf5")},
	{hx::fsInt,(int)offsetof(FlxTimer_obj,_loopsCounter),HX_HCSTRING("_loopsCounter","\x0c","\x58","\xdd","\xc5")},
	{hx::fsBool,(int)offsetof(FlxTimer_obj,_inManager),HX_HCSTRING("_inManager","\xc9","\x50","\x66","\x55")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::plugin::TimerManager*/ ,(void *) &FlxTimer_obj::manager,HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("_timeCounter","\x70","\x04","\xb9","\xf5"),
	HX_HCSTRING("_loopsCounter","\x0c","\x58","\xdd","\xc5"),
	HX_HCSTRING("_inManager","\xc9","\x50","\x66","\x55"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("get_timeLeft","\xbd","\x3e","\x2b","\x9d"),
	HX_HCSTRING("get_elapsedTime","\x00","\x16","\xaf","\x87"),
	HX_HCSTRING("get_loopsLeft","\x0d","\x6d","\x80","\xc5"),
	HX_HCSTRING("get_elapsedLoops","\x3c","\x5c","\x48","\x9a"),
	HX_HCSTRING("get_progress","\xb6","\xab","\x44","\x3b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTimer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTimer_obj::manager,"manager");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTimer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTimer_obj::manager,"manager");
};

#endif

hx::Class FlxTimer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"),
	::String(null()) };

void FlxTimer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxTimer","\x6d","\x66","\xfe","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTimer_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTimer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTimer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
