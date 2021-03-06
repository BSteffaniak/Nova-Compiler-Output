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
#include <nova/datastruct/nova_datastruct_Nova_ImmutableHashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_Pair.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context4;
typedef struct
{
} Context5;
typedef struct
{
} Context6;
typedef struct
{
} Context7;
typedef struct
{
	/* let K key */ nova_operators_Nova_EqualsOperator** nova_datastruct_Nova_HashMap_Nova_key;
} Context8;
typedef struct
{
	/* private let Int bucketSize = 5 */ int* nova_datastruct_Nova_HashMap_Nova_bucketSize;
} Context78;
typedef struct
{
} Context79;


CCLASS_PRIVATE
(
	nova_datastruct_Nova_HashMap,
	nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMap_Nova_buckets;
	int nova_datastruct_Nova_HashMap_Nova_bucketSize;
	
)

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMap_Nova_getBucket(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key);
nova_datastruct_Nova_Pair* nova_datastruct_Nova_HashMap_Nova_getPair(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key);
nova_Nova_Object* nova_datastruct_Nova_HashMap_Nova_lambda5(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context4* context);
nova_Nova_Object* nova_datastruct_Nova_HashMap_Nova_lambda6(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context5* context);
nova_Nova_Object* nova_datastruct_Nova_HashMap_Nova_lambda7(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context6* context);
nova_Nova_Object* nova_datastruct_Nova_HashMap_Nova_lambda8(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context7* context);
char nova_datastruct_Nova_HashMap_Nova_lambda9(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* x, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMap_Nova_lambda79(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context78* context);
void nova_datastruct_Nova_HashMap_Nova_lambda80(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* pair, int _2, nova_datastruct_Nova_HashMap* _3, Context79* context);
void nova_datastruct_Nova_HashMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_HashMap* nova_datastruct_Nova_HashMap_0_Nova_construct(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, int bucketCount, int bucketSize)
{
	CCLASS_NEW(nova_datastruct_Nova_HashMap, this);
	this->vtable = &nova_datastruct_HashMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_HashMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_HashMap_0_Nova_this(this, exceptionData, bucketCount, bucketSize);
	}
	
	return this;
}

nova_datastruct_Nova_HashMap* nova_datastruct_Nova_HashMap_1_Nova_construct(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* source, int bucketCount, int bucketSize)
{
	CCLASS_NEW(nova_datastruct_Nova_HashMap, this);
	this->vtable = &nova_datastruct_HashMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_HashMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_HashMap_1_Nova_this(this, exceptionData, source, bucketCount, bucketSize);
	}
	
	return this;
}

void nova_datastruct_Nova_HashMap_Nova_destroy(nova_datastruct_Nova_HashMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->prv->nova_datastruct_Nova_HashMap_Nova_buckets, exceptionData);
	
	NOVA_FREE((*this)->prv);
	
	
	nova_datastruct_Nova_Pair_Nova_destroy(&(*this)->nova_datastruct_Nova_HashMap_Nova_first, exceptionData);
	nova_datastruct_Nova_Pair_Nova_destroy(&(*this)->nova_datastruct_Nova_HashMap_Nova_last, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_HashMap_0_Nova_this(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, int bucketCount, int bucketSize)
{
	Context78* contextArg79 = NOVA_MALLOC(sizeof(Context78));
	contextArg79->nova_datastruct_Nova_HashMap_Nova_bucketSize = &bucketSize;
	
	bucketCount = (int)(bucketCount == (intptr_t)nova_null ? 5 : bucketCount);
	bucketSize = (int)(bucketSize == (intptr_t)nova_null ? 5 : bucketSize);
	this->prv->nova_datastruct_Nova_HashMap_Nova_bucketSize = bucketSize;
	this->prv->nova_datastruct_Nova_HashMap_Nova_buckets = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, bucketCount, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&nova_datastruct_Nova_HashMap_Nova_lambda79, this, contextArg79));
}

void nova_datastruct_Nova_HashMap_1_Nova_this(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* source, int bucketCount, int bucketSize)
{
	Context79* contextArg80 = NOVA_MALLOC(sizeof(Context79));
	
	bucketCount = (int)(bucketCount == (intptr_t)nova_null ? 5 : bucketCount);
	bucketSize = (int)(bucketSize == (intptr_t)nova_null ? 5 : bucketSize);
	this->prv->nova_datastruct_Nova_HashMap_Nova_bucketSize = bucketSize;
	nova_datastruct_Nova_HashMap_0_Nova_this(this, exceptionData, bucketCount, bucketSize);
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(source), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&nova_datastruct_Nova_HashMap_Nova_lambda80, this, contextArg80);
}

nova_Nova_Object* nova_datastruct_Nova_HashMap_Nova_add(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key, nova_Nova_Object* value)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_HashMap_Nova_set(this, exceptionData, key, value);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMap_Nova_toArray(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context4* contextArg5 = NOVA_MALLOC(sizeof(Context4));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashMap_Nova_map(this, exceptionData, (nova_datastruct_Nova_HashMap_closure16_Nova_func)&nova_datastruct_Nova_HashMap_Nova_lambda5, this, contextArg5);
}

char nova_datastruct_Nova_HashMap_Nova_contains(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* value)
{
	nova_datastruct_Nova_Pair* l1_Nova_pair = (nova_datastruct_Nova_Pair*)nova_null;
	
	if ((nova_Nova_Object*)(value->nova_datastruct_Nova_Pair_Nova_key) == (nova_Nova_Object*)(nova_operators_Nova_EqualsOperator*)nova_null)
	{
		return 0;
	}
	l1_Nova_pair = nova_datastruct_Nova_HashMap_Nova_getPair(this, exceptionData, (nova_operators_Nova_EqualsOperator*)(value->nova_datastruct_Nova_Pair_Nova_key));
	return (l1_Nova_pair) != (nova_datastruct_Nova_Pair*)nova_null && (nova_Nova_Object*)l1_Nova_pair->nova_datastruct_Nova_Pair_Nova_value == (nova_Nova_Object*)value->nova_datastruct_Nova_Pair_Nova_value;
}

char nova_datastruct_Nova_HashMap_Nova_any(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap_closure8_Nova_func nova_datastruct_Nova_HashMap_Nova_func, void* nova_datastruct_Nova_HashMap_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->prv->nova_datastruct_Nova_HashMap_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_datastruct_Nova_Pair* l3_Nova_pair = (nova_datastruct_Nova_Pair*)nova_null;
		
		l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l2_Nova_bucket)), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_pair = (nova_datastruct_Nova_Pair*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			if ((l3_Nova_pair) != (nova_datastruct_Nova_Pair*)nova_null && nova_datastruct_Nova_HashMap_Nova_func(nova_datastruct_Nova_HashMap_ref_Nova_func, exceptionData, l3_Nova_pair, func_context))
			{
				return 1;
			}
		}
	}
	return 0;
}

char nova_datastruct_Nova_HashMap_Nova_all(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap_closure12_Nova_func nova_datastruct_Nova_HashMap_Nova_func, void* nova_datastruct_Nova_HashMap_ref_Nova_func, void* func_context, int stopOnContradiction)
{
	char l1_Nova_contradiction = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	stopOnContradiction = (int)(stopOnContradiction == (intptr_t)nova_null ? 1 : stopOnContradiction);
	l1_Nova_contradiction = 0;
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->prv->nova_datastruct_Nova_HashMap_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_datastruct_Nova_Pair* l3_Nova_pair = (nova_datastruct_Nova_Pair*)nova_null;
		
		l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l2_Nova_bucket)), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_pair = (nova_datastruct_Nova_Pair*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			if ((l3_Nova_pair) != (nova_datastruct_Nova_Pair*)nova_null && !nova_datastruct_Nova_HashMap_Nova_func(nova_datastruct_Nova_HashMap_ref_Nova_func, exceptionData, l3_Nova_pair, func_context))
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

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMap_Nova_map(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap_closure16_Nova_func nova_datastruct_Nova_HashMap_Nova_func, void* nova_datastruct_Nova_HashMap_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->prv->nova_datastruct_Nova_HashMap_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_datastruct_Nova_Pair* l3_Nova_pair = (nova_datastruct_Nova_Pair*)nova_null;
		
		l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l2_Nova_bucket)), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_pair = (nova_datastruct_Nova_Pair*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			if ((l3_Nova_pair) != (nova_datastruct_Nova_Pair*)nova_null)
			{
				nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)(nova_datastruct_Nova_HashMap_Nova_func(nova_datastruct_Nova_HashMap_ref_Nova_func, exceptionData, l3_Nova_pair, l1_Nova_i++, this, func_context)));
			}
		}
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMap_Nova_filter(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap_closure20_Nova_func nova_datastruct_Nova_HashMap_Nova_func, void* nova_datastruct_Nova_HashMap_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->prv->nova_datastruct_Nova_HashMap_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_datastruct_Nova_Pair* l3_Nova_pair = (nova_datastruct_Nova_Pair*)nova_null;
		
		l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l2_Nova_bucket)), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_pair = (nova_datastruct_Nova_Pair*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			if ((l3_Nova_pair) != (nova_datastruct_Nova_Pair*)nova_null && nova_datastruct_Nova_HashMap_Nova_func(nova_datastruct_Nova_HashMap_ref_Nova_func, exceptionData, l3_Nova_pair, l1_Nova_i++, this, func_context))
			{
				nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, (nova_Nova_Object*)(l3_Nova_pair));
			}
		}
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

nova_Nova_String* nova_datastruct_Nova_HashMap_Nova_join(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter)
{
	int l1_Nova_i = 0;
	nova_Nova_String* l1_Nova_output = (nova_Nova_String*)nova_null;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_i = (int)(0);
	l1_Nova_output = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->prv->nova_datastruct_Nova_HashMap_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_datastruct_Nova_Pair* l3_Nova_pair = (nova_datastruct_Nova_Pair*)nova_null;
		
		l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l2_Nova_bucket)), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_pair = (nova_datastruct_Nova_Pair*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			if ((l3_Nova_pair) != (nova_datastruct_Nova_Pair*)nova_null)
			{
				if (l1_Nova_i > 0)
				{
					l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_Nova_plus(l1_Nova_output, exceptionData, delimiter));
				}
				l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_Nova_plus(l1_Nova_output, exceptionData, nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(l3_Nova_pair), exceptionData)));
			}
		}
	}
	return l1_Nova_output;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMap_Nova_skip(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, int num)
{
	Context5* contextArg6 = NOVA_MALLOC(sizeof(Context5));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_HashMap_Nova_map(this, exceptionData, (nova_datastruct_Nova_HashMap_closure16_Nova_func)&nova_datastruct_Nova_HashMap_Nova_lambda6, this, contextArg6)), exceptionData, num);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMap_Nova_take(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, int num)
{
	Context6* contextArg7 = NOVA_MALLOC(sizeof(Context6));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_take((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_HashMap_Nova_map(this, exceptionData, (nova_datastruct_Nova_HashMap_closure16_Nova_func)&nova_datastruct_Nova_HashMap_Nova_lambda7, this, contextArg7)), exceptionData, num);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMap_Nova_reverse(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context7* contextArg8 = NOVA_MALLOC(sizeof(Context7));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_HashMap_Nova_map(this, exceptionData, (nova_datastruct_Nova_HashMap_closure16_Nova_func)&nova_datastruct_Nova_HashMap_Nova_lambda8, this, contextArg8)), exceptionData);
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_HashMap_Nova_firstWhere(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap_closure24_Nova_func nova_datastruct_Nova_HashMap_Nova_func, void* nova_datastruct_Nova_HashMap_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->prv->nova_datastruct_Nova_HashMap_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_datastruct_Nova_Pair* l3_Nova_pair = (nova_datastruct_Nova_Pair*)nova_null;
		
		l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l2_Nova_bucket)), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_pair = (nova_datastruct_Nova_Pair*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			if ((l3_Nova_pair) != (nova_datastruct_Nova_Pair*)nova_null && nova_datastruct_Nova_HashMap_Nova_func(nova_datastruct_Nova_HashMap_ref_Nova_func, exceptionData, l3_Nova_pair, func_context))
			{
				return l3_Nova_pair;
			}
		}
	}
	return (nova_datastruct_Nova_Pair*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_Nova_HashMap* nova_datastruct_Nova_HashMap_Nova_forEach(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap_closure28_Nova_func nova_datastruct_Nova_HashMap_Nova_func, void* nova_datastruct_Nova_HashMap_ref_Nova_func, void* func_context)
{
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->prv->nova_datastruct_Nova_HashMap_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_datastruct_Nova_Pair* l3_Nova_pair = (nova_datastruct_Nova_Pair*)nova_null;
		
		l2_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l2_Nova_bucket)), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
		{
			l3_Nova_pair = (nova_datastruct_Nova_Pair*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
			if ((l3_Nova_pair) != (nova_datastruct_Nova_Pair*)nova_null)
			{
				nova_datastruct_Nova_HashMap_Nova_func(nova_datastruct_Nova_HashMap_ref_Nova_func, exceptionData, l3_Nova_pair, l1_Nova_i++, this, func_context);
			}
		}
	}
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMap_Nova_getBucket(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_datastruct_Nova_HashMap_Nova_buckets), exceptionData, (int)((long_long)(nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong((nova_Nova_Object*)(key), exceptionData)) & (nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->prv->nova_datastruct_Nova_HashMap_Nova_buckets), exceptionData) - 1)));
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_HashMap_Nova_getPair(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key)
{
	Context8* contextArg9 = NOVA_MALLOC(sizeof(Context8));
	contextArg9->nova_datastruct_Nova_HashMap_Nova_key = &key;
	
	return (nova_datastruct_Nova_Pair*)nova_datastruct_list_Nova_List_virtual_Accessor_Nova_first((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_HashMap_Nova_getBucket(this, exceptionData, key)), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&nova_datastruct_Nova_HashMap_Nova_lambda9, this, contextArg9)), exceptionData);
}

nova_Nova_Object* nova_datastruct_Nova_HashMap_Nova_remove(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key)
{
	nova_datastruct_list_Nova_Array* l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_Nova_Pair* l3_Nova_pair = (nova_datastruct_Nova_Pair*)nova_null;
	
	if ((nova_operators_Nova_EqualsOperator*)(key) == (nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_EqualsOperator*)nova_null)
	{
		return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
	}
	l1_Nova_bucket = nova_datastruct_Nova_HashMap_Nova_getBucket(this, exceptionData, key);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((l1_Nova_bucket)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l3_Nova_pair = (nova_datastruct_Nova_Pair*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if ((l3_Nova_pair) != (nova_datastruct_Nova_Pair*)nova_null && nova_operators_Nova_EqualsOperator_virtual0_Nova_equals((nova_operators_Nova_EqualsOperator*)(((nova_operators_Nova_EqualsOperator*)l3_Nova_pair->nova_datastruct_Nova_Pair_Nova_key)), exceptionData, (nova_Nova_Object*)(key)))
		{
			nova_datastruct_list_Nova_Array_0_Nova_remove((nova_datastruct_list_Nova_Array*)(l1_Nova_bucket), exceptionData, l1_Nova_i);
			this->nova_datastruct_Nova_HashMap_Nova_count--;
			return (nova_Nova_Object*)l3_Nova_pair->nova_datastruct_Nova_Pair_Nova_value;
		}
		l1_Nova_i++;
	}
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

char nova_datastruct_Nova_HashMap_Nova_containsKey(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key)
{
	return (nova_operators_Nova_EqualsOperator*)(key) != (nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_EqualsOperator*)nova_null && (nova_datastruct_Nova_HashMap_Nova_getPair(this, exceptionData, key)) != (nova_datastruct_Nova_Pair*)nova_null;
}

nova_datastruct_Nova_HashMap* nova_datastruct_Nova_HashMap_Nova_clone(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_Nova_HashMap_1_Nova_construct(0, exceptionData, this, (intptr_t)nova_null, (intptr_t)nova_null);
}

nova_datastruct_Nova_ImmutableHashMap* nova_datastruct_Nova_HashMap_Nova_toImmutable(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_Nova_ImmutableHashMap_0_Nova_construct(0, exceptionData, this);
}

nova_Nova_Object* nova_datastruct_Nova_HashMap_Nova_get(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key)
{
	nova_datastruct_Nova_Pair* nova_local_0 = (nova_datastruct_Nova_Pair*)nova_null;
	
	return (nova_Nova_Object*)(nova_Nova_Object*)((nova_operators_Nova_EqualsOperator*)(key) != (nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_EqualsOperator*)nova_null ? (nova_Nova_Object*)((nova_local_0 = nova_datastruct_Nova_HashMap_Nova_getPair(this, exceptionData, key)) != (nova_datastruct_Nova_Pair*)nova_null ? (nova_local_0->nova_datastruct_Nova_Pair_Nova_value) : (nova_Nova_Object*)nova_null) : (nova_Nova_Object*)nova_null);
}

nova_Nova_Object* nova_datastruct_Nova_HashMap_Nova_set(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key, nova_Nova_Object* value)
{
	if ((nova_operators_Nova_EqualsOperator*)(key) == (nova_operators_Nova_EqualsOperator*)(nova_operators_Nova_EqualsOperator*)nova_null)
	{
		return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
	}
	nova_datastruct_Nova_HashMap_Nova_remove(this, exceptionData, key);
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(nova_datastruct_Nova_HashMap_Nova_getBucket(this, exceptionData, key)), exceptionData, (nova_Nova_Object*)(nova_datastruct_Nova_Pair_Nova_construct(0, exceptionData, (nova_Nova_Object*)(key), (nova_Nova_Object*)(value))));
	this->nova_datastruct_Nova_HashMap_Nova_count++;
	return (nova_Nova_Object*)value;
}

nova_Nova_Object* nova_datastruct_Nova_HashMap_Nova_lambda5(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context4* context)
{
}

nova_Nova_Object* nova_datastruct_Nova_HashMap_Nova_lambda6(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context5* context)
{
}

nova_Nova_Object* nova_datastruct_Nova_HashMap_Nova_lambda7(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context6* context)
{
}

nova_Nova_Object* nova_datastruct_Nova_HashMap_Nova_lambda8(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context7* context)
{
}

char nova_datastruct_Nova_HashMap_Nova_lambda9(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* x, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context)
{
	return (x) != (nova_datastruct_Nova_Pair*)nova_null && nova_operators_Nova_EqualsOperator_virtual0_Nova_equals((nova_operators_Nova_EqualsOperator*)(x->nova_datastruct_Nova_Pair_Nova_key), exceptionData, (nova_Nova_Object*)((*context->nova_datastruct_Nova_HashMap_Nova_key)));
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMap_Nova_lambda79(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context78* context)
{
	return nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, (*context->nova_datastruct_Nova_HashMap_Nova_bucketSize), (intptr_t)nova_null);
}

void nova_datastruct_Nova_HashMap_Nova_lambda80(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* pair, int _2, nova_datastruct_Nova_HashMap* _3, Context79* context)
{
	nova_datastruct_Nova_HashMap_Nova_add(this, exceptionData, (nova_operators_Nova_EqualsOperator*)(pair->nova_datastruct_Nova_Pair_Nova_key), (nova_Nova_Object*)(pair->nova_datastruct_Nova_Pair_Nova_value));
}

nova_datastruct_list_Nova_Iterator* nova_datastruct_Nova_HashMap_Accessorfunc_Nova_iterator(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_HashMap_Nova_iterator;
}

nova_datastruct_list_Nova_Iterator* nova_datastruct_Nova_HashMap_Mutatorfunc_Nova_iterator(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Iterator* value)
{
	this->nova_datastruct_Nova_HashMap_Nova_iterator = value;
	return (nova_datastruct_list_Nova_Iterator*)value;
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_HashMap_Accessorfunc_Nova_first(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_HashMap_Nova_first;
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_HashMap_Mutatorfunc_Nova_first(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* value)
{
	this->nova_datastruct_Nova_HashMap_Nova_first = value;
	return value;
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_HashMap_Accessorfunc_Nova_last(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_HashMap_Nova_last;
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_HashMap_Mutatorfunc_Nova_last(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* value)
{
	this->nova_datastruct_Nova_HashMap_Nova_last = value;
	return value;
}

void nova_datastruct_Nova_HashMap_Nova_super(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_Nova_HashMap_Nova_count = 0;
	this->nova_datastruct_Nova_HashMap_Nova_iterator = (nova_datastruct_list_Nova_Iterator*)nova_null;
	this->nova_datastruct_Nova_HashMap_Nova_first = (nova_datastruct_Nova_Pair*)nova_null;
	this->nova_datastruct_Nova_HashMap_Nova_last = (nova_datastruct_Nova_Pair*)nova_null;
	this->prv->nova_datastruct_Nova_HashMap_Nova_buckets = (nova_datastruct_list_Nova_Array*)nova_null;
	this->prv->nova_datastruct_Nova_HashMap_Nova_bucketSize = 0;
}

nova_Nova_Object* nova_datastruct_Nova_HashMap_virtual_Nova_add(nova_datastruct_Nova_HashMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_operators_Nova_EqualsOperator* key, nova_Nova_Object* value)
{
	return this->vtable->nova_datastruct_Nova_HashMap_virtual_Nova_add((nova_datastruct_Nova_HashMap*)(this), exceptionData, key, value);
}


nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_getBucket(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_Nova_Object* key);
nova_datastruct_Nova_Pair* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_getPair(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_Nova_Object* key);
void nova_datastruct_Nova_HashMapFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_HashMapFunctionMap* nova_datastruct_Nova_HashMapFunctionMap_Nova_construct(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_HashMapFunctionMap, this,);
	this->vtable = &nova_datastruct_HashMap_HashMapFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_Nova_HashMapFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_HashMapFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_HashMapFunctionMap_Nova_destroy(nova_datastruct_Nova_HashMapFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_HashMapFunctionMap_Nova_this(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_Nova_HashMap* nova_datastruct_Nova_HashMapFunctionMap_functionMapHashMapFunctionMap0_Nova_construct(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int bucketCount, int bucketSize)
{
	return (nova_datastruct_Nova_HashMap*)nova_datastruct_Nova_HashMap_0_Nova_construct(0, exceptionData, bucketCount, bucketSize);
}

nova_datastruct_Nova_HashMap* nova_datastruct_Nova_HashMapFunctionMap_functionMapHashMapFunctionMap1_Nova_construct(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* source, int bucketCount, int bucketSize)
{
	return (nova_datastruct_Nova_HashMap*)nova_datastruct_Nova_HashMap_1_Nova_construct(0, exceptionData, source, bucketCount, bucketSize);
}

nova_Nova_Object* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_add(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_Nova_Object* key, nova_Nova_Object* value)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_HashMap_Nova_add(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(key), value);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_toArray(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashMap_Nova_toArray(reference, exceptionData);
}

char nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_contains(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_datastruct_Nova_Pair* value)
{
	return nova_datastruct_Nova_HashMap_Nova_contains(reference, exceptionData, value);
}

char nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_any(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_datastruct_Nova_HashMapFunctionMap_closure393_Nova_func nova_datastruct_Nova_HashMapFunctionMap_Nova_func, void* nova_datastruct_Nova_HashMapFunctionMap_ref_Nova_func, void* func_context)
{
	return nova_datastruct_Nova_HashMap_Nova_any(reference, exceptionData, (nova_datastruct_Nova_HashMap_closure8_Nova_func)nova_datastruct_Nova_HashMapFunctionMap_Nova_func, nova_datastruct_Nova_HashMapFunctionMap_ref_Nova_func, func_context);
}

char nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_all(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_datastruct_Nova_HashMapFunctionMap_closure394_Nova_func nova_datastruct_Nova_HashMapFunctionMap_Nova_func, void* nova_datastruct_Nova_HashMapFunctionMap_ref_Nova_func, void* func_context, char stopOnContradiction)
{
	return nova_datastruct_Nova_HashMap_Nova_all(reference, exceptionData, (nova_datastruct_Nova_HashMap_closure12_Nova_func)nova_datastruct_Nova_HashMapFunctionMap_Nova_func, nova_datastruct_Nova_HashMapFunctionMap_ref_Nova_func, func_context, stopOnContradiction);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_map(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_datastruct_Nova_HashMapFunctionMap_closure395_Nova_func nova_datastruct_Nova_HashMapFunctionMap_Nova_func, void* nova_datastruct_Nova_HashMapFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashMap_Nova_map(reference, exceptionData, (nova_datastruct_Nova_HashMap_closure16_Nova_func)nova_datastruct_Nova_HashMapFunctionMap_Nova_func, nova_datastruct_Nova_HashMapFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_filter(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_datastruct_Nova_HashMapFunctionMap_closure396_Nova_func nova_datastruct_Nova_HashMapFunctionMap_Nova_func, void* nova_datastruct_Nova_HashMapFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashMap_Nova_filter(reference, exceptionData, (nova_datastruct_Nova_HashMap_closure20_Nova_func)nova_datastruct_Nova_HashMapFunctionMap_Nova_func, nova_datastruct_Nova_HashMapFunctionMap_ref_Nova_func, func_context);
}

nova_Nova_String* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_join(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_Nova_String* delimiter)
{
	return nova_datastruct_Nova_HashMap_Nova_join(reference, exceptionData, delimiter);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_skip(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, int num)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashMap_Nova_skip(reference, exceptionData, num);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_take(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, int num)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashMap_Nova_take(reference, exceptionData, num);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_reverse(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashMap_Nova_reverse(reference, exceptionData);
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_firstWhere(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_datastruct_Nova_HashMapFunctionMap_closure397_Nova_func nova_datastruct_Nova_HashMapFunctionMap_Nova_func, void* nova_datastruct_Nova_HashMapFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_Nova_Pair*)nova_datastruct_Nova_HashMap_Nova_firstWhere(reference, exceptionData, (nova_datastruct_Nova_HashMap_closure24_Nova_func)nova_datastruct_Nova_HashMapFunctionMap_Nova_func, nova_datastruct_Nova_HashMapFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_Nova_HashMap* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_forEach(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_datastruct_Nova_HashMapFunctionMap_closure398_Nova_func nova_datastruct_Nova_HashMapFunctionMap_Nova_func, void* nova_datastruct_Nova_HashMapFunctionMap_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_Nova_HashMap*)nova_datastruct_Nova_HashMap_Nova_forEach(reference, exceptionData, (nova_datastruct_Nova_HashMap_closure28_Nova_func)nova_datastruct_Nova_HashMapFunctionMap_Nova_func, nova_datastruct_Nova_HashMapFunctionMap_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_getBucket(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_Nova_Object* key)
{
	return nova_datastruct_Nova_HashMap_Nova_getBucket(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(key));
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_getPair(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_Nova_Object* key)
{
	return nova_datastruct_Nova_HashMap_Nova_getPair(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(key));
}

nova_Nova_Object* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_remove(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_Nova_Object* key)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_HashMap_Nova_remove(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(key));
}

char nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_containsKey(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_Nova_Object* key)
{
	return nova_datastruct_Nova_HashMap_Nova_containsKey(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(key));
}

nova_datastruct_Nova_HashMap* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_clone(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference)
{
	return nova_datastruct_Nova_HashMap_Nova_clone(reference, exceptionData);
}

nova_datastruct_Nova_ImmutableHashMap* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_toImmutable(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference)
{
	return nova_datastruct_Nova_HashMap_Nova_toImmutable(reference, exceptionData);
}

nova_Nova_Object* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_get(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_Nova_Object* key)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_HashMap_Nova_get(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(key));
}

nova_Nova_Object* nova_datastruct_Nova_HashMapFunctionMap_functionMap_Nova_set(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_Nova_Object* key, nova_Nova_Object* value)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_HashMap_Nova_set(reference, exceptionData, (nova_operators_Nova_EqualsOperator*)(key), value);
}

void nova_datastruct_Nova_HashMapFunctionMap_Nova_super(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_Object* nova_datastruct_Nova_HashMapFunctionMap_virtualfunctionMap_Nova_add(nova_datastruct_Nova_HashMapFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference, nova_Nova_Object* key, nova_Nova_Object* value)
{
	return this->vtable->nova_datastruct_Nova_HashMapFunctionMap_virtualfunctionMap_Nova_add(this, exceptionData, reference, key, value);
}

void nova_datastruct_Nova_HashMapPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_HashMapPropertyMap* nova_datastruct_Nova_HashMapPropertyMap_Nova_construct(nova_datastruct_Nova_HashMapPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_HashMapPropertyMap, this,);
	this->vtable = &nova_datastruct_HashMap_HashMapPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_datastruct_Nova_HashMapPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_HashMapPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_HashMapPropertyMap_Nova_destroy(nova_datastruct_Nova_HashMapPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_HashMapPropertyMap_Nova_this(nova_datastruct_Nova_HashMapPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

int nova_datastruct_Nova_HashMapPropertyMap_functionMap_Nova_count(nova_datastruct_Nova_HashMapPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference)
{
	return reference->nova_datastruct_Nova_HashMap_Nova_count;
}

nova_datastruct_list_Nova_Iterator* nova_datastruct_Nova_HashMapPropertyMap_functionMap_Nova_iterator(nova_datastruct_Nova_HashMapPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference)
{
	return (nova_datastruct_list_Nova_Iterator*)nova_datastruct_Nova_HashMap_Accessorfunc_Nova_iterator(reference, exceptionData);
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_HashMapPropertyMap_functionMap_Nova_first(nova_datastruct_Nova_HashMapPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference)
{
	return (nova_datastruct_Nova_Pair*)nova_datastruct_Nova_HashMap_Accessorfunc_Nova_first(reference, exceptionData);
}

nova_datastruct_Nova_Pair* nova_datastruct_Nova_HashMapPropertyMap_functionMap_Nova_last(nova_datastruct_Nova_HashMapPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashMap* reference)
{
	return (nova_datastruct_Nova_Pair*)nova_datastruct_Nova_HashMap_Accessorfunc_Nova_last(reference, exceptionData);
}

void nova_datastruct_Nova_HashMapPropertyMap_Nova_super(nova_datastruct_Nova_HashMapPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

