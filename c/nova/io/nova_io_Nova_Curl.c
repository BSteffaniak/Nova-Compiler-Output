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
#include <nova/io/NativeCurl.h>
#include <nova/NativeObject.h>



void nova_io_Nova_Curl_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_io_Nova_Curl* nova_io_Nova_Curl_Nova_construct(nova_io_Nova_Curl* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_io_Nova_Curl, this,);
	this->vtable = &nova_io_Curl_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_io_Nova_Curl_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_Curl_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_io_Nova_Curl_Nova_destroy(nova_io_Nova_Curl** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

nova_Nova_String* nova_io_Nova_Curl_static_Nova_get(nova_io_Nova_Curl* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* url)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, curl_get_string((char*)(url->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data)));
}

void nova_io_Nova_Curl_Nova_this(nova_io_Nova_Curl* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_io_Nova_Curl_Nova_super(nova_io_Nova_Curl* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_io_Nova_CurlFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_io_Nova_CurlFunctionMap* nova_io_Nova_CurlFunctionMap_Nova_construct(nova_io_Nova_CurlFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_io_Nova_CurlFunctionMap, this,);
	this->vtable = &nova_io_Curl_CurlFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_io_Nova_CurlFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_CurlFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_io_Nova_CurlFunctionMap_Nova_destroy(nova_io_Nova_CurlFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_io_Nova_CurlFunctionMap_Nova_this(nova_io_Nova_CurlFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_io_Nova_Curl* nova_io_Nova_CurlFunctionMap_functionMapCurlFunctionMap_Nova_construct(nova_io_Nova_CurlFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_io_Nova_Curl_Nova_construct(0, exceptionData);
}

nova_Nova_String* nova_io_Nova_CurlFunctionMap_functionMap_static_Nova_get(nova_io_Nova_CurlFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* url)
{
	return nova_io_Nova_Curl_static_Nova_get(0, exceptionData, url);
}

void nova_io_Nova_CurlFunctionMap_Nova_super(nova_io_Nova_CurlFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_io_Nova_CurlPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_io_Nova_CurlPropertyMap* nova_io_Nova_CurlPropertyMap_Nova_construct(nova_io_Nova_CurlPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_io_Nova_CurlPropertyMap, this,);
	this->vtable = &nova_io_Curl_CurlPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_io_Nova_CurlPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_CurlPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_io_Nova_CurlPropertyMap_Nova_destroy(nova_io_Nova_CurlPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_io_Nova_CurlPropertyMap_Nova_this(nova_io_Nova_CurlPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_io_Nova_CurlPropertyMap_Nova_super(nova_io_Nova_CurlPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

