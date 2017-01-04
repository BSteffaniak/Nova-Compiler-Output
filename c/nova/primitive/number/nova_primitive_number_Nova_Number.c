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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/primitive/nova_primitive_Nova_Primitive.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void nova_primitive_number_Nova_Number_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_primitive_number_Nova_Number* nova_primitive_number_Nova_Number_Nova_construct(nova_primitive_number_Nova_Number* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_primitive_number_Nova_Number, this,);
	this->vtable = &nova_primitive_number_Number_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_primitive_Nova_Primitive_Nova_super((nova_primitive_Nova_Primitive*)this, exceptionData);
	nova_primitive_number_Nova_Number_Nova_super(this, exceptionData);
	
	{
		nova_primitive_number_Nova_Number_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_primitive_number_Nova_Number_Nova_destroy(nova_primitive_number_Nova_Number** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

char nova_primitive_number_Nova_Number_static_Nova_numDigits(nova_primitive_number_Nova_Number* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_number_Nova_Number* number)
{
	return -1;
}

void nova_primitive_number_Nova_Number_Nova_this(nova_primitive_number_Nova_Number* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_primitive_number_Nova_Number_Nova_super(nova_primitive_number_Nova_Number* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char nova_primitive_number_Nova_Number_virtual_static_Nova_numDigits(nova_primitive_number_Nova_Number* this, nova_exception_Nova_ExceptionData* exceptionData, nova_primitive_number_Nova_Number* number)
{
	return this->vtable->nova_primitive_number_Nova_Number_virtual_static_Nova_numDigits(0, exceptionData, number);
}

void nova_primitive_number_Nova_NumberFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_primitive_number_Nova_NumberFunctionMap* nova_primitive_number_Nova_NumberFunctionMap_Nova_construct(nova_primitive_number_Nova_NumberFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_primitive_number_Nova_NumberFunctionMap, this,);
	this->vtable = &nova_primitive_number_Number_NumberFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_primitive_number_Nova_NumberFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_primitive_number_Nova_NumberFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_primitive_number_Nova_NumberFunctionMap_Nova_destroy(nova_primitive_number_Nova_NumberFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_primitive_number_Nova_NumberFunctionMap_Nova_this(nova_primitive_number_Nova_NumberFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_primitive_number_Nova_NumberFunctionMap_Nova_super(nova_primitive_number_Nova_NumberFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

