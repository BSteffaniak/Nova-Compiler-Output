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
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_PlusEqualsOperator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_OrderedList.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_OrderedList.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_PlusEqualsOperator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_OrderedList.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_PlusEqualsOperator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/NativeObject.h>







void nova_datastruct_list_Nova_IntArray_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_0_Nova_construct(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_IntArray, this,);
	this->vtable = &nova_datastruct_list_IntArray_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_super((nova_datastruct_list_Nova_Array*)this, exceptionData);
	nova_datastruct_list_Nova_IntArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_IntArray_Nova_this(this, exceptionData);
	}
	
	return this;
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_1_Nova_construct(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int count)
{
	CCLASS_NEW(nova_datastruct_list_Nova_IntArray, this,);
	this->vtable = &nova_datastruct_list_IntArray_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_super((nova_datastruct_list_Nova_Array*)this, exceptionData);
	nova_datastruct_list_Nova_IntArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_IntArray_0_Nova_this(this, exceptionData, count);
	}
	
	return this;
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_2_Nova_construct(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int* data, int count)
{
	CCLASS_NEW(nova_datastruct_list_Nova_IntArray, this,);
	this->vtable = &nova_datastruct_list_IntArray_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_super((nova_datastruct_list_Nova_Array*)this, exceptionData);
	nova_datastruct_list_Nova_IntArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_IntArray_1_Nova_this(this, exceptionData, data, count);
	}
	
	return this;
}

void nova_datastruct_list_Nova_IntArray_Nova_destroy(nova_datastruct_list_Nova_IntArray** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_IntArray_Nova_this(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array_Nova_this((nova_datastruct_list_Nova_Array*)(this), exceptionData);
}

void nova_datastruct_list_Nova_IntArray_0_Nova_this(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int count)
{
	nova_datastruct_list_Nova_Array_0_Nova_this((nova_datastruct_list_Nova_Array*)(this), exceptionData, count, (intptr_t)nova_null);
}

void nova_datastruct_list_Nova_IntArray_1_Nova_this(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int* data, int count)
{
	nova_datastruct_list_Nova_Array_1_Nova_this((nova_datastruct_list_Nova_Array*)(this), exceptionData, (nova_Nova_Object**)(data), count);
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_Nova_clone(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_IntArray_2_Nova_construct(0, exceptionData, (int*)(nova_datastruct_list_Nova_Array_virtual_Nova_cloneData((nova_datastruct_list_Nova_Array*)(this), exceptionData)), nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData));
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_IntArray_Nova_map(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray_closure216_Nova_mapFunc nova_datastruct_list_Nova_IntArray_Nova_mapFunc, void* nova_datastruct_list_Nova_IntArray_ref_Nova_mapFunc, void* mapFunc_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_IntArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_IntArrayIterator*)nova_null;
	int l2_Nova_element = 0;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = nova_datastruct_list_Nova_IntArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (int)(intptr_t)(nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_array, exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)(intptr_t)(nova_datastruct_list_Nova_IntArray_Nova_mapFunc(nova_datastruct_list_Nova_IntArray_ref_Nova_mapFunc, exceptionData, l2_Nova_element, l1_Nova_i++, this, mapFunc_context)));
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_Nova_forEach(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray_closure220_Nova_func nova_datastruct_list_Nova_IntArray_Nova_func, void* nova_datastruct_list_Nova_IntArray_ref_Nova_func, void* func_context)
{
	int l3_Nova_i = 0;
	
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData); l3_Nova_i++)
	{
		nova_datastruct_list_Nova_IntArray_Nova_func(nova_datastruct_list_Nova_IntArray_ref_Nova_func, exceptionData, (int)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_get(this, exceptionData, l3_Nova_i), l3_Nova_i, this, func_context);
	}
	return this;
}

char nova_datastruct_list_Nova_IntArray_Nova_any(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray_closure224_Nova_anyFunc nova_datastruct_list_Nova_IntArray_Nova_anyFunc, void* nova_datastruct_list_Nova_IntArray_ref_Nova_anyFunc, void* anyFunc_context)
{
	nova_datastruct_list_Nova_IntArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_IntArrayIterator*)nova_null;
	int l2_Nova_element = 0;
	
	nova_local_0 = nova_datastruct_list_Nova_IntArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (int)(intptr_t)(nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_IntArray_Nova_anyFunc(nova_datastruct_list_Nova_IntArray_ref_Nova_anyFunc, exceptionData, l2_Nova_element, anyFunc_context))
		{
			return 1;
		}
	}
	return 0;
}

char nova_datastruct_list_Nova_IntArray_Nova_all(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray_closure228_Nova_allFunc nova_datastruct_list_Nova_IntArray_Nova_allFunc, void* nova_datastruct_list_Nova_IntArray_ref_Nova_allFunc, void* allFunc_context, int stopOnContradiction)
{
	int l1_Nova_i = 0;
	char l1_Nova_contradiction = 0;
	nova_datastruct_list_Nova_IntArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_IntArrayIterator*)nova_null;
	int l2_Nova_element = 0;
	
	stopOnContradiction = (int)(stopOnContradiction == (intptr_t)nova_null ? 1 : stopOnContradiction);
	l1_Nova_i = (int)(0);
	l1_Nova_contradiction = 0;
	nova_local_0 = nova_datastruct_list_Nova_IntArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (int)(intptr_t)(nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (!nova_datastruct_list_Nova_IntArray_Nova_allFunc(nova_datastruct_list_Nova_IntArray_ref_Nova_allFunc, exceptionData, l2_Nova_element, l1_Nova_i++, this, allFunc_context))
		{
			if (stopOnContradiction)
			{
				return 0;
			}
			l1_Nova_contradiction = 1;
		}
	}
	return !l1_Nova_contradiction;
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_Nova_filter(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray_closure232_Nova_filterFunc nova_datastruct_list_Nova_IntArray_Nova_filterFunc, void* nova_datastruct_list_Nova_IntArray_ref_Nova_filterFunc, void* filterFunc_context)
{
	nova_datastruct_list_Nova_IntArray* l1_Nova_filtered = (nova_datastruct_list_Nova_IntArray*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_IntArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_IntArrayIterator*)nova_null;
	int l2_Nova_element = 0;
	
	l1_Nova_filtered = nova_datastruct_list_Nova_IntArray_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = nova_datastruct_list_Nova_IntArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (int)(intptr_t)(nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_IntArray_Nova_filterFunc(nova_datastruct_list_Nova_IntArray_ref_Nova_filterFunc, exceptionData, l2_Nova_element, l1_Nova_i++, this, filterFunc_context))
		{
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_filtered), exceptionData, (nova_Nova_Object*)(intptr_t)(l2_Nova_element));
		}
	}
	return l1_Nova_filtered;
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_Nova_take(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_IntArray* l1_Nova_list = (nova_datastruct_list_Nova_IntArray*)nova_null;
	int l4_Nova_i = 0;
	
	if (howMany > nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData))
	{
		howMany = (int)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData));
	}
	l1_Nova_list = nova_datastruct_list_Nova_IntArray_0_Nova_construct(0, exceptionData);
	l4_Nova_i = (int)0;
	for (; l4_Nova_i < (int)howMany; l4_Nova_i++)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(intptr_t)(this->nova_datastruct_list_Nova_Array_Nova_data[l4_Nova_i]));
	}
	return l1_Nova_list;
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_Nova_skip(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_IntArray* l1_Nova_list = (nova_datastruct_list_Nova_IntArray*)nova_null;
	int l3_Nova_i = 0;
	
	l1_Nova_list = nova_datastruct_list_Nova_IntArray_0_Nova_construct(0, exceptionData);
	l3_Nova_i = (int)howMany;
	for (; l3_Nova_i < (int)nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData); l3_Nova_i++)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(intptr_t)(this->nova_datastruct_list_Nova_Array_Nova_data[l3_Nova_i]));
	}
	return l1_Nova_list;
}

int nova_datastruct_list_Nova_IntArray_Nova_firstWhere(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray_closure236_Nova_func nova_datastruct_list_Nova_IntArray_Nova_func, void* nova_datastruct_list_Nova_IntArray_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_IntArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_IntArrayIterator*)nova_null;
	int l2_Nova_element = 0;
	
	nova_local_0 = nova_datastruct_list_Nova_IntArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (int)(intptr_t)(nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_IntArray_Nova_func(nova_datastruct_list_Nova_IntArray_ref_Nova_func, exceptionData, l2_Nova_element, func_context))
		{
			return l2_Nova_element;
		}
	}
	return (int)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArray_Nova_reverse(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_IntArray* l1_Nova_array = (nova_datastruct_list_Nova_IntArray*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_IntArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_IntArrayIterator*)nova_null;
	int l2_Nova_element = 0;
	
	l1_Nova_array = nova_datastruct_list_Nova_IntArray_1_Nova_construct(0, exceptionData, nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData));
	nova_datastruct_list_Nova_List_virtual_Mutator_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_array), exceptionData, nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData));
	l1_Nova_i = (int)(0);
	nova_local_0 = nova_datastruct_list_Nova_IntArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (int)(intptr_t)(nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_IntArray_Nova_set(l1_Nova_array, exceptionData, nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) - ++l1_Nova_i, l2_Nova_element);
	}
	return l1_Nova_array;
}

nova_Nova_String* nova_datastruct_list_Nova_IntArray_Nova_join(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter)
{
	nova_Nova_String* l1_Nova_str = (nova_Nova_String*)nova_null;
	char l1_Nova_passed = 0;
	nova_datastruct_list_Nova_IntArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_IntArrayIterator*)nova_null;
	int l2_Nova_element = 0;
	
	l1_Nova_str = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	l1_Nova_passed = 0;
	nova_local_0 = nova_datastruct_list_Nova_IntArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (int)(intptr_t)(nova_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (l1_Nova_passed)
		{
			l1_Nova_str = (nova_Nova_String*)(nova_Nova_String_Nova_plus(l1_Nova_str, exceptionData, delimiter));
		}
		else
		{
			l1_Nova_passed = 1;
		}
		l1_Nova_str = (nova_Nova_String*)(nova_Nova_String_Nova_plus(l1_Nova_str, exceptionData, nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, l2_Nova_element)));
	}
	return l1_Nova_str;
}

int nova_datastruct_list_Nova_IntArray_Nova_get(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index)
{
	return ((int*)this->nova_datastruct_list_Nova_Array_Nova_data)[index];
}

int nova_datastruct_list_Nova_IntArray_Nova_set(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index, int value)
{
	((int*)this->nova_datastruct_list_Nova_Array_Nova_data)[index] = value;
	return value;
}

nova_datastruct_list_Nova_IntArrayIterator* nova_datastruct_list_Nova_IntArray_Accessor_Nova_iterator(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_IntArrayIterator_Nova_construct(0, exceptionData, this);
}


int nova_datastruct_list_Nova_IntArray_Accessor_Nova_first(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) > 0 ? nova_datastruct_list_Nova_IntArray_Nova_get(this, exceptionData, 0) : (int)(intptr_t)0);
}


int nova_datastruct_list_Nova_IntArray_Accessor_Nova_last(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) > 0 ? nova_datastruct_list_Nova_IntArray_Nova_get(this, exceptionData, nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) - 1) : (int)(intptr_t)0);
}


void nova_datastruct_list_Nova_IntArray_Nova_super(nova_datastruct_list_Nova_IntArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_IntArrayFunctionMap* nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_construct(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_IntArrayFunctionMap, this,);
	this->vtable = &nova_datastruct_list_IntArray_IntArrayFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_ArrayFunctionMap_Nova_super((nova_datastruct_list_Nova_ArrayFunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_destroy(nova_datastruct_list_Nova_IntArrayFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_this(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMapIntArrayFunctionMap0_Nova_construct(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_IntArray_0_Nova_construct(0, exceptionData);
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMapIntArrayFunctionMap1_Nova_construct(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int count)
{
	return nova_datastruct_list_Nova_IntArray_1_Nova_construct(0, exceptionData, count);
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMapIntArrayFunctionMap2_Nova_construct(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int* data, int count)
{
	return nova_datastruct_list_Nova_IntArray_2_Nova_construct(0, exceptionData, data, count);
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_clone(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference)
{
	return (nova_datastruct_list_Nova_IntArray*)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_clone(reference, exceptionData);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_map(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, nova_datastruct_list_Nova_IntArrayFunctionMap_closure445_Nova_mapFunc nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_mapFunc, void* nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_mapFunc, void* mapFunc_context)
{
	return (nova_datastruct_list_Nova_Array*)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_map(reference, exceptionData, (nova_datastruct_list_Nova_IntArray_closure216_Nova_mapFunc)(intptr_t)nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_mapFunc, nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_mapFunc, mapFunc_context);
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_forEach(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, nova_datastruct_list_Nova_IntArrayFunctionMap_closure446_Nova_func nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_func, void* nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_list_Nova_IntArray*)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_forEach(reference, exceptionData, (nova_datastruct_list_Nova_IntArray_closure220_Nova_func)nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_func, nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_func, func_context);
}

char nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_any(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, nova_datastruct_list_Nova_IntArrayFunctionMap_closure447_Nova_anyFunc nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_anyFunc, void* nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_anyFunc, void* anyFunc_context)
{
	return nova_datastruct_list_Nova_IntArray_Nova_any(reference, exceptionData, (nova_datastruct_list_Nova_IntArray_closure224_Nova_anyFunc)nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_anyFunc, nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_anyFunc, anyFunc_context);
}

char nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_all(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, nova_datastruct_list_Nova_IntArrayFunctionMap_closure448_Nova_allFunc nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_allFunc, void* nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_allFunc, void* allFunc_context, char stopOnContradiction)
{
	return nova_datastruct_list_Nova_IntArray_Nova_all(reference, exceptionData, (nova_datastruct_list_Nova_IntArray_closure228_Nova_allFunc)nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_allFunc, nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_allFunc, allFunc_context, stopOnContradiction);
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_filter(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, nova_datastruct_list_Nova_IntArrayFunctionMap_closure449_Nova_filterFunc nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_filterFunc, void* nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_filterFunc, void* filterFunc_context)
{
	return (nova_datastruct_list_Nova_IntArray*)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_filter(reference, exceptionData, (nova_datastruct_list_Nova_IntArray_closure232_Nova_filterFunc)nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_filterFunc, nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_filterFunc, filterFunc_context);
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_take(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, int howMany)
{
	return (nova_datastruct_list_Nova_IntArray*)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_take(reference, exceptionData, howMany);
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_skip(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, int howMany)
{
	return (nova_datastruct_list_Nova_IntArray*)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_skip(reference, exceptionData, howMany);
}

int nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_firstWhere(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, nova_datastruct_list_Nova_IntArrayFunctionMap_closure450_Nova_func nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_func, void* nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_func, void* func_context)
{
	return (int)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_firstWhere(reference, exceptionData, (nova_datastruct_list_Nova_IntArray_closure236_Nova_func)nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_func, nova_datastruct_list_Nova_IntArrayFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_IntArray* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_reverse(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference)
{
	return (nova_datastruct_list_Nova_IntArray*)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_reverse(reference, exceptionData);
}

nova_Nova_String* nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_join(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, nova_Nova_String* delimiter)
{
	return nova_datastruct_list_Nova_IntArray_Nova_join(reference, exceptionData, delimiter);
}

int nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_get(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, int index)
{
	return (int)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_get(reference, exceptionData, index);
}

int nova_datastruct_list_Nova_IntArrayFunctionMap_functionMap_Nova_set(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference, int index, int value)
{
	return (int)(intptr_t)nova_datastruct_list_Nova_IntArray_Nova_set(reference, exceptionData, index, value);
}

void nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_super(nova_datastruct_list_Nova_IntArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_list_Nova_IntArrayPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_IntArrayPropertyMap* nova_datastruct_list_Nova_IntArrayPropertyMap_Nova_construct(nova_datastruct_list_Nova_IntArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_IntArrayPropertyMap, this,);
	this->vtable = &nova_datastruct_list_IntArray_IntArrayPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_datastruct_list_Nova_ArrayPropertyMap_Nova_super((nova_datastruct_list_Nova_ArrayPropertyMap*)this, exceptionData);
	nova_datastruct_list_Nova_IntArrayPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_IntArrayPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_IntArrayPropertyMap_Nova_destroy(nova_datastruct_list_Nova_IntArrayPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_IntArrayPropertyMap_Nova_this(nova_datastruct_list_Nova_IntArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_IntArrayIterator* nova_datastruct_list_Nova_IntArrayPropertyMap_functionMap_Nova_iterator(nova_datastruct_list_Nova_IntArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference)
{
	return nova_datastruct_list_Nova_IntArray_Accessor_Nova_iterator(reference, exceptionData);
}

int nova_datastruct_list_Nova_IntArrayPropertyMap_functionMap_Nova_first(nova_datastruct_list_Nova_IntArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference)
{
	return (int)(intptr_t)nova_datastruct_list_Nova_IntArray_Accessor_Nova_first(reference, exceptionData);
}

int nova_datastruct_list_Nova_IntArrayPropertyMap_functionMap_Nova_last(nova_datastruct_list_Nova_IntArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* reference)
{
	return (int)(intptr_t)nova_datastruct_list_Nova_IntArray_Accessor_Nova_last(reference, exceptionData);
}

void nova_datastruct_list_Nova_IntArrayPropertyMap_Nova_super(nova_datastruct_list_Nova_IntArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

