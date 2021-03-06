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
#include <nova/meta/nova_meta_Nova_Type.h>
#include <nova/NativeObject.h>



void nova_meta_Nova_GenericArgument_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_meta_Nova_GenericArgument* nova_meta_Nova_GenericArgument_Nova_construct(nova_meta_Nova_GenericArgument* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Type* value)
{
	CCLASS_NEW(nova_meta_Nova_GenericArgument, this,);
	this->vtable = &nova_meta_GenericArgument_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_GenericArgument_Nova_super(this, exceptionData);
	
	{
		nova_meta_Nova_GenericArgument_Nova_this(this, exceptionData, value);
	}
	
	return this;
}

void nova_meta_Nova_GenericArgument_Nova_destroy(nova_meta_Nova_GenericArgument** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_meta_Nova_Type_Nova_destroy(&(*this)->nova_meta_Nova_GenericArgument_Nova_value, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_meta_Nova_GenericArgument_Nova_this(nova_meta_Nova_GenericArgument* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Type* value)
{
	this->nova_meta_Nova_GenericArgument_Nova_value = value;
}

void nova_meta_Nova_GenericArgument_Nova_super(nova_meta_Nova_GenericArgument* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_meta_Nova_GenericArgument_Nova_value = (nova_meta_Nova_Type*)nova_null;
}

void nova_meta_Nova_GenericArgumentFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_meta_Nova_GenericArgumentFunctionMap* nova_meta_Nova_GenericArgumentFunctionMap_Nova_construct(nova_meta_Nova_GenericArgumentFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_meta_Nova_GenericArgumentFunctionMap, this,);
	this->vtable = &nova_meta_GenericArgument_GenericArgumentFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_meta_Nova_GenericArgumentFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_meta_Nova_GenericArgumentFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_meta_Nova_GenericArgumentFunctionMap_Nova_destroy(nova_meta_Nova_GenericArgumentFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_meta_Nova_GenericArgumentFunctionMap_Nova_this(nova_meta_Nova_GenericArgumentFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_meta_Nova_GenericArgument* nova_meta_Nova_GenericArgumentFunctionMap_functionMapGenericArgumentFunctionMap_Nova_construct(nova_meta_Nova_GenericArgumentFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Type* value)
{
	return nova_meta_Nova_GenericArgument_Nova_construct(0, exceptionData, value);
}

void nova_meta_Nova_GenericArgumentFunctionMap_Nova_super(nova_meta_Nova_GenericArgumentFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_meta_Nova_GenericArgumentPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_meta_Nova_GenericArgumentPropertyMap* nova_meta_Nova_GenericArgumentPropertyMap_Nova_construct(nova_meta_Nova_GenericArgumentPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_meta_Nova_GenericArgumentPropertyMap, this,);
	this->vtable = &nova_meta_GenericArgument_GenericArgumentPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_meta_Nova_GenericArgumentPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_meta_Nova_GenericArgumentPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_meta_Nova_GenericArgumentPropertyMap_Nova_destroy(nova_meta_Nova_GenericArgumentPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_meta_Nova_GenericArgumentPropertyMap_Nova_this(nova_meta_Nova_GenericArgumentPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_meta_Nova_Type* nova_meta_Nova_GenericArgumentPropertyMap_functionMap_Nova_value(nova_meta_Nova_GenericArgumentPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_GenericArgument* reference)
{
	return reference->nova_meta_Nova_GenericArgument_Nova_value;
}

void nova_meta_Nova_GenericArgumentPropertyMap_Nova_super(nova_meta_Nova_GenericArgumentPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

