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



int nova_math_Nova_Sequence_Nova_INFINITE;
void nova_math_Nova_Sequence_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		nova_math_Nova_Sequence_Nova_INFINITE = (int)(-1);
	}
}

nova_math_Nova_Sequence* nova_math_Nova_Sequence_Nova_construct(nova_math_Nova_Sequence* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* values)
{
	CCLASS_NEW(nova_math_Nova_Sequence, this,);
	this->vtable = &nova_math_Sequence_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Sequence_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Sequence_Nova_this(this, exceptionData, values);
	}
	
	return this;
}

void nova_math_Nova_Sequence_Nova_destroy(nova_math_Nova_Sequence** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_DoubleArray_Nova_destroy(&(*this)->nova_math_Nova_Sequence_Nova_values, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_math_Nova_Sequence_Nova_this(nova_math_Nova_Sequence* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* values)
{
	this->nova_math_Nova_Sequence_Nova_values = values;
}

double nova_math_Nova_Sequence_static_Nova_sum(nova_math_Nova_Sequence* this, nova_exception_Nova_ExceptionData* exceptionData, int num)
{
	double l1_Nova_value = 0;
	int l3_Nova_i = 0;
	
	l1_Nova_value = (double)(0);
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)num; l3_Nova_i++)
	{
		l1_Nova_value = l1_Nova_value + (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(this->nova_math_Nova_Sequence_Nova_values, exceptionData, l3_Nova_i);
	}
	return l1_Nova_value;
}

void nova_math_Nova_Sequence_Nova_super(nova_math_Nova_Sequence* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_math_Nova_Sequence_Nova_values = (nova_datastruct_list_Nova_DoubleArray*)nova_null;
}

void nova_math_Nova_SequenceFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_SequenceFunctionMap* nova_math_Nova_SequenceFunctionMap_Nova_construct(nova_math_Nova_SequenceFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_Nova_SequenceFunctionMap, this,);
	this->vtable = &nova_math_Sequence_SequenceFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_math_Nova_SequenceFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_SequenceFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_Nova_SequenceFunctionMap_Nova_destroy(nova_math_Nova_SequenceFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_Nova_SequenceFunctionMap_Nova_this(nova_math_Nova_SequenceFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_math_Nova_Sequence* nova_math_Nova_SequenceFunctionMap_functionMapSequenceFunctionMap_Nova_construct(nova_math_Nova_SequenceFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* values)
{
	return nova_math_Nova_Sequence_Nova_construct(0, exceptionData, values);
}

double nova_math_Nova_SequenceFunctionMap_functionMap_static_Nova_sum(nova_math_Nova_SequenceFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int num)
{
	return nova_math_Nova_Sequence_static_Nova_sum(0, exceptionData, num);
}

void nova_math_Nova_SequenceFunctionMap_Nova_super(nova_math_Nova_SequenceFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_Nova_SequencePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_SequencePropertyMap* nova_math_Nova_SequencePropertyMap_Nova_construct(nova_math_Nova_SequencePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_Nova_SequencePropertyMap, this,);
	this->vtable = &nova_math_Sequence_SequencePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_math_Nova_SequencePropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_SequencePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_Nova_SequencePropertyMap_Nova_destroy(nova_math_Nova_SequencePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_Nova_SequencePropertyMap_Nova_this(nova_math_Nova_SequencePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_SequencePropertyMap_functionMap_Nova_values(nova_math_Nova_SequencePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Sequence* reference)
{
	return reference->nova_math_Nova_Sequence_Nova_values;
}

int nova_math_Nova_SequencePropertyMap_functionMap_static_Nova_INFINITE(nova_math_Nova_SequencePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_math_Nova_Sequence_Nova_INFINITE;
}

void nova_math_Nova_SequencePropertyMap_Nova_super(nova_math_Nova_SequencePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

