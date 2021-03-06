#ifndef FILE_nova_Nova_Substring_NOVA
#define FILE_nova_Nova_Substring_NOVA

typedef struct nova_Nova_Substring nova_Nova_Substring;
typedef struct nova_Nova_SubstringFunctionMap nova_Nova_SubstringFunctionMap;
typedef struct nova_Nova_SubstringPropertyMap nova_Nova_SubstringPropertyMap;


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
#include <nova/datastruct/list/nova_datastruct_list_Nova_StringCharArray.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_String.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/regex/nova_regex_Nova_Regex.h>
#include <nova/regex/nova_regex_Nova_Match.h>
#include <nova/nova_Nova_Substring.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_Nova_Substring, 
	
	nova_Substring_Extension_VTable* vtable;
	int nova_Nova_String_Nova_count;
	nova_datastruct_list_Nova_StringCharArray* nova_Nova_String_Nova_chars;
	nova_Nova_String* nova_Nova_Substring_Nova_source;
	int nova_Nova_Substring_Nova_start;
)

void nova_Nova_Substring_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Substring* nova_Nova_Substring_Nova_construct(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, int start, int end);
void nova_Nova_Substring_Nova_destroy(nova_Nova_Substring** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_Substring_Nova_this(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, int start, int end);
nova_Nova_String* nova_Nova_Substring_Nova_substring(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end);
int nova_Nova_Substring_Accessor_Nova_end(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData);
long_long nova_Nova_Substring_Accessor_Nova_hashCodeLong(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_Substring_Nova_super(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_Nova_SubstringFunctionMap, 
	
	nova_Substring_SubstringFunctionMap_Extension_VTable* vtable;
)

void nova_Nova_SubstringFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_SubstringFunctionMap* nova_Nova_SubstringFunctionMap_Nova_construct(nova_Nova_SubstringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_SubstringFunctionMap_Nova_destroy(nova_Nova_SubstringFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_SubstringFunctionMap_Nova_this(nova_Nova_SubstringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Substring* nova_Nova_SubstringFunctionMap_functionMapSubstringFunctionMap_Nova_construct(nova_Nova_SubstringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, int start, int end);
nova_Nova_String* nova_Nova_SubstringFunctionMap_functionMap_Nova_substring(nova_Nova_SubstringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Substring* reference, int start, int end);
void nova_Nova_SubstringFunctionMap_Nova_super(nova_Nova_SubstringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_Nova_SubstringPropertyMap, 
	
	nova_Substring_SubstringPropertyMap_Extension_VTable* vtable;
)

void nova_Nova_SubstringPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_SubstringPropertyMap* nova_Nova_SubstringPropertyMap_Nova_construct(nova_Nova_SubstringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_SubstringPropertyMap_Nova_destroy(nova_Nova_SubstringPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_SubstringPropertyMap_Nova_this(nova_Nova_SubstringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_Nova_SubstringPropertyMap_functionMap_Nova_source(nova_Nova_SubstringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Substring* reference);
int nova_Nova_SubstringPropertyMap_functionMap_Nova_start(nova_Nova_SubstringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Substring* reference);
int nova_Nova_SubstringPropertyMap_functionMap_Nova_end(nova_Nova_SubstringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Substring* reference);
long_long nova_Nova_SubstringPropertyMap_functionMap_Nova_hashCodeLong(nova_Nova_SubstringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Substring* reference);
void nova_Nova_SubstringPropertyMap_Nova_super(nova_Nova_SubstringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
