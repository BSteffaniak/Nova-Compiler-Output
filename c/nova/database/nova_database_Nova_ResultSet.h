#ifndef FILE_nova_database_Nova_ResultSet_NOVA
#define FILE_nova_database_Nova_ResultSet_NOVA

typedef struct nova_database_Nova_ResultSet nova_database_Nova_ResultSet;
typedef struct nova_database_Nova_ResultSetFunctionMap nova_database_Nova_ResultSetFunctionMap;
typedef struct nova_database_Nova_ResultSetPropertyMap nova_database_Nova_ResultSetPropertyMap;


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
	nova_database_Nova_ResultSet, 
	
	nova_database_ResultSet_Extension_VTable* vtable;
	nova_datastruct_list_Nova_Array* nova_database_Nova_ResultSet_Nova_rows;
	int nova_database_Nova_ResultSet_Nova_numCols;
)

void nova_database_Nova_ResultSet_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_database_Nova_ResultSet* nova_database_Nova_ResultSet_Nova_construct(nova_database_Nova_ResultSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* rows, int numCols);
void nova_database_Nova_ResultSet_Nova_destroy(nova_database_Nova_ResultSet** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_database_Nova_ResultSet_Nova_this(nova_database_Nova_ResultSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* rows, int numCols);
int nova_database_Nova_ResultSet_Accessor_Nova_numRows(nova_database_Nova_ResultSet* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_database_Nova_ResultSet_Nova_super(nova_database_Nova_ResultSet* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_database_Nova_ResultSetFunctionMap, 
	
	nova_database_ResultSet_ResultSetFunctionMap_Extension_VTable* vtable;
)

void nova_database_Nova_ResultSetFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_database_Nova_ResultSetFunctionMap* nova_database_Nova_ResultSetFunctionMap_Nova_construct(nova_database_Nova_ResultSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_database_Nova_ResultSetFunctionMap_Nova_destroy(nova_database_Nova_ResultSetFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_database_Nova_ResultSetFunctionMap_Nova_this(nova_database_Nova_ResultSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_database_Nova_ResultSet* nova_database_Nova_ResultSetFunctionMap_functionMapResultSetFunctionMap_Nova_construct(nova_database_Nova_ResultSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* rows, int numCols);
void nova_database_Nova_ResultSetFunctionMap_Nova_super(nova_database_Nova_ResultSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_database_Nova_ResultSetPropertyMap, 
	
	nova_database_ResultSet_ResultSetPropertyMap_Extension_VTable* vtable;
)

void nova_database_Nova_ResultSetPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_database_Nova_ResultSetPropertyMap* nova_database_Nova_ResultSetPropertyMap_Nova_construct(nova_database_Nova_ResultSetPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_database_Nova_ResultSetPropertyMap_Nova_destroy(nova_database_Nova_ResultSetPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_database_Nova_ResultSetPropertyMap_Nova_this(nova_database_Nova_ResultSetPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_database_Nova_ResultSetPropertyMap_functionMap_Nova_numRows(nova_database_Nova_ResultSetPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_database_Nova_ResultSet* reference);
nova_datastruct_list_Nova_Array* nova_database_Nova_ResultSetPropertyMap_functionMap_Nova_rows(nova_database_Nova_ResultSetPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_database_Nova_ResultSet* reference);
int nova_database_Nova_ResultSetPropertyMap_functionMap_Nova_numCols(nova_database_Nova_ResultSetPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_database_Nova_ResultSet* reference);
void nova_database_Nova_ResultSetPropertyMap_Nova_super(nova_database_Nova_ResultSetPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
