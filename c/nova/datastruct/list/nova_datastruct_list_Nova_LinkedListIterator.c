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
#include <nova/datastruct/list/nova_datastruct_list_Nova_LinkedList.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ListNode.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_NoSuchElementException.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/NativeObject.h>



CCLASS_PRIVATE
(
	nova_datastruct_list_Nova_LinkedListIterator,
	nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedListIterator_Nova_list;
	
)



void nova_datastruct_list_Nova_LinkedListIterator_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_LinkedListIterator* nova_datastruct_list_Nova_LinkedListIterator_Nova_construct(nova_datastruct_list_Nova_LinkedListIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* list)
{
	CCLASS_NEW(nova_datastruct_list_Nova_LinkedListIterator, this);
	this->vtable = &nova_datastruct_list_LinkedListIterator_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_LinkedListIterator_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_LinkedListIterator_Nova_this(this, exceptionData, list);
	}
	
	return this;
}

void nova_datastruct_list_Nova_LinkedListIterator_Nova_destroy(nova_datastruct_list_Nova_LinkedListIterator** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_LinkedList_Nova_destroy(&(*this)->prv->nova_datastruct_list_Nova_LinkedListIterator_Nova_list, exceptionData);
	NOVA_FREE((*this)->prv);
	nova_datastruct_list_Nova_ListNode_Nova_destroy(&(*this)->nova_datastruct_list_Nova_LinkedListIterator_Nova_position, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_LinkedListIterator_Nova_this(nova_datastruct_list_Nova_LinkedListIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* list)
{
	this->prv->nova_datastruct_list_Nova_LinkedListIterator_Nova_list = list;
	nova_datastruct_list_Nova_LinkedListIterator_Nova_reset(this, exceptionData);
}

nova_datastruct_list_Nova_LinkedListIterator* nova_datastruct_list_Nova_LinkedListIterator_Nova_reset(nova_datastruct_list_Nova_LinkedListIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_LinkedListIterator_Nova_position = (nova_datastruct_list_Nova_ListNode*)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_first((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_list_Nova_LinkedListIterator_Nova_list), exceptionData));
	return this;
}

nova_Nova_Object* nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_next(nova_datastruct_list_Nova_LinkedListIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(this), exceptionData))
	{
		nova_Nova_Object* l2_Nova_data = (nova_Nova_Object*)nova_null;
		
		l2_Nova_data = this->nova_datastruct_list_Nova_LinkedListIterator_Nova_position->nova_datastruct_list_Nova_ListNode_Nova_data;
		this->nova_datastruct_list_Nova_LinkedListIterator_Nova_position = this->nova_datastruct_list_Nova_LinkedListIterator_Nova_position->nova_datastruct_list_Nova_ListNode_Nova_next;
		return (nova_Nova_Object*)l2_Nova_data;
	}
	THROW(nova_datastruct_list_Nova_NoSuchElementException_Nova_construct(0, exceptionData, 0), 0);
}


char nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_hasNext(nova_datastruct_list_Nova_LinkedListIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_list_Nova_LinkedListIterator_Nova_position != (nova_datastruct_list_Nova_ListNode*)nova_null;
}


void nova_datastruct_list_Nova_LinkedListIterator_Nova_super(nova_datastruct_list_Nova_LinkedListIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_LinkedListIterator_Nova_position = (nova_datastruct_list_Nova_ListNode*)nova_null;
	this->prv->nova_datastruct_list_Nova_LinkedListIterator_Nova_list = (nova_datastruct_list_Nova_LinkedList*)nova_null;
}

void nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_LinkedListIteratorFunctionMap* nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_Nova_construct(nova_datastruct_list_Nova_LinkedListIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_LinkedListIteratorFunctionMap, this,);
	this->vtable = &nova_datastruct_list_LinkedListIterator_LinkedListIteratorFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_Nova_destroy(nova_datastruct_list_Nova_LinkedListIteratorFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_Nova_this(nova_datastruct_list_Nova_LinkedListIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_LinkedListIterator* nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_functionMapLinkedListIteratorFunctionMap_Nova_construct(nova_datastruct_list_Nova_LinkedListIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList* list)
{
	return (nova_datastruct_list_Nova_LinkedListIterator*)nova_datastruct_list_Nova_LinkedListIterator_Nova_construct(0, exceptionData, list);
}

nova_datastruct_list_Nova_LinkedListIterator* nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_functionMap_Nova_reset(nova_datastruct_list_Nova_LinkedListIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedListIterator* reference)
{
	return nova_datastruct_list_Nova_LinkedListIterator_Nova_reset(reference, exceptionData);
}

void nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_Nova_super(nova_datastruct_list_Nova_LinkedListIteratorFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_LinkedListIteratorPropertyMap* nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_Nova_construct(nova_datastruct_list_Nova_LinkedListIteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_LinkedListIteratorPropertyMap, this,);
	this->vtable = &nova_datastruct_list_LinkedListIterator_LinkedListIteratorPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_Nova_destroy(nova_datastruct_list_Nova_LinkedListIteratorPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_Nova_this(nova_datastruct_list_Nova_LinkedListIteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_functionMap_Nova_position(nova_datastruct_list_Nova_LinkedListIteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedListIterator* reference)
{
	return reference->nova_datastruct_list_Nova_LinkedListIterator_Nova_position;
}

char nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_functionMap0_Nova_hasNext(nova_datastruct_list_Nova_LinkedListIteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedListIterator* reference)
{
	return nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_hasNext(reference, exceptionData);
}

nova_Nova_Object* nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_functionMap0_Nova_next(nova_datastruct_list_Nova_LinkedListIteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedListIterator* reference)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_next(reference, exceptionData);
}

void nova_datastruct_list_Nova_LinkedListIteratorPropertyMap_Nova_super(nova_datastruct_list_Nova_LinkedListIteratorPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

