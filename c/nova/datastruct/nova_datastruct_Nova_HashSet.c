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
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context9;
typedef struct
{
} Context10;
typedef struct
{
} Context11;
typedef struct
{
} Context12;
typedef struct
{
	/* T value */ nova_operators_Nova_EqualsOperator** nova_datastruct_Nova_HashSet_Nova_value;
} Context13;
typedef struct
{
	/* private Int bucketSize = 5 */ int* nova_datastruct_Nova_HashSet_Nova_bucketSize;
} Context80;


CCLASS_PRIVATE
(
	nova_datastruct_Nova_HashSet,
	nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_buckets;
	int nova_datastruct_Nova_HashSet_Nova_bucketSize;
	
)

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_getBucket(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* value);
nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_lambda10(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context9* context);
nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_lambda11(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context10* context);
nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_lambda12(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context11* context);
nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_lambda13(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context12* context);
char nova_datastruct_Nova_HashSet_Nova_lambda14(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* x, Context13* context);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_lambda81(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context80* context);
void nova_datastruct_Nova_HashSet_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSet_Nova_construct(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, int bucketCount, int bucketSize)
{
	CCLASS_NEW(nova_datastruct_Nova_HashSet, this);
	this->vtable = &nova_datastruct_HashSet_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_HashSet_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_HashSet_Nova_this(this, exceptionData, bucketCount, bucketSize);
	}
	
	return this;
}

void nova_datastruct_Nova_HashSet_Nova_destroy(nova_datastruct_Nova_HashSet** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->prv->nova_datastruct_Nova_HashSet_Nova_buckets, exceptionData);
	
	NOVA_FREE((*this)->prv);
	
	
	
	
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_HashSet_Nova_this(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, int bucketCount, int bucketSize)
{
	Context80* contextArg81 = NOVA_MALLOC(sizeof(Context80));
	contextArg81->nova_datastruct_Nova_HashSet_Nova_bucketSize = &bucketSize;
	
	bucketCount = (int)(bucketCount == (intptr_t)nova_null ? 5 : bucketCount);
	bucketSize = (int)(bucketSize == (intptr_t)nova_null ? 5 : bucketSize);
	this->prv->nova_datastruct_Nova_HashSet_Nova_bucketSize = bucketSize;
	this->prv->nova_datastruct_Nova_HashSet_Nova_buckets = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, bucketCount, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&nova_datastruct_Nova_HashSet_Nova_lambda81, this, contextArg81));
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_toArray(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context9* contextArg10 = NOVA_MALLOC(sizeof(Context9));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashSet_0_Nova_map(this, exceptionData, (nova_datastruct_Nova_HashSet_closure40_Nova_func)&nova_datastruct_Nova_HashSet_Nova_lambda10, this, contextArg10);
}

char nova_datastruct_Nova_HashSet_0_Nova_any(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure32_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->prv->nova_datastruct_Nova_HashSet_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_operators_Nova_EqualsOperator* l3_Nova_v = (nova_operators_Nova_EqualsOperator*)nova_null;
		
		l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l2_Nova_bucket)), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_v = (nova_operators_Nova_EqualsOperator*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			if ((nova_operators_Nova_EqualsOperator*)(l3_Nova_v) != (nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_EqualsOperator*)nova_null && nova_datastruct_Nova_HashSet_Nova_func(nova_datastruct_Nova_HashSet_ref_Nova_func, exceptionData, l3_Nova_v, func_context))
			{
				return 1;
			}
		}
	}
	return 0;
}

char nova_datastruct_Nova_HashSet_0_Nova_all(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure36_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context, int stopOnContradiction)
{
	char l1_Nova_contradiction = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	stopOnContradiction = (int)(stopOnContradiction == (intptr_t)nova_null ? 1 : stopOnContradiction);
	l1_Nova_contradiction = 0;
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->prv->nova_datastruct_Nova_HashSet_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_operators_Nova_EqualsOperator* l3_Nova_v = (nova_operators_Nova_EqualsOperator*)nova_null;
		
		l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l2_Nova_bucket)), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_v = (nova_operators_Nova_EqualsOperator*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			if ((nova_operators_Nova_EqualsOperator*)(l3_Nova_v) != (nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_EqualsOperator*)nova_null && !nova_datastruct_Nova_HashSet_Nova_func(nova_datastruct_Nova_HashSet_ref_Nova_func, exceptionData, l3_Nova_v, func_context))
			{
				if (stopOnContradiction)
				{
					return 0;
				}
				l1_Nova_contradiction = 1;
			}
		}
	}
	return !l1_Nova_contradiction;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_0_Nova_map(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure40_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->prv->nova_datastruct_Nova_HashSet_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_operators_Nova_EqualsOperator* l3_Nova_v = (nova_operators_Nova_EqualsOperator*)nova_null;
		
		l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l2_Nova_bucket)), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_v = (nova_operators_Nova_EqualsOperator*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			if ((nova_operators_Nova_EqualsOperator*)(l3_Nova_v) != (nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_EqualsOperator*)nova_null)
			{
				nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)(nova_datastruct_Nova_HashSet_Nova_func(nova_datastruct_Nova_HashSet_ref_Nova_func, exceptionData, l3_Nova_v, l1_Nova_i++, this, func_context)));
			}
		}
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_0_Nova_filter(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure44_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->prv->nova_datastruct_Nova_HashSet_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_operators_Nova_EqualsOperator* l3_Nova_v = (nova_operators_Nova_EqualsOperator*)nova_null;
		
		l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l2_Nova_bucket)), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_v = (nova_operators_Nova_EqualsOperator*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			if ((nova_operators_Nova_EqualsOperator*)(l3_Nova_v) != (nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_EqualsOperator*)nova_null && nova_datastruct_Nova_HashSet_Nova_func(nova_datastruct_Nova_HashSet_ref_Nova_func, exceptionData, l3_Nova_v, l1_Nova_i++, this, func_context))
			{
				nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, (nova_Nova_Object*)(l3_Nova_v));
			}
		}
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

nova_Nova_String* nova_datastruct_Nova_HashSet_Nova_join(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter)
{
	int l1_Nova_i = 0;
	nova_Nova_String* l1_Nova_output = (nova_Nova_String*)nova_null;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_i = (int)(0);
	l1_Nova_output = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->prv->nova_datastruct_Nova_HashSet_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_operators_Nova_EqualsOperator* l3_Nova_v = (nova_operators_Nova_EqualsOperator*)nova_null;
		
		l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l2_Nova_bucket)), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_v = (nova_operators_Nova_EqualsOperator*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			if ((nova_operators_Nova_EqualsOperator*)(l3_Nova_v) != (nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_EqualsOperator*)nova_null)
			{
				if (l1_Nova_i > 0)
				{
					l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_Nova_plus(l1_Nova_output, exceptionData, delimiter));
				}
				l1_Nova_output = (nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual0_Nova_plus((nova_operators_Nova_PlusOperator*)(l1_Nova_output), exceptionData, (nova_Nova_Object*)((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(l3_Nova_v), exceptionData)))));
			}
		}
	}
	return l1_Nova_output;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_skip(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, int num)
{
	Context10* contextArg11 = NOVA_MALLOC(sizeof(Context10));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_HashSet_0_Nova_map(this, exceptionData, (nova_datastruct_Nova_HashSet_closure40_Nova_func)&nova_datastruct_Nova_HashSet_Nova_lambda11, this, contextArg11)), exceptionData, num);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_take(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, int num)
{
	Context11* contextArg12 = NOVA_MALLOC(sizeof(Context11));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_take((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_HashSet_0_Nova_map(this, exceptionData, (nova_datastruct_Nova_HashSet_closure40_Nova_func)&nova_datastruct_Nova_HashSet_Nova_lambda12, this, contextArg12)), exceptionData, num);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_reverse(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context12* contextArg13 = NOVA_MALLOC(sizeof(Context12));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_HashSet_0_Nova_map(this, exceptionData, (nova_datastruct_Nova_HashSet_closure40_Nova_func)&nova_datastruct_Nova_HashSet_Nova_lambda13, this, contextArg13)), exceptionData);
}

nova_operators_Nova_EqualsOperator* nova_datastruct_Nova_HashSet_0_Nova_firstWhere(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure48_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->prv->nova_datastruct_Nova_HashSet_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_operators_Nova_EqualsOperator* l3_Nova_v = (nova_operators_Nova_EqualsOperator*)nova_null;
		
		l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l2_Nova_bucket)), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_v = (nova_operators_Nova_EqualsOperator*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			if ((nova_operators_Nova_EqualsOperator*)(l3_Nova_v) != (nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_EqualsOperator*)nova_null && nova_datastruct_Nova_HashSet_Nova_func(nova_datastruct_Nova_HashSet_ref_Nova_func, exceptionData, l3_Nova_v, func_context))
			{
				return (nova_operators_Nova_EqualsOperator*)l3_Nova_v;
			}
		}
	}
	return (nova_operators_Nova_EqualsOperator*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSet_0_Nova_forEach(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure52_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context)
{
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->prv->nova_datastruct_Nova_HashSet_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_operators_Nova_EqualsOperator* l3_Nova_v = (nova_operators_Nova_EqualsOperator*)nova_null;
		
		l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l2_Nova_bucket)), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_v = (nova_operators_Nova_EqualsOperator*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			if ((nova_operators_Nova_EqualsOperator*)(l3_Nova_v) != (nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_EqualsOperator*)nova_null)
			{
				nova_datastruct_Nova_HashSet_Nova_func(nova_datastruct_Nova_HashSet_ref_Nova_func, exceptionData, l3_Nova_v, l1_Nova_i++, this, func_context);
			}
		}
	}
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_getBucket(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* value)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_datastruct_Nova_HashSet_Nova_buckets), exceptionData, (int)((long_long)(nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong((nova_Nova_Object*)(value), exceptionData)) & (nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_Nova_HashSet_Nova_buckets), exceptionData) - 1)));
}

nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSet_Nova_add(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* value)
{
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(nova_datastruct_Nova_HashSet_Nova_getBucket(this, exceptionData, value)), exceptionData, (nova_Nova_Object*)(value));
	return this;
}

nova_operators_Nova_EqualsOperator* nova_datastruct_Nova_HashSet_Nova_get(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* value)
{
	Context13* contextArg14 = NOVA_MALLOC(sizeof(Context13));
	contextArg14->nova_datastruct_Nova_HashSet_Nova_value = &value;
	
	return (nova_operators_Nova_EqualsOperator*)nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_HashSet_Nova_getBucket(this, exceptionData, value)), exceptionData, (nova_datastruct_list_Nova_List_closure316_Nova_func)&nova_datastruct_Nova_HashSet_Nova_lambda14, this, contextArg14);
}

nova_operators_Nova_EqualsOperator* nova_datastruct_Nova_HashSet_Nova_remove(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* value)
{
	nova_datastruct_list_Nova_Array* l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_operators_Nova_EqualsOperator* l2_Nova_v = (nova_operators_Nova_EqualsOperator*)nova_null;
	
	l1_Nova_bucket = nova_datastruct_Nova_HashSet_Nova_getBucket(this, exceptionData, value);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l1_Nova_bucket)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_v = (nova_operators_Nova_EqualsOperator*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if ((nova_operators_Nova_EqualsOperator*)(l2_Nova_v) != (nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_EqualsOperator*)nova_null && (char)(nova_operators_Nova_EqualsOperator_virtual0_Nova_equals((nova_operators_Nova_EqualsOperator*)(l2_Nova_v), exceptionData, (nova_Nova_Object*)(value))))
		{
			nova_datastruct_list_Nova_Array_0_Nova_remove((nova_datastruct_list_Nova_Array*)(l1_Nova_bucket), exceptionData, l1_Nova_i);
			return (nova_operators_Nova_EqualsOperator*)l2_Nova_v;
		}
		l1_Nova_i++;
	}
	return (nova_operators_Nova_EqualsOperator*)(nova_Nova_Object*)nova_null;
}

char nova_datastruct_Nova_HashSet_0_Nova_contains(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* value)
{
	return (nova_operators_Nova_EqualsOperator*)(value) != (nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_EqualsOperator*)nova_null && (nova_operators_Nova_EqualsOperator*)(nova_datastruct_Nova_HashSet_Nova_get(this, exceptionData, value)) != (nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_EqualsOperator*)nova_null;
}

nova_Nova_String* nova_datastruct_Nova_HashSet_Nova_toString(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("HashSet [")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("]")))));
}

nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_lambda10(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context9* context)
{
}

nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_lambda11(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context10* context)
{
}

nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_lambda12(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context11* context)
{
}

nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_lambda13(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context12* context)
{
}

char nova_datastruct_Nova_HashSet_Nova_lambda14(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* x, Context13* context)
{
	return (x) != (nova_operators_Nova_EqualsOperator*)nova_null && nova_operators_Nova_EqualsOperator_virtual0_Nova_equals((nova_operators_Nova_EqualsOperator*)(x), exceptionData, (nova_Nova_Object*)((*context->nova_datastruct_Nova_HashSet_Nova_value)));
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_lambda81(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context80* context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, (*context->nova_datastruct_Nova_HashSet_Nova_bucketSize), (intptr_t)nova_null);
}

int nova_datastruct_Nova_HashSet_Accessorfunc_Nova_count(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_HashSet_Nova_count;
}

int nova_datastruct_Nova_HashSet_Mutatorfunc_Nova_count(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	this->nova_datastruct_Nova_HashSet_Nova_count = value;
	return value;
}

nova_datastruct_list_Nova_Iterator* nova_datastruct_Nova_HashSet_Accessorfunc_Nova_iterator(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_HashSet_Nova_iterator;
}

nova_datastruct_list_Nova_Iterator* nova_datastruct_Nova_HashSet_Mutatorfunc_Nova_iterator(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Iterator* value)
{
	this->nova_datastruct_Nova_HashSet_Nova_iterator = value;
	return (nova_datastruct_list_Nova_Iterator*)value;
}

nova_operators_Nova_EqualsOperator* nova_datastruct_Nova_HashSet_Accessorfunc_Nova_first(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_operators_Nova_EqualsOperator*)this->nova_datastruct_Nova_HashSet_Nova_first;
}

nova_operators_Nova_EqualsOperator* nova_datastruct_Nova_HashSet_Mutatorfunc_Nova_first(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* value)
{
	this->nova_datastruct_Nova_HashSet_Nova_first = value;
	return (nova_operators_Nova_EqualsOperator*)value;
}

nova_operators_Nova_EqualsOperator* nova_datastruct_Nova_HashSet_Accessorfunc_Nova_last(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_operators_Nova_EqualsOperator*)this->nova_datastruct_Nova_HashSet_Nova_last;
}

nova_operators_Nova_EqualsOperator* nova_datastruct_Nova_HashSet_Mutatorfunc_Nova_last(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* value)
{
	this->nova_datastruct_Nova_HashSet_Nova_last = value;
	return (nova_operators_Nova_EqualsOperator*)value;
}

void nova_datastruct_Nova_HashSet_Nova_super(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_Nova_HashSet_Nova_size = 0;
	this->nova_datastruct_Nova_HashSet_Nova_count = 0;
	this->nova_datastruct_Nova_HashSet_Nova_iterator = (nova_datastruct_list_Nova_Iterator*)nova_null;
	this->nova_datastruct_Nova_HashSet_Nova_first = (nova_operators_Nova_EqualsOperator*)nova_null;
	this->nova_datastruct_Nova_HashSet_Nova_last = (nova_operators_Nova_EqualsOperator*)nova_null;
	this->prv->nova_datastruct_Nova_HashSet_Nova_buckets = (nova_datastruct_list_Nova_Array*)nova_null;
	this->prv->nova_datastruct_Nova_HashSet_Nova_bucketSize = 0;
}


nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap_Nova_getBucket(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_Nova_Object* value);
void nova_datastruct_Nova_HashSetFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_HashSetFunctionMap* nova_datastruct_Nova_HashSetFunctionMap_Nova_construct(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_HashSetFunctionMap, this,);
	this->vtable = &nova_datastruct_HashSet_HashSetFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_Nova_HashSetFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_HashSetFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_HashSetFunctionMap_Nova_destroy(nova_datastruct_Nova_HashSetFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_HashSetFunctionMap_Nova_this(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSetFunctionMap_functionMapHashSetFunctionMap_Nova_construct(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int bucketCount, int bucketSize)
{
	return (nova_datastruct_Nova_HashSet*)nova_datastruct_Nova_HashSet_Nova_construct(0, exceptionData, bucketCount, bucketSize);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_toArray(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashSet_Nova_toArray(reference, exceptionData);
}

char nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_any(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_datastruct_Nova_HashSetFunctionMap_closure399_Nova_func nova_datastruct_Nova_HashSetFunctionMap_Nova_func, void* nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, void* func_context)
{
	return nova_datastruct_Nova_HashSet_0_Nova_any(reference, exceptionData, (nova_datastruct_Nova_HashSet_closure32_Nova_func)nova_datastruct_Nova_HashSetFunctionMap_Nova_func, nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, func_context);
}

char nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_all(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_datastruct_Nova_HashSetFunctionMap_closure400_Nova_func nova_datastruct_Nova_HashSetFunctionMap_Nova_func, void* nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, void* func_context, char stopOnContradiction)
{
	return nova_datastruct_Nova_HashSet_0_Nova_all(reference, exceptionData, (nova_datastruct_Nova_HashSet_closure36_Nova_func)nova_datastruct_Nova_HashSetFunctionMap_Nova_func, nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, func_context, stopOnContradiction);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_map(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_datastruct_Nova_HashSetFunctionMap_closure401_Nova_func nova_datastruct_Nova_HashSetFunctionMap_Nova_func, void* nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashSet_0_Nova_map(reference, exceptionData, (nova_datastruct_Nova_HashSet_closure40_Nova_func)nova_datastruct_Nova_HashSetFunctionMap_Nova_func, nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_filter(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_datastruct_Nova_HashSetFunctionMap_closure402_Nova_func nova_datastruct_Nova_HashSetFunctionMap_Nova_func, void* nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashSet_0_Nova_filter(reference, exceptionData, (nova_datastruct_Nova_HashSet_closure44_Nova_func)nova_datastruct_Nova_HashSetFunctionMap_Nova_func, nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, func_context);
}

nova_Nova_String* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_join(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_Nova_String* delimiter)
{
	return nova_datastruct_Nova_HashSet_Nova_join(reference, exceptionData, delimiter);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_skip(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, int num)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashSet_Nova_skip(reference, exceptionData, num);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_take(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, int num)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashSet_Nova_take(reference, exceptionData, num);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap_Nova_reverse(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashSet_Nova_reverse(reference, exceptionData);
}

nova_Nova_Object* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_firstWhere(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_datastruct_Nova_HashSetFunctionMap_closure403_Nova_func nova_datastruct_Nova_HashSetFunctionMap_Nova_func, void* nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_HashSet_0_Nova_firstWhere(reference, exceptionData, (nova_datastruct_Nova_HashSet_closure48_Nova_func)nova_datastruct_Nova_HashSetFunctionMap_Nova_func, nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_forEach(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_datastruct_Nova_HashSetFunctionMap_closure404_Nova_func nova_datastruct_Nova_HashSetFunctionMap_Nova_func, void* nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_Nova_HashSet*)nova_datastruct_Nova_HashSet_0_Nova_forEach(reference, exceptionData, (nova_datastruct_Nova_HashSet_closure52_Nova_func)nova_datastruct_Nova_HashSetFunctionMap_Nova_func, nova_datastruct_Nova_HashSetFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSetFunctionMap_functionMap_Nova_getBucket(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_Nova_Object* value)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashSet_Nova_getBucket(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(value));
}

nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSetFunctionMap_functionMap_Nova_add(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_Nova_Object* value)
{
	return nova_datastruct_Nova_HashSet_Nova_add(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(value));
}

nova_Nova_Object* nova_datastruct_Nova_HashSetFunctionMap_functionMap_Nova_get(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_Nova_Object* value)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_HashSet_Nova_get(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(value));
}

nova_Nova_Object* nova_datastruct_Nova_HashSetFunctionMap_functionMap_Nova_remove(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_Nova_Object* value)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_HashSet_Nova_remove(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(value));
}

char nova_datastruct_Nova_HashSetFunctionMap_functionMap0_Nova_contains(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference, nova_Nova_Object* value)
{
	return nova_datastruct_Nova_HashSet_0_Nova_contains(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(value));
}

nova_Nova_String* nova_datastruct_Nova_HashSetFunctionMap_functionMap_Nova_toString(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference)
{
	return nova_datastruct_Nova_HashSet_Nova_toString(reference, exceptionData);
}

void nova_datastruct_Nova_HashSetFunctionMap_Nova_super(nova_datastruct_Nova_HashSetFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_Nova_HashSetPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_HashSetPropertyMap* nova_datastruct_Nova_HashSetPropertyMap_Nova_construct(nova_datastruct_Nova_HashSetPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_HashSetPropertyMap, this,);
	this->vtable = &nova_datastruct_HashSet_HashSetPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_datastruct_Nova_HashSetPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_HashSetPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_HashSetPropertyMap_Nova_destroy(nova_datastruct_Nova_HashSetPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_HashSetPropertyMap_Nova_this(nova_datastruct_Nova_HashSetPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

int nova_datastruct_Nova_HashSetPropertyMap_functionMap_Nova_size(nova_datastruct_Nova_HashSetPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference)
{
	return reference->nova_datastruct_Nova_HashSet_Nova_size;
}

int nova_datastruct_Nova_HashSetPropertyMap_functionMap0_Nova_count(nova_datastruct_Nova_HashSetPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference)
{
	return nova_datastruct_Nova_HashSet_Accessorfunc_Nova_count(reference, exceptionData);
}

nova_datastruct_list_Nova_Iterator* nova_datastruct_Nova_HashSetPropertyMap_functionMap0_Nova_iterator(nova_datastruct_Nova_HashSetPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference)
{
	return (nova_datastruct_list_Nova_Iterator*)nova_datastruct_Nova_HashSet_Accessorfunc_Nova_iterator(reference, exceptionData);
}

nova_Nova_Object* nova_datastruct_Nova_HashSetPropertyMap_functionMap0_Nova_first(nova_datastruct_Nova_HashSetPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_HashSet_Accessorfunc_Nova_first(reference, exceptionData);
}

nova_Nova_Object* nova_datastruct_Nova_HashSetPropertyMap_functionMap0_Nova_last(nova_datastruct_Nova_HashSetPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet* reference)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_HashSet_Accessorfunc_Nova_last(reference, exceptionData);
}

void nova_datastruct_Nova_HashSetPropertyMap_Nova_super(nova_datastruct_Nova_HashSetPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

