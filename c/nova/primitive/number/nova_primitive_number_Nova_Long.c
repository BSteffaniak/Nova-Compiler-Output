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
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Integer.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Number.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Integer.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Number.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Integer.h>
#include <nova/primitive/nova_primitive_Nova_Primitive.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/primitive/nova_primitive_Nova_Primitive.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/primitive/nova_primitive_Nova_Primitive.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/NativeObject.h>



long_long nova_primitive_number_Nova_Long_Nova_MAX_VALUE;
long_long nova_primitive_number_Nova_Long_Nova_MIN_VALUE;
void nova_primitive_number_Nova_Long_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		nova_primitive_number_Nova_Long_Nova_MAX_VALUE = 9223372036854775807LL;
		nova_primitive_number_Nova_Long_Nova_MIN_VALUE = (-9223372036854775807LL - 1);
	}
}

nova_primitive_number_Nova_Long* nova_primitive_number_Nova_Long_Nova_construct(nova_primitive_number_Nova_Long* this, nova_exception_Nova_ExceptionData* exceptionData, long_long value)
{
	CCLASS_NEW(nova_primitive_number_Nova_Long, this,);
	this->vtable = &nova_primitive_number_Long_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_primitive_Nova_Primitive_Nova_super((nova_primitive_Nova_Primitive*)this, exceptionData);
	nova_primitive_number_Nova_Number_Nova_super((nova_primitive_number_Nova_Number*)this, exceptionData);
	nova_primitive_number_Nova_Long_Nova_super(this, exceptionData);
	
	{
		nova_primitive_number_Nova_Long_Nova_this(this, exceptionData, value);
	}
	
	return this;
}

void nova_primitive_number_Nova_Long_Nova_destroy(nova_primitive_number_Nova_Long** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE(*this);
}

void nova_primitive_number_Nova_Long_Nova_this(nova_primitive_number_Nova_Long* this, nova_exception_Nova_ExceptionData* exceptionData, long_long value)
{
	this->nova_primitive_number_Nova_Long_Nova_value = value;
}

int nova_primitive_number_Nova_Long_static_Nova_numDigits(nova_primitive_number_Nova_Long* this, nova_exception_Nova_ExceptionData* exceptionData, long_long number)
{
	int l1_Nova_size = 0;
	
	l1_Nova_size = (int)((char)(number < 0 ? 2 : 1));
	number /= 10;
	while (number != 0)
	{
		number /= 10;
		l1_Nova_size++;
	}
	return l1_Nova_size;
}

nova_Nova_String* nova_primitive_number_Nova_Long_static_Nova_toString(nova_primitive_number_Nova_Long* this, nova_exception_Nova_ExceptionData* exceptionData, long_long value)
{
	int l1_Nova_charOffset = 0;
	int l1_Nova_digits = 0;
	char* l1_Nova_data = (char*)nova_null;
	int l1_Nova_offset = 0;
	int l1_Nova_nums = 0;
	int l4_Nova_index = 0;
	
	l1_Nova_charOffset = (int)('0');
	l1_Nova_digits = nova_primitive_number_Nova_Long_static_Nova_numDigits(0, exceptionData, value);
	l1_Nova_data = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * l1_Nova_digits + 1);
	l1_Nova_data[l1_Nova_digits] = '\0';
	l1_Nova_offset = (int)(0);
	if (value < 0)
	{
		l1_Nova_data[0] = '-';
		l1_Nova_offset = (int)(1);
	}
	l1_Nova_nums = l1_Nova_digits-- - l1_Nova_offset;
	l4_Nova_index = (int)0;
	for (; l4_Nova_index < (int)l1_Nova_nums; l4_Nova_index++)
	{
		l1_Nova_data[l1_Nova_digits - l4_Nova_index] = (char)((char)(l1_Nova_charOffset + nova_math_Nova_Math_0_static_Nova_abs(0, exceptionData, value % 10)));
		value = value / 10;
	}
	return nova_Nova_String_1_Nova_construct(0, exceptionData, l1_Nova_data);
}

long_long nova_primitive_number_Nova_Long_Nova_compareTo(nova_primitive_number_Nova_Long* this, nova_exception_Nova_ExceptionData* exceptionData, long_long other)
{
	return this->nova_primitive_number_Nova_Long_Nova_value - other;
}

long_long nova_primitive_number_Nova_Long_Nova_multiply(nova_primitive_number_Nova_Long* this, nova_exception_Nova_ExceptionData* exceptionData, long_long value)
{
	return this->nova_primitive_number_Nova_Long_Nova_value * value;
}

nova_Nova_String* nova_primitive_number_Nova_Long_Nova_toString(nova_primitive_number_Nova_Long* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_primitive_number_Nova_Long_static_Nova_toString(this, exceptionData, this->nova_primitive_number_Nova_Long_Nova_value);
}

void nova_primitive_number_Nova_Long_Nova_super(nova_primitive_number_Nova_Long* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_primitive_number_Nova_Long_Nova_value = 0;
}


nova_primitive_number_Nova_Long* nova_primitive_number_Nova_LongFunctionMap_functionMapLongFunctionMap_Nova_construct(nova_primitive_number_Nova_LongFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, long_long value);
void nova_primitive_number_Nova_LongFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_primitive_number_Nova_LongFunctionMap* nova_primitive_number_Nova_LongFunctionMap_Nova_construct(nova_primitive_number_Nova_LongFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_primitive_number_Nova_LongFunctionMap, this,);
	this->vtable = &nova_primitive_number_Long_LongFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_primitive_Nova_PrimitiveFunctionMap_Nova_super((nova_primitive_Nova_PrimitiveFunctionMap*)this, exceptionData);
	nova_primitive_number_Nova_NumberFunctionMap_Nova_super((nova_primitive_number_Nova_NumberFunctionMap*)this, exceptionData);
	nova_primitive_number_Nova_LongFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_primitive_number_Nova_LongFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_primitive_number_Nova_LongFunctionMap_Nova_destroy(nova_primitive_number_Nova_LongFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_primitive_number_Nova_LongFunctionMap_Nova_this(nova_primitive_number_Nova_LongFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_primitive_number_Nova_Long* nova_primitive_number_Nova_LongFunctionMap_functionMapLongFunctionMap_Nova_construct(nova_primitive_number_Nova_LongFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, long_long value)
{
	return nova_primitive_number_Nova_Long_Nova_construct(0, exceptionData, value);
}

int nova_primitive_number_Nova_LongFunctionMap_functionMap_static_Nova_numDigits(nova_primitive_number_Nova_LongFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, long_long number)
{
	return nova_primitive_number_Nova_Long_static_Nova_numDigits(0, exceptionData, number);
}

nova_Nova_String* nova_primitive_number_Nova_LongFunctionMap_functionMap_static_Nova_toString(nova_primitive_number_Nova_LongFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, long_long value)
{
	return nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, value);
}

long_long nova_primitive_number_Nova_LongFunctionMap_functionMap_Nova_compareTo(nova_primitive_number_Nova_LongFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_number_Nova_Long* reference, long_long other)
{
	return nova_primitive_number_Nova_Long_Nova_compareTo(reference, exceptionData, other);
}

long_long nova_primitive_number_Nova_LongFunctionMap_functionMap_Nova_multiply(nova_primitive_number_Nova_LongFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_number_Nova_Long* reference, long_long value)
{
	return (long_long)nova_primitive_number_Nova_Long_Nova_multiply(reference, exceptionData, value);
}

nova_Nova_String* nova_primitive_number_Nova_LongFunctionMap_functionMap_Nova_toString(nova_primitive_number_Nova_LongFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_number_Nova_Long* reference)
{
	return nova_primitive_number_Nova_Long_Nova_toString(reference, exceptionData);
}

void nova_primitive_number_Nova_LongFunctionMap_Nova_super(nova_primitive_number_Nova_LongFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_primitive_number_Nova_LongPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_primitive_number_Nova_LongPropertyMap* nova_primitive_number_Nova_LongPropertyMap_Nova_construct(nova_primitive_number_Nova_LongPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_primitive_number_Nova_LongPropertyMap, this,);
	this->vtable = &nova_primitive_number_Long_LongPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_primitive_Nova_PrimitivePropertyMap_Nova_super((nova_primitive_Nova_PrimitivePropertyMap*)this, exceptionData);
	nova_primitive_number_Nova_NumberPropertyMap_Nova_super((nova_primitive_number_Nova_NumberPropertyMap*)this, exceptionData);
	nova_primitive_number_Nova_LongPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_primitive_number_Nova_LongPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_primitive_number_Nova_LongPropertyMap_Nova_destroy(nova_primitive_number_Nova_LongPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_primitive_number_Nova_LongPropertyMap_Nova_this(nova_primitive_number_Nova_LongPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

long_long nova_primitive_number_Nova_LongPropertyMap_functionMap_static_Nova_MAX_VALUE(nova_primitive_number_Nova_LongPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_primitive_number_Nova_Long_Nova_MAX_VALUE;
}

long_long nova_primitive_number_Nova_LongPropertyMap_functionMap_static_Nova_MIN_VALUE(nova_primitive_number_Nova_LongPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_primitive_number_Nova_Long_Nova_MIN_VALUE;
}

void nova_primitive_number_Nova_LongPropertyMap_Nova_super(nova_primitive_number_Nova_LongPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

