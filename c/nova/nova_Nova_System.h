#ifndef FILE_nova_Nova_System_NOVA
#define FILE_nova_Nova_System_NOVA

typedef struct nova_Nova_System nova_Nova_System;
typedef struct nova_Nova_SystemFunctionMap nova_Nova_SystemFunctionMap;
typedef struct nova_Nova_SystemPropertyMap nova_Nova_SystemPropertyMap;


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
#include <nova/io/nova_io_Nova_FileWriter.h>
#include <nova/io/nova_io_Nova_FileReader.h>
#include <nova/time/nova_time_Nova_Time.h>
#include <nova/time/nova_time_Nova_CumulativeTimer.h>
#include <nova/process/nova_process_Nova_Process.h>
#include <nova/NativeSystem.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_Nova_System, 
	
	nova_System_Extension_VTable* vtable;
)
extern nova_time_Nova_CumulativeTimer* nova_Nova_System_Nova_overheadTimer;

void nova_Nova_System_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_System* nova_Nova_System_Nova_construct(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_System_Nova_destroy(nova_Nova_System** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_System_0_static_Nova_exit(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData, int code);
void nova_Nova_System_1_static_Nova_exit(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData, int code, nova_Nova_String* message);
void nova_Nova_System_2_static_Nova_exit(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData, int code, nova_Nova_String* message, char log);
nova_process_Nova_Process* nova_Nova_System_0_static_Nova_execute(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* command);
nova_process_Nova_Process* nova_Nova_System_1_static_Nova_execute(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* arguments);
void nova_Nova_System_Nova_this(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_System_Nova_super(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_Nova_SystemFunctionMap, 
	
	nova_System_SystemFunctionMap_Extension_VTable* vtable;
)

void nova_Nova_SystemFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_SystemFunctionMap* nova_Nova_SystemFunctionMap_Nova_construct(nova_Nova_SystemFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_SystemFunctionMap_Nova_destroy(nova_Nova_SystemFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_SystemFunctionMap_Nova_this(nova_Nova_SystemFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_System* nova_Nova_SystemFunctionMap_functionMapSystemFunctionMap_Nova_construct(nova_Nova_SystemFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_SystemFunctionMap_functionMap0_static_Nova_exit(nova_Nova_SystemFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int code);
void nova_Nova_SystemFunctionMap_functionMap1_static_Nova_exit(nova_Nova_SystemFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int code, nova_Nova_String* message);
void nova_Nova_SystemFunctionMap_functionMap2_static_Nova_exit(nova_Nova_SystemFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int code, nova_Nova_String* message, char log);
nova_process_Nova_Process* nova_Nova_SystemFunctionMap_functionMap0_static_Nova_execute(nova_Nova_SystemFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* command);
nova_process_Nova_Process* nova_Nova_SystemFunctionMap_functionMap1_static_Nova_execute(nova_Nova_SystemFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* arguments);
void nova_Nova_SystemFunctionMap_Nova_super(nova_Nova_SystemFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_Nova_SystemPropertyMap, 
	
	nova_System_SystemPropertyMap_Extension_VTable* vtable;
)

void nova_Nova_SystemPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_SystemPropertyMap* nova_Nova_SystemPropertyMap_Nova_construct(nova_Nova_SystemPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_SystemPropertyMap_Nova_destroy(nova_Nova_SystemPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_SystemPropertyMap_Nova_this(nova_Nova_SystemPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_CumulativeTimer* nova_Nova_SystemPropertyMap_functionMap_static_Nova_overheadTimer(nova_Nova_SystemPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_SystemPropertyMap_Nova_super(nova_Nova_SystemPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
