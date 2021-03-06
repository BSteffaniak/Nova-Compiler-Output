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
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
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



CCLASS_PRIVATE
(
	nova_web_js_json_Nova_Json,
	nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashMap_Nova_buckets;
	int nova_datastruct_Nova_HashMap_Nova_bucketSize;
	
)
void nova_web_js_json_Nova_Json_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_js_json_Nova_Json* nova_web_js_json_Nova_Json_Nova_construct(nova_web_js_json_Nova_Json* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_web_js_json_Nova_Json, this);
	this->vtable = &nova_web_js_json_Json_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_HashMap_Nova_super((nova_datastruct_Nova_HashMap*)this, exceptionData);
	nova_web_js_json_Nova_Json_Nova_super(this, exceptionData);
	
	{
		nova_web_js_json_Nova_Json_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_web_js_json_Nova_Json_Nova_destroy(nova_web_js_json_Nova_Json** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

nova_Nova_String* nova_web_js_json_Nova_Json_Nova_toString(nova_web_js_json_Nova_Json* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("{}"));
}

void nova_web_js_json_Nova_Json_Nova_this(nova_web_js_json_Nova_Json* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_web_js_json_Nova_Json_Nova_super(nova_web_js_json_Nova_Json* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_web_js_json_Nova_JsonFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_js_json_Nova_JsonFunctionMap* nova_web_js_json_Nova_JsonFunctionMap_Nova_construct(nova_web_js_json_Nova_JsonFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_web_js_json_Nova_JsonFunctionMap, this,);
	this->vtable = &nova_web_js_json_Json_JsonFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_Nova_HashMapFunctionMap_Nova_super((nova_datastruct_Nova_HashMapFunctionMap*)this, exceptionData);
	nova_web_js_json_Nova_JsonFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_web_js_json_Nova_JsonFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_web_js_json_Nova_JsonFunctionMap_Nova_destroy(nova_web_js_json_Nova_JsonFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_web_js_json_Nova_JsonFunctionMap_Nova_this(nova_web_js_json_Nova_JsonFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_web_js_json_Nova_Json* nova_web_js_json_Nova_JsonFunctionMap_functionMapJsonFunctionMap_Nova_construct(nova_web_js_json_Nova_JsonFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_web_js_json_Nova_Json_Nova_construct(0, exceptionData);
}

nova_Nova_String* nova_web_js_json_Nova_JsonFunctionMap_functionMap_Nova_toString(nova_web_js_json_Nova_JsonFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_js_json_Nova_Json* reference)
{
	return nova_web_js_json_Nova_Json_Nova_toString(reference, exceptionData);
}

void nova_web_js_json_Nova_JsonFunctionMap_Nova_super(nova_web_js_json_Nova_JsonFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_web_js_json_Nova_JsonPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_js_json_Nova_JsonPropertyMap* nova_web_js_json_Nova_JsonPropertyMap_Nova_construct(nova_web_js_json_Nova_JsonPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_web_js_json_Nova_JsonPropertyMap, this,);
	this->vtable = &nova_web_js_json_Json_JsonPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_datastruct_Nova_HashMapPropertyMap_Nova_super((nova_datastruct_Nova_HashMapPropertyMap*)this, exceptionData);
	nova_web_js_json_Nova_JsonPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_web_js_json_Nova_JsonPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_web_js_json_Nova_JsonPropertyMap_Nova_destroy(nova_web_js_json_Nova_JsonPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_web_js_json_Nova_JsonPropertyMap_Nova_this(nova_web_js_json_Nova_JsonPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_web_js_json_Nova_JsonPropertyMap_Nova_super(nova_web_js_json_Nova_JsonPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

