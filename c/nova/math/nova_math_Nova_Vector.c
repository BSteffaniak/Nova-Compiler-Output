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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

typedef struct
{
	/* Vector other */ nova_math_Nova_Vector** nova_math_Nova_Vector_Nova_other;
} Context1;
typedef struct
{
	/* Double scalar */ double* nova_math_Nova_Vector_Nova_scalar;
} Context2;
typedef struct
{
} Context3;
typedef struct
{
} Context4;



double nova_math_Nova_Vector_Nova_lambda23(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double x, int i, nova_datastruct_list_Nova_DoubleArray* _3, Context1* context);
void nova_math_Nova_Vector_Nova_lambda24(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double n, int i, nova_datastruct_list_Nova_DoubleArray* d, Context2* context);
void nova_math_Nova_Vector_Nova_lambda25(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double n, int i, nova_datastruct_list_Nova_DoubleArray* d, Context3* context);
double nova_math_Nova_Vector_Nova_lambda26(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double n, int _2, nova_datastruct_list_Nova_DoubleArray* _3, Context4* context);

void nova_math_Nova_Vector_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_Vector* nova_math_Nova_Vector_0_Nova_construct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, int size)
{
	CCLASS_NEW(nova_math_Nova_Vector, this,);
	this->vtable = &nova_math_Vector_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Vector_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Vector_0_Nova_this(this, exceptionData, size);
	}
	
	return this;
}

nova_math_Nova_Vector* nova_math_Nova_Vector_1_Nova_construct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* data)
{
	CCLASS_NEW(nova_math_Nova_Vector, this,);
	this->vtable = &nova_math_Vector_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Vector_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Vector_1_Nova_this(this, exceptionData, data);
	}
	
	return this;
}

void nova_math_Nova_Vector_Nova_destroy(nova_math_Nova_Vector** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_DoubleArray_Nova_destroy(&(*this)->nova_math_Nova_Vector_Nova_data, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_math_Nova_Vector_0_Nova_this(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, int size)
{
	nova_math_Nova_Vector_1_Nova_this(this, exceptionData, nova_datastruct_list_Nova_DoubleArray_2_Nova_construct(0, exceptionData, size));
}

void nova_math_Nova_Vector_1_Nova_this(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* data)
{
	this->nova_math_Nova_Vector_Nova_data = data;
}

double nova_math_Nova_Vector_Nova_dotProduct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* other)
{
	Context1* contextArg23 = NOVA_MALLOC(sizeof(Context1));
	contextArg23->nova_math_Nova_Vector_Nova_other = &other;
	
	return nova_datastruct_list_Nova_DoubleArray_Nova_sum(this->nova_math_Nova_Vector_Nova_data, exceptionData, (nova_datastruct_list_Nova_DoubleArray_closure4_Nova_func)&nova_math_Nova_Vector_Nova_lambda23, this, contextArg23);
}

double nova_math_Nova_Vector_Nova_innerProduct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* other)
{
	return nova_math_Nova_Vector_virtual_Nova_dotProduct((nova_math_Nova_Vector*)(this), exceptionData, other);
}

nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_scale(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double scalar)
{
	Context2* contextArg24 = NOVA_MALLOC(sizeof(Context2));
	contextArg24->nova_math_Nova_Vector_Nova_scalar = &scalar;
	
	return (nova_datastruct_list_Nova_DoubleArray*)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_forEach(this->nova_math_Nova_Vector_Nova_data, exceptionData, (nova_datastruct_list_Nova_DoubleArray_closure12_Nova_func)&nova_math_Nova_Vector_Nova_lambda24, this, contextArg24);
}

nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_normalize(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context3* contextArg25 = NOVA_MALLOC(sizeof(Context3));
	
	return (nova_datastruct_list_Nova_DoubleArray*)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_forEach(this->nova_math_Nova_Vector_Nova_data, exceptionData, (nova_datastruct_list_Nova_DoubleArray_closure12_Nova_func)&nova_math_Nova_Vector_Nova_lambda25, this, contextArg25);
}

nova_Nova_String* nova_math_Nova_Vector_Nova_toString(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_DoubleArray_Nova_join(this->nova_math_Nova_Vector_Nova_data, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">")))));
}

double nova_math_Nova_Vector_Nova_lambda23(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double x, int i, nova_datastruct_list_Nova_DoubleArray* _3, Context1* context)
{
	return x * (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((*context->nova_math_Nova_Vector_Nova_other)->nova_math_Nova_Vector_Nova_data, exceptionData, i);
}

void nova_math_Nova_Vector_Nova_lambda24(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double n, int i, nova_datastruct_list_Nova_DoubleArray* d, Context2* context)
{
	nova_datastruct_list_Nova_DoubleArray_Nova_set(d, exceptionData, i, n * (*context->nova_math_Nova_Vector_Nova_scalar));
}

void nova_math_Nova_Vector_Nova_lambda25(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double n, int i, nova_datastruct_list_Nova_DoubleArray* d, Context3* context)
{
	double nova_zero_check1 = 0;
	double nova_zero_check2 = 0;
	
	nova_zero_check1 = nova_math_Nova_Vector_Accessor_Nova_magnitude(this, exceptionData);
	if (nova_zero_check1 == 0)
	{
		THROW(nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData), 0);
	}
	nova_datastruct_list_Nova_DoubleArray_Nova_set(d, exceptionData, i, n / nova_zero_check2);
	nova_zero_check2 = nova_zero_check1;
	if (nova_zero_check2 == 0)
	{
		THROW(nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData), 0);
	}
}

double nova_math_Nova_Vector_Nova_lambda26(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double n, int _2, nova_datastruct_list_Nova_DoubleArray* _3, Context4* context)
{
	return n * n;
}

double nova_math_Nova_Vector_Accessor_Nova_magnitude(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context4* contextArg26 = NOVA_MALLOC(sizeof(Context4));
	
	return nova_math_Nova_Math_static_Nova_sqrt(0, exceptionData, nova_datastruct_list_Nova_DoubleArray_Nova_sum(this->nova_math_Nova_Vector_Nova_data, exceptionData, (nova_datastruct_list_Nova_DoubleArray_closure4_Nova_func)&nova_math_Nova_Vector_Nova_lambda26, this, contextArg26));
}


void nova_math_Nova_Vector_Nova_super(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_math_Nova_Vector_Nova_data = (nova_datastruct_list_Nova_DoubleArray*)nova_null;
}

double nova_math_Nova_Vector_virtual_Nova_dotProduct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* other)
{
	return this->vtable->nova_math_Nova_Vector_virtual_Nova_dotProduct((nova_math_Nova_Vector*)(this), exceptionData, other);
}

void nova_math_Nova_VectorFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_VectorFunctionMap* nova_math_Nova_VectorFunctionMap_Nova_construct(nova_math_Nova_VectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_Nova_VectorFunctionMap, this,);
	this->vtable = &nova_math_Vector_VectorFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_math_Nova_VectorFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_VectorFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_Nova_VectorFunctionMap_Nova_destroy(nova_math_Nova_VectorFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_Nova_VectorFunctionMap_Nova_this(nova_math_Nova_VectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_Nova_VectorFunctionMap_Nova_super(nova_math_Nova_VectorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

