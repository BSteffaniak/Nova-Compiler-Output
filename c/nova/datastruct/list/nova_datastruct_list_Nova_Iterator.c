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






void nova_datastruct_list_Nova_Iterator_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

char nova_datastruct_list_Nova_Iterator_Accessor_Nova_hasNext(nova_datastruct_list_Nova_Iterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}


nova_Nova_Object* nova_datastruct_list_Nova_Iterator_Accessor_Nova_next(nova_datastruct_list_Nova_Iterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}


char nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext(nova_datastruct_list_Nova_Iterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(this), exceptionData);
}

nova_Nova_Object* nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next(nova_datastruct_list_Nova_Iterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(this), exceptionData);
}

void nova_datastruct_list_Nova_IteratorFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_IteratorFunctionMap* nova_datastruct_list_Nova_IteratorFunctionMap_Nova_construct(nova_datastruct_list_Nova_IteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_IteratorFunctionMap, this,);
	this->vtable = &nova_datastruct_list_Iterator_IteratorFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_IteratorFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_IteratorFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_IteratorFunctionMap_Nova_destroy(nova_datastruct_list_Nova_IteratorFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_IteratorFunctionMap_Nova_this(nova_datastruct_list_Nova_IteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_list_Nova_IteratorFunctionMap_Nova_super(nova_datastruct_list_Nova_IteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_list_Nova_IteratorPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_IteratorPropertyMap* nova_datastruct_list_Nova_IteratorPropertyMap_Nova_construct(nova_datastruct_list_Nova_IteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_IteratorPropertyMap, this,);
	this->vtable = &nova_datastruct_list_Iterator_IteratorPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_datastruct_list_Nova_IteratorPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_IteratorPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_IteratorPropertyMap_Nova_destroy(nova_datastruct_list_Nova_IteratorPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_IteratorPropertyMap_Nova_this(nova_datastruct_list_Nova_IteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char nova_datastruct_list_Nova_IteratorPropertyMap_functionMap0_Nova_hasNext(nova_datastruct_list_Nova_IteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Iterator* reference)
{
	return nova_datastruct_list_Nova_Iterator_Accessor_Nova_hasNext(reference, exceptionData);
}

nova_Nova_Object* nova_datastruct_list_Nova_IteratorPropertyMap_functionMap0_Nova_next(nova_datastruct_list_Nova_IteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Iterator* reference)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_Iterator_Accessor_Nova_next(reference, exceptionData);
}

void nova_datastruct_list_Nova_IteratorPropertyMap_Nova_super(nova_datastruct_list_Nova_IteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char nova_datastruct_list_Nova_IteratorPropertyMap_virtualfunctionMap0_Nova_hasNext(nova_datastruct_list_Nova_IteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Iterator* reference)
{
	return this->vtable->itable.nova_datastruct_list_Nova_IteratorPropertyMap_virtualfunctionMap0_Nova_hasNext(this, exceptionData, reference);
}

nova_Nova_Object* nova_datastruct_list_Nova_IteratorPropertyMap_virtualfunctionMap0_Nova_next(nova_datastruct_list_Nova_IteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Iterator* reference)
{
	return this->vtable->itable.nova_datastruct_list_Nova_IteratorPropertyMap_virtualfunctionMap0_Nova_next(this, exceptionData, reference);
}

