#ifndef FILE_nova_time_Nova_Timer_NOVA
#define FILE_nova_time_Nova_Timer_NOVA

typedef struct nova_time_Nova_Timer nova_time_Nova_Timer;
typedef struct nova_time_Nova_TimerFunctionMap nova_time_Nova_TimerFunctionMap;
typedef struct nova_time_Nova_TimerPropertyMap nova_time_Nova_TimerPropertyMap;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_time_Nova_Timer nova_time_Nova_Timer;

typedef void (*nova_time_Nova_Timer_closure346_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*nova_time_Nova_Timer_closure347_Nova_callback)(void*, nova_exception_Nova_ExceptionData*, nova_time_Nova_Timer*, void*);
typedef void (*nova_time_Nova_Timer_closure348_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*nova_time_Nova_Timer_closure349_Nova_callback)(void*, nova_exception_Nova_ExceptionData*, nova_time_Nova_Timer*, void*);
typedef void (*nova_time_Nova_Timer_closure350_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*nova_time_Nova_Timer_closure351_Nova_callback)(void*, nova_exception_Nova_ExceptionData*, nova_time_Nova_Timer*, void*);
typedef void (*nova_time_Nova_Timer_closure352_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*nova_time_Nova_Timer_closure353_Nova_callback)(void*, nova_exception_Nova_ExceptionData*, nova_time_Nova_Timer*, void*);
typedef void (*nova_time_Nova_TimerFunctionMap_closure478_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*nova_time_Nova_TimerFunctionMap_closure479_Nova_callback)(void*, nova_exception_Nova_ExceptionData*, nova_time_Nova_Timer*, void*);

#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
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

CCLASS_CLASS
(
	nova_time_Nova_Timer, 
	
	nova_time_Timer_Extension_VTable* vtable;
	long_long nova_time_Nova_Timer_Nova_startTime;
	long_long nova_time_Nova_Timer_Nova_endTime;
)

void nova_time_Nova_Timer_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_Timer* nova_time_Nova_Timer_Nova_construct(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_Timer_Nova_destroy(nova_time_Nova_Timer** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_Timer_Nova_this(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_Timer* nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_Timer* nova_time_Nova_Timer_Nova_stop(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_Timer* nova_time_Nova_Timer_Nova_reset(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_time_Nova_Timer_Nova_toString(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_Timer* nova_time_Nova_Timer_static_Nova_time(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer_closure352_Nova_action nova_time_Nova_Timer_Nova_action, void* nova_time_Nova_Timer_ref_Nova_action, void* action_context, nova_time_Nova_Timer_closure353_Nova_callback nova_time_Nova_Timer_Nova_callback, void* nova_time_Nova_Timer_ref_Nova_callback, void* callback_context);
long_long nova_time_Nova_Timer_Accessor_Nova_duration(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_Timer_Nova_super(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_Timer* nova_time_Nova_Timer_virtual_Nova_stop(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData);
long_long nova_time_Nova_Timer_virtual_Accessor_Nova_duration(nova_time_Nova_Timer* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_time_Nova_TimerFunctionMap, 
	
	nova_time_Timer_TimerFunctionMap_Extension_VTable* vtable;
)

void nova_time_Nova_TimerFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_TimerFunctionMap* nova_time_Nova_TimerFunctionMap_Nova_construct(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_TimerFunctionMap_Nova_destroy(nova_time_Nova_TimerFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_TimerFunctionMap_Nova_this(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_Timer* nova_time_Nova_TimerFunctionMap_functionMapTimerFunctionMap_Nova_construct(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_Timer* nova_time_Nova_TimerFunctionMap_functionMap_Nova_start(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference);
nova_time_Nova_Timer* nova_time_Nova_TimerFunctionMap_functionMap_Nova_stop(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference);
nova_time_Nova_Timer* nova_time_Nova_TimerFunctionMap_functionMap_Nova_reset(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference);
nova_Nova_String* nova_time_Nova_TimerFunctionMap_functionMap_Nova_toString(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference);
nova_time_Nova_Timer* nova_time_Nova_TimerFunctionMap_functionMap_static_Nova_time(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_TimerFunctionMap_closure478_Nova_action nova_time_Nova_TimerFunctionMap_Nova_action, void* nova_time_Nova_TimerFunctionMap_ref_Nova_action, void* action_context, nova_time_Nova_TimerFunctionMap_closure479_Nova_callback nova_time_Nova_TimerFunctionMap_Nova_callback, void* nova_time_Nova_TimerFunctionMap_ref_Nova_callback, void* callback_context);
void nova_time_Nova_TimerFunctionMap_Nova_super(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_Timer* nova_time_Nova_TimerFunctionMap_virtualfunctionMapTimer_Nova_construct(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_Timer* nova_time_Nova_TimerFunctionMap_virtualfunctionMap_Nova_stop(nova_time_Nova_TimerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference);

CCLASS_CLASS
(
	nova_time_Nova_TimerPropertyMap, 
	
	nova_time_Timer_TimerPropertyMap_Extension_VTable* vtable;
)

void nova_time_Nova_TimerPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_TimerPropertyMap* nova_time_Nova_TimerPropertyMap_Nova_construct(nova_time_Nova_TimerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_TimerPropertyMap_Nova_destroy(nova_time_Nova_TimerPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_TimerPropertyMap_Nova_this(nova_time_Nova_TimerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
long_long nova_time_Nova_TimerPropertyMap_functionMap_Nova_startTime(nova_time_Nova_TimerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference);
long_long nova_time_Nova_TimerPropertyMap_functionMap_Nova_endTime(nova_time_Nova_TimerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference);
long_long nova_time_Nova_TimerPropertyMap_functionMap_Nova_duration(nova_time_Nova_TimerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference);
void nova_time_Nova_TimerPropertyMap_Nova_super(nova_time_Nova_TimerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
long_long nova_time_Nova_TimerPropertyMap_virtualfunctionMap_Nova_duration(nova_time_Nova_TimerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Timer* reference);

#endif
