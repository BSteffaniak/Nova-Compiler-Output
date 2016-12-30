#ifndef FILE_nova_datastruct_list_Nova_ImmutableArray_NOVA
#define FILE_nova_datastruct_list_Nova_ImmutableArray_NOVA

typedef struct nova_datastruct_list_Nova_ImmutableArray nova_datastruct_list_Nova_ImmutableArray;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_Nova_Object nova_Nova_Object;
typedef struct nova_datastruct_list_Nova_Array nova_datastruct_list_Nova_Array;

typedef nova_Nova_Object* (*nova_datastruct_list_Nova_ImmutableArray_closure1_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_ImmutableArray_closure2_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_ImmutableArray_closure3_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_ImmutableArray_closure4_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef void (*nova_datastruct_list_Nova_ImmutableArray_closure5_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef void (*nova_datastruct_list_Nova_ImmutableArray_closure6_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef void (*nova_datastruct_list_Nova_ImmutableArray_closure7_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef void (*nova_datastruct_list_Nova_ImmutableArray_closure8_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef char (*nova_datastruct_list_Nova_ImmutableArray_closure9_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef char (*nova_datastruct_list_Nova_ImmutableArray_closure10_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef char (*nova_datastruct_list_Nova_ImmutableArray_closure11_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef char (*nova_datastruct_list_Nova_ImmutableArray_closure12_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);

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
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ImmutableArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>

CCLASS_CLASS
(
	nova_datastruct_list_Nova_ImmutableArray, 
	
	nova_datastruct_list_ImmutableArray_Extension_VTable* vtable;
	int nova_datastruct_list_Nova_ImmutableArray_Nova_count;
	struct Private* prv;
)

void nova_datastruct_list_Nova_ImmutableArray_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_0_Nova_construct(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array);
nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object** array, int count);
void nova_datastruct_list_Nova_ImmutableArray_Nova_destroy(nova_datastruct_list_Nova_ImmutableArray** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_ImmutableArray_Nova_this(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_ImmutableArray_0_Nova_this(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array);
void nova_datastruct_list_Nova_ImmutableArray_1_Nova_this(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object** array, int count);
void nova_datastruct_list_Nova_ImmutableArray_2_Nova_this(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array, char clone);
int nova_datastruct_list_Nova_ImmutableArray_Nova_indexOf(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element);
nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_Nova_map(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_ImmutableArray_closure4_Nova_mapFunc nova_datastruct_list_Nova_ImmutableArray_Nova_mapFunc, void* nova_datastruct_list_Nova_ImmutableArray_ref_Nova_mapFunc, void* mapFunc_context);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_ImmutableArray_Nova_forEach(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_ImmutableArray_closure8_Nova_func nova_datastruct_list_Nova_ImmutableArray_Nova_func, void* nova_datastruct_list_Nova_ImmutableArray_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_Nova_filter(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_ImmutableArray_closure12_Nova_filterFunc nova_datastruct_list_Nova_ImmutableArray_Nova_filterFunc, void* nova_datastruct_list_Nova_ImmutableArray_ref_Nova_filterFunc, void* filterFunc_context);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_ImmutableArray_Nova_toArray(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_Nova_take(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany);
nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_Nova_skip(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany);
nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_Nova_reverse(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_datastruct_list_Nova_ImmutableArray_Nova_toString(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_0_Nova_add(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element);
nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_1_Nova_add(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_Object* element);
nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_0_Nova_remove(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element);
nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArray_1_Nova_remove(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_ImmutableArray_Nova_toMutable(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_list_Nova_ImmutableArray_Nova_get(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index);
nova_Nova_Object* nova_datastruct_list_Nova_ImmutableArray_Nova_set(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_Object* value);
int nova_datastruct_list_Nova_ImmutableArray_Accessorfunc_Nova_count(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_datastruct_list_Nova_ImmutableArray_Mutatorfunc_Nova_count(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, int value);
char nova_datastruct_list_Nova_ImmutableArray_Accessor_Nova_empty(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_ImmutableArrayIterator* nova_datastruct_list_Nova_ImmutableArray_Accessor_Nova_iterator(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_list_Nova_ImmutableArray_Accessor_Nova_first(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_list_Nova_ImmutableArray_Mutator_Nova_first(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value);
nova_Nova_Object* nova_datastruct_list_Nova_ImmutableArray_Accessor_Nova_last(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_list_Nova_ImmutableArray_Mutator_Nova_last(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value);
void nova_datastruct_list_Nova_ImmutableArray_Nova_super(nova_datastruct_list_Nova_ImmutableArray* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
