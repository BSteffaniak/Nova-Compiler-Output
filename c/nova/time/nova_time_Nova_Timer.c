#include <nova/exception/nova_exception_Nova_ExceptionData.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_DivideByZeroException.h>
#include <nova/io/nova_io_Nova_Console.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Number.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Byte.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Short.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Int.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Long.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Float.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Double.h>
#include <nova/primitive/nova_primitive_Nova_Null.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Char.h>
#include <nova/primitive/nova_primitive_Nova_Bool.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ImmutableArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_DoubleArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntRange.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/async/nova_thread_async_Nova_Async.h>
#include <nova/thread/async/nova_thread_async_Nova_Task.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/meta/nova_meta_Nova_Class.h>
#include <nova/meta/nova_meta_Nova_FunctionMap.h>
#include <nova/meta/nova_meta_Nova_PropertyMap.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/time/nova_time_Nova_Time.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context173;



void nova_time_Nova_Timer_static_Nova_lambda174(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* _1, Context173* context);

void nova_time_Nova_Timer_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_time_Nova_Timer* nova_time_Nova_Timer_Nova_construct(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_time_Nova_Timer, this,);
	this->vtable = &nova_time_Timer_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_time_Nova_Timer_Nova_super(this, exceptionData);
	
	{
		nova_time_Nova_Timer_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_time_Nova_Timer_Nova_destroy(nova_time_Nova_Timer** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	NOVA_FREE(*this);
}

void nova_time_Nova_Timer_Nova_this(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_time_Nova_Timer* nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_time_Nova_Timer_Nova_startTime = nova_time_Nova_Time_Accessor_static_Nova_currentTimeMillis(0, exceptionData);
	this->nova_time_Nova_Timer_Nova_endTime = (long_long)(0);
	return this;
}

nova_time_Nova_Timer* nova_time_Nova_Timer_Nova_stop(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_time_Nova_Timer_Nova_endTime = nova_time_Nova_Time_Accessor_static_Nova_currentTimeMillis(0, exceptionData);
	return this;
}

nova_time_Nova_Timer* nova_time_Nova_Timer_Nova_reset(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_time_Nova_Timer_Nova_startTime = (long_long)(0);
	this->nova_time_Nova_Timer_Nova_endTime = (long_long)(0);
	return this;
}

nova_Nova_String* nova_time_Nova_Timer_Nova_toString(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Timer { duration: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(this), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" }")))));
}

nova_time_Nova_Timer* nova_time_Nova_Timer_static_Nova_time(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer_closure352_Nova_action nova_time_Nova_Timer_Nova_action, void* nova_time_Nova_Timer_ref_Nova_action, void* action_context, nova_time_Nova_Timer_closure353_Nova_callback nova_time_Nova_Timer_Nova_callback, void* nova_time_Nova_Timer_ref_Nova_callback, void* callback_context)
{
	nova_time_Nova_Timer* l1_Nova_t = (nova_time_Nova_Timer*)nova_null;
	Context173* contextArg208 = NOVA_MALLOC(sizeof(Context173));
	
	nova_time_Nova_Timer_Nova_callback = (nova_time_Nova_Timer_closure353_Nova_callback)(nova_time_Nova_Timer_Nova_callback == 0 ? (nova_time_Nova_Timer_closure353_Nova_callback)&nova_time_Nova_Timer_static_Nova_lambda174 : nova_time_Nova_Timer_Nova_callback);
	nova_time_Nova_Timer_ref_Nova_callback = (void*)(nova_time_Nova_Timer_ref_Nova_callback == 0 ? (void*)nova_null : nova_time_Nova_Timer_ref_Nova_callback);
	callback_context = (void*)(callback_context == 0 ? (void*)contextArg208 : callback_context);
	l1_Nova_t = nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer_Nova_construct(0, exceptionData), exceptionData);
	nova_time_Nova_Timer_Nova_action(nova_time_Nova_Timer_ref_Nova_action, exceptionData, action_context);
	nova_time_Nova_Timer_Nova_callback(nova_time_Nova_Timer_ref_Nova_callback, exceptionData, nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_t), exceptionData), callback_context);
	return l1_Nova_t;
}

void nova_time_Nova_Timer_static_Nova_lambda174(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* _1, Context173* context)
{
}

long_long nova_time_Nova_Timer_Accessor_Nova_duration(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_time_Nova_Timer_Nova_endTime - this->nova_time_Nova_Timer_Nova_startTime;
}


void nova_time_Nova_Timer_Nova_super(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_time_Nova_Timer_Nova_startTime = 0;
	this->nova_time_Nova_Timer_Nova_endTime = 0;
}

nova_time_Nova_Timer* nova_time_Nova_Timer_virtual_Nova_stop(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(this), exceptionData);
}

long_long nova_time_Nova_Timer_virtual_Accessor_Nova_duration(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->nova_time_Nova_Timer_virtual_Accessor_Nova_duration((nova_time_Nova_Timer*)(this), exceptionData);
}

void nova_time_Nova_TimerFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_time_Nova_TimerFunctionMap* nova_time_Nova_TimerFunctionMap_Nova_construct(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_time_Nova_TimerFunctionMap, this,);
	this->vtable = &nova_time_Timer_TimerFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_time_Nova_TimerFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_time_Nova_TimerFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_time_Nova_TimerFunctionMap_Nova_destroy(nova_time_Nova_TimerFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_time_Nova_TimerFunctionMap_Nova_this(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_time_Nova_Timer* nova_time_Nova_TimerFunctionMap_functionMapTimerFunctionMap_Nova_construct(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_time_Nova_Timer_Nova_construct(0, exceptionData);
}

nova_time_Nova_Timer* nova_time_Nova_TimerFunctionMap_functionMap_Nova_start(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference)
{
	return nova_time_Nova_Timer_Nova_start(reference, exceptionData);
}

nova_time_Nova_Timer* nova_time_Nova_TimerFunctionMap_functionMap_Nova_stop(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference)
{
	return nova_time_Nova_Timer_Nova_stop(reference, exceptionData);
}

nova_time_Nova_Timer* nova_time_Nova_TimerFunctionMap_functionMap_Nova_reset(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference)
{
	return nova_time_Nova_Timer_Nova_reset(reference, exceptionData);
}

nova_Nova_String* nova_time_Nova_TimerFunctionMap_functionMap_Nova_toString(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference)
{
	return nova_time_Nova_Timer_Nova_toString(reference, exceptionData);
}

nova_time_Nova_Timer* nova_time_Nova_TimerFunctionMap_functionMap_static_Nova_time(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_TimerFunctionMap_closure478_Nova_action nova_time_Nova_TimerFunctionMap_Nova_action, void* nova_time_Nova_TimerFunctionMap_ref_Nova_action, void* action_context, nova_time_Nova_TimerFunctionMap_closure479_Nova_callback nova_time_Nova_TimerFunctionMap_Nova_callback, void* nova_time_Nova_TimerFunctionMap_ref_Nova_callback, void* callback_context)
{
	return nova_time_Nova_Timer_static_Nova_time(0, exceptionData, (nova_time_Nova_Timer_closure352_Nova_action)nova_time_Nova_TimerFunctionMap_Nova_action, nova_time_Nova_TimerFunctionMap_ref_Nova_action, action_context, (nova_time_Nova_Timer_closure353_Nova_callback)nova_time_Nova_TimerFunctionMap_Nova_callback, nova_time_Nova_TimerFunctionMap_ref_Nova_callback, callback_context);
}

void nova_time_Nova_TimerFunctionMap_Nova_super(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_time_Nova_Timer* nova_time_Nova_TimerFunctionMap_virtualfunctionMapTimer_Nova_construct(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->nova_time_Nova_TimerFunctionMap_virtualfunctionMapTimer_Nova_construct(this, exceptionData);
}

nova_time_Nova_Timer* nova_time_Nova_TimerFunctionMap_virtualfunctionMap_Nova_stop(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference)
{
	return this->vtable->nova_time_Nova_TimerFunctionMap_virtualfunctionMap_Nova_stop(this, exceptionData, reference);
}

void nova_time_Nova_TimerPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_time_Nova_TimerPropertyMap* nova_time_Nova_TimerPropertyMap_Nova_construct(nova_time_Nova_TimerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_time_Nova_TimerPropertyMap, this,);
	this->vtable = &nova_time_Timer_TimerPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_time_Nova_TimerPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_time_Nova_TimerPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_time_Nova_TimerPropertyMap_Nova_destroy(nova_time_Nova_TimerPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_time_Nova_TimerPropertyMap_Nova_this(nova_time_Nova_TimerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

long_long nova_time_Nova_TimerPropertyMap_functionMap_Nova_startTime(nova_time_Nova_TimerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference)
{
	return reference->nova_time_Nova_Timer_Nova_startTime;
}

long_long nova_time_Nova_TimerPropertyMap_functionMap_Nova_endTime(nova_time_Nova_TimerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference)
{
	return reference->nova_time_Nova_Timer_Nova_endTime;
}

long_long nova_time_Nova_TimerPropertyMap_functionMap_Nova_duration(nova_time_Nova_TimerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference)
{
	return nova_time_Nova_Timer_Accessor_Nova_duration(reference, exceptionData);
}

void nova_time_Nova_TimerPropertyMap_Nova_super(nova_time_Nova_TimerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

long_long nova_time_Nova_TimerPropertyMap_virtualfunctionMap_Nova_duration(nova_time_Nova_TimerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference)
{
	return this->vtable->nova_time_Nova_TimerPropertyMap_virtualfunctionMap_Nova_duration(this, exceptionData, reference);
}

