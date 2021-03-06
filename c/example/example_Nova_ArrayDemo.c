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
#include <example/example_Nova_Animal.h>
#include <example/example_Nova_BodyBuilder.h>
#include <example/example_Nova_ClosureDemo.h>
#include <example/example_Nova_Dog.h>
#include <example/example_Nova_ExceptionHandlingDemo.h>
#include <example/example_Nova_FileTest.h>
#include <example/example_Nova_GenericDemo.h>
#include <example/example_Nova_HashMapDemo.h>
#include <example/example_Nova_HashSetDemo.h>
#include <example/example_Nova_IntegerTest.h>
#include <example/example_Nova_Lab.h>
#include <example/example_Nova_MathDemo.h>
#include <example/example_Nova_NestTest.h>
#include <example/example_Nova_NonWholeDivisionException.h>
#include <example/example_Nova_Person.h>
#include <example/example_Nova_Polygon.h>
#include <example/example_Nova_PolymorphismDemo.h>
#include <example/example_Nova_QueueDemo.h>
#include <example/example_Nova_Spider.h>
#include <example/example_Nova_Square.h>
#include <example/example_Nova_SvgChart.h>
#include <example/example_Nova_SvgFractal.h>
#include <example/example_Nova_T1.h>
#include <example/example_Nova_T2.h>
#include <example/example_Nova_Test.h>
#include <example/example_Nova_ThreadDemo.h>
#include <example/example_Nova_ThreadDemoImplementation.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>



char example_Nova_ArrayDemo_Nova_init_static_inited = 0;
void example_Nova_ArrayDemo_Nova_init_static()
{
	if (!example_Nova_ArrayDemo_Nova_init_static_inited) {
		example_Nova_ArrayDemo_Nova_init_static_inited = 1;
		{
		}
	}
}

example_Nova_ArrayDemo* example_Nova_ArrayDemo_Nova_construct(example_Nova_ArrayDemo* this)
{
	CCLASS_NEW(example_Nova_ArrayDemo, this,);
	this->vtable = &example_Nova_ArrayDemo_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	example_Nova_ArrayDemo_Nova_super(this);
	
	return example_Nova_ArrayDemo_Nova_this((example_Nova_ArrayDemo*)(this));
}

void example_Nova_ArrayDemo_Nova_destroy(example_Nova_ArrayDemo** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_ArrayDemo_static_Nova_main(example_Nova_ArrayDemo* this, nova_datastruct_list_Nova_Array* args)
{
	char l1_Nova_c = 0;
	
	l1_Nova_c = 'y';
	while (l1_Nova_c == 'y' || l1_Nova_c == 'Y')
	{
		nova_datastruct_list_Nova_Array* l2_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
		example_Nova_Animal* l2_Nova_animal = (example_Nova_Animal*)nova_null;
		
		l2_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0);
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_list),
			(nova_Nova_Object*)(example_Nova_Dog_Nova_construct(0)));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_list),
			(nova_Nova_Object*)(example_Nova_Dog_Nova_construct(0)));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_list),
			(nova_Nova_Object*)(example_Nova_Spider_Nova_construct(0)));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_list),
			(nova_Nova_Object*)(example_Nova_Dog_Nova_construct(0)));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_list),
			(nova_Nova_Object*)(example_Nova_Animal_Nova_construct(0)));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_list),
			(nova_Nova_Object*)(example_Nova_Spider_Nova_construct(0)));
		int l29_Nova_i;
		l29_Nova_i = (int)0;
		for (; l29_Nova_i < (int)nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_count((nova_datastruct_list_Nova_List*)(l2_Nova_list)); l29_Nova_i++)
		{
			nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
				(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("Contains: "))),
						(nova_Nova_Object*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(l2_Nova_list),
			l29_Nova_i)))))));
		}
		l2_Nova_animal = (example_Nova_Animal*)(nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(l2_Nova_list),
		2));
		nova_datastruct_list_Nova_Array_0_Nova_remove((nova_datastruct_list_Nova_Array*)(l2_Nova_list),
		2);
		nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("--------- Removed: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(l2_Nova_animal))),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)(" ----------"))))))));
		int l59_Nova_i2;
		l59_Nova_i2 = (int)0;
		for (; l59_Nova_i2 < (int)nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_count((nova_datastruct_list_Nova_List*)(l2_Nova_list)); l59_Nova_i2++)
		{
			nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
				(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("Contains: "))),
						(nova_Nova_Object*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(l2_Nova_list),
			l59_Nova_i2)))))));
		}
		nova_datastruct_list_Nova_Array_1_Nova_add((nova_datastruct_list_Nova_Array*)(l2_Nova_list),
			1,
			(nova_Nova_Object*)(example_Nova_Spider_Nova_construct(0)));
		nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("--------- Added a new spider at index 1 ----------")));
		int l85_Nova_i3;
		l85_Nova_i3 = (int)0;
		for (; l85_Nova_i3 < (int)nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_count((nova_datastruct_list_Nova_List*)(l2_Nova_list)); l85_Nova_i3++)
		{
			nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
				(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("Contains: "))),
						(nova_Nova_Object*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(nova_datastruct_list_Nova_Array_Nova_get((nova_datastruct_list_Nova_Array*)(l2_Nova_list),
			l85_Nova_i3)))))));
		}
		nova_io_Nova_Console_0_static_Nova_write((nova_io_Nova_Console*)(0),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Run again? (Y/N)")));
		l1_Nova_c = nova_io_Nova_Console_static_Nova_readChar((nova_io_Nova_Console*)(0));
	}
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\nFinished")));
	nova_io_Nova_Console_static_Nova_waitForEnter((nova_io_Nova_Console*)(0));
}

example_Nova_ArrayDemo* example_Nova_ArrayDemo_Nova_this(example_Nova_ArrayDemo* this) {
	return this;
}
void example_Nova_ArrayDemo_Nova_super(example_Nova_ArrayDemo* this)
{
}

