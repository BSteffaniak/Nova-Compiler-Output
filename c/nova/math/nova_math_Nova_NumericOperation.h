#ifndef FILE_nova_math_Nova_NumericOperation_NOVA
#define FILE_nova_math_Nova_NumericOperation_NOVA

typedef struct nova_math_Nova_NumericOperation nova_math_Nova_NumericOperation;
typedef struct nova_math_Nova_NumericOperationFunctionMap nova_math_Nova_NumericOperationFunctionMap;
typedef struct nova_math_Nova_NumericOperationPropertyMap nova_math_Nova_NumericOperationPropertyMap;


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
#include <nova/datastruct/nova_datastruct_Nova_Bounds.h>
#include <nova/math/nova_math_Nova_InvalidNumericStatementException.h>
#include <nova/math/nova_math_Nova_NumericOperand.h>
#include <nova/math/nova_math_Nova_NumericOperand.h>
#include <nova/math/nova_math_Nova_NumericOperand.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_math_Nova_NumericOperation, 
	
	nova_math_NumericOperation_Extension_VTable* vtable;
	struct Private_nova_math_Nova_NumericOperation* prv;
)

void nova_math_Nova_NumericOperation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_NumericOperation* nova_math_Nova_NumericOperation_0_Nova_construct(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operation);
nova_math_Nova_NumericOperation* nova_math_Nova_NumericOperation_1_Nova_construct(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* left, nova_Nova_String* operator, nova_Nova_String* right);
void nova_math_Nova_NumericOperation_Nova_destroy(nova_math_Nova_NumericOperation** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_NumericOperation_Nova_this(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operation);
void nova_math_Nova_NumericOperation_0_Nova_this(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* left, nova_Nova_String* operator, nova_Nova_String* right);
void nova_math_Nova_NumericOperation_1_Nova_this(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_NumericOperand* left, nova_Nova_String* operator, nova_math_Nova_NumericOperand* right);
nova_Nova_String* nova_math_Nova_NumericOperation_Nova_toString(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_NumericOperation_Nova_super(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_math_Nova_NumericOperationFunctionMap, 
	
	nova_math_NumericOperation_NumericOperationFunctionMap_Extension_VTable* vtable;
)

void nova_math_Nova_NumericOperationFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_NumericOperationFunctionMap* nova_math_Nova_NumericOperationFunctionMap_Nova_construct(nova_math_Nova_NumericOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_NumericOperationFunctionMap_Nova_destroy(nova_math_Nova_NumericOperationFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_NumericOperationFunctionMap_Nova_this(nova_math_Nova_NumericOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_NumericOperation* nova_math_Nova_NumericOperationFunctionMap_functionMapNumericOperationFunctionMap_Nova_construct(nova_math_Nova_NumericOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operation);
nova_math_Nova_NumericOperation* nova_math_Nova_NumericOperationFunctionMap_functionMapNumericOperationFunctionMap0_Nova_construct(nova_math_Nova_NumericOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* left, nova_Nova_String* operator, nova_Nova_String* right);
nova_Nova_String* nova_math_Nova_NumericOperationFunctionMap_functionMap_Nova_toString(nova_math_Nova_NumericOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_NumericOperation* reference);
void nova_math_Nova_NumericOperationFunctionMap_Nova_super(nova_math_Nova_NumericOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_math_Nova_NumericOperationPropertyMap, 
	
	nova_math_NumericOperation_NumericOperationPropertyMap_Extension_VTable* vtable;
)

void nova_math_Nova_NumericOperationPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_NumericOperationPropertyMap* nova_math_Nova_NumericOperationPropertyMap_Nova_construct(nova_math_Nova_NumericOperationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_NumericOperationPropertyMap_Nova_destroy(nova_math_Nova_NumericOperationPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_NumericOperationPropertyMap_Nova_this(nova_math_Nova_NumericOperationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_NumericOperationPropertyMap_Nova_super(nova_math_Nova_NumericOperationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
