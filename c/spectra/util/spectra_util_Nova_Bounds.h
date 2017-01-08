#ifndef FILE_spectra_util_Nova_Bounds_NOVA
#define FILE_spectra_util_Nova_Bounds_NOVA

typedef struct spectra_util_Nova_Bounds spectra_util_Nova_Bounds;
typedef struct spectra_util_Nova_BoundsFunctionMap spectra_util_Nova_BoundsFunctionMap;


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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	spectra_util_Nova_Bounds, 
	
	spectra_util_Bounds_Extension_VTable* vtable;
	int spectra_util_Nova_Bounds_Nova_start;
	int spectra_util_Nova_Bounds_Nova_end;
)
extern spectra_util_Nova_Bounds* spectra_util_Nova_Bounds_Nova_EMPTY;

void spectra_util_Nova_Bounds_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_Bounds* spectra_util_Nova_Bounds_Nova_construct(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end);
void spectra_util_Nova_Bounds_Nova_destroy(spectra_util_Nova_Bounds** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_Bounds_Nova_this(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end);
nova_Nova_String* spectra_util_Nova_Bounds_Nova_extractString(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source);
nova_Nova_String* spectra_util_Nova_Bounds_Nova_extractPreString(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source);
nova_Nova_String* spectra_util_Nova_Bounds_Nova_extractPostString(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source);
nova_Nova_String* spectra_util_Nova_Bounds_Nova_trimString(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source);
spectra_util_Nova_Bounds* spectra_util_Nova_Bounds_Nova_invalidate(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_Bounds_Nova_equals(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* bounds);
nova_Nova_String* spectra_util_Nova_Bounds_Nova_toString(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_Bounds_Nova_cloneTo(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* bounds);
spectra_util_Nova_Bounds* spectra_util_Nova_Bounds_Nova_clone(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData);
int spectra_util_Nova_Bounds_Accessor_Nova_count(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_Bounds_Accessor_Nova_isValid(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_Bounds_Accessor_Nova_isEndless(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData);
char spectra_util_Nova_Bounds_Accessor_Nova_isOptional(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_Bounds_Nova_super(spectra_util_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_util_Nova_BoundsFunctionMap, 
	
	spectra_util_Bounds_BoundsFunctionMap_Extension_VTable* vtable;
)

void spectra_util_Nova_BoundsFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_BoundsFunctionMap* spectra_util_Nova_BoundsFunctionMap_Nova_construct(spectra_util_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_BoundsFunctionMap_Nova_destroy(spectra_util_Nova_BoundsFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_BoundsFunctionMap_Nova_this(spectra_util_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_Bounds* spectra_util_Nova_BoundsFunctionMap_functionMapBoundsFunctionMap_Nova_construct(spectra_util_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end);
nova_Nova_String* spectra_util_Nova_BoundsFunctionMap_functionMap_Nova_extractString(spectra_util_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* reference, nova_Nova_String* source);
nova_Nova_String* spectra_util_Nova_BoundsFunctionMap_functionMap_Nova_extractPreString(spectra_util_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* reference, nova_Nova_String* source);
nova_Nova_String* spectra_util_Nova_BoundsFunctionMap_functionMap_Nova_extractPostString(spectra_util_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* reference, nova_Nova_String* source);
nova_Nova_String* spectra_util_Nova_BoundsFunctionMap_functionMap_Nova_trimString(spectra_util_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* reference, nova_Nova_String* source);
spectra_util_Nova_Bounds* spectra_util_Nova_BoundsFunctionMap_functionMap_Nova_invalidate(spectra_util_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* reference);
char spectra_util_Nova_BoundsFunctionMap_functionMap_Nova_equals(spectra_util_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* reference, spectra_util_Nova_Bounds* bounds);
nova_Nova_String* spectra_util_Nova_BoundsFunctionMap_functionMap_Nova_toString(spectra_util_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* reference);
void spectra_util_Nova_BoundsFunctionMap_functionMap_Nova_cloneTo(spectra_util_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* reference, spectra_util_Nova_Bounds* bounds);
spectra_util_Nova_Bounds* spectra_util_Nova_BoundsFunctionMap_functionMap_Nova_clone(spectra_util_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Bounds* reference);
void spectra_util_Nova_BoundsFunctionMap_Nova_super(spectra_util_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
