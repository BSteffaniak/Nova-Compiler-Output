#ifndef FILE_nova_time_Nova_Date_NOVA
#define FILE_nova_time_Nova_Date_NOVA

typedef struct nova_time_Nova_Date nova_time_Nova_Date;
typedef struct nova_time_Nova_DateFunctionMap nova_time_Nova_DateFunctionMap;
typedef struct nova_time_Nova_DatePropertyMap nova_time_Nova_DatePropertyMap;


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
#include <nova/time/NativeDate.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_time_Nova_Date, 
	
	nova_time_Date_Extension_VTable* vtable;
	int nova_time_Nova_Date_Nova_year;
	int nova_time_Nova_Date_Nova_month;
	int nova_time_Nova_Date_Nova_day;
	int nova_time_Nova_Date_Nova_hour;
	int nova_time_Nova_Date_Nova_minute;
	int nova_time_Nova_Date_Nova_second;
)

void nova_time_Nova_Date_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_Date* nova_time_Nova_Date_Nova_construct(nova_time_Nova_Date* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_Date_Nova_destroy(nova_time_Nova_Date** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_Date_Nova_this(nova_time_Nova_Date* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_Date_Nova_decodeDate(nova_time_Nova_Date* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* prototype, nova_Nova_String* date);
void nova_time_Nova_Date_Nova_updateTime(nova_time_Nova_Date* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_time_Nova_Date_Nova_formatDate(nova_time_Nova_Date* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, int first, int second, int third, int fourth, int fifth, int sixth);
void nova_time_Nova_Date_Nova_super(nova_time_Nova_Date* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_time_Nova_DateFunctionMap, 
	
	nova_time_Date_DateFunctionMap_Extension_VTable* vtable;
)

void nova_time_Nova_DateFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_DateFunctionMap* nova_time_Nova_DateFunctionMap_Nova_construct(nova_time_Nova_DateFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_DateFunctionMap_Nova_destroy(nova_time_Nova_DateFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_DateFunctionMap_Nova_this(nova_time_Nova_DateFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_Date* nova_time_Nova_DateFunctionMap_functionMapDateFunctionMap_Nova_construct(nova_time_Nova_DateFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_DateFunctionMap_functionMap_Nova_decodeDate(nova_time_Nova_DateFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Date* reference, nova_Nova_String* prototype, nova_Nova_String* date);
void nova_time_Nova_DateFunctionMap_functionMap_Nova_updateTime(nova_time_Nova_DateFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Date* reference);
nova_Nova_String* nova_time_Nova_DateFunctionMap_functionMap_Nova_formatDate(nova_time_Nova_DateFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Date* reference, nova_Nova_String* str, int first, int second, int third, int fourth, int fifth, int sixth);
void nova_time_Nova_DateFunctionMap_Nova_super(nova_time_Nova_DateFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_time_Nova_DatePropertyMap, 
	
	nova_time_Date_DatePropertyMap_Extension_VTable* vtable;
)

void nova_time_Nova_DatePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_time_Nova_DatePropertyMap* nova_time_Nova_DatePropertyMap_Nova_construct(nova_time_Nova_DatePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_DatePropertyMap_Nova_destroy(nova_time_Nova_DatePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_time_Nova_DatePropertyMap_Nova_this(nova_time_Nova_DatePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_time_Nova_DatePropertyMap_functionMap_Nova_year(nova_time_Nova_DatePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Date* reference);
int nova_time_Nova_DatePropertyMap_functionMap_Nova_month(nova_time_Nova_DatePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Date* reference);
int nova_time_Nova_DatePropertyMap_functionMap_Nova_day(nova_time_Nova_DatePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Date* reference);
int nova_time_Nova_DatePropertyMap_functionMap_Nova_hour(nova_time_Nova_DatePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Date* reference);
int nova_time_Nova_DatePropertyMap_functionMap_Nova_minute(nova_time_Nova_DatePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Date* reference);
int nova_time_Nova_DatePropertyMap_functionMap_Nova_second(nova_time_Nova_DatePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_time_Nova_Date* reference);
void nova_time_Nova_DatePropertyMap_Nova_super(nova_time_Nova_DatePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
