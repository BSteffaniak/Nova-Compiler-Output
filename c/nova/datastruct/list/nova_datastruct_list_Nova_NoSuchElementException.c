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
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/NativeObject.h>



void nova_datastruct_list_Nova_NoSuchElementException_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_NoSuchElementException* nova_datastruct_list_Nova_NoSuchElementException_Nova_construct(nova_datastruct_list_Nova_NoSuchElementException* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message)
{
	CCLASS_NEW(nova_datastruct_list_Nova_NoSuchElementException, this,);
	this->vtable = &nova_datastruct_list_NoSuchElementException_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_exception_Nova_Exception_Nova_super((nova_exception_Nova_Exception*)this, exceptionData);
	nova_datastruct_list_Nova_NoSuchElementException_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_NoSuchElementException_Nova_this(this, exceptionData, message);
	}
	
	return this;
}

void nova_datastruct_list_Nova_NoSuchElementException_Nova_destroy(nova_datastruct_list_Nova_NoSuchElementException** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_NoSuchElementException_Nova_this(nova_datastruct_list_Nova_NoSuchElementException* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("No such element")) : (nova_Nova_Object*)message);
	nova_exception_Nova_Exception_Nova_this((nova_exception_Nova_Exception*)(this), exceptionData, message);
}

void nova_datastruct_list_Nova_NoSuchElementException_Nova_super(nova_datastruct_list_Nova_NoSuchElementException* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap* nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_Nova_construct(nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap, this,);
	this->vtable = &nova_datastruct_list_NoSuchElementException_NoSuchElementExceptionFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_exception_Nova_ExceptionFunctionMap_Nova_super((nova_exception_Nova_ExceptionFunctionMap*)this, exceptionData);
	nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_Nova_destroy(nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_Nova_this(nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_NoSuchElementException* nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_functionMapNoSuchElementExceptionFunctionMap_Nova_construct(nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message)
{
	return nova_datastruct_list_Nova_NoSuchElementException_Nova_construct(0, exceptionData, message);
}

void nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_Nova_super(nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap* nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap_Nova_construct(nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap, this,);
	this->vtable = &nova_datastruct_list_NoSuchElementException_NoSuchElementExceptionPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_exception_Nova_ExceptionPropertyMap_Nova_super((nova_exception_Nova_ExceptionPropertyMap*)this, exceptionData);
	nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap_Nova_destroy(nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap_Nova_this(nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap_Nova_super(nova_datastruct_list_Nova_NoSuchElementExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

