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
#include <nova/network/NativeSocket.h>
#include <nova/io/nova_io_Nova_InputStream.h>
#include <nova/network/nova_network_Nova_ConnectionSocket.h>
#include <nova/io/nova_io_Nova_InputStream.h>
#include <nova/io/nova_io_Nova_InputStream.h>
#include <nova/NativeObject.h>



CCLASS_PRIVATE
(
	nova_network_Nova_NetworkInputStream,
	nova_network_Nova_ConnectionSocket* nova_network_Nova_NetworkInputStream_Nova_socket;
	
)
void nova_network_Nova_NetworkInputStream_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_network_Nova_NetworkInputStream* nova_network_Nova_NetworkInputStream_Nova_construct(nova_network_Nova_NetworkInputStream* this, nova_exception_Nova_ExceptionData* exceptionData, nova_network_Nova_ConnectionSocket* socket)
{
	CCLASS_NEW(nova_network_Nova_NetworkInputStream, this);
	this->vtable = &nova_network_NetworkInputStream_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_network_Nova_NetworkInputStream_Nova_super(this, exceptionData);
	
	{
		nova_network_Nova_NetworkInputStream_Nova_this(this, exceptionData, socket);
	}
	
	return this;
}

void nova_network_Nova_NetworkInputStream_Nova_destroy(nova_network_Nova_NetworkInputStream** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_network_Nova_ConnectionSocket_Nova_destroy(&(*this)->prv->nova_network_Nova_NetworkInputStream_Nova_socket, exceptionData);
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void nova_network_Nova_NetworkInputStream_Nova_this(nova_network_Nova_NetworkInputStream* this, nova_exception_Nova_ExceptionData* exceptionData, nova_network_Nova_ConnectionSocket* socket)
{
	this->prv->nova_network_Nova_NetworkInputStream_Nova_socket = socket;
}

nova_Nova_String* nova_network_Nova_NetworkInputStream_Nova_readString(nova_network_Nova_NetworkInputStream* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_network_Nova_ConnectionSocket_0_Nova_readString(this->prv->nova_network_Nova_NetworkInputStream_Nova_socket, exceptionData);
}

nova_datastruct_list_Nova_Array* nova_network_Nova_NetworkInputStream_Nova_readBytes(nova_network_Nova_NetworkInputStream* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)(nova_Nova_Object*)nova_null;
}

void nova_network_Nova_NetworkInputStream_Nova_super(nova_network_Nova_NetworkInputStream* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->nova_network_Nova_NetworkInputStream_Nova_socket = (nova_network_Nova_ConnectionSocket*)nova_null;
}

void nova_network_Nova_NetworkInputStreamFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_network_Nova_NetworkInputStreamFunctionMap* nova_network_Nova_NetworkInputStreamFunctionMap_Nova_construct(nova_network_Nova_NetworkInputStreamFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_network_Nova_NetworkInputStreamFunctionMap, this,);
	this->vtable = &nova_network_NetworkInputStream_NetworkInputStreamFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_network_Nova_NetworkInputStreamFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_network_Nova_NetworkInputStreamFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_network_Nova_NetworkInputStreamFunctionMap_Nova_destroy(nova_network_Nova_NetworkInputStreamFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_network_Nova_NetworkInputStreamFunctionMap_Nova_this(nova_network_Nova_NetworkInputStreamFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_network_Nova_NetworkInputStream* nova_network_Nova_NetworkInputStreamFunctionMap_functionMapNetworkInputStreamFunctionMap_Nova_construct(nova_network_Nova_NetworkInputStreamFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_network_Nova_ConnectionSocket* socket)
{
	return nova_network_Nova_NetworkInputStream_Nova_construct(0, exceptionData, socket);
}

nova_Nova_String* nova_network_Nova_NetworkInputStreamFunctionMap_functionMap_Nova_readString(nova_network_Nova_NetworkInputStreamFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_network_Nova_NetworkInputStream* reference)
{
	return nova_network_Nova_NetworkInputStream_Nova_readString(reference, exceptionData);
}

nova_datastruct_list_Nova_Array* nova_network_Nova_NetworkInputStreamFunctionMap_functionMap_Nova_readBytes(nova_network_Nova_NetworkInputStreamFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_network_Nova_NetworkInputStream* reference)
{
	return (nova_datastruct_list_Nova_Array*)nova_network_Nova_NetworkInputStream_Nova_readBytes(reference, exceptionData);
}

void nova_network_Nova_NetworkInputStreamFunctionMap_Nova_super(nova_network_Nova_NetworkInputStreamFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_network_Nova_NetworkInputStreamPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_network_Nova_NetworkInputStreamPropertyMap* nova_network_Nova_NetworkInputStreamPropertyMap_Nova_construct(nova_network_Nova_NetworkInputStreamPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_network_Nova_NetworkInputStreamPropertyMap, this,);
	this->vtable = &nova_network_NetworkInputStream_NetworkInputStreamPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_network_Nova_NetworkInputStreamPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_network_Nova_NetworkInputStreamPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_network_Nova_NetworkInputStreamPropertyMap_Nova_destroy(nova_network_Nova_NetworkInputStreamPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_network_Nova_NetworkInputStreamPropertyMap_Nova_this(nova_network_Nova_NetworkInputStreamPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_network_Nova_NetworkInputStreamPropertyMap_Nova_super(nova_network_Nova_NetworkInputStreamPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

