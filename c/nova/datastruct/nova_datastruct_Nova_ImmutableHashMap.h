#ifndef FILE_nova_datastruct_Nova_ImmutableHashMap_NOVA
#define FILE_nova_datastruct_Nova_ImmutableHashMap_NOVA

typedef struct nova_datastruct_Nova_ImmutableHashMap nova_datastruct_Nova_ImmutableHashMap;
typedef struct nova_datastruct_Nova_ImmutableHashMapFunctionMap nova_datastruct_Nova_ImmutableHashMapFunctionMap;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_datastruct_Nova_Pair nova_datastruct_Nova_Pair;
typedef struct nova_datastruct_Nova_HashMap nova_datastruct_Nova_HashMap;
typedef struct nova_Nova_Object nova_Nova_Object;

typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure1_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure2_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure3_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure4_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure5_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure6_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure7_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure8_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_ImmutableHashMap_closure9_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_ImmutableHashMap_closure10_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_ImmutableHashMap_closure11_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_ImmutableHashMap_closure12_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure13_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure14_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure15_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure16_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure17_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure18_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure19_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMap_closure20_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef void (*nova_datastruct_Nova_ImmutableHashMap_closure21_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef void (*nova_datastruct_Nova_ImmutableHashMap_closure22_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef void (*nova_datastruct_Nova_ImmutableHashMap_closure23_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef void (*nova_datastruct_Nova_ImmutableHashMap_closure24_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMapFunctionMap_closure25_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMapFunctionMap_closure26_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_ImmutableHashMapFunctionMap_closure27_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMapFunctionMap_closure28_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef char (*nova_datastruct_Nova_ImmutableHashMapFunctionMap_closure29_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef void (*nova_datastruct_Nova_ImmutableHashMapFunctionMap_closure30_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);

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
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_Pair.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_datastruct_Nova_ImmutableHashMap, 
	
	nova_datastruct_ImmutableHashMap_Extension_VTable* vtable;
	nova_datastruct_list_Nova_Iterator* nova_datastruct_Nova_ImmutableHashMap_Nova_iterator;
	nova_datastruct_Nova_Pair* nova_datastruct_Nova_ImmutableHashMap_Nova_first;
	nova_datastruct_Nova_Pair* nova_datastruct_Nova_ImmutableHashMap_Nova_last;
	struct Private_nova_datastruct_Nova_ImmutableHashMap* prv;
)

void nova_datastruct_Nova_ImmutableHashMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_Nova_ImmutableHashMap* nova_datastruct_Nova_ImmutableHashMap_0_Nova_construct(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* map);
void nova_datastruct_Nova_ImmutableHashMap_Nova_destroy(nova_datastruct_Nova_ImmutableHashMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_ImmutableHashMap_0_Nova_this(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* map);
void nova_datastruct_Nova_ImmutableHashMap_1_Nova_this(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* map, char clone);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMap_Nova_toArray(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_datastruct_Nova_ImmutableHashMap_0_Nova_contains(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* value);
char nova_datastruct_Nova_ImmutableHashMap_0_Nova_any(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap_closure4_Nova_func nova_datastruct_Nova_ImmutableHashMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, void* func_context);
char nova_datastruct_Nova_ImmutableHashMap_0_Nova_all(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap_closure8_Nova_func nova_datastruct_Nova_ImmutableHashMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMap_func0_Nova_map(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap_closure12_Nova_func nova_datastruct_Nova_ImmutableHashMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMap_0_Nova_filter(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap_closure16_Nova_func nova_datastruct_Nova_ImmutableHashMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, void* func_context);
nova_Nova_String* nova_datastruct_Nova_ImmutableHashMap_Nova_join(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMap_Nova_skip(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, int num);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMap_Nova_take(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, int num);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMap_Nova_reverse(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_Nova_Pair* nova_datastruct_Nova_ImmutableHashMap_0_Nova_firstWhere(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap_closure20_Nova_func nova_datastruct_Nova_ImmutableHashMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, void* func_context);
nova_datastruct_Nova_HashMap* nova_datastruct_Nova_ImmutableHashMap_0_Nova_forEach(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap_closure24_Nova_func nova_datastruct_Nova_ImmutableHashMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMap_ref_Nova_func, void* func_context);
char nova_datastruct_Nova_ImmutableHashMap_Nova_containsKey(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key);
nova_Nova_Object* nova_datastruct_Nova_ImmutableHashMap_Nova_get(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key);
nova_Nova_Object* nova_datastruct_Nova_ImmutableHashMap_Nova_set(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key, nova_Nova_Object* value);
int nova_datastruct_Nova_ImmutableHashMap_Accessor_Nova_count(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Iterator* nova_datastruct_Nova_ImmutableHashMap_Accessorfunc_Nova_iterator(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Iterator* nova_datastruct_Nova_ImmutableHashMap_Mutatorfunc_Nova_iterator(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Iterator* value);
nova_datastruct_Nova_Pair* nova_datastruct_Nova_ImmutableHashMap_Accessorfunc_Nova_first(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_Nova_Pair* nova_datastruct_Nova_ImmutableHashMap_Mutatorfunc_Nova_first(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* value);
nova_datastruct_Nova_Pair* nova_datastruct_Nova_ImmutableHashMap_Accessorfunc_Nova_last(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_Nova_Pair* nova_datastruct_Nova_ImmutableHashMap_Mutatorfunc_Nova_last(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* value);
void nova_datastruct_Nova_ImmutableHashMap_Nova_super(nova_datastruct_Nova_ImmutableHashMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_datastruct_Nova_ImmutableHashMapFunctionMap, 
	
	nova_datastruct_ImmutableHashMap_ImmutableHashMapFunctionMap_Extension_VTable* vtable;
)

void nova_datastruct_Nova_ImmutableHashMapFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_Nova_ImmutableHashMapFunctionMap* nova_datastruct_Nova_ImmutableHashMapFunctionMap_Nova_construct(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_ImmutableHashMapFunctionMap_Nova_destroy(nova_datastruct_Nova_ImmutableHashMapFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_ImmutableHashMapFunctionMap_Nova_this(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_Nova_ImmutableHashMap* nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMapImmutableHashMapFunctionMap0_Nova_construct(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* map);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap0_Nova_toArray(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference);
char nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap0_Nova_contains(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference, nova_datastruct_Nova_Pair* value);
char nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap0_Nova_any(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference, nova_datastruct_Nova_ImmutableHashMapFunctionMap_closure25_Nova_func nova_datastruct_Nova_ImmutableHashMapFunctionMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMapFunctionMap_ref_Nova_func, void* func_context);
char nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap0_Nova_all(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference, nova_datastruct_Nova_ImmutableHashMapFunctionMap_closure26_Nova_func nova_datastruct_Nova_ImmutableHashMapFunctionMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMapFunctionMap_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap0_Nova_map(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference, nova_datastruct_Nova_ImmutableHashMapFunctionMap_closure27_Nova_func nova_datastruct_Nova_ImmutableHashMapFunctionMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMapFunctionMap_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap0_Nova_filter(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference, nova_datastruct_Nova_ImmutableHashMapFunctionMap_closure28_Nova_func nova_datastruct_Nova_ImmutableHashMapFunctionMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMapFunctionMap_ref_Nova_func, void* func_context);
nova_Nova_String* nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap0_Nova_join(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference, nova_Nova_String* delimiter);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap0_Nova_skip(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference, int num);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap0_Nova_take(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference, int num);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap_Nova_reverse(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference);
nova_datastruct_Nova_Pair* nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap0_Nova_firstWhere(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference, nova_datastruct_Nova_ImmutableHashMapFunctionMap_closure29_Nova_func nova_datastruct_Nova_ImmutableHashMapFunctionMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMapFunctionMap_ref_Nova_func, void* func_context);
nova_datastruct_Nova_HashMap* nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap0_Nova_forEach(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference, nova_datastruct_Nova_ImmutableHashMapFunctionMap_closure30_Nova_func nova_datastruct_Nova_ImmutableHashMapFunctionMap_Nova_func, void* nova_datastruct_Nova_ImmutableHashMapFunctionMap_ref_Nova_func, void* func_context);
char nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap_Nova_containsKey(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference, nova_Nova_Object* key);
nova_Nova_Object* nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap_Nova_get(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference, nova_Nova_Object* key);
nova_Nova_Object* nova_datastruct_Nova_ImmutableHashMapFunctionMap_functionMap_Nova_set(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_ImmutableHashMap* reference, nova_Nova_Object* key, nova_Nova_Object* value);
void nova_datastruct_Nova_ImmutableHashMapFunctionMap_Nova_super(nova_datastruct_Nova_ImmutableHashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
