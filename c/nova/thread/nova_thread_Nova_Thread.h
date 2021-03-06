#ifndef FILE_nova_thread_Nova_Thread_NOVA
#define FILE_nova_thread_Nova_Thread_NOVA

typedef struct nova_thread_Nova_Thread nova_thread_Nova_Thread;
typedef struct nova_thread_Nova_ThreadFunctionMap nova_thread_Nova_ThreadFunctionMap;
typedef struct nova_thread_Nova_ThreadPropertyMap nova_thread_Nova_ThreadPropertyMap;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;

typedef void (*nova_thread_Nova_Thread_closure334_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*nova_thread_Nova_Thread_closure335_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*nova_thread_Nova_Thread_closure336_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*nova_thread_Nova_Thread_closure337_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*nova_thread_Nova_ThreadFunctionMap_closure475_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);

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
#include <nova/thread/NativeThread.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_thread_Nova_Thread, 
	
	nova_thread_Thread_Extension_VTable* vtable;
	char nova_thread_Nova_Thread_Nova_active;
	struct Private_nova_thread_Nova_Thread* prv;
)
extern nova_datastruct_list_Nova_ImmutableArray* nova_thread_Nova_Thread_Nova_ACTIVE_THREADS;

void nova_thread_Nova_Thread_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_thread_Nova_Thread* nova_thread_Nova_Thread_0_Nova_construct(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_thread_Nova_Thread* nova_thread_Nova_Thread_1_Nova_construct(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_Thread_closure336_Nova_action nova_thread_Nova_Thread_Nova_action, void* nova_thread_Nova_Thread_ref_Nova_action, void* action_context);
void nova_thread_Nova_Thread_Nova_destroy(nova_thread_Nova_Thread** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_thread_Nova_Thread_Nova_this(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_thread_Nova_Thread_0_Nova_this(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_Thread_closure337_Nova_action nova_thread_Nova_Thread_Nova_action, void* nova_thread_Nova_Thread_ref_Nova_action, void* action_context);
NOVA_THREAD_HANDLE* nova_thread_Nova_Thread_Nova_start(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_thread_Nova_Thread_Nova_join(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_thread_Nova_Thread_Nova_kill(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_thread_Nova_Thread_static_Nova_sleep(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData, long_long millis);
void nova_thread_Nova_Thread_Nova_run(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_thread_Nova_Thread_Nova_super(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_thread_Nova_Thread_virtual_Nova_run(nova_thread_Nova_Thread* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_thread_Nova_ThreadFunctionMap, 
	
	nova_thread_Thread_ThreadFunctionMap_Extension_VTable* vtable;
)

void nova_thread_Nova_ThreadFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_thread_Nova_ThreadFunctionMap* nova_thread_Nova_ThreadFunctionMap_Nova_construct(nova_thread_Nova_ThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_thread_Nova_ThreadFunctionMap_Nova_destroy(nova_thread_Nova_ThreadFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_thread_Nova_ThreadFunctionMap_Nova_this(nova_thread_Nova_ThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_thread_Nova_Thread* nova_thread_Nova_ThreadFunctionMap_functionMapThreadFunctionMap0_Nova_construct(nova_thread_Nova_ThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_thread_Nova_Thread* nova_thread_Nova_ThreadFunctionMap_functionMapThreadFunctionMap1_Nova_construct(nova_thread_Nova_ThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_ThreadFunctionMap_closure475_Nova_action nova_thread_Nova_ThreadFunctionMap_Nova_action, void* nova_thread_Nova_ThreadFunctionMap_ref_Nova_action, void* action_context);
NOVA_THREAD_HANDLE* nova_thread_Nova_ThreadFunctionMap_functionMap_Nova_start(nova_thread_Nova_ThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_Thread* reference);
void nova_thread_Nova_ThreadFunctionMap_functionMap_Nova_join(nova_thread_Nova_ThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_Thread* reference);
void nova_thread_Nova_ThreadFunctionMap_functionMap_Nova_kill(nova_thread_Nova_ThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_Thread* reference);
void nova_thread_Nova_ThreadFunctionMap_functionMap_static_Nova_sleep(nova_thread_Nova_ThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, long_long millis);
void nova_thread_Nova_ThreadFunctionMap_functionMap_Nova_run(nova_thread_Nova_ThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_Thread* reference);
void nova_thread_Nova_ThreadFunctionMap_Nova_super(nova_thread_Nova_ThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_thread_Nova_ThreadFunctionMap_virtualfunctionMap_Nova_run(nova_thread_Nova_ThreadFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_Thread* reference);

CCLASS_CLASS
(
	nova_thread_Nova_ThreadPropertyMap, 
	
	nova_thread_Thread_ThreadPropertyMap_Extension_VTable* vtable;
)

void nova_thread_Nova_ThreadPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_thread_Nova_ThreadPropertyMap* nova_thread_Nova_ThreadPropertyMap_Nova_construct(nova_thread_Nova_ThreadPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_thread_Nova_ThreadPropertyMap_Nova_destroy(nova_thread_Nova_ThreadPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_thread_Nova_ThreadPropertyMap_Nova_this(nova_thread_Nova_ThreadPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_thread_Nova_ThreadPropertyMap_functionMap_Nova_active(nova_thread_Nova_ThreadPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_Nova_Thread* reference);
nova_datastruct_list_Nova_ImmutableArray* nova_thread_Nova_ThreadPropertyMap_functionMap_static_Nova_ACTIVE_THREADS(nova_thread_Nova_ThreadPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_thread_Nova_ThreadPropertyMap_Nova_super(nova_thread_Nova_ThreadPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
