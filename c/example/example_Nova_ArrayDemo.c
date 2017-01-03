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
#include <example/example_Nova_Animal.h>
#include <example/example_Nova_Dog.h>
#include <example/example_Nova_Spider.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void example_Nova_ArrayDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_ArrayDemo* example_Nova_ArrayDemo_Nova_construct(example_Nova_ArrayDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_ArrayDemo, this,);
	this->vtable = &example_ArrayDemo_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_ArrayDemo_Nova_super(this, exceptionData);
	
	{
		example_Nova_ArrayDemo_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_ArrayDemo_Nova_destroy(example_Nova_ArrayDemo** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_ArrayDemo_static_Nova_main(example_Nova_ArrayDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	char l1_Nova_c = 0;
	
	l1_Nova_c = 'y';
	while (l1_Nova_c == 'y' || l1_Nova_c == 'Y')
	{
		nova_datastruct_list_Nova_Array* l2_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
		example_Nova_Animal* l2_Nova_animal = (example_Nova_Animal*)nova_null;
		int l4_Nova_i = 0;
		int l6_Nova_i2 = 0;
		int l8_Nova_i3 = 0;
		
		l2_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_list), exceptionData, (nova_Nova_Object*)(example_Nova_Dog_Nova_construct(0, exceptionData)));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_list), exceptionData, (nova_Nova_Object*)(example_Nova_Dog_Nova_construct(0, exceptionData)));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_list), exceptionData, (nova_Nova_Object*)(example_Nova_Spider_Nova_construct(0, exceptionData)));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_list), exceptionData, (nova_Nova_Object*)(example_Nova_Dog_Nova_construct(0, exceptionData)));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_list), exceptionData, (nova_Nova_Object*)(example_Nova_Animal_Nova_construct(0, exceptionData)));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_list), exceptionData, (nova_Nova_Object*)(example_Nova_Spider_Nova_construct(0, exceptionData)));
		l4_Nova_i = (int)0;
		for (; l4_Nova_i < (int)nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l2_Nova_list), exceptionData); l4_Nova_i++)
		{
			nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Contains: ")), exceptionData, nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(l2_Nova_list), exceptionData))));
		}
		l2_Nova_animal = (example_Nova_Animal*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l2_Nova_list), exceptionData, 2));
		nova_datastruct_list_Nova_Array_0_Nova_remove((nova_datastruct_list_Nova_Array*)(l2_Nova_list), exceptionData, 2);
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("--------- Removed: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(l2_Nova_animal), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ----------")))))));
		l6_Nova_i2 = (int)0;
		for (; l6_Nova_i2 < (int)nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l2_Nova_list), exceptionData); l6_Nova_i2++)
		{
			nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Contains: ")), exceptionData, nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(l2_Nova_list), exceptionData))));
		}
		nova_datastruct_list_Nova_Array_1_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_list), exceptionData, 1, (nova_Nova_Object*)(example_Nova_Spider_Nova_construct(0, exceptionData)));
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("--------- Added a new spider at index 1 ----------")));
		l8_Nova_i3 = (int)0;
		for (; l8_Nova_i3 < (int)nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(l2_Nova_list), exceptionData); l8_Nova_i3++)
		{
			nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Contains: ")), exceptionData, nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(l2_Nova_list), exceptionData))));
		}
		nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Run again? (Y/N)")));
		l1_Nova_c = nova_io_Nova_Console_static_Nova_readChar(0, exceptionData);
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\nFinished")));
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void example_Nova_ArrayDemo_Nova_this(example_Nova_ArrayDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_ArrayDemo_Nova_super(example_Nova_ArrayDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_example_ArrayDemoFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_example_ArrayDemoFunctionMap* example_Nova_example_ArrayDemoFunctionMap_Nova_construct(example_Nova_example_ArrayDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_example_ArrayDemoFunctionMap, this,);
	this->vtable = &example_ArrayDemo_example_ArrayDemoFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	example_Nova_example_ArrayDemoFunctionMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_example_ArrayDemoFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_example_ArrayDemoFunctionMap_Nova_destroy(example_Nova_example_ArrayDemoFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_example_ArrayDemoFunctionMap_Nova_this(example_Nova_example_ArrayDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_example_ArrayDemoFunctionMap_Nova_super(example_Nova_example_ArrayDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

