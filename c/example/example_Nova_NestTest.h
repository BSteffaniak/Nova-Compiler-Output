#ifndef FILE_example_Nova_NestTest_NOVA
#define FILE_example_Nova_NestTest_NOVA

typedef struct example_Nova_NestTest example_Nova_NestTest;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct novex_nest_Nova_TestResult novex_nest_Nova_TestResult;

typedef void (*example_Nova_NestTest_closure517_Nova_onResult)(void*, novex_nest_Nova_TestResult*, void*);

#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
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
#include <novex/nest/novex_nest_Nova_Nest.h>
#include <novex/nest/novex_nest_Nova_TestSuite.h>
#include <example/example_Nova_Animal.h>
#include <example/example_Nova_ArrayDemo.h>
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
#include <novex/nest/novex_nest_Nova_TestRunner.h>
#include <novex/nest/novex_nest_Nova_TestResult.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <novex/nest/novex_nest_Nova_NestException.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <novex/nest/novex_nest_Nova_TestCase.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

CCLASS_CLASS
(
	example_Nova_NestTest, 
	
	example_Nova_NestTest_VTable* vtable;
	void* prv;
	nova_Nova_String* nova_Nova_Object_Nova_hashCode;
)
extern novex_nest_Nova_TestCase* example_Nova_NestTest_Nova__testPrimitiveComparisonTestCase;
extern novex_nest_Nova_TestCase* example_Nova_NestTest_Nova__testPrimitiveNotComparisonTestCase;
extern novex_nest_Nova_TestCase* example_Nova_NestTest_Nova__testNoMessageGivenTestCase;

extern char example_Nova_NestTest_Nova_init_static_inited;
void example_Nova_NestTest_Nova_init_static();
example_Nova_NestTest* example_Nova_NestTest_Nova_construct(example_Nova_NestTest* this);
void example_Nova_NestTest_Nova_destroy(example_Nova_NestTest** this);
void example_Nova_NestTest_static_Nova_main(example_Nova_NestTest* this, nova_datastruct_list_Nova_Array* args);
void example_Nova_NestTest_Nova_testPrimitiveComparison(example_Nova_NestTest* this, nova_io_Nova_OutputStream* out);
void example_Nova_NestTest_Nova_testPrimitiveNotComparison(example_Nova_NestTest* this, nova_io_Nova_OutputStream* out);
void example_Nova_NestTest_Nova_testNoMessageGiven(example_Nova_NestTest* this, nova_io_Nova_OutputStream* out);
void example_Nova_NestTest_Nova_beforeTest(example_Nova_NestTest* this, nova_io_Nova_OutputStream* out);
void example_Nova_NestTest_Nova_afterTest(example_Nova_NestTest* this, nova_io_Nova_OutputStream* out);
void example_Nova_NestTest_Nova_beforeClass(example_Nova_NestTest* this, nova_io_Nova_OutputStream* out);
void example_Nova_NestTest_Nova_afterClass(example_Nova_NestTest* this, nova_io_Nova_OutputStream* out);
void example_Nova_NestTest_Nova_runTests(example_Nova_NestTest* this, example_Nova_NestTest_closure517_Nova_onResult example_Nova_NestTest_Nova_onResult, void* example_Nova_NestTest_ref_Nova_onResult, void* example_Nova_NestTest_context_Nova_onResult, nova_io_Nova_OutputStream* out);
example_Nova_NestTest* example_Nova_NestTest_Nova_this(example_Nova_NestTest* this);
void example_Nova_NestTest_Nova_super(example_Nova_NestTest* this);

#endif
