#ifndef FILE_nova_math_Nova_Math_NOVA
#define FILE_nova_math_Nova_Math_NOVA

typedef struct nova_math_Nova_Math nova_math_Nova_Math;
typedef struct nova_math_Nova_MathFunctionMap nova_math_Nova_MathFunctionMap;
typedef struct nova_math_Nova_MathPropertyMap nova_math_Nova_MathPropertyMap;


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
#include <math.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_math_Nova_Math, 
	
	nova_math_Math_Extension_VTable* vtable;
)
extern double nova_math_Nova_Math_Nova_PI;

void nova_math_Nova_Math_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Math* nova_math_Nova_Math_Nova_construct(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Math_Nova_destroy(nova_math_Nova_Math** this, nova_exception_Nova_ExceptionData* exceptionData);
long_long nova_math_Nova_Math_static_Nova_max(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, long_long a, long_long b);
long_long nova_math_Nova_Math_static_Nova_min(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, long_long a, long_long b);
char nova_math_Nova_Math_static_Nova_sign(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, long_long num);
long_long nova_math_Nova_Math_static_Nova_random(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, long_long range);
long_long nova_math_Nova_Math_0_static_Nova_abs(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, long_long number);
double nova_math_Nova_Math_1_static_Nova_abs(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_Math_static_Nova_sqrt(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_Math_static_Nova_pow(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double base, double power);
double nova_math_Nova_Math_static_Nova_sin(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_Math_static_Nova_cos(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_Math_static_Nova_tan(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_Math_static_Nova_asin(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_Math_static_Nova_acos(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_Math_static_Nova_atan(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_Math_static_Nova_round(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_Math_static_Nova_floor(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_Math_static_Nova_ceil(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
void nova_math_Nova_Math_Nova_this(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Math_Nova_super(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_math_Nova_MathFunctionMap, 
	
	nova_math_Math_MathFunctionMap_Extension_VTable* vtable;
)

void nova_math_Nova_MathFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_MathFunctionMap* nova_math_Nova_MathFunctionMap_Nova_construct(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_MathFunctionMap_Nova_destroy(nova_math_Nova_MathFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_MathFunctionMap_Nova_this(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Math* nova_math_Nova_MathFunctionMap_functionMapMathFunctionMap_Nova_construct(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
long_long nova_math_Nova_MathFunctionMap_functionMap_static_Nova_max(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, long_long a, long_long b);
long_long nova_math_Nova_MathFunctionMap_functionMap_static_Nova_min(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, long_long a, long_long b);
char nova_math_Nova_MathFunctionMap_functionMap_static_Nova_sign(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, long_long num);
long_long nova_math_Nova_MathFunctionMap_functionMap_static_Nova_random(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, long_long range);
long_long nova_math_Nova_MathFunctionMap_functionMap0_static_Nova_abs(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, long_long number);
double nova_math_Nova_MathFunctionMap_functionMap1_static_Nova_abs(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_MathFunctionMap_functionMap_static_Nova_sqrt(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_MathFunctionMap_functionMap_static_Nova_pow(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double base, double power);
double nova_math_Nova_MathFunctionMap_functionMap_static_Nova_sin(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_MathFunctionMap_functionMap_static_Nova_cos(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_MathFunctionMap_functionMap_static_Nova_tan(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_MathFunctionMap_functionMap_static_Nova_asin(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_MathFunctionMap_functionMap_static_Nova_acos(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_MathFunctionMap_functionMap_static_Nova_atan(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_MathFunctionMap_functionMap_static_Nova_round(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_MathFunctionMap_functionMap_static_Nova_floor(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
double nova_math_Nova_MathFunctionMap_functionMap_static_Nova_ceil(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double number);
void nova_math_Nova_MathFunctionMap_Nova_super(nova_math_Nova_MathFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_math_Nova_MathPropertyMap, 
	
	nova_math_Math_MathPropertyMap_Extension_VTable* vtable;
)

void nova_math_Nova_MathPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_MathPropertyMap* nova_math_Nova_MathPropertyMap_Nova_construct(nova_math_Nova_MathPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_MathPropertyMap_Nova_destroy(nova_math_Nova_MathPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_MathPropertyMap_Nova_this(nova_math_Nova_MathPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_MathPropertyMap_functionMap_static_Nova_PI(nova_math_Nova_MathPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_MathPropertyMap_Nova_super(nova_math_Nova_MathPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
