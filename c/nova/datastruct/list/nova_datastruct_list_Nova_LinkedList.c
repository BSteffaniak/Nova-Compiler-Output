#include <precompiled.h>
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
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_LinkedListIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ListNode.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* E value */ nova_Nova_Object** nova_datastruct_list_Nova_LinkedList_Nova_value;
} Context1;


nova_datastruct_list_LinkedList_Extension_VTable nova_datastruct_list_LinkedList_Extension_VTable_val =
{
	0,
	{
		0,
		(nova_datastruct_list_Nova_Iterator*(*)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_LinkedList_Accessor_Nova_iterator,
		0,
		0,
		(nova_datastruct_list_Nova_Array*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_LinkedList_Nova_toArray,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_datastruct_list_Nova_LinkedList_0_Nova_contains,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context))nova_datastruct_list_Nova_LinkedList_0_Nova_forEach,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context))nova_datastruct_list_Nova_LinkedList_0_Nova_map,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context))nova_datastruct_list_Nova_LinkedList_0_Nova_any,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int))nova_datastruct_list_Nova_LinkedList_0_Nova_all,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context))nova_datastruct_list_Nova_LinkedList_0_Nova_filter,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_list_Nova_LinkedList_Nova_take,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_list_Nova_LinkedList_Nova_skip,
		(nova_Nova_Object*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure24_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context))nova_datastruct_list_Nova_LinkedList_0_Nova_firstWhere,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_LinkedList_Nova_reverse,
		(nova_Nova_String*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_String*))nova_datastruct_list_Nova_List_Nova_join,
		(int(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_list_Nova_List_Mutator_Nova_count,
		(int(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_List_Accessor_Nova_count,
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


CCLASS_PRIVATE
(
	nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedList_Nova_start;
	nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedList_Nova_current;
	
)

char nova_datastruct_list_Nova_LinkedList_Nova_lambda78(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, Context1* context);



void nova_datastruct_list_Nova_LinkedList_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_construct(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_LinkedList, this);
	this->vtable = &nova_datastruct_list_LinkedList_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_LinkedList_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_LinkedList_4_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_LinkedList_Nova_destroy(nova_datastruct_list_Nova_LinkedList** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_ListNode_Nova_destroy(&(*this)->prv->nova_datastruct_list_Nova_LinkedList_Nova_start, exceptionData);
	nova_datastruct_list_Nova_ListNode_Nova_destroy(&(*this)->prv->nova_datastruct_list_Nova_LinkedList_Nova_current, exceptionData);
	NOVA_FREE((*this)->prv);
	
	
	NOVA_FREE(*this);
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_addAll(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data)
{
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_Object* l1_Nova_d = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((data), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_d = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_LinkedList_Nova_add(this, exceptionData, (nova_Nova_Object*)(l1_Nova_d));
	}
	return this;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_add(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data)
{
	nova_datastruct_list_Nova_ListNode* l1_Nova_node = (nova_datastruct_list_Nova_ListNode*)nova_null;
	
	l1_Nova_node = nova_datastruct_list_Nova_ListNode_Nova_construct(0, exceptionData, data);
	if (this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start == (nova_datastruct_list_Nova_ListNode*)nova_null)
	{
		this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start = l1_Nova_node;
		this->prv->nova_datastruct_list_Nova_LinkedList_Nova_current = l1_Nova_node;
	}
	else
	{
		this->prv->nova_datastruct_list_Nova_LinkedList_Nova_current->nova_datastruct_list_Nova_ListNode_Nova_next = l1_Nova_node;
	}
	this->prv->nova_datastruct_list_Nova_LinkedList_Nova_current = l1_Nova_node;
	this->nova_datastruct_list_Nova_LinkedList_Nova_size++;
	return this;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_remove(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data)
{
	nova_datastruct_list_Nova_ListNode* l1_Nova_prev = (nova_datastruct_list_Nova_ListNode*)nova_null;
	nova_datastruct_list_Nova_ListNode* l1_Nova_cur = (nova_datastruct_list_Nova_ListNode*)nova_null;
	
	if ((nova_Nova_Object*)this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start->nova_datastruct_list_Nova_ListNode_Nova_data == (nova_Nova_Object*)data)
	{
		this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start = this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start->nova_datastruct_list_Nova_ListNode_Nova_next;
	}
	l1_Nova_prev = this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start;
	l1_Nova_cur = this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start->nova_datastruct_list_Nova_ListNode_Nova_next;
	while (l1_Nova_cur != (nova_datastruct_list_Nova_ListNode*)nova_null)
	{
		nova_Nova_Object* l2_Nova_d = (nova_Nova_Object*)nova_null;
		
		l2_Nova_d = l1_Nova_cur->nova_datastruct_list_Nova_ListNode_Nova_data;
		if ((nova_Nova_Object*)l2_Nova_d == (nova_Nova_Object*)data)
		{
			l1_Nova_prev->nova_datastruct_list_Nova_ListNode_Nova_next = l1_Nova_cur->nova_datastruct_list_Nova_ListNode_Nova_next;
			this->nova_datastruct_list_Nova_LinkedList_Nova_size--;
		}
		l1_Nova_cur = l1_Nova_cur->nova_datastruct_list_Nova_ListNode_Nova_next;
	}
	return this;
}

char nova_datastruct_list_Nova_LinkedList_0_Nova_contains(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	Context1 contextArg78 = 
	{
		&value,
	};
	
	return nova_datastruct_list_Nova_LinkedList_0_Nova_any(this, exceptionData, (nova_datastruct_list_Nova_LinkedList_closure9_Nova_anyFunc)&nova_datastruct_list_Nova_LinkedList_Nova_lambda78, this, &contextArg78);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_LinkedList_Nova_toArray(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l1_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, this->nova_datastruct_list_Nova_LinkedList_Nova_size, (intptr_t)nova_null);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_LinkedList_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, l1_Nova_i++, (nova_Nova_Object*)(l1_Nova_element));
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_0_Nova_map(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure3_Nova_mapFunc nova_datastruct_list_Nova_LinkedList_Nova_mapFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_mapFunc, void* mapFunc_context)
{
	nova_datastruct_list_Nova_LinkedList* l1_Nova_array = (nova_datastruct_list_Nova_LinkedList*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l1_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_LinkedList_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_LinkedList_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_LinkedList_Nova_add(l1_Nova_array, exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)(nova_datastruct_list_Nova_LinkedList_Nova_mapFunc(nova_datastruct_list_Nova_LinkedList_ref_Nova_mapFunc, exceptionData, (nova_Nova_Object*)(l1_Nova_element), l1_Nova_i++, this, mapFunc_context)));
	}
	return l1_Nova_array;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_0_Nova_forEach(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure6_Nova_func nova_datastruct_list_Nova_LinkedList_Nova_func, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_func, void* func_context)
{
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l1_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_LinkedList_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_LinkedList_Nova_func(nova_datastruct_list_Nova_LinkedList_ref_Nova_func, exceptionData, (nova_Nova_Object*)(l1_Nova_element), l1_Nova_i++, this, func_context);
	}
	return this;
}

char nova_datastruct_list_Nova_LinkedList_0_Nova_any(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure9_Nova_anyFunc nova_datastruct_list_Nova_LinkedList_Nova_anyFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_anyFunc, void* anyFunc_context)
{
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l1_Nova_element = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_LinkedList_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_LinkedList_Nova_anyFunc(nova_datastruct_list_Nova_LinkedList_ref_Nova_anyFunc, exceptionData, (nova_Nova_Object*)(l1_Nova_element), anyFunc_context))
		{
			return 1;
		}
	}
	return 0;
}

char nova_datastruct_list_Nova_LinkedList_0_Nova_all(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure12_Nova_allFunc nova_datastruct_list_Nova_LinkedList_Nova_allFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_allFunc, void* allFunc_context)
{
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l1_Nova_element = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_LinkedList_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (!nova_datastruct_list_Nova_LinkedList_Nova_allFunc(nova_datastruct_list_Nova_LinkedList_ref_Nova_allFunc, exceptionData, (nova_Nova_Object*)(l1_Nova_element), allFunc_context))
		{
			return 0;
		}
	}
	return 1;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_0_Nova_filter(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure15_Nova_filterFunc nova_datastruct_list_Nova_LinkedList_Nova_filterFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_filterFunc, void* filterFunc_context)
{
	nova_datastruct_list_Nova_LinkedList* l1_Nova_filtered = (nova_datastruct_list_Nova_LinkedList*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l1_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_filtered = nova_datastruct_list_Nova_LinkedList_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_LinkedList_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_LinkedList_Nova_filterFunc(nova_datastruct_list_Nova_LinkedList_ref_Nova_filterFunc, exceptionData, (nova_Nova_Object*)(l1_Nova_element), l1_Nova_i++, this, filterFunc_context))
		{
			nova_datastruct_list_Nova_LinkedList_Nova_add(l1_Nova_filtered, exceptionData, (nova_Nova_Object*)(l1_Nova_element));
		}
	}
	return l1_Nova_filtered;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_take(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_LinkedList* l1_Nova_list = (nova_datastruct_list_Nova_LinkedList*)nova_null;
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	if (howMany > this->nova_datastruct_list_Nova_LinkedList_Nova_size)
	{
		howMany = this->nova_datastruct_list_Nova_LinkedList_Nova_size;
	}
	l1_Nova_list = nova_datastruct_list_Nova_LinkedList_Nova_construct(0, exceptionData);
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_LinkedList_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (l1_Nova_list->nova_datastruct_list_Nova_LinkedList_Nova_size == howMany)
		{
			break;
		}
		nova_datastruct_list_Nova_LinkedList_Nova_add(l1_Nova_list, exceptionData, (nova_Nova_Object*)(l2_Nova_element));
	}
	return l1_Nova_list;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_skip(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l1_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_LinkedList_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (l1_Nova_i++ > howMany)
		{
			nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_list, exceptionData, (nova_Nova_Object*)(l1_Nova_element));
		}
	}
	return (nova_datastruct_list_Nova_LinkedList*)l1_Nova_list;
}

nova_Nova_Object* nova_datastruct_list_Nova_LinkedList_0_Nova_firstWhere(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure18_Nova_func nova_datastruct_list_Nova_LinkedList_Nova_func, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_LinkedListIterator* nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)nova_null;
	nova_Nova_Object* l1_Nova_element = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_LinkedListIterator*)(nova_datastruct_list_Nova_LinkedList_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_LinkedListIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_LinkedList_Nova_func(nova_datastruct_list_Nova_LinkedList_ref_Nova_func, exceptionData, (nova_Nova_Object*)(l1_Nova_element), func_context))
		{
			return (nova_Nova_Object*)l1_Nova_element;
		}
	}
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_reverse(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_LinkedList* l1_Nova_list = (nova_datastruct_list_Nova_LinkedList*)nova_null;
	nova_datastruct_list_Nova_ListNode* l1_Nova_prev = (nova_datastruct_list_Nova_ListNode*)nova_null;
	nova_datastruct_list_Nova_ListNode* l1_Nova_current = (nova_datastruct_list_Nova_ListNode*)nova_null;
	nova_datastruct_list_Nova_ListNode* l1_Nova_next = (nova_datastruct_list_Nova_ListNode*)nova_null;
	
	l1_Nova_list = nova_datastruct_list_Nova_LinkedList_Nova_construct(0, exceptionData);
	l1_Nova_prev = (nova_datastruct_list_Nova_ListNode*)((nova_Nova_Object*)nova_null);
	l1_Nova_current = (nova_datastruct_list_Nova_ListNode*)((nova_Nova_Object*)nova_null);
	l1_Nova_next = (nova_datastruct_list_Nova_ListNode*)((nova_Nova_Object*)nova_null);
	if (this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start != (nova_datastruct_list_Nova_ListNode*)nova_null)
	{
		l1_Nova_current = nova_datastruct_list_Nova_ListNode_Nova_clone(this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start, exceptionData);
	}
	while (l1_Nova_current != (nova_datastruct_list_Nova_ListNode*)nova_null)
	{
		l1_Nova_next = l1_Nova_current->nova_datastruct_list_Nova_ListNode_Nova_next;
		l1_Nova_current->nova_datastruct_list_Nova_ListNode_Nova_next = (nova_datastruct_list_Nova_ListNode*)((nova_Nova_Object*)nova_null);
		if (l1_Nova_next != (nova_datastruct_list_Nova_ListNode*)nova_null)
		{
			l1_Nova_next = nova_datastruct_list_Nova_ListNode_Nova_clone(l1_Nova_next, exceptionData);
		}
		if (l1_Nova_prev != (nova_datastruct_list_Nova_ListNode*)nova_null)
		{
			l1_Nova_current->nova_datastruct_list_Nova_ListNode_Nova_next = nova_datastruct_list_Nova_ListNode_Nova_clone(l1_Nova_prev, exceptionData);
		}
		l1_Nova_prev = l1_Nova_current;
		l1_Nova_current = l1_Nova_next;
	}
	l1_Nova_list->prv->nova_datastruct_list_Nova_LinkedList_Nova_start = l1_Nova_prev;
	return l1_Nova_list;
}

void nova_datastruct_list_Nova_LinkedList_4_Nova_this(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char nova_datastruct_list_Nova_LinkedList_Nova_lambda78(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, Context1* context)
{
	return (nova_Nova_Object*)_1 == (nova_Nova_Object*)(*context->nova_datastruct_list_Nova_LinkedList_Nova_value);
}

nova_datastruct_list_Nova_LinkedListIterator* nova_datastruct_list_Nova_LinkedList_Accessor_Nova_iterator(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_LinkedListIterator*)nova_datastruct_list_Nova_LinkedListIterator_Nova_construct(0, exceptionData, this);
}


nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedList_Accessorfunc_Nova_first(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start;
}


nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedList_Accessorfunc_Nova_last(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->prv->nova_datastruct_list_Nova_LinkedList_Nova_current;
}


void nova_datastruct_list_Nova_LinkedList_Nova_super(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_LinkedList_Nova_size = 0;
	this->prv->nova_datastruct_list_Nova_LinkedList_Nova_start = (nova_datastruct_list_Nova_ListNode*)nova_null;
	this->prv->nova_datastruct_list_Nova_LinkedList_Nova_current = (nova_datastruct_list_Nova_ListNode*)nova_null;
}

