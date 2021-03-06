#ifndef FILE_nova_math_Nova_Vector_NOVA
#define FILE_nova_math_Nova_Vector_NOVA

typedef struct nova_math_Nova_Vector nova_math_Nova_Vector;
typedef struct nova_math_Nova_VectorFunctionMap nova_math_Nova_VectorFunctionMap;
typedef struct nova_math_Nova_VectorPropertyMap nova_math_Nova_VectorPropertyMap;


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
	nova_math_Nova_Vector, 
	
	nova_math_Vector_Extension_VTable* vtable;
	nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_data;
)

void nova_math_Nova_Vector_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Vector* nova_math_Nova_Vector_0_Nova_construct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, int size);
nova_math_Nova_Vector* nova_math_Nova_Vector_1_Nova_construct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* data);
void nova_math_Nova_Vector_Nova_destroy(nova_math_Nova_Vector** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Vector_0_Nova_this(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, int size);
void nova_math_Nova_Vector_1_Nova_this(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* data);
double nova_math_Nova_Vector_Nova_dotProduct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* other);
double nova_math_Nova_Vector_Nova_innerProduct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* other);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_scale(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double scalar);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_normalize(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_math_Nova_Vector_Nova_toString(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_Vector_Accessor_Nova_magnitude(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Vector_Nova_super(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_Vector_virtual_Nova_dotProduct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* other);

CCLASS_CLASS
(
	nova_math_Nova_VectorFunctionMap, 
	
	nova_math_Vector_VectorFunctionMap_Extension_VTable* vtable;
)

void nova_math_Nova_VectorFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_VectorFunctionMap* nova_math_Nova_VectorFunctionMap_Nova_construct(nova_math_Nova_VectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_VectorFunctionMap_Nova_destroy(nova_math_Nova_VectorFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_VectorFunctionMap_Nova_this(nova_math_Nova_VectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Vector* nova_math_Nova_VectorFunctionMap_functionMapVectorFunctionMap0_Nova_construct(nova_math_Nova_VectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int size);
nova_math_Nova_Vector* nova_math_Nova_VectorFunctionMap_functionMapVectorFunctionMap1_Nova_construct(nova_math_Nova_VectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* data);
double nova_math_Nova_VectorFunctionMap_functionMap_Nova_dotProduct(nova_math_Nova_VectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* reference, nova_math_Nova_Vector* other);
double nova_math_Nova_VectorFunctionMap_functionMap_Nova_innerProduct(nova_math_Nova_VectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* reference, nova_math_Nova_Vector* other);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_VectorFunctionMap_functionMap_Nova_scale(nova_math_Nova_VectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* reference, double scalar);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_VectorFunctionMap_functionMap_Nova_normalize(nova_math_Nova_VectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* reference);
nova_Nova_String* nova_math_Nova_VectorFunctionMap_functionMap_Nova_toString(nova_math_Nova_VectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* reference);
void nova_math_Nova_VectorFunctionMap_Nova_super(nova_math_Nova_VectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_VectorFunctionMap_virtualfunctionMap_Nova_dotProduct(nova_math_Nova_VectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* reference, nova_math_Nova_Vector* other);

CCLASS_CLASS
(
	nova_math_Nova_VectorPropertyMap, 
	
	nova_math_Vector_VectorPropertyMap_Extension_VTable* vtable;
)

void nova_math_Nova_VectorPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_VectorPropertyMap* nova_math_Nova_VectorPropertyMap_Nova_construct(nova_math_Nova_VectorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_VectorPropertyMap_Nova_destroy(nova_math_Nova_VectorPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_VectorPropertyMap_Nova_this(nova_math_Nova_VectorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_VectorPropertyMap_functionMap_Nova_magnitude(nova_math_Nova_VectorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* reference);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_VectorPropertyMap_functionMap_Nova_data(nova_math_Nova_VectorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* reference);
void nova_math_Nova_VectorPropertyMap_Nova_super(nova_math_Nova_VectorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
