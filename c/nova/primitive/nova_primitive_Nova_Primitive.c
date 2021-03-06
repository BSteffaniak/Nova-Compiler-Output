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
#include <nova/NativeObject.h>



void nova_primitive_Nova_Primitive_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_primitive_Nova_Primitive* nova_primitive_Nova_Primitive_Nova_construct(nova_primitive_Nova_Primitive* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_primitive_Nova_Primitive, this,);
	this->vtable = &nova_primitive_Primitive_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_primitive_Nova_Primitive_Nova_super(this, exceptionData);
	
	{
		nova_primitive_Nova_Primitive_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_primitive_Nova_Primitive_Nova_destroy(nova_primitive_Nova_Primitive** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_primitive_Nova_Primitive_Nova_this(nova_primitive_Nova_Primitive* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_primitive_Nova_Primitive_Nova_super(nova_primitive_Nova_Primitive* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_primitive_Nova_PrimitiveFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_primitive_Nova_PrimitiveFunctionMap* nova_primitive_Nova_PrimitiveFunctionMap_Nova_construct(nova_primitive_Nova_PrimitiveFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_primitive_Nova_PrimitiveFunctionMap, this,);
	this->vtable = &nova_primitive_Primitive_PrimitiveFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_primitive_Nova_PrimitiveFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_primitive_Nova_PrimitiveFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_primitive_Nova_PrimitiveFunctionMap_Nova_destroy(nova_primitive_Nova_PrimitiveFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_primitive_Nova_PrimitiveFunctionMap_Nova_this(nova_primitive_Nova_PrimitiveFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_primitive_Nova_Primitive* nova_primitive_Nova_PrimitiveFunctionMap_functionMapPrimitiveFunctionMap_Nova_construct(nova_primitive_Nova_PrimitiveFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_primitive_Nova_Primitive_Nova_construct(0, exceptionData);
}

void nova_primitive_Nova_PrimitiveFunctionMap_Nova_super(nova_primitive_Nova_PrimitiveFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_primitive_Nova_Primitive* nova_primitive_Nova_PrimitiveFunctionMap_virtualfunctionMapPrimitive_Nova_construct(nova_primitive_Nova_PrimitiveFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->nova_primitive_Nova_PrimitiveFunctionMap_virtualfunctionMapPrimitive_Nova_construct(this, exceptionData);
}

void nova_primitive_Nova_PrimitivePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_primitive_Nova_PrimitivePropertyMap* nova_primitive_Nova_PrimitivePropertyMap_Nova_construct(nova_primitive_Nova_PrimitivePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_primitive_Nova_PrimitivePropertyMap, this,);
	this->vtable = &nova_primitive_Primitive_PrimitivePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_primitive_Nova_PrimitivePropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_primitive_Nova_PrimitivePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_primitive_Nova_PrimitivePropertyMap_Nova_destroy(nova_primitive_Nova_PrimitivePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_primitive_Nova_PrimitivePropertyMap_Nova_this(nova_primitive_Nova_PrimitivePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_primitive_Nova_PrimitivePropertyMap_Nova_super(nova_primitive_Nova_PrimitivePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

