#ifndef FILE_nova_datastruct_Nova_Pair_NOVA
#define FILE_nova_datastruct_Nova_Pair_NOVA

typedef struct nova_datastruct_Nova_Pair nova_datastruct_Nova_Pair;
typedef struct nova_datastruct_Nova_PairFunctionMap nova_datastruct_Nova_PairFunctionMap;
typedef struct nova_datastruct_Nova_PairPropertyMap nova_datastruct_Nova_PairPropertyMap;


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
	nova_datastruct_Nova_Pair, 
	
	nova_datastruct_Pair_Extension_VTable* vtable;
	nova_Nova_Object* nova_datastruct_Nova_Pair_Nova_key;
	nova_Nova_Object* nova_datastruct_Nova_Pair_Nova_value;
)

void nova_datastruct_Nova_Pair_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_Nova_Pair* nova_datastruct_Nova_Pair_Nova_construct(nova_datastruct_Nova_Pair* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* key, nova_Nova_Object* value);
void nova_datastruct_Nova_Pair_Nova_destroy(nova_datastruct_Nova_Pair** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_Pair_Nova_this(nova_datastruct_Nova_Pair* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* key, nova_Nova_Object* value);
nova_Nova_String* nova_datastruct_Nova_Pair_Nova_toString(nova_datastruct_Nova_Pair* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_Pair_Nova_super(nova_datastruct_Nova_Pair* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_datastruct_Nova_PairFunctionMap, 
	
	nova_datastruct_Pair_PairFunctionMap_Extension_VTable* vtable;
)

void nova_datastruct_Nova_PairFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_Nova_PairFunctionMap* nova_datastruct_Nova_PairFunctionMap_Nova_construct(nova_datastruct_Nova_PairFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_PairFunctionMap_Nova_destroy(nova_datastruct_Nova_PairFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_PairFunctionMap_Nova_this(nova_datastruct_Nova_PairFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_Nova_Pair* nova_datastruct_Nova_PairFunctionMap_functionMapPairFunctionMap_Nova_construct(nova_datastruct_Nova_PairFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* key, nova_Nova_Object* value);
nova_Nova_String* nova_datastruct_Nova_PairFunctionMap_functionMap_Nova_toString(nova_datastruct_Nova_PairFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* reference);
void nova_datastruct_Nova_PairFunctionMap_Nova_super(nova_datastruct_Nova_PairFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_datastruct_Nova_PairPropertyMap, 
	
	nova_datastruct_Pair_PairPropertyMap_Extension_VTable* vtable;
)

void nova_datastruct_Nova_PairPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_Nova_PairPropertyMap* nova_datastruct_Nova_PairPropertyMap_Nova_construct(nova_datastruct_Nova_PairPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_PairPropertyMap_Nova_destroy(nova_datastruct_Nova_PairPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_PairPropertyMap_Nova_this(nova_datastruct_Nova_PairPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_Nova_PairPropertyMap_functionMap_Nova_key(nova_datastruct_Nova_PairPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* reference);
nova_Nova_Object* nova_datastruct_Nova_PairPropertyMap_functionMap_Nova_value(nova_datastruct_Nova_PairPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* reference);
void nova_datastruct_Nova_PairPropertyMap_Nova_super(nova_datastruct_Nova_PairPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
