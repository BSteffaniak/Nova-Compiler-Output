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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_NoSuchElementException.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



CCLASS_PRIVATE
(
	nova_datastruct_list_Nova_ImmutableArray* nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_array;
	
)



void nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_ImmutableArrayIterator* nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_construct(nova_datastruct_list_Nova_ImmutableArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_ImmutableArray* array)
{
	CCLASS_NEW(nova_datastruct_list_Nova_ImmutableArrayIterator, this);
	this->vtable = &nova_datastruct_list_ImmutableArrayIterator_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_this(this, exceptionData, array);
	}
	
	return this;
}

void nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_destroy(nova_datastruct_list_Nova_ImmutableArrayIterator** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_ImmutableArray_Nova_destroy(&(*this)->prv->nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_array, exceptionData);
	NOVA_FREE((*this)->prv);
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_this(nova_datastruct_list_Nova_ImmutableArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_ImmutableArray* array)
{
	this->prv->nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_array = array;
	nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_reset(this, exceptionData);
}

nova_datastruct_list_Nova_ImmutableArrayIterator* nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_reset(nova_datastruct_list_Nova_ImmutableArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_position = (int)(0);
	return this;
}

nova_Nova_Object* nova_datastruct_list_Nova_ImmutableArrayIterator_Accessor_Nova_next(nova_datastruct_list_Nova_ImmutableArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_datastruct_list_Nova_ImmutableArrayIterator_Accessor_Nova_hasNext(this, exceptionData))
	{
		return (nova_Nova_Object*)nova_datastruct_list_Nova_ImmutableArray_Nova_get(this->prv->nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_array, exceptionData, this->nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_position++);
	}
	THROW(nova_datastruct_list_Nova_NoSuchElementException_Nova_construct(0, exceptionData, 0), 0);
}


char nova_datastruct_list_Nova_ImmutableArrayIterator_Accessor_Nova_hasNext(nova_datastruct_list_Nova_ImmutableArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_ImmutableArray_Accessorfunc_Nova_count(this->prv->nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_array, exceptionData) > this->nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_position;
}


void nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_super(nova_datastruct_list_Nova_ImmutableArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_position = 0;
	this->prv->nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_array = (nova_datastruct_list_Nova_ImmutableArray*)nova_null;
}

