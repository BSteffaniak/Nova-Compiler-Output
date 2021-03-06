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
#include <example/example_Nova_ArrayDemo.h>
#include <example/example_Nova_BodyBuilder.h>
#include <example/example_Nova_ClosureDemo.h>
#include <example/example_Nova_Dog.h>
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



int example_Nova_ExceptionHandlingDemo_static_Nova_divide(example_Nova_ExceptionHandlingDemo* this, int num, int den);

int example_Nova_ExceptionHandlingDemo_static_Nova_divide(example_Nova_ExceptionHandlingDemo* this, int num, int den);
char example_Nova_ExceptionHandlingDemo_Nova_init_static_inited = 0;
void example_Nova_ExceptionHandlingDemo_Nova_init_static()
{
	if (!example_Nova_ExceptionHandlingDemo_Nova_init_static_inited) {
		example_Nova_ExceptionHandlingDemo_Nova_init_static_inited = 1;
		{
		}
	}
}

example_Nova_ExceptionHandlingDemo* example_Nova_ExceptionHandlingDemo_Nova_construct(example_Nova_ExceptionHandlingDemo* this)
{
	CCLASS_NEW(example_Nova_ExceptionHandlingDemo, this,);
	this->vtable = &example_Nova_ExceptionHandlingDemo_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	example_Nova_ExceptionHandlingDemo_Nova_super(this);
	
	return example_Nova_ExceptionHandlingDemo_Nova_this((example_Nova_ExceptionHandlingDemo*)(this));
}

void example_Nova_ExceptionHandlingDemo_Nova_destroy(example_Nova_ExceptionHandlingDemo** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_ExceptionHandlingDemo_static_Nova_main(example_Nova_ExceptionHandlingDemo* this, nova_datastruct_list_Nova_Array* args)
{
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, example_Nova_NonWholeDivisionException_VTable_val.classInstance, 0);
		
		{
			int l3_Nova_result = 0;
			
			l3_Nova_result = example_Nova_ExceptionHandlingDemo_static_Nova_divide(0,
				100,
			5);
			nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
				(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
								(char*)("After working example: "))),
						(nova_Nova_Object*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
			l3_Nova_result)))));
			l3_Nova_result = example_Nova_ExceptionHandlingDemo_static_Nova_divide(0,
				100,
			3);
			nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("this output will not show.")));
		}
	}
	CATCH (example_Nova_NonWholeDivisionException_VTable_val.classInstance)
	{
		example_Nova_NonWholeDivisionException* l24_Nova_e = (example_Nova_NonWholeDivisionException*)nova_null;
		
		l24_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("You used the divide() method incorrectly.")));
	}
	FINALLY
	{
		nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Exiting the try block.")));
	}
	END_TRY;
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("After the try block.")));
	nova_io_Nova_Console_static_Nova_waitForEnter((nova_io_Nova_Console*)(0));
}

int example_Nova_ExceptionHandlingDemo_static_Nova_divide(example_Nova_ExceptionHandlingDemo* this, int num, int den)
{
	if (num % den != 0)
	{
		THROW(example_Nova_NonWholeDivisionException_Nova_construct(0), 0);
	}
	return num / den;
}

example_Nova_ExceptionHandlingDemo* example_Nova_ExceptionHandlingDemo_Nova_this(example_Nova_ExceptionHandlingDemo* this) {
	return this;
}
void example_Nova_ExceptionHandlingDemo_Nova_super(example_Nova_ExceptionHandlingDemo* this)
{
}

