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
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArrayIterator.h>
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

typedef struct
{
} Context21;
typedef struct
{
	/* Char value */ char* nova_datastruct_list_Nova_CharArray_Nova_value;
} Context91;



long_long nova_datastruct_list_Nova_CharArray_Nova_lambda22(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, long_long v, char c, int _3, nova_datastruct_list_Nova_CharArray* _4, Context21* context);
char nova_datastruct_list_Nova_CharArray_Nova_lambda92(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char _1, Context91* context);


void nova_datastruct_list_Nova_CharArray_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_0_Nova_construct(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_CharArray, this,);
	this->vtable = &nova_datastruct_list_CharArray_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_super((nova_datastruct_list_Nova_Array*)this, exceptionData);
	nova_datastruct_list_Nova_CharArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_CharArray_Nova_this(this, exceptionData);
	}
	
	return this;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_1_Nova_construct(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, int count)
{
	CCLASS_NEW(nova_datastruct_list_Nova_CharArray, this,);
	this->vtable = &nova_datastruct_list_CharArray_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_super((nova_datastruct_list_Nova_Array*)this, exceptionData);
	nova_datastruct_list_Nova_CharArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_CharArray_0_Nova_this(this, exceptionData, count);
	}
	
	return this;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_2_Nova_construct(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char* data, int count)
{
	CCLASS_NEW(nova_datastruct_list_Nova_CharArray, this,);
	this->vtable = &nova_datastruct_list_CharArray_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_super((nova_datastruct_list_Nova_Array*)this, exceptionData);
	nova_datastruct_list_Nova_CharArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_CharArray_1_Nova_this(this, exceptionData, data, count);
	}
	
	return this;
}

void nova_datastruct_list_Nova_CharArray_Nova_destroy(nova_datastruct_list_Nova_CharArray** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_CharArray_Nova_this(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array_Nova_this((nova_datastruct_list_Nova_Array*)(this), exceptionData);
	this->nova_datastruct_list_Nova_CharArray_Nova_indexSize = (int)(4);
}

void nova_datastruct_list_Nova_CharArray_0_Nova_this(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, int count)
{
	nova_datastruct_list_Nova_Array_0_Nova_this((nova_datastruct_list_Nova_Array*)(this), exceptionData, count, (intptr_t)nova_null);
	this->nova_datastruct_list_Nova_CharArray_Nova_indexSize = (int)(4);
}

void nova_datastruct_list_Nova_CharArray_1_Nova_this(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char* data, int count)
{
	nova_datastruct_list_Nova_Array_1_Nova_this((nova_datastruct_list_Nova_Array*)(this), exceptionData, (nova_Nova_Object**)(data), count);
	this->nova_datastruct_list_Nova_CharArray_Nova_indexSize = (int)(1);
}

char* nova_datastruct_list_Nova_CharArray_Nova_cloneData(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (this->nova_datastruct_list_Nova_CharArray_Nova_indexSize == 1)
	{
		char* l2_Nova_d = (char*)nova_null;
		
		l2_Nova_d = NOVA_MALLOC(sizeof(char) * nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData));
		memcpy(l2_Nova_d, this->nova_datastruct_list_Nova_Array_Nova_data, sizeof(l2_Nova_d) * nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData));
		return l2_Nova_d;
	}
	else
	{
		return (char*)nova_datastruct_list_Nova_Array_Nova_cloneData((nova_datastruct_list_Nova_Array*)(((nova_datastruct_list_Nova_Array*)this)), exceptionData);
	}
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_Nova_clone(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, nova_datastruct_list_Nova_CharArray_Nova_cloneData(this, exceptionData), nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData));
}

long_long nova_datastruct_list_Nova_CharArray_Nova_sum(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure132_Nova_func nova_datastruct_list_Nova_CharArray_Nova_func, void* nova_datastruct_list_Nova_CharArray_ref_Nova_func, void* func_context)
{
	long_long l1_Nova_sum = 0;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l2_Nova_value = 0;
	
	l1_Nova_sum = (long_long)(0);
	l1_Nova_i = (int)(0);
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_value = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		l1_Nova_sum += nova_datastruct_list_Nova_CharArray_Nova_func(nova_datastruct_list_Nova_CharArray_ref_Nova_func, exceptionData, l2_Nova_value, l1_Nova_i++, this, l1_Nova_sum, func_context);
	}
	return l1_Nova_sum;
}

long_long nova_datastruct_list_Nova_CharArray_Nova_reduce(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure136_Nova_func nova_datastruct_list_Nova_CharArray_Nova_func, void* nova_datastruct_list_Nova_CharArray_ref_Nova_func, void* func_context, long_long initialValue)
{
	long_long l1_Nova_value = 0;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l2_Nova_element = 0;
	
	l1_Nova_value = initialValue;
	l1_Nova_i = (int)(0);
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		l1_Nova_value = nova_datastruct_list_Nova_CharArray_Nova_func(nova_datastruct_list_Nova_CharArray_ref_Nova_func, exceptionData, l1_Nova_value, l2_Nova_element, l1_Nova_i++, this, func_context);
	}
	return l1_Nova_value;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_Nova_addUnique(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char element)
{
	if (!nova_datastruct_list_Nova_CharArray_Nova_contains(this, exceptionData, element))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this), exceptionData, (nova_Nova_Object*)(intptr_t)(element));
	}
	return this;
}

char nova_datastruct_list_Nova_CharArray_Nova_contains(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	Context91* contextArg92 = NOVA_MALLOC(sizeof(Context91));
	contextArg92->nova_datastruct_list_Nova_CharArray_Nova_value = &value;
	
	return nova_datastruct_list_Nova_CharArray_Nova_any(this, exceptionData, (nova_datastruct_list_Nova_CharArray_closure148_Nova_anyFunc)&nova_datastruct_list_Nova_CharArray_Nova_lambda92, this, contextArg92);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_CharArray_Nova_map(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure140_Nova_mapFunc nova_datastruct_list_Nova_CharArray_Nova_mapFunc, void* nova_datastruct_list_Nova_CharArray_ref_Nova_mapFunc, void* mapFunc_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l2_Nova_element = 0;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_array, exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_mapFunc(nova_datastruct_list_Nova_CharArray_ref_Nova_mapFunc, exceptionData, l2_Nova_element, l1_Nova_i++, this, mapFunc_context)));
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_Nova_forEach(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure144_Nova_func nova_datastruct_list_Nova_CharArray_Nova_func, void* nova_datastruct_list_Nova_CharArray_ref_Nova_func, void* func_context)
{
	int l3_Nova_i = 0;
	
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData); l3_Nova_i++)
	{
		nova_datastruct_list_Nova_CharArray_Nova_func(nova_datastruct_list_Nova_CharArray_ref_Nova_func, exceptionData, (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get(this, exceptionData, l3_Nova_i), l3_Nova_i, this, func_context);
	}
	return this;
}

char nova_datastruct_list_Nova_CharArray_Nova_any(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure148_Nova_anyFunc nova_datastruct_list_Nova_CharArray_Nova_anyFunc, void* nova_datastruct_list_Nova_CharArray_ref_Nova_anyFunc, void* anyFunc_context)
{
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l2_Nova_element = 0;
	
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_CharArray_Nova_anyFunc(nova_datastruct_list_Nova_CharArray_ref_Nova_anyFunc, exceptionData, l2_Nova_element, anyFunc_context))
		{
			return 1;
		}
	}
	return 0;
}

char nova_datastruct_list_Nova_CharArray_Nova_all(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure152_Nova_allFunc nova_datastruct_list_Nova_CharArray_Nova_allFunc, void* nova_datastruct_list_Nova_CharArray_ref_Nova_allFunc, void* allFunc_context, int stopOnContradiction)
{
	char l1_Nova_contradiction = 0;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l2_Nova_element = 0;
	
	stopOnContradiction = (int)(stopOnContradiction == (intptr_t)nova_null ? 1 : stopOnContradiction);
	l1_Nova_contradiction = 0;
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (!nova_datastruct_list_Nova_CharArray_Nova_allFunc(nova_datastruct_list_Nova_CharArray_ref_Nova_allFunc, exceptionData, l2_Nova_element, allFunc_context))
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

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_Nova_filter(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure156_Nova_filterFunc nova_datastruct_list_Nova_CharArray_Nova_filterFunc, void* nova_datastruct_list_Nova_CharArray_ref_Nova_filterFunc, void* filterFunc_context)
{
	nova_datastruct_list_Nova_CharArray* l1_Nova_filtered = (nova_datastruct_list_Nova_CharArray*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l2_Nova_element = 0;
	
	l1_Nova_filtered = nova_datastruct_list_Nova_CharArray_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_CharArray_Nova_filterFunc(nova_datastruct_list_Nova_CharArray_ref_Nova_filterFunc, exceptionData, l2_Nova_element, l1_Nova_i++, this, filterFunc_context))
		{
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_filtered), exceptionData, (nova_Nova_Object*)(intptr_t)(l2_Nova_element));
		}
	}
	return l1_Nova_filtered;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_Nova_take(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_CharArray* l1_Nova_list = (nova_datastruct_list_Nova_CharArray*)nova_null;
	int l4_Nova_i = 0;
	
	if (howMany > nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData))
	{
		howMany = (int)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData));
	}
	l1_Nova_list = nova_datastruct_list_Nova_CharArray_0_Nova_construct(0, exceptionData);
	l4_Nova_i = (int)0;
	for (; l4_Nova_i < (int)howMany; l4_Nova_i++)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get(this, exceptionData, l4_Nova_i)));
	}
	return l1_Nova_list;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_Nova_skip(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_CharArray* l1_Nova_list = (nova_datastruct_list_Nova_CharArray*)nova_null;
	int l3_Nova_i = 0;
	
	l1_Nova_list = nova_datastruct_list_Nova_CharArray_0_Nova_construct(0, exceptionData);
	l3_Nova_i = (int)howMany;
	for (; l3_Nova_i < (int)nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData); l3_Nova_i++)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get(this, exceptionData, l3_Nova_i)));
	}
	return l1_Nova_list;
}

char nova_datastruct_list_Nova_CharArray_Nova_firstWhere(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure160_Nova_func nova_datastruct_list_Nova_CharArray_Nova_func, void* nova_datastruct_list_Nova_CharArray_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l2_Nova_element = 0;
	
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_CharArray_Nova_func(nova_datastruct_list_Nova_CharArray_ref_Nova_func, exceptionData, l2_Nova_element, func_context))
		{
			return l2_Nova_element;
		}
	}
	return (char)0;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_Nova_reverse(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_CharArray* l1_Nova_array = (nova_datastruct_list_Nova_CharArray*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l2_Nova_element = 0;
	
	l1_Nova_array = nova_datastruct_list_Nova_CharArray_1_Nova_construct(0, exceptionData, nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData));
	l1_Nova_i = (int)(0);
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_CharArray_Nova_set(l1_Nova_array, exceptionData, nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) - ++l1_Nova_i, l2_Nova_element);
	}
	return l1_Nova_array;
}

nova_Nova_String* nova_datastruct_list_Nova_CharArray_Nova_join(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter)
{
	nova_Nova_String* l1_Nova_str = (nova_Nova_String*)nova_null;
	char l1_Nova_passed = 0;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l2_Nova_element = 0;
	
	l1_Nova_str = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	l1_Nova_passed = 0;
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l2_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (l1_Nova_passed)
		{
			l1_Nova_str = (nova_Nova_String*)(nova_Nova_String_Nova_plus(l1_Nova_str, exceptionData, delimiter));
		}
		else
		{
			l1_Nova_passed = 1;
		}
		l1_Nova_str = (nova_Nova_String*)(nova_Nova_String_Nova_plus(l1_Nova_str, exceptionData, nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, l2_Nova_element)));
	}
	return l1_Nova_str;
}

char nova_datastruct_list_Nova_CharArray_Nova_get(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index)
{
	return ((char*)this->nova_datastruct_list_Nova_Array_Nova_data)[index];
}

char nova_datastruct_list_Nova_CharArray_Nova_set(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index, char value)
{
	((char*)this->nova_datastruct_list_Nova_Array_Nova_data)[index] = value;
	return value;
}

long_long nova_datastruct_list_Nova_CharArray_Nova_lambda22(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, long_long v, char c, int _3, nova_datastruct_list_Nova_CharArray* _4, Context21* context)
{
	return 31 * v + (int)c;
}

char nova_datastruct_list_Nova_CharArray_Nova_lambda92(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char _1, Context91* context)
{
	return _1 == (*context->nova_datastruct_list_Nova_CharArray_Nova_value);
}

char nova_datastruct_list_Nova_CharArray_Mutator_Nova_first(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	if (nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) > 0)
	{
		nova_datastruct_list_Nova_CharArray_Nova_set(this, exceptionData, 0, value);
	}
	else
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this), exceptionData, (nova_Nova_Object*)(intptr_t)(value));
	}
	return value;
}

char nova_datastruct_list_Nova_CharArray_Mutator_Nova_last(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	if (nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) > 0)
	{
		nova_datastruct_list_Nova_CharArray_Nova_set(this, exceptionData, nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) - 1, value);
	}
	else
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this), exceptionData, (nova_Nova_Object*)(intptr_t)(value));
	}
	return value;
}

nova_datastruct_list_Nova_CharArrayIterator* nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_CharArrayIterator_Nova_construct(0, exceptionData, this, this->nova_datastruct_list_Nova_CharArray_Nova_indexSize);
}


char nova_datastruct_list_Nova_CharArray_Accessor_Nova_first(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (char)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) > 0 ? nova_datastruct_list_Nova_CharArray_Nova_get(this, exceptionData, 0) : (char)0);
}

char nova_datastruct_list_Nova_CharArray_Accessor_Nova_last(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (char)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) > 0 ? nova_datastruct_list_Nova_CharArray_Nova_get(this, exceptionData, nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) - 1) : (char)0);
}

long_long nova_datastruct_list_Nova_CharArray_Accessor_Nova_hashCodeLong(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context21* contextArg22 = NOVA_MALLOC(sizeof(Context21));
	
	return nova_datastruct_list_Nova_CharArray_Nova_reduce(this, exceptionData, (nova_datastruct_list_Nova_CharArray_closure136_Nova_func)&nova_datastruct_list_Nova_CharArray_Nova_lambda22, this, contextArg22, 0);
}


void nova_datastruct_list_Nova_CharArray_Nova_super(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_CharArray_Nova_indexSize = 0;
}

void nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_CharArrayFunctionMap* nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_construct(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_CharArrayFunctionMap, this,);
	this->vtable = &nova_datastruct_list_CharArray_CharArrayFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_ArrayFunctionMap_Nova_super((nova_datastruct_list_Nova_ArrayFunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_destroy(nova_datastruct_list_Nova_CharArrayFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_this(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArrayFunctionMap_functionMapCharArrayFunctionMap0_Nova_construct(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_CharArray_0_Nova_construct(0, exceptionData);
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArrayFunctionMap_functionMapCharArrayFunctionMap1_Nova_construct(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int count)
{
	return nova_datastruct_list_Nova_CharArray_1_Nova_construct(0, exceptionData, count);
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArrayFunctionMap_functionMapCharArrayFunctionMap2_Nova_construct(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char* data, int count)
{
	return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, data, count);
}

char* nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_cloneData(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference)
{
	return (char*)nova_datastruct_list_Nova_CharArray_Nova_cloneData(reference, exceptionData);
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_clone(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference)
{
	return (nova_datastruct_list_Nova_CharArray*)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_clone(reference, exceptionData);
}

long_long nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_sum(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, nova_datastruct_list_Nova_CharArrayFunctionMap_closure424_Nova_func nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_func, void* nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_func, void* func_context)
{
	return nova_datastruct_list_Nova_CharArray_Nova_sum(reference, exceptionData, (nova_datastruct_list_Nova_CharArray_closure132_Nova_func)nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_func, nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_func, func_context);
}

long_long nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_reduce(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, nova_datastruct_list_Nova_CharArrayFunctionMap_closure425_Nova_func nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_func, void* nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_func, void* func_context, long_long initialValue)
{
	return nova_datastruct_list_Nova_CharArray_Nova_reduce(reference, exceptionData, (nova_datastruct_list_Nova_CharArray_closure136_Nova_func)nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_func, nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_func, func_context, initialValue);
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_addUnique(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, char element)
{
	return (nova_datastruct_list_Nova_CharArray*)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_addUnique(reference, exceptionData, element);
}

char nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_contains(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, char value)
{
	return nova_datastruct_list_Nova_CharArray_Nova_contains(reference, exceptionData, value);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_map(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, nova_datastruct_list_Nova_CharArrayFunctionMap_closure426_Nova_mapFunc nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_mapFunc, void* nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_mapFunc, void* mapFunc_context)
{
	return (nova_datastruct_list_Nova_Array*)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_map(reference, exceptionData, (nova_datastruct_list_Nova_CharArray_closure140_Nova_mapFunc)(intptr_t)nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_mapFunc, nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_mapFunc, mapFunc_context);
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_forEach(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, nova_datastruct_list_Nova_CharArrayFunctionMap_closure427_Nova_func nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_func, void* nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_list_Nova_CharArray*)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_forEach(reference, exceptionData, (nova_datastruct_list_Nova_CharArray_closure144_Nova_func)nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_func, nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_func, func_context);
}

char nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_any(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, nova_datastruct_list_Nova_CharArrayFunctionMap_closure428_Nova_anyFunc nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_anyFunc, void* nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_anyFunc, void* anyFunc_context)
{
	return nova_datastruct_list_Nova_CharArray_Nova_any(reference, exceptionData, (nova_datastruct_list_Nova_CharArray_closure148_Nova_anyFunc)nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_anyFunc, nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_anyFunc, anyFunc_context);
}

char nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_all(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, nova_datastruct_list_Nova_CharArrayFunctionMap_closure429_Nova_allFunc nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_allFunc, void* nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_allFunc, void* allFunc_context, char stopOnContradiction)
{
	return nova_datastruct_list_Nova_CharArray_Nova_all(reference, exceptionData, (nova_datastruct_list_Nova_CharArray_closure152_Nova_allFunc)nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_allFunc, nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_allFunc, allFunc_context, stopOnContradiction);
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_filter(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, nova_datastruct_list_Nova_CharArrayFunctionMap_closure430_Nova_filterFunc nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_filterFunc, void* nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_filterFunc, void* filterFunc_context)
{
	return (nova_datastruct_list_Nova_CharArray*)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_filter(reference, exceptionData, (nova_datastruct_list_Nova_CharArray_closure156_Nova_filterFunc)nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_filterFunc, nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_filterFunc, filterFunc_context);
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_take(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, int howMany)
{
	return (nova_datastruct_list_Nova_CharArray*)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_take(reference, exceptionData, howMany);
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_skip(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, int howMany)
{
	return (nova_datastruct_list_Nova_CharArray*)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_skip(reference, exceptionData, howMany);
}

char nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_firstWhere(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, nova_datastruct_list_Nova_CharArrayFunctionMap_closure431_Nova_func nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_func, void* nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_func, void* func_context)
{
	return (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_firstWhere(reference, exceptionData, (nova_datastruct_list_Nova_CharArray_closure160_Nova_func)nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_func, nova_datastruct_list_Nova_CharArrayFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_reverse(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference)
{
	return (nova_datastruct_list_Nova_CharArray*)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_reverse(reference, exceptionData);
}

nova_Nova_String* nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_join(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, nova_Nova_String* delimiter)
{
	return nova_datastruct_list_Nova_CharArray_Nova_join(reference, exceptionData, delimiter);
}

char nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_get(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, int index)
{
	return (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get(reference, exceptionData, index);
}

char nova_datastruct_list_Nova_CharArrayFunctionMap_functionMap_Nova_set(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference, int index, char value)
{
	return (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_set(reference, exceptionData, index, value);
}

void nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_super(nova_datastruct_list_Nova_CharArrayFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_list_Nova_CharArrayPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_CharArrayPropertyMap* nova_datastruct_list_Nova_CharArrayPropertyMap_Nova_construct(nova_datastruct_list_Nova_CharArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_CharArrayPropertyMap, this,);
	this->vtable = &nova_datastruct_list_CharArray_CharArrayPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_datastruct_list_Nova_ArrayPropertyMap_Nova_super((nova_datastruct_list_Nova_ArrayPropertyMap*)this, exceptionData);
	nova_datastruct_list_Nova_CharArrayPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_CharArrayPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_CharArrayPropertyMap_Nova_destroy(nova_datastruct_list_Nova_CharArrayPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_CharArrayPropertyMap_Nova_this(nova_datastruct_list_Nova_CharArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_CharArrayIterator* nova_datastruct_list_Nova_CharArrayPropertyMap_functionMap_Nova_iterator(nova_datastruct_list_Nova_CharArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference)
{
	return nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator(reference, exceptionData);
}

char nova_datastruct_list_Nova_CharArrayPropertyMap_functionMap_Nova_first(nova_datastruct_list_Nova_CharArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference)
{
	return (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessor_Nova_first(reference, exceptionData);
}

char nova_datastruct_list_Nova_CharArrayPropertyMap_functionMap_Nova_last(nova_datastruct_list_Nova_CharArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference)
{
	return (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessor_Nova_last(reference, exceptionData);
}

long_long nova_datastruct_list_Nova_CharArrayPropertyMap_functionMap_Nova_hashCodeLong(nova_datastruct_list_Nova_CharArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference)
{
	return nova_datastruct_list_Nova_CharArray_Accessor_Nova_hashCodeLong(reference, exceptionData);
}

int nova_datastruct_list_Nova_CharArrayPropertyMap_functionMap_Nova_indexSize(nova_datastruct_list_Nova_CharArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* reference)
{
	return reference->nova_datastruct_list_Nova_CharArray_Nova_indexSize;
}

void nova_datastruct_list_Nova_CharArrayPropertyMap_Nova_super(nova_datastruct_list_Nova_CharArrayPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

