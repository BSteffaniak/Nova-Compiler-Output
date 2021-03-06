#ifndef FILE_nova_math_Nova_Vector2D_NOVA
#define FILE_nova_math_Nova_Vector2D_NOVA

typedef struct nova_math_Nova_Vector2D nova_math_Nova_Vector2D;
typedef struct nova_math_Nova_Vector2DFunctionMap nova_math_Nova_Vector2DFunctionMap;
typedef struct nova_math_Nova_Vector2DPropertyMap nova_math_Nova_Vector2DPropertyMap;


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
#include <nova/math/nova_math_Nova_Vector.h>
#include <nova/math/nova_math_Nova_Vector3D.h>
#include <nova/math/nova_math_Nova_Vector.h>
#include <nova/math/nova_math_Nova_Vector.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_math_Nova_Vector2D, 
	
	nova_math_Vector2D_Extension_VTable* vtable;
	nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_data;
)

void nova_math_Nova_Vector2D_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Vector2D* nova_math_Nova_Vector2D_0_Nova_construct(nova_math_Nova_Vector2D* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Vector2D* nova_math_Nova_Vector2D_1_Nova_construct(nova_math_Nova_Vector2D* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y);
void nova_math_Nova_Vector2D_Nova_destroy(nova_math_Nova_Vector2D** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Vector2D_Nova_this(nova_math_Nova_Vector2D* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Vector2D_0_Nova_this(nova_math_Nova_Vector2D* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y);
double nova_math_Nova_Vector2D_Nova_dotProduct(nova_math_Nova_Vector2D* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector3D* other);
double nova_math_Nova_Vector2D_Accessor_Nova_x(nova_math_Nova_Vector2D* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_Vector2D_Mutator_Nova_x(nova_math_Nova_Vector2D* this, nova_exception_Nova_ExceptionData* exceptionData, double value);
double nova_math_Nova_Vector2D_Accessor_Nova_y(nova_math_Nova_Vector2D* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_Vector2D_Mutator_Nova_y(nova_math_Nova_Vector2D* this, nova_exception_Nova_ExceptionData* exceptionData, double value);
void nova_math_Nova_Vector2D_Nova_super(nova_math_Nova_Vector2D* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_math_Nova_Vector2DFunctionMap, 
	
	nova_math_Vector2D_Vector2DFunctionMap_Extension_VTable* vtable;
)

void nova_math_Nova_Vector2DFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Vector2DFunctionMap* nova_math_Nova_Vector2DFunctionMap_Nova_construct(nova_math_Nova_Vector2DFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Vector2DFunctionMap_Nova_destroy(nova_math_Nova_Vector2DFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Vector2DFunctionMap_Nova_this(nova_math_Nova_Vector2DFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Vector2D* nova_math_Nova_Vector2DFunctionMap_functionMapVector2DFunctionMap0_Nova_construct(nova_math_Nova_Vector2DFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Vector2D* nova_math_Nova_Vector2DFunctionMap_functionMapVector2DFunctionMap1_Nova_construct(nova_math_Nova_Vector2DFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y);
double nova_math_Nova_Vector2DFunctionMap_functionMap_Nova_dotProduct(nova_math_Nova_Vector2DFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector2D* reference, nova_math_Nova_Vector3D* other);
void nova_math_Nova_Vector2DFunctionMap_Nova_super(nova_math_Nova_Vector2DFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_math_Nova_Vector2DPropertyMap, 
	
	nova_math_Vector2D_Vector2DPropertyMap_Extension_VTable* vtable;
)

void nova_math_Nova_Vector2DPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Vector2DPropertyMap* nova_math_Nova_Vector2DPropertyMap_Nova_construct(nova_math_Nova_Vector2DPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Vector2DPropertyMap_Nova_destroy(nova_math_Nova_Vector2DPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Vector2DPropertyMap_Nova_this(nova_math_Nova_Vector2DPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_Vector2DPropertyMap_functionMap_Nova_x(nova_math_Nova_Vector2DPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector2D* reference);
double nova_math_Nova_Vector2DPropertyMap_functionMap_Nova_y(nova_math_Nova_Vector2DPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector2D* reference);
void nova_math_Nova_Vector2DPropertyMap_Nova_super(nova_math_Nova_Vector2DPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
