#ifndef FILE_nova_regex_Nova_Match_NOVA
#define FILE_nova_regex_Nova_Match_NOVA

typedef struct nova_regex_Nova_Match nova_regex_Nova_Match;
typedef struct nova_regex_Nova_MatchFunctionMap nova_regex_Nova_MatchFunctionMap;
typedef struct nova_regex_Nova_MatchPropertyMap nova_regex_Nova_MatchPropertyMap;


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
	nova_regex_Nova_Match, 
	
	nova_regex_Match_Extension_VTable* vtable;
	nova_Nova_String* nova_regex_Nova_Match_Nova_source;
	int nova_regex_Nova_Match_Nova_start;
	int nova_regex_Nova_Match_Nova_end;
)

void nova_regex_Nova_Match_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_regex_Nova_Match* nova_regex_Nova_Match_Nova_construct(nova_regex_Nova_Match* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, int start, int end);
void nova_regex_Nova_Match_Nova_destroy(nova_regex_Nova_Match** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_regex_Nova_Match_Nova_this(nova_regex_Nova_Match* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, int start, int end);
nova_Nova_String* nova_regex_Nova_Match_Nova_toString(nova_regex_Nova_Match* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_regex_Nova_Match_Accessor_Nova_count(nova_regex_Nova_Match* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_regex_Nova_Match_Accessor_Nova_match(nova_regex_Nova_Match* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_regex_Nova_Match_Nova_super(nova_regex_Nova_Match* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_regex_Nova_MatchFunctionMap, 
	
	nova_regex_Match_MatchFunctionMap_Extension_VTable* vtable;
)

void nova_regex_Nova_MatchFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_regex_Nova_MatchFunctionMap* nova_regex_Nova_MatchFunctionMap_Nova_construct(nova_regex_Nova_MatchFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_regex_Nova_MatchFunctionMap_Nova_destroy(nova_regex_Nova_MatchFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_regex_Nova_MatchFunctionMap_Nova_this(nova_regex_Nova_MatchFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_regex_Nova_Match* nova_regex_Nova_MatchFunctionMap_functionMapMatchFunctionMap_Nova_construct(nova_regex_Nova_MatchFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, int start, int end);
nova_Nova_String* nova_regex_Nova_MatchFunctionMap_functionMap_Nova_toString(nova_regex_Nova_MatchFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* reference);
void nova_regex_Nova_MatchFunctionMap_Nova_super(nova_regex_Nova_MatchFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_regex_Nova_MatchPropertyMap, 
	
	nova_regex_Match_MatchPropertyMap_Extension_VTable* vtable;
)

void nova_regex_Nova_MatchPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_regex_Nova_MatchPropertyMap* nova_regex_Nova_MatchPropertyMap_Nova_construct(nova_regex_Nova_MatchPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_regex_Nova_MatchPropertyMap_Nova_destroy(nova_regex_Nova_MatchPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_regex_Nova_MatchPropertyMap_Nova_this(nova_regex_Nova_MatchPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_regex_Nova_MatchPropertyMap_functionMap_Nova_count(nova_regex_Nova_MatchPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* reference);
nova_Nova_String* nova_regex_Nova_MatchPropertyMap_functionMap_Nova_match(nova_regex_Nova_MatchPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* reference);
nova_Nova_String* nova_regex_Nova_MatchPropertyMap_functionMap_Nova_source(nova_regex_Nova_MatchPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* reference);
int nova_regex_Nova_MatchPropertyMap_functionMap_Nova_start(nova_regex_Nova_MatchPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* reference);
int nova_regex_Nova_MatchPropertyMap_functionMap_Nova_end(nova_regex_Nova_MatchPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* reference);
void nova_regex_Nova_MatchPropertyMap_Nova_super(nova_regex_Nova_MatchPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
