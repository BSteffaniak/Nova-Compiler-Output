#ifndef FILE_nova_math_Nova_Polynomial_NOVA
#define FILE_nova_math_Nova_Polynomial_NOVA

typedef struct nova_math_Nova_Polynomial nova_math_Nova_Polynomial;
typedef struct nova_math_Nova_PolynomialFunctionMap nova_math_Nova_PolynomialFunctionMap;
typedef struct nova_math_Nova_PolynomialPropertyMap nova_math_Nova_PolynomialPropertyMap;


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
	nova_math_Nova_Polynomial, 
	
	nova_math_Polynomial_Extension_VTable* vtable;
	nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Polynomial_Nova_coefficients;
	nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Polynomial_Nova_degrees;
	nova_datastruct_list_Nova_Array* nova_math_Nova_Polynomial_Nova_signs;
)

void nova_math_Nova_Polynomial_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Polynomial* nova_math_Nova_Polynomial_Nova_construct(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* polynomial);
void nova_math_Nova_Polynomial_Nova_destroy(nova_math_Nova_Polynomial** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Polynomial_Nova_this(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* polynomial);
void nova_math_Nova_Polynomial_Nova_super(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_math_Nova_PolynomialFunctionMap, 
	
	nova_math_Polynomial_PolynomialFunctionMap_Extension_VTable* vtable;
)

void nova_math_Nova_PolynomialFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_PolynomialFunctionMap* nova_math_Nova_PolynomialFunctionMap_Nova_construct(nova_math_Nova_PolynomialFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_PolynomialFunctionMap_Nova_destroy(nova_math_Nova_PolynomialFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_PolynomialFunctionMap_Nova_this(nova_math_Nova_PolynomialFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Polynomial* nova_math_Nova_PolynomialFunctionMap_functionMapPolynomialFunctionMap_Nova_construct(nova_math_Nova_PolynomialFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* polynomial);
void nova_math_Nova_PolynomialFunctionMap_Nova_super(nova_math_Nova_PolynomialFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_math_Nova_PolynomialPropertyMap, 
	
	nova_math_Polynomial_PolynomialPropertyMap_Extension_VTable* vtable;
)

void nova_math_Nova_PolynomialPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_PolynomialPropertyMap* nova_math_Nova_PolynomialPropertyMap_Nova_construct(nova_math_Nova_PolynomialPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_PolynomialPropertyMap_Nova_destroy(nova_math_Nova_PolynomialPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_PolynomialPropertyMap_Nova_this(nova_math_Nova_PolynomialPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_PolynomialPropertyMap_functionMap_Nova_coefficients(nova_math_Nova_PolynomialPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Polynomial* reference);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_PolynomialPropertyMap_functionMap_Nova_degrees(nova_math_Nova_PolynomialPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Polynomial* reference);
nova_datastruct_list_Nova_Array* nova_math_Nova_PolynomialPropertyMap_functionMap_Nova_signs(nova_math_Nova_PolynomialPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Polynomial* reference);
void nova_math_Nova_PolynomialPropertyMap_Nova_super(nova_math_Nova_PolynomialPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
