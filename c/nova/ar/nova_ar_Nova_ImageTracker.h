#ifndef FILE_nova_ar_Nova_ImageTracker_NOVA
#define FILE_nova_ar_Nova_ImageTracker_NOVA

typedef struct nova_ar_Nova_ImageTracker nova_ar_Nova_ImageTracker;
typedef struct nova_ar_Nova_ImageTrackerFunctionMap nova_ar_Nova_ImageTrackerFunctionMap;
typedef struct nova_ar_Nova_ImageTrackerPropertyMap nova_ar_Nova_ImageTrackerPropertyMap;


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
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_ar_Nova_ImageTracker, 
	
	nova_ar_ImageTracker_Extension_VTable* vtable;
)

void nova_ar_Nova_ImageTracker_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_ar_Nova_ImageTracker* nova_ar_Nova_ImageTracker_Nova_construct(nova_ar_Nova_ImageTracker* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_ar_Nova_ImageTracker_Nova_destroy(nova_ar_Nova_ImageTracker** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_ar_Nova_ImageTracker_Nova_this(nova_ar_Nova_ImageTracker* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_ar_Nova_ImageTracker_Nova_super(nova_ar_Nova_ImageTracker* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_ar_Nova_ImageTrackerFunctionMap, 
	
	nova_ar_ImageTracker_ImageTrackerFunctionMap_Extension_VTable* vtable;
)

void nova_ar_Nova_ImageTrackerFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_ar_Nova_ImageTrackerFunctionMap* nova_ar_Nova_ImageTrackerFunctionMap_Nova_construct(nova_ar_Nova_ImageTrackerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_ar_Nova_ImageTrackerFunctionMap_Nova_destroy(nova_ar_Nova_ImageTrackerFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_ar_Nova_ImageTrackerFunctionMap_Nova_this(nova_ar_Nova_ImageTrackerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_ar_Nova_ImageTracker* nova_ar_Nova_ImageTrackerFunctionMap_functionMapImageTrackerFunctionMap_Nova_construct(nova_ar_Nova_ImageTrackerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_ar_Nova_ImageTrackerFunctionMap_Nova_super(nova_ar_Nova_ImageTrackerFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_ar_Nova_ImageTrackerPropertyMap, 
	
	nova_ar_ImageTracker_ImageTrackerPropertyMap_Extension_VTable* vtable;
)

void nova_ar_Nova_ImageTrackerPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_ar_Nova_ImageTrackerPropertyMap* nova_ar_Nova_ImageTrackerPropertyMap_Nova_construct(nova_ar_Nova_ImageTrackerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_ar_Nova_ImageTrackerPropertyMap_Nova_destroy(nova_ar_Nova_ImageTrackerPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_ar_Nova_ImageTrackerPropertyMap_Nova_this(nova_ar_Nova_ImageTrackerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_ar_Nova_ImageTrackerPropertyMap_Nova_super(nova_ar_Nova_ImageTrackerPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
