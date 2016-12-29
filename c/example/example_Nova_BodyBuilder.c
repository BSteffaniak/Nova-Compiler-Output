#include <precompiled.h>
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
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <example/example_Nova_Person.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void example_Nova_BodyBuilder_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_BodyBuilder* example_Nova_BodyBuilder_Nova_construct(example_Nova_BodyBuilder* this, nova_exception_Nova_ExceptionData* exceptionData, int weightClass, nova_Nova_String* name)
{
	CCLASS_NEW(example_Nova_BodyBuilder, this,);
	this->vtable = &example_BodyBuilder_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_Person_Nova_super((example_Nova_Person*)this, exceptionData);
	example_Nova_BodyBuilder_Nova_super(this, exceptionData);
	
	{
		example_Nova_BodyBuilder_Nova_this(this, exceptionData, weightClass, name);
	}
	
	return this;
}

void example_Nova_BodyBuilder_Nova_destroy(example_Nova_BodyBuilder** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE(*this);
}

void example_Nova_BodyBuilder_Nova_this(example_Nova_BodyBuilder* this, nova_exception_Nova_ExceptionData* exceptionData, int weightClass, nova_Nova_String* name)
{
	this->example_Nova_Person_Nova_age = (int)(5);
	this->example_Nova_BodyBuilder_Nova_weightClass = weightClass;
	this->example_Nova_Person_Nova_name = name;
}

void example_Nova_BodyBuilder_Nova_sayHello(example_Nova_BodyBuilder* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Hello from ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(this->example_Nova_Person_Nova_name, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" the BodyBuilder")))))));
}

void example_Nova_BodyBuilder_Nova_super(example_Nova_BodyBuilder* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->example_Nova_BodyBuilder_Nova_weightClass = 0;
}

