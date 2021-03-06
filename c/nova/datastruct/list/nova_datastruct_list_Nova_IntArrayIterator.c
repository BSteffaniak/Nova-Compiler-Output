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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_NoSuchElementException.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/NativeObject.h>



CCLASS_PRIVATE
(
	nova_datastruct_list_Nova_IntArrayIterator,
	nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayIterator_Nova_array;
	
)



void nova_datastruct_list_Nova_IntArrayIterator_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_IntArrayIterator* nova_datastruct_list_Nova_IntArrayIterator_Nova_construct(nova_datastruct_list_Nova_IntArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* array)
{
	CCLASS_NEW(nova_datastruct_list_Nova_IntArrayIterator, this);
	this->vtable = &nova_datastruct_list_IntArrayIterator_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_IntArrayIterator_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_IntArrayIterator_Nova_this(this, exceptionData, array);
	}
	
	return this;
}

void nova_datastruct_list_Nova_IntArrayIterator_Nova_destroy(nova_datastruct_list_Nova_IntArrayIterator** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_IntArray_Nova_destroy(&(*this)->prv->nova_datastruct_list_Nova_IntArrayIterator_Nova_array, exceptionData);
	NOVA_FREE((*this)->prv);
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_IntArrayIterator_Nova_this(nova_datastruct_list_Nova_IntArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* array)
{
	this->prv->nova_datastruct_list_Nova_IntArrayIterator_Nova_array = array;
	nova_datastruct_list_Nova_IntArrayIterator_Nova_reset(this, exceptionData);
}

nova_datastruct_list_Nova_IntArrayIterator* nova_datastruct_list_Nova_IntArrayIterator_Nova_reset(nova_datastruct_list_Nova_IntArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_IntArrayIterator_Nova_position = (int)(0);
	return this;
}

int nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_next(nova_datastruct_list_Nova_IntArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_hasNext(this, exceptionData))
	{
		return (int)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_get(this->prv->nova_datastruct_list_Nova_IntArrayIterator_Nova_array, exceptionData, this->nova_datastruct_list_Nova_IntArrayIterator_Nova_position++);
	}
	THROW(nova_datastruct_list_Nova_NoSuchElementException_Nova_construct(0, exceptionData, 0), 0);
}


char nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_hasNext(nova_datastruct_list_Nova_IntArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_list_Nova_IntArrayIterator_Nova_array), exceptionData) > this->nova_datastruct_list_Nova_IntArrayIterator_Nova_position;
}


void nova_datastruct_list_Nova_IntArrayIterator_Nova_super(nova_datastruct_list_Nova_IntArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_IntArrayIterator_Nova_position = 0;
	this->prv->nova_datastruct_list_Nova_IntArrayIterator_Nova_array = (nova_datastruct_list_Nova_IntArray*)nova_null;
}

void nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_IntArrayIteratorFunctionMap* nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_Nova_construct(nova_datastruct_list_Nova_IntArrayIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_IntArrayIteratorFunctionMap, this,);
	this->vtable = &nova_datastruct_list_IntArrayIterator_IntArrayIteratorFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_Nova_destroy(nova_datastruct_list_Nova_IntArrayIteratorFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_Nova_this(nova_datastruct_list_Nova_IntArrayIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_IntArrayIterator* nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_functionMapIntArrayIteratorFunctionMap_Nova_construct(nova_datastruct_list_Nova_IntArrayIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* array)
{
	return nova_datastruct_list_Nova_IntArrayIterator_Nova_construct(0, exceptionData, array);
}

nova_datastruct_list_Nova_IntArrayIterator* nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_functionMap_Nova_reset(nova_datastruct_list_Nova_IntArrayIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArrayIterator* reference)
{
	return nova_datastruct_list_Nova_IntArrayIterator_Nova_reset(reference, exceptionData);
}

void nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_Nova_super(nova_datastruct_list_Nova_IntArrayIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_IntArrayIteratorPropertyMap* nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_Nova_construct(nova_datastruct_list_Nova_IntArrayIteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_IntArrayIteratorPropertyMap, this,);
	this->vtable = &nova_datastruct_list_IntArrayIterator_IntArrayIteratorPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_Nova_destroy(nova_datastruct_list_Nova_IntArrayIteratorPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_Nova_this(nova_datastruct_list_Nova_IntArrayIteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

int nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_functionMap_Nova_position(nova_datastruct_list_Nova_IntArrayIteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArrayIterator* reference)
{
	return reference->nova_datastruct_list_Nova_IntArrayIterator_Nova_position;
}

char nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_functionMap0_Nova_hasNext(nova_datastruct_list_Nova_IntArrayIteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArrayIterator* reference)
{
	return nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_hasNext(reference, exceptionData);
}

int nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_functionMap0_Nova_next(nova_datastruct_list_Nova_IntArrayIteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArrayIterator* reference)
{
	return (int)(intptr_t)nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_next(reference, exceptionData);
}

void nova_datastruct_list_Nova_IntArrayIteratorPropertyMap_Nova_super(nova_datastruct_list_Nova_IntArrayIteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

