#ifndef FILE_nova_exception_Nova_ExceptionData_NOVA
#define FILE_nova_exception_Nova_ExceptionData_NOVA

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_exception_Nova_ExceptionDataFunctionMap nova_exception_Nova_ExceptionDataFunctionMap;
typedef struct nova_exception_Nova_ExceptionDataPropertyMap nova_exception_Nova_ExceptionDataPropertyMap;


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
#include <signal.h>
#include <NovaExceptionHandling.h>
#include <nova/exception/nova_exception_Nova_CaughtException.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_exception_Nova_ExceptionData, 
	
	nova_exception_ExceptionData_Extension_VTable* vtable;
	nova_exception_Nova_ExceptionData* nova_exception_Nova_ExceptionData_Nova_parent;
	nova_datastruct_list_Nova_Array* nova_exception_Nova_ExceptionData_Nova_caught;
	nova_exception_Nova_Exception* nova_exception_Nova_ExceptionData_Nova_thrownException;
	buffer* nova_exception_Nova_ExceptionData_Nova_buf;
)

void nova_exception_Nova_ExceptionData_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_exception_Nova_ExceptionData* nova_exception_Nova_ExceptionData_Nova_construct(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, buffer* buf);
void nova_exception_Nova_ExceptionData_Nova_destroy(nova_exception_Nova_ExceptionData** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_exception_Nova_ExceptionData_Nova_this(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, buffer* buf);
void nova_exception_Nova_ExceptionData_Nova_addCaught(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* type, int soft);
char nova_exception_Nova_ExceptionData_Nova_throwException(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData** context, nova_exception_Nova_Exception* exception, char soft);
void nova_exception_Nova_ExceptionData_Nova_super(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_exception_Nova_ExceptionDataFunctionMap, 
	
	nova_exception_ExceptionData_ExceptionDataFunctionMap_Extension_VTable* vtable;
)

void nova_exception_Nova_ExceptionDataFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_exception_Nova_ExceptionDataFunctionMap* nova_exception_Nova_ExceptionDataFunctionMap_Nova_construct(nova_exception_Nova_ExceptionDataFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_exception_Nova_ExceptionDataFunctionMap_Nova_destroy(nova_exception_Nova_ExceptionDataFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_exception_Nova_ExceptionDataFunctionMap_Nova_this(nova_exception_Nova_ExceptionDataFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_exception_Nova_ExceptionDataFunctionMap_functionMap_Nova_addCaught(nova_exception_Nova_ExceptionDataFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData* reference, nova_meta_Nova_Class* type, char soft);
char nova_exception_Nova_ExceptionDataFunctionMap_functionMap_Nova_throwException(nova_exception_Nova_ExceptionDataFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData* reference, nova_exception_Nova_ExceptionData* context, nova_exception_Nova_Exception* exception, char soft);
void nova_exception_Nova_ExceptionDataFunctionMap_Nova_super(nova_exception_Nova_ExceptionDataFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_exception_Nova_ExceptionDataPropertyMap, 
	
	nova_exception_ExceptionData_ExceptionDataPropertyMap_Extension_VTable* vtable;
)

void nova_exception_Nova_ExceptionDataPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_exception_Nova_ExceptionDataPropertyMap* nova_exception_Nova_ExceptionDataPropertyMap_Nova_construct(nova_exception_Nova_ExceptionDataPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_exception_Nova_ExceptionDataPropertyMap_Nova_destroy(nova_exception_Nova_ExceptionDataPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_exception_Nova_ExceptionDataPropertyMap_Nova_this(nova_exception_Nova_ExceptionDataPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_exception_Nova_ExceptionData* nova_exception_Nova_ExceptionDataPropertyMap_functionMap_Nova_parent(nova_exception_Nova_ExceptionDataPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData* reference);
nova_datastruct_list_Nova_Array* nova_exception_Nova_ExceptionDataPropertyMap_functionMap_Nova_caught(nova_exception_Nova_ExceptionDataPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData* reference);
nova_exception_Nova_Exception* nova_exception_Nova_ExceptionDataPropertyMap_functionMap_Nova_thrownException(nova_exception_Nova_ExceptionDataPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData* reference);
buffer* nova_exception_Nova_ExceptionDataPropertyMap_functionMap_Nova_buf(nova_exception_Nova_ExceptionDataPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData* reference);
void nova_exception_Nova_ExceptionDataPropertyMap_Nova_super(nova_exception_Nova_ExceptionDataPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
