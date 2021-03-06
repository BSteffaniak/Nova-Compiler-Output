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
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/exception/nova_exception_Nova_InvalidArgumentException.h>
#include <nova/exception/nova_exception_Nova_InvalidOperationException.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context24;
typedef struct
{
	/* let Int order */ int* nova_math_Nova_Matrix_Nova_order;
} Context97;
typedef struct
{
	/* let
	Matrix result */ nova_math_Nova_Matrix** nova_math_Nova_Matrix_Nova_result;
	/* let Matrix other */ nova_math_Nova_Matrix** nova_math_Nova_Matrix_Nova_other;
} Context98;
typedef struct
{
	/* let
	Matrix result */ nova_math_Nova_Matrix** nova_math_Nova_Matrix_Nova_result;
	/* Int outR */ int* nova_math_Nova_Matrix_Nova_outR;
	/* let
	Matrix other */ nova_math_Nova_Matrix** nova_math_Nova_Matrix_Nova_other;
} Context99;
typedef struct
{
	/* let
	Matrix result */ nova_math_Nova_Matrix** nova_math_Nova_Matrix_Nova_result;
} Context100;
typedef struct
{
	/* let
	Int order */ int* nova_math_Nova_Matrix_Nova_order;
} Context101;
typedef struct
{
	/* let Int cols */ int* nova_math_Nova_Matrix_Nova_cols;
} Context102;


CCLASS_PRIVATE
(
	nova_math_Nova_Matrix,
	nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova_data;
	
)

void nova_math_Nova_Matrix_Nova_checkUnequalDimensions(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other);
nova_Nova_String* nova_math_Nova_Matrix_Nova_lambda25(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context24* context);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_static_Nova_lambda98(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context97* context);
void nova_math_Nova_Matrix_Nova_lambda99(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* outRow, int outR, nova_datastruct_list_Nova_Array* _3, Context98* context);
void nova_math_Nova_Matrix_Nova_lambda100(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* row, int r, nova_datastruct_list_Nova_Array* _3, Context99* context);
void nova_math_Nova_Matrix_Nova_lambda101(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* row, int r, nova_datastruct_list_Nova_Array* _3, Context100* context);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_static_Nova_lambda102(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context101* context);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova_lambda103(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context102* context);




double nova_math_Nova_Matrix_Nova_TOLERANCE;
double nova_math_Nova_Matrix_Nova_LOWER_TOLERANCE;
double nova_math_Nova_Matrix_Nova_UPPER_TOLERANCE;
void nova_math_Nova_Matrix_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		nova_math_Nova_Matrix_Nova_TOLERANCE = (double)(0.0001);
		nova_math_Nova_Matrix_Nova_LOWER_TOLERANCE = 1 - nova_math_Nova_Matrix_Nova_TOLERANCE;
		nova_math_Nova_Matrix_Nova_UPPER_TOLERANCE = 1 + nova_math_Nova_Matrix_Nova_TOLERANCE;
	}
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_0_Nova_construct(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int order)
{
	CCLASS_NEW(nova_math_Nova_Matrix, this);
	this->vtable = &nova_math_Matrix_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Matrix_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Matrix_0_Nova_this(this, exceptionData, order);
	}
	
	return this;
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_1_Nova_construct(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int rows, int cols)
{
	CCLASS_NEW(nova_math_Nova_Matrix, this);
	this->vtable = &nova_math_Matrix_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Matrix_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Matrix_1_Nova_this(this, exceptionData, rows, cols);
	}
	
	return this;
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_2_Nova_construct(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data)
{
	CCLASS_NEW(nova_math_Nova_Matrix, this);
	this->vtable = &nova_math_Matrix_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Matrix_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Matrix_2_Nova_this(this, exceptionData, data);
	}
	
	return this;
}

void nova_math_Nova_Matrix_Nova_destroy(nova_math_Nova_Matrix** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->prv->nova_math_Nova_Matrix_Nova_data, exceptionData);
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void nova_math_Nova_Matrix_0_Nova_this(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int order)
{
	nova_math_Nova_Matrix_1_Nova_this(this, exceptionData, order, order);
}

void nova_math_Nova_Matrix_1_Nova_this(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int rows, int cols)
{
	Context102* contextArg103 = NOVA_MALLOC(sizeof(Context102));
	contextArg103->nova_math_Nova_Matrix_Nova_cols = &cols;
	
	if (rows <= 0 || cols <= 0)
	{
		THROW(nova_exception_Nova_InvalidArgumentException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid matrix size ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (rows)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("x")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (cols)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(". The number of rows and columns must both be positive."))))))))))), 0);
	}
	nova_math_Nova_Matrix_2_Nova_this(this, exceptionData, (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, rows, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&nova_math_Nova_Matrix_Nova_lambda103, this, contextArg103)));
}

void nova_math_Nova_Matrix_2_Nova_this(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data)
{
	this->prv->nova_math_Nova_Matrix_Nova_data = data;
	if ((data) == (nova_datastruct_list_Nova_Array*)nova_null || nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(data), exceptionData) == 0)
	{
		THROW(nova_exception_Nova_InvalidArgumentException_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix size must be greater than 0 rows and columns"))), 0);
	}
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_clone(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_math_Nova_Matrix_Nova_add(nova_math_Nova_Matrix_1_Nova_construct(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData)), exceptionData, this, (intptr_t)nova_null);
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_static_Nova_identity(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int order)
{
	nova_datastruct_list_Nova_Array* l1_Nova_data = (nova_datastruct_list_Nova_Array*)nova_null;
	Context97* contextArg98 = NOVA_MALLOC(sizeof(Context97));
	contextArg98->nova_math_Nova_Matrix_Nova_order = &order;
	int l3_Nova_i = 0;
	
	l1_Nova_data = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, order, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&nova_math_Nova_Matrix_static_Nova_lambda98, nova_null, contextArg98));
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)order; l3_Nova_i++)
	{
		nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_data), exceptionData, l3_Nova_i)), exceptionData, l3_Nova_i, 1);
	}
	return nova_math_Nova_Matrix_2_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(l1_Nova_data));
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_inverse(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_math_Nova_Matrix* l1_Nova_i = (nova_math_Nova_Matrix*)nova_null;
	nova_math_Nova_Matrix* l1_Nova_current = (nova_math_Nova_Matrix*)nova_null;
	int l1_Nova_j = 0;
	
	if (!nova_math_Nova_Matrix_Accessor_Nova_isSquare(this, exceptionData))
	{
		THROW(nova_exception_Nova_InvalidOperationException_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Cannot take the inverse of a non-square matrix"))), 0);
	}
	l1_Nova_i = nova_math_Nova_Matrix_static_Nova_identity(this, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData));
	l1_Nova_current = nova_math_Nova_Matrix_Nova_clone(this, exceptionData);
	l1_Nova_j = (int)(0);
	while (!nova_math_Nova_Matrix_Accessor_Nova_isIdentity(l1_Nova_current, exceptionData))
	{
		nova_math_Nova_Matrix_Nova_swapRows(l1_Nova_i, exceptionData, l1_Nova_j % 2, l1_Nova_j % 3);
		if (l1_Nova_j++ > 100)
		{
			break;
		}
	}
	return l1_Nova_i;
}

void nova_math_Nova_Matrix_Nova_swapRows(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int row1, int row2)
{
	int l4_Nova_col = 0;
	
	if (row1 == row2)
	{
		return;
	}
	l4_Nova_col = (int)0;
	for (; l4_Nova_col < (int)nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData); l4_Nova_col++)
	{
		double l4_Nova_temp = 0;
		
		l4_Nova_temp = (double)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, row1)), exceptionData, l4_Nova_col));
		nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, row1)), exceptionData, l4_Nova_col, (double)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, row2)), exceptionData, l4_Nova_col)));
		nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, row2)), exceptionData, l4_Nova_col, l4_Nova_temp);
	}
}

void nova_math_Nova_Matrix_Nova_multiplyRow(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int sourceRow, int destinationRow, double scalar)
{
	destinationRow = (int)(destinationRow == (intptr_t)nova_null ? sourceRow : destinationRow);
	scalar = (double)(scalar == (intptr_t)nova_null ? 1 : scalar);
	if (sourceRow == destinationRow)
	{
		int l4_Nova_col = 0;
		
		l4_Nova_col = (int)0;
		for (; l4_Nova_col < (int)nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData); l4_Nova_col++)
		{
			nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, sourceRow)), exceptionData, l4_Nova_col, (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, sourceRow)), exceptionData, l4_Nova_col) * scalar);
		}
	}
	else
	{
		int l7_Nova_col = 0;
		
		l7_Nova_col = (int)0;
		for (; l7_Nova_col < (int)nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData); l7_Nova_col++)
		{
			nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, destinationRow)), exceptionData, l7_Nova_col, (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, destinationRow)), exceptionData, l7_Nova_col) + (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, sourceRow)), exceptionData, l7_Nova_col) * scalar);
		}
	}
}

void nova_math_Nova_Matrix_Nova_addRow(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int sourceRow, int destinationRow)
{
	int l3_Nova_col = 0;
	
	destinationRow = (int)(destinationRow == (intptr_t)nova_null ? sourceRow : destinationRow);
	l3_Nova_col = (int)0;
	for (; l3_Nova_col < (int)nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData); l3_Nova_col++)
	{
		nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, destinationRow)), exceptionData, l3_Nova_col, (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, destinationRow)), exceptionData, l3_Nova_col) + (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, sourceRow)), exceptionData, l3_Nova_col));
	}
}

void nova_math_Nova_Matrix_Nova_subtractRow(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int sourceRow, int destinationRow)
{
	int l3_Nova_col = 0;
	
	destinationRow = (int)(destinationRow == (intptr_t)nova_null ? sourceRow : destinationRow);
	l3_Nova_col = (int)0;
	for (; l3_Nova_col < (int)nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData); l3_Nova_col++)
	{
		nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, destinationRow)), exceptionData, l3_Nova_col, (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, destinationRow)), exceptionData, l3_Nova_col) - (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, sourceRow)), exceptionData, l3_Nova_col));
	}
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_add(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other, int allowUnequalDimensions)
{
	nova_math_Nova_Matrix* l1_Nova_result = (nova_math_Nova_Matrix*)nova_null;
	int l4_Nova_row = 0;
	
	allowUnequalDimensions = (int)(allowUnequalDimensions == (intptr_t)nova_null ? 0 : allowUnequalDimensions);
	if (!allowUnequalDimensions)
	{
		nova_math_Nova_Matrix_Nova_checkUnequalDimensions(this, exceptionData, other);
	}
	l1_Nova_result = nova_math_Nova_Matrix_1_Nova_construct(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData));
	l4_Nova_row = (int)0;
	for (; l4_Nova_row < (int)nova_math_Nova_Math_static_Nova_min(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), (long_long)(nova_math_Nova_Matrix_Accessor_Nova_rows(other, exceptionData))); l4_Nova_row++)
	{
		int l6_Nova_col = 0;
		
		l6_Nova_col = (int)0;
		for (; l6_Nova_col < (int)nova_math_Nova_Math_static_Nova_min(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData), (long_long)(nova_math_Nova_Matrix_Accessor_Nova_cols(other, exceptionData))); l6_Nova_col++)
		{
			nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_result, exceptionData, l4_Nova_row), exceptionData, l6_Nova_col, (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, l4_Nova_row)), exceptionData, l6_Nova_col) + (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(nova_math_Nova_Matrix_Nova_get(other, exceptionData, l4_Nova_row), exceptionData, l6_Nova_col));
		}
	}
	return l1_Nova_result;
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_0_Nova_plus(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other)
{
	return nova_math_Nova_Matrix_Nova_add(this, exceptionData, other, 0);
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_1_Nova_plus(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other, char allowUnequalDimensions)
{
	return nova_math_Nova_Matrix_Nova_add(this, exceptionData, other, allowUnequalDimensions);
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_subtract(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other, int allowUnequalDimensions)
{
	nova_math_Nova_Matrix* l1_Nova_result = (nova_math_Nova_Matrix*)nova_null;
	int l4_Nova_row = 0;
	
	allowUnequalDimensions = (int)(allowUnequalDimensions == (intptr_t)nova_null ? 0 : allowUnequalDimensions);
	if (!allowUnequalDimensions)
	{
		nova_math_Nova_Matrix_Nova_checkUnequalDimensions(this, exceptionData, other);
	}
	l1_Nova_result = nova_math_Nova_Matrix_1_Nova_construct(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData));
	l4_Nova_row = (int)0;
	for (; l4_Nova_row < (int)nova_math_Nova_Math_static_Nova_min(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), (long_long)(nova_math_Nova_Matrix_Accessor_Nova_rows(other, exceptionData))); l4_Nova_row++)
	{
		int l6_Nova_col = 0;
		
		l6_Nova_col = (int)0;
		for (; l6_Nova_col < (int)nova_math_Nova_Math_static_Nova_min(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData), (long_long)(nova_math_Nova_Matrix_Accessor_Nova_cols(other, exceptionData))); l6_Nova_col++)
		{
			nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get(l1_Nova_result, exceptionData, l4_Nova_row), exceptionData, l6_Nova_col, (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, l4_Nova_row)), exceptionData, l6_Nova_col) - (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(nova_math_Nova_Matrix_Nova_get(other, exceptionData, l4_Nova_row), exceptionData, l6_Nova_col));
		}
	}
	return l1_Nova_result;
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_0_Nova_minus(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other)
{
	return nova_math_Nova_Matrix_1_Nova_minus(this, exceptionData, other, 0);
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_1_Nova_minus(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other, char allowUnequalDimensions)
{
	return nova_math_Nova_Matrix_Nova_subtract(this, exceptionData, other, allowUnequalDimensions);
}

void nova_math_Nova_Matrix_Nova_checkUnequalDimensions(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other)
{
	if (nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData) != nova_math_Nova_Matrix_Accessor_Nova_rows(other, exceptionData) || nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData) != nova_math_Nova_Matrix_Accessor_Nova_cols(other, exceptionData))
	{
		THROW(nova_exception_Nova_InvalidArgumentException_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("The matrices' sizes must be equal to perform this operation"))), 0);
	}
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_0_Nova_multiply(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other)
{
	nova_math_Nova_Matrix* l1_Nova_result = (nova_math_Nova_Matrix*)nova_null;
	Context98* contextArg100 = NOVA_MALLOC(sizeof(Context98));
	contextArg100->nova_math_Nova_Matrix_Nova_result = &l1_Nova_result;
	contextArg100->nova_math_Nova_Matrix_Nova_other = &other;
	
	if (nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData) != nova_math_Nova_Matrix_Accessor_Nova_rows(other, exceptionData))
	{
		THROW(nova_exception_Nova_InvalidArgumentException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix with dimensions ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("x")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" cannot be multiplied with matrix with dimensions ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Accessor_Nova_rows(other, exceptionData))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("x")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Accessor_Nova_cols(other, exceptionData))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(". ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" != ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Accessor_Nova_rows(other, exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))))))))))))))))))))))))), 0);
	}
	l1_Nova_result = nova_math_Nova_Matrix_1_Nova_construct(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), nova_math_Nova_Matrix_Accessor_Nova_cols(other, exceptionData));
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_result->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&nova_math_Nova_Matrix_Nova_lambda99, this, contextArg100);
	return l1_Nova_result;
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_transpose(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_math_Nova_Matrix* l1_Nova_result = (nova_math_Nova_Matrix*)nova_null;
	Context100* contextArg101 = NOVA_MALLOC(sizeof(Context100));
	contextArg101->nova_math_Nova_Matrix_Nova_result = &l1_Nova_result;
	
	l1_Nova_result = nova_math_Nova_Matrix_1_Nova_construct(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData), nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData));
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&nova_math_Nova_Matrix_Nova_lambda101, this, contextArg101);
	return l1_Nova_result;
}

double nova_math_Nova_Matrix_Nova_determinant(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!nova_math_Nova_Matrix_Accessor_Nova_isSquare(this, exceptionData))
	{
		THROW(nova_exception_Nova_InvalidArgumentException_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix must be square to calculate the determinant"))), 0);
	}
	return nova_math_Nova_Matrix_static_Nova_determinant(this, exceptionData, this->prv->nova_math_Nova_Matrix_Nova_data);
}

double nova_math_Nova_Matrix_static_Nova_determinant(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data)
{
	int l1_Nova_order = 0;
	double l1_Nova_det = 0;
	
	l1_Nova_order = (int)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(data), exceptionData));
	l1_Nova_det = (double)(0);
	if (l1_Nova_order == 1)
	{
		l1_Nova_det = (double)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(data), exceptionData, 0)), exceptionData, 0));
	}
	else if (l1_Nova_order == 2)
	{
		l1_Nova_det = (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(data), exceptionData, 0)), exceptionData, 0) * (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(data), exceptionData, 1)), exceptionData, 1) - (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(data), exceptionData, 1)), exceptionData, 0) * (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(data), exceptionData, 0)), exceptionData, 1);
	}
	else
	{
		int l7_Nova_j1 = 0;
		
		l7_Nova_j1 = (int)0;
		for (; l7_Nova_j1 < (int)l1_Nova_order; l7_Nova_j1++)
		{
			nova_datastruct_list_Nova_Array* l7_Nova_m = (nova_datastruct_list_Nova_Array*)nova_null;
			Context101* contextArg102 = NOVA_MALLOC(sizeof(Context101));
			contextArg102->nova_math_Nova_Matrix_Nova_order = &l1_Nova_order;
			int l9_Nova_i = 0;
			
			l7_Nova_m = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, l1_Nova_order - 1, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&nova_math_Nova_Matrix_static_Nova_lambda102, nova_null, contextArg102));
			l9_Nova_i = (int)1;
			for (; l9_Nova_i < (int)l1_Nova_order; l9_Nova_i++)
			{
				int l9_Nova_j2 = 0;
				int l11_Nova_j = 0;
				
				l9_Nova_j2 = (int)(0);
				l11_Nova_j = (int)0;
				for (; l11_Nova_j < (int)l1_Nova_order; l11_Nova_j++)
				{
					if (l11_Nova_j != l7_Nova_j1)
					{
						nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l7_Nova_m), exceptionData, l9_Nova_i - 1)), exceptionData, l9_Nova_j2++, (double)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(data), exceptionData, l9_Nova_i)), exceptionData, l11_Nova_j)));
					}
				}
			}
			l1_Nova_det += nova_math_Nova_Math_static_Nova_pow(0, exceptionData, -1.0, 1.0 + l7_Nova_j1 + 1.0) * (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(data), exceptionData, 0)), exceptionData, l7_Nova_j1) * nova_math_Nova_Matrix_static_Nova_determinant(0, exceptionData, l7_Nova_m);
		}
	}
	return l1_Nova_det;
}

nova_Nova_String* nova_math_Nova_Matrix_Nova_toString(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context24* contextArg25 = NOVA_MALLOC(sizeof(Context24));
	
	return nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&nova_math_Nova_Matrix_Nova_lambda25, this, contextArg25)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")));
}

nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova_get(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int index)
{
	return (nova_datastruct_list_Nova_DoubleArray*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, index);
}

nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova_set(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_datastruct_list_Nova_DoubleArray* value)
{
	nova_datastruct_list_Nova_Array_Nova_set((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, index, (nova_Nova_Object*)(value));
	return value;
}

nova_Nova_String* nova_math_Nova_Matrix_Nova_lambda25(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context24* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[ ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_DoubleArray_Nova_join(_1, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\t")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ]")))));
}

nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_static_Nova_lambda98(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context97* context)
{
	return nova_datastruct_list_Nova_DoubleArray_2_Nova_construct(0, exceptionData, (*context->nova_math_Nova_Matrix_Nova_order));
}

void nova_math_Nova_Matrix_Nova_lambda99(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* outRow, int outR, nova_datastruct_list_Nova_Array* _3, Context98* context)
{
	Context99* contextArg99 = NOVA_MALLOC(sizeof(Context99));
	contextArg99->nova_math_Nova_Matrix_Nova_result = context->nova_math_Nova_Matrix_Nova_result;
	contextArg99->nova_math_Nova_Matrix_Nova_outR = &outR;
	contextArg99->nova_math_Nova_Matrix_Nova_other = context->nova_math_Nova_Matrix_Nova_other;
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&nova_math_Nova_Matrix_Nova_lambda100, this, contextArg99);
}

void nova_math_Nova_Matrix_Nova_lambda100(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* row, int r, nova_datastruct_list_Nova_Array* _3, Context99* context)
{
	int l3_Nova_c = 0;
	
	l3_Nova_c = (int)0;
	for (; l3_Nova_c < (int)nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData); l3_Nova_c++)
	{
		nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get((*context->nova_math_Nova_Matrix_Nova_result), exceptionData, r), exceptionData, (*context->nova_math_Nova_Matrix_Nova_outR), (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(nova_math_Nova_Matrix_Nova_get((*context->nova_math_Nova_Matrix_Nova_result), exceptionData, r), exceptionData, (*context->nova_math_Nova_Matrix_Nova_outR)) + (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(row, exceptionData, l3_Nova_c) * (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(nova_math_Nova_Matrix_Nova_get((*context->nova_math_Nova_Matrix_Nova_other), exceptionData, l3_Nova_c), exceptionData, (*context->nova_math_Nova_Matrix_Nova_outR)));
	}
}

void nova_math_Nova_Matrix_Nova_lambda101(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* row, int r, nova_datastruct_list_Nova_Array* _3, Context100* context)
{
	int l3_Nova_c = 0;
	
	l3_Nova_c = (int)0;
	for (; l3_Nova_c < (int)nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData); l3_Nova_c++)
	{
		nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Matrix_Nova_get((*context->nova_math_Nova_Matrix_Nova_result), exceptionData, l3_Nova_c), exceptionData, r, (double)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_get(row, exceptionData, l3_Nova_c)));
	}
}

nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_static_Nova_lambda102(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context101* context)
{
	return nova_datastruct_list_Nova_DoubleArray_2_Nova_construct(0, exceptionData, (*context->nova_math_Nova_Matrix_Nova_order) - 1);
}

nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova_lambda103(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context102* context)
{
	return nova_datastruct_list_Nova_DoubleArray_2_Nova_construct(0, exceptionData, (*context->nova_math_Nova_Matrix_Nova_cols));
}

char nova_math_Nova_Matrix_Accessor_Nova_isIdentity(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l4_Nova_row = 0;
	
	if (!nova_math_Nova_Matrix_Accessor_Nova_isSquare(this, exceptionData))
	{
		return 0;
	}
	l4_Nova_row = (int)0;
	for (; l4_Nova_row < (int)nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData); l4_Nova_row++)
	{
		int l6_Nova_col = 0;
		
		l6_Nova_col = (int)0;
		for (; l6_Nova_col < (int)nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData); l6_Nova_col++)
		{
			double l6_Nova_d = 0;
			
			l6_Nova_d = (double)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, l4_Nova_row)), exceptionData, l6_Nova_col));
			if (l4_Nova_row == l6_Nova_col && (l6_Nova_d < nova_math_Nova_Matrix_Nova_LOWER_TOLERANCE || l6_Nova_d > nova_math_Nova_Matrix_Nova_UPPER_TOLERANCE) || l4_Nova_row != l6_Nova_col && (l6_Nova_d < -nova_math_Nova_Matrix_Nova_TOLERANCE || l6_Nova_d > nova_math_Nova_Matrix_Nova_TOLERANCE))
			{
				return 0;
			}
		}
	}
	return 1;
}


char nova_math_Nova_Matrix_Accessor_Nova_isSquare(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData) == nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData);
}


int nova_math_Nova_Matrix_Accessor_Nova_rows(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData);
}


int nova_math_Nova_Matrix_Accessor_Nova_cols(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_Nova_Matrix_Nova_data), exceptionData, 0)), exceptionData);
}


void nova_math_Nova_Matrix_Nova_super(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->nova_math_Nova_Matrix_Nova_data = (nova_datastruct_list_Nova_Array*)nova_null;
}


void nova_math_Nova_MatrixFunctionMap_functionMap_Nova_checkUnequalDimensions(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other);
void nova_math_Nova_MatrixFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_MatrixFunctionMap* nova_math_Nova_MatrixFunctionMap_Nova_construct(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_Nova_MatrixFunctionMap, this,);
	this->vtable = &nova_math_Matrix_MatrixFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_math_Nova_MatrixFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_MatrixFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_Nova_MatrixFunctionMap_Nova_destroy(nova_math_Nova_MatrixFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_Nova_MatrixFunctionMap_Nova_this(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMapMatrixFunctionMap0_Nova_construct(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int order)
{
	return nova_math_Nova_Matrix_0_Nova_construct(0, exceptionData, order);
}

nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMapMatrixFunctionMap1_Nova_construct(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int rows, int cols)
{
	return nova_math_Nova_Matrix_1_Nova_construct(0, exceptionData, rows, cols);
}

nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMapMatrixFunctionMap2_Nova_construct(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data)
{
	return nova_math_Nova_Matrix_2_Nova_construct(0, exceptionData, data);
}

nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_clone(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference)
{
	return nova_math_Nova_Matrix_Nova_clone(reference, exceptionData);
}

nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap_static_Nova_identity(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int order)
{
	return nova_math_Nova_Matrix_static_Nova_identity(0, exceptionData, order);
}

nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_inverse(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference)
{
	return nova_math_Nova_Matrix_Nova_inverse(reference, exceptionData);
}

void nova_math_Nova_MatrixFunctionMap_functionMap_Nova_swapRows(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, int row1, int row2)
{
	nova_math_Nova_Matrix_Nova_swapRows(reference, exceptionData, row1, row2);
}

void nova_math_Nova_MatrixFunctionMap_functionMap_Nova_multiplyRow(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, int sourceRow, int destinationRow, double scalar)
{
	nova_math_Nova_Matrix_Nova_multiplyRow(reference, exceptionData, sourceRow, destinationRow, scalar);
}

void nova_math_Nova_MatrixFunctionMap_functionMap_Nova_addRow(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, int sourceRow, int destinationRow)
{
	nova_math_Nova_Matrix_Nova_addRow(reference, exceptionData, sourceRow, destinationRow);
}

void nova_math_Nova_MatrixFunctionMap_functionMap_Nova_subtractRow(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, int sourceRow, int destinationRow)
{
	nova_math_Nova_Matrix_Nova_subtractRow(reference, exceptionData, sourceRow, destinationRow);
}

nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_add(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other, char allowUnequalDimensions)
{
	return nova_math_Nova_Matrix_Nova_add(reference, exceptionData, other, allowUnequalDimensions);
}

nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap0_Nova_plus(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other)
{
	return (nova_math_Nova_Matrix*)nova_math_Nova_Matrix_0_Nova_plus(reference, exceptionData, other);
}

nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap1_Nova_plus(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other, char allowUnequalDimensions)
{
	return nova_math_Nova_Matrix_1_Nova_plus(reference, exceptionData, other, allowUnequalDimensions);
}

nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_subtract(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other, char allowUnequalDimensions)
{
	return nova_math_Nova_Matrix_Nova_subtract(reference, exceptionData, other, allowUnequalDimensions);
}

nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap0_Nova_minus(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other)
{
	return nova_math_Nova_Matrix_0_Nova_minus(reference, exceptionData, other);
}

nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap1_Nova_minus(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other, char allowUnequalDimensions)
{
	return nova_math_Nova_Matrix_1_Nova_minus(reference, exceptionData, other, allowUnequalDimensions);
}

void nova_math_Nova_MatrixFunctionMap_functionMap_Nova_checkUnequalDimensions(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other)
{
	nova_math_Nova_Matrix_Nova_checkUnequalDimensions(reference, exceptionData, other);
}

nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_multiply(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, nova_math_Nova_Matrix* other)
{
	return (nova_math_Nova_Matrix*)nova_math_Nova_Matrix_0_Nova_multiply(reference, exceptionData, other);
}

nova_math_Nova_Matrix* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_transpose(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference)
{
	return nova_math_Nova_Matrix_Nova_transpose(reference, exceptionData);
}

double nova_math_Nova_MatrixFunctionMap_functionMap_Nova_determinant(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference)
{
	return nova_math_Nova_Matrix_Nova_determinant(reference, exceptionData);
}

double nova_math_Nova_MatrixFunctionMap_functionMap_static_Nova_determinant(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data)
{
	return nova_math_Nova_Matrix_static_Nova_determinant(0, exceptionData, data);
}

nova_Nova_String* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_toString(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference)
{
	return nova_math_Nova_Matrix_Nova_toString(reference, exceptionData);
}

nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_get(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, int index)
{
	return nova_math_Nova_Matrix_Nova_get(reference, exceptionData, index);
}

nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_MatrixFunctionMap_functionMap_Nova_set(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference, int index, nova_datastruct_list_Nova_DoubleArray* value)
{
	return nova_math_Nova_Matrix_Nova_set(reference, exceptionData, index, value);
}

void nova_math_Nova_MatrixFunctionMap_Nova_super(nova_math_Nova_MatrixFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_Nova_MatrixPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_MatrixPropertyMap* nova_math_Nova_MatrixPropertyMap_Nova_construct(nova_math_Nova_MatrixPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_Nova_MatrixPropertyMap, this,);
	this->vtable = &nova_math_Matrix_MatrixPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_math_Nova_MatrixPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_MatrixPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_Nova_MatrixPropertyMap_Nova_destroy(nova_math_Nova_MatrixPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_Nova_MatrixPropertyMap_Nova_this(nova_math_Nova_MatrixPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char nova_math_Nova_MatrixPropertyMap_functionMap_Nova_isSquare(nova_math_Nova_MatrixPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference)
{
	return nova_math_Nova_Matrix_Accessor_Nova_isSquare(reference, exceptionData);
}

int nova_math_Nova_MatrixPropertyMap_functionMap_Nova_rows(nova_math_Nova_MatrixPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference)
{
	return nova_math_Nova_Matrix_Accessor_Nova_rows(reference, exceptionData);
}

int nova_math_Nova_MatrixPropertyMap_functionMap_Nova_cols(nova_math_Nova_MatrixPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference)
{
	return nova_math_Nova_Matrix_Accessor_Nova_cols(reference, exceptionData);
}

char nova_math_Nova_MatrixPropertyMap_functionMap_Nova_isIdentity(nova_math_Nova_MatrixPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* reference)
{
	return nova_math_Nova_Matrix_Accessor_Nova_isIdentity(reference, exceptionData);
}

void nova_math_Nova_MatrixPropertyMap_Nova_super(nova_math_Nova_MatrixPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

