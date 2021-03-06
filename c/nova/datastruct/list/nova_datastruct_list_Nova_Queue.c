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
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/NativeObject.h>



CCLASS_PRIVATE
(
	nova_datastruct_list_Nova_Queue,
	nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Queue_Nova_data;
	
)




void nova_datastruct_list_Nova_Queue_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_Queue* nova_datastruct_list_Nova_Queue_0_Nova_construct(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_Queue, this);
	this->vtable = &nova_datastruct_list_Queue_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Queue_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_Queue_Nova_this(this, exceptionData);
	}
	
	return this;
}

nova_datastruct_list_Nova_Queue* nova_datastruct_list_Nova_Queue_1_Nova_construct(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data)
{
	CCLASS_NEW(nova_datastruct_list_Nova_Queue, this);
	this->vtable = &nova_datastruct_list_Queue_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Queue_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_Queue_0_Nova_this(this, exceptionData, data);
	}
	
	return this;
}

void nova_datastruct_list_Nova_Queue_Nova_destroy(nova_datastruct_list_Nova_Queue** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->prv->nova_datastruct_list_Nova_Queue_Nova_data, exceptionData);
	NOVA_FREE((*this)->prv);
	
	
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_Queue_Nova_this(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->nova_datastruct_list_Nova_Queue_Nova_data = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

void nova_datastruct_list_Nova_Queue_0_Nova_this(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data)
{
	this->prv->nova_datastruct_list_Nova_Queue_Nova_data = data;
}

nova_Nova_Object* nova_datastruct_list_Nova_Queue_Nova_dequeue(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_Array_0_Nova_remove(this->prv->nova_datastruct_list_Nova_Queue_Nova_data, exceptionData, 0);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Queue_Nova_enqueue(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_Array_0_Nova_add(this->prv->nova_datastruct_list_Nova_Queue_Nova_data, exceptionData, element);
}

nova_datastruct_list_Nova_Queue* nova_datastruct_list_Nova_Queue_Nova_reverse(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_Queue_1_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_list_Nova_Queue_Nova_data), exceptionData)));
}

nova_Nova_String* nova_datastruct_list_Nova_Queue_Nova_toString(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Queue [")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("]")))));
}

int nova_datastruct_list_Nova_Queue_Accessor_Nova_size(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->prv->nova_datastruct_list_Nova_Queue_Nova_data->nova_datastruct_list_Nova_Array_Nova_position;
}


char nova_datastruct_list_Nova_Queue_Accessor_Nova_empty(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_Queue_Accessor_Nova_size(this, exceptionData) <= 0;
}


nova_datastruct_list_Nova_ArrayIterator* nova_datastruct_list_Nova_Queue_Accessor_Nova_iterator(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_ArrayIterator*)nova_datastruct_list_Nova_ArrayIterator_Nova_construct(0, exceptionData, this->prv->nova_datastruct_list_Nova_Queue_Nova_data);
}


int nova_datastruct_list_Nova_Queue_Accessorfunc_Nova_count(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_list_Nova_Queue_Nova_count;
}

int nova_datastruct_list_Nova_Queue_Mutatorfunc0_Nova_count(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	this->nova_datastruct_list_Nova_Queue_Nova_count = value;
	return value;
}

nova_Nova_Object* nova_datastruct_list_Nova_Queue_Accessorfunc_Nova_first(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)this->nova_datastruct_list_Nova_Queue_Nova_first;
}

nova_Nova_Object* nova_datastruct_list_Nova_Queue_Mutatorfunc0_Nova_first(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	this->nova_datastruct_list_Nova_Queue_Nova_first = value;
	return (nova_Nova_Object*)value;
}

nova_Nova_Object* nova_datastruct_list_Nova_Queue_Accessorfunc_Nova_last(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)this->nova_datastruct_list_Nova_Queue_Nova_last;
}

nova_Nova_Object* nova_datastruct_list_Nova_Queue_Mutatorfunc0_Nova_last(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	this->nova_datastruct_list_Nova_Queue_Nova_last = value;
	return (nova_Nova_Object*)value;
}

void nova_datastruct_list_Nova_Queue_Nova_super(nova_datastruct_list_Nova_Queue* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_Queue_Nova_count = 0;
	this->nova_datastruct_list_Nova_Queue_Nova_first = (nova_Nova_Object*)nova_null;
	this->nova_datastruct_list_Nova_Queue_Nova_last = (nova_Nova_Object*)nova_null;
	this->prv->nova_datastruct_list_Nova_Queue_Nova_data = (nova_datastruct_list_Nova_Array*)nova_null;
}

void nova_datastruct_list_Nova_QueueFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_QueueFunctionMap* nova_datastruct_list_Nova_QueueFunctionMap_Nova_construct(nova_datastruct_list_Nova_QueueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_QueueFunctionMap, this,);
	this->vtable = &nova_datastruct_list_Queue_QueueFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_QueueFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_QueueFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_QueueFunctionMap_Nova_destroy(nova_datastruct_list_Nova_QueueFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_QueueFunctionMap_Nova_this(nova_datastruct_list_Nova_QueueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Queue* nova_datastruct_list_Nova_QueueFunctionMap_functionMapQueueFunctionMap0_Nova_construct(nova_datastruct_list_Nova_QueueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Queue*)nova_datastruct_list_Nova_Queue_0_Nova_construct(0, exceptionData);
}

nova_datastruct_list_Nova_Queue* nova_datastruct_list_Nova_QueueFunctionMap_functionMapQueueFunctionMap1_Nova_construct(nova_datastruct_list_Nova_QueueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data)
{
	return (nova_datastruct_list_Nova_Queue*)nova_datastruct_list_Nova_Queue_1_Nova_construct(0, exceptionData, data);
}

nova_Nova_Object* nova_datastruct_list_Nova_QueueFunctionMap_functionMap_Nova_dequeue(nova_datastruct_list_Nova_QueueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Queue* reference)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_Queue_Nova_dequeue(reference, exceptionData);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_QueueFunctionMap_functionMap_Nova_enqueue(nova_datastruct_list_Nova_QueueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Queue* reference, nova_Nova_Object* element)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_Queue_Nova_enqueue(reference, exceptionData, element);
}

nova_datastruct_list_Nova_Queue* nova_datastruct_list_Nova_QueueFunctionMap_functionMap_Nova_reverse(nova_datastruct_list_Nova_QueueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Queue* reference)
{
	return (nova_datastruct_list_Nova_Queue*)nova_datastruct_list_Nova_Queue_Nova_reverse(reference, exceptionData);
}

nova_Nova_String* nova_datastruct_list_Nova_QueueFunctionMap_functionMap_Nova_toString(nova_datastruct_list_Nova_QueueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Queue* reference)
{
	return nova_datastruct_list_Nova_Queue_Nova_toString(reference, exceptionData);
}

void nova_datastruct_list_Nova_QueueFunctionMap_Nova_super(nova_datastruct_list_Nova_QueueFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_list_Nova_QueuePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_QueuePropertyMap* nova_datastruct_list_Nova_QueuePropertyMap_Nova_construct(nova_datastruct_list_Nova_QueuePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_QueuePropertyMap, this,);
	this->vtable = &nova_datastruct_list_Queue_QueuePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_datastruct_list_Nova_QueuePropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_QueuePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_QueuePropertyMap_Nova_destroy(nova_datastruct_list_Nova_QueuePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_QueuePropertyMap_Nova_this(nova_datastruct_list_Nova_QueuePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

int nova_datastruct_list_Nova_QueuePropertyMap_functionMap_Nova_size(nova_datastruct_list_Nova_QueuePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Queue* reference)
{
	return nova_datastruct_list_Nova_Queue_Accessor_Nova_size(reference, exceptionData);
}

char nova_datastruct_list_Nova_QueuePropertyMap_functionMap_Nova_empty(nova_datastruct_list_Nova_QueuePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Queue* reference)
{
	return nova_datastruct_list_Nova_Queue_Accessor_Nova_empty(reference, exceptionData);
}

nova_datastruct_list_Nova_ArrayIterator* nova_datastruct_list_Nova_QueuePropertyMap_functionMap0_Nova_iterator(nova_datastruct_list_Nova_QueuePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Queue* reference)
{
	return (nova_datastruct_list_Nova_ArrayIterator*)nova_datastruct_list_Nova_Queue_Accessor_Nova_iterator(reference, exceptionData);
}

int nova_datastruct_list_Nova_QueuePropertyMap_functionMap0_Nova_count(nova_datastruct_list_Nova_QueuePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Queue* reference)
{
	return nova_datastruct_list_Nova_Queue_Accessorfunc_Nova_count(reference, exceptionData);
}

nova_Nova_Object* nova_datastruct_list_Nova_QueuePropertyMap_functionMap0_Nova_first(nova_datastruct_list_Nova_QueuePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Queue* reference)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_Queue_Accessorfunc_Nova_first(reference, exceptionData);
}

nova_Nova_Object* nova_datastruct_list_Nova_QueuePropertyMap_functionMap0_Nova_last(nova_datastruct_list_Nova_QueuePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Queue* reference)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_Queue_Accessorfunc_Nova_last(reference, exceptionData);
}

void nova_datastruct_list_Nova_QueuePropertyMap_Nova_super(nova_datastruct_list_Nova_QueuePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

