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
#include <stabilitytest/stabilitytest_Nova_AssignmentStability.h>
#include <stabilitytest/stabilitytest_Nova_BoundedIntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_BoundlessIntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_CastStability.h>
#include <stabilitytest/stabilitytest_Nova_ClassWithProperties.h>
#include <stabilitytest/stabilitytest_Nova_ClientThread.h>
#include <stabilitytest/stabilitytest_Nova_ClosureStability.h>
#include <stabilitytest/stabilitytest_Nova_ExceptionStability.h>
#include <stabilitytest/stabilitytest_Nova_ExternalInnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_FancyOutputStreamTests.h>
#include <stabilitytest/stabilitytest_Nova_FileStability.h>
#include <stabilitytest/stabilitytest_Nova_FirstClassFunctionStability.h>
#include <stabilitytest/stabilitytest_Nova_InnerClassStability.h>
#include <stabilitytest/stabilitytest_Nova_IntervalStability.h>
#include <stabilitytest/stabilitytest_Nova_LambdaStability.h>
#include <stabilitytest/stabilitytest_Nova_LibraryLoadingStability.h>
#include <stabilitytest/stabilitytest_Nova_NetworkStability.h>
#include <stabilitytest/stabilitytest_Nova_Node.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphicSubClass.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphicSuperClass.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphismStability.h>
#include <stabilitytest/stabilitytest_Nova_PrimitiveOverloadStability.h>
#include <stabilitytest/stabilitytest_Nova_RegexStability.h>
#include <stabilitytest/stabilitytest_Nova_StabilityExceptionHandler.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestException.h>
#include <stabilitytest/stabilitytest_Nova_SyntaxStability.h>
#include <stabilitytest/stabilitytest_Nova_ThreadImplementation.h>
#include <stabilitytest/stabilitytest_Nova_ThreadStability.h>
#include <stabilitytest/stabilitytest_Nova_TimeStability.h>
#include <stabilitytest/stabilitytest_Nova_ToStringStability.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <novex/nest/novex_nest_Nova_TestRunner.h>
#include <novex/nest/novex_nest_Nova_TestCase.h>
#include <novex/nest/novex_nest_Nova_TestRunnerModel.h>
#include <novex/nest/novex_nest_Nova_TestResult.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <novex/nest/novex_nest_Nova_NestException.h>
#include <nova/time/nova_time_Nova_Timer.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>

typedef struct
{
} Context219;


nova_datastruct_list_Nova_Array* generated28(stabilitytest_Nova_StaticImportStability* this, novex_nest_Nova_TestCase* value0);
void stabilitytest_Nova_StaticImportStability_Nova_lambda198(stabilitytest_Nova_StaticImportStability* this, novex_nest_Nova_TestResult* _1, Context219* context);


nova_datastruct_list_Nova_Array* generated28(stabilitytest_Nova_StaticImportStability* this, novex_nest_Nova_TestCase* value0);
void stabilitytest_Nova_StaticImportStability_Nova_lambda198(stabilitytest_Nova_StaticImportStability* this, novex_nest_Nova_TestResult* _1, Context219* context);

novex_nest_Nova_TestCase* stabilitytest_Nova_StaticImportStability_Nova__testTestCase;
novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_StaticImportStability_Nova__runTestsTestRunner;
char stabilitytest_Nova_StaticImportStability_Nova_init_static_inited = 0;
void stabilitytest_Nova_StaticImportStability_Nova_init_static()
{
	if (!stabilitytest_Nova_StaticImportStability_Nova_init_static_inited) {
		stabilitytest_Nova_StaticImportStability_Nova_init_static_inited = 1;
		novex_nest_Nova_TestCase_Nova_init_static();
		novex_nest_Nova_TestRunnerModel_Nova_init_static();
		nova_datastruct_list_Nova_Array_Nova_init_static();
		{
			stabilitytest_Nova_StaticImportStability_Nova__testTestCase = novex_nest_Nova_TestCase_Nova_construct(0,
				nova_Nova_String_1_Nova_construct(0,
					(char*)("test")),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("Testing math static imports")));
			stabilitytest_Nova_StaticImportStability_Nova__runTestsTestRunner = novex_nest_Nova_TestRunnerModel_Nova_construct(0,
				generated28(0,
				stabilitytest_Nova_StaticImportStability_Nova__testTestCase),
			0);
		}
	}
}

stabilitytest_Nova_StaticImportStability* stabilitytest_Nova_StaticImportStability_Nova_construct(stabilitytest_Nova_StaticImportStability* this)
{
	CCLASS_NEW(stabilitytest_Nova_StaticImportStability, this,);
	this->vtable = &stabilitytest_Nova_StaticImportStability_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	stabilitytest_Nova_StaticImportStability_Nova_super(this);
	
	return stabilitytest_Nova_StaticImportStability_Nova_this((stabilitytest_Nova_StaticImportStability*)(this));
}

void stabilitytest_Nova_StaticImportStability_Nova_destroy(stabilitytest_Nova_StaticImportStability** this)
{
	if (!*this)
	{
		return;
	}
	
	novex_nest_Nova_TestRunnerModel_Nova_destroy(&(*this)->stabilitytest_Nova_StaticImportStability_Nova_model);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_StaticImportStability_Nova_test(stabilitytest_Nova_StaticImportStability* this, nova_io_Nova_OutputStream* out)
{
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing math static imports ")));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long223_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_math_Nova_Math_0_static_Nova_abs((nova_math_Nova_Math*)(this),
		-5))),
		5,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Did not call abs correctly")));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long224_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_math_Nova_Math_0_static_Nova_max((nova_math_Nova_Math*)(this),
					-5,
		-6))),
		-5,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Did not call max correctly")));
	novex_nest_Long_Nova_Nest1Long_long_long_String_char_Nova_toBe((novex_nest_Long_Nova_Nest1Long*)(novex_nest_Nova_Nest_long_long_Nest1Long225_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_math_Nova_Math_0_static_Nova_min((nova_math_Nova_Math*)(this),
					-5,
		-6))),
		-6,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Did not call min correctly")));
	novex_nest_Byte_Nova_Nest1Byte_char_String_char_Nova_toBe((novex_nest_Byte_Nova_Nest1Byte*)(novex_nest_Nova_Nest_char_Nest1Byte226_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_math_Nova_Math_static_Nova_sign((nova_math_Nova_Math*)(this),
		-5))),
		-1,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Did not call sign correctly")));
	novex_nest_Double_Nova_Nest1Double_double_String_char_Nova_toBe((novex_nest_Double_Nova_Nest1Double*)(novex_nest_Nova_Nest_double_Nest1Double227_static_Nova_expect((novex_nest_Nova_Nest*)(this),
				nova_math_Nova_Math_static_Nova_round((nova_math_Nova_Math*)(this),
		5.6))),
		6,
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Did not call round correctly")));
}

void stabilitytest_Nova_StaticImportStability_Nova_runTests(stabilitytest_Nova_StaticImportStability* this, stabilitytest_Nova_StaticImportStability_closure943_Nova_onResult stabilitytest_Nova_StaticImportStability_Nova_onResult, void* stabilitytest_Nova_StaticImportStability_ref_Nova_onResult, void* stabilitytest_Nova_StaticImportStability_context_Nova_onResult, nova_io_Nova_OutputStream* out)
{
	Context219* contextArg198 = NOVA_MALLOC(sizeof(Context219));
	nova_time_Nova_Timer* l1_Nova_testTimer = (nova_time_Nova_Timer*)nova_null;
	
	stabilitytest_Nova_StaticImportStability_Nova_onResult = (stabilitytest_Nova_StaticImportStability_closure943_Nova_onResult)(stabilitytest_Nova_StaticImportStability_Nova_onResult == 0 ? (stabilitytest_Nova_StaticImportStability_closure943_Nova_onResult)&stabilitytest_Nova_StaticImportStability_Nova_lambda198 : stabilitytest_Nova_StaticImportStability_Nova_onResult);
	stabilitytest_Nova_StaticImportStability_ref_Nova_onResult = (void*)(stabilitytest_Nova_StaticImportStability_ref_Nova_onResult == 0 ? (void*)this : stabilitytest_Nova_StaticImportStability_ref_Nova_onResult);
	stabilitytest_Nova_StaticImportStability_context_Nova_onResult = (void*)(stabilitytest_Nova_StaticImportStability_context_Nova_onResult == 0 ? (void*)contextArg198 : stabilitytest_Nova_StaticImportStability_context_Nova_onResult);
	out = (nova_io_Nova_OutputStream*)(out == 0 ? (nova_Nova_Object*)nova_io_Nova_Console_Nova_out : (nova_Nova_Object*)out);
	nova_io_Nova_FancyOutputStream_1_Nova_writeHeader((nova_io_Nova_FancyOutputStream*)(novex_nest_Nova_Nest_Nova_out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("Testing StaticImportStability")),
		0,
		0,
		(int)(intptr_t)nova_null);
	l1_Nova_testTimer = nova_time_Nova_Timer_Nova_start((nova_time_Nova_Timer*)(nova_time_Nova_Timer_Nova_construct(0)));
	TRY
	{
		nova_exception_Nova_ExceptionData_Nova_addCaught(exceptionData, novex_nest_Nova_NestException_VTable_val.classInstance, 0);
		
		{
			novex_nest_Nova_TestResult* l9_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
			
			stabilitytest_Nova_StaticImportStability_Nova_test((stabilitytest_Nova_StaticImportStability*)(this),
			out);
			nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testTimer));
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
				nova_Nova_String_1_Nova_construct(0,
					(char*)("- Success\n")));
			l9_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
				1,
				l1_Nova_testTimer,
			stabilitytest_Nova_StaticImportStability_Nova__testTestCase);
			stabilitytest_Nova_StaticImportStability_Nova_onResult(stabilitytest_Nova_StaticImportStability_ref_Nova_onResult,
				l9_Nova_testResult,
			stabilitytest_Nova_StaticImportStability_context_Nova_onResult);
		}
	}
	CATCH (novex_nest_Nova_NestException_VTable_val.classInstance)
	{
		novex_nest_Nova_NestException* l14_Nova_e = (novex_nest_Nova_NestException*)nova_null;
		novex_nest_Nova_TestResult* l14_Nova_testResult = (novex_nest_Nova_TestResult*)nova_null;
		
		l14_Nova_e = (void*)thrownData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_time_Nova_Timer_virtual_Nova_stop((nova_time_Nova_Timer*)(l1_Nova_testTimer));
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
			(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("- Failure: "))),
					(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)((l14_Nova_e->nova_exception_Nova_Exception_Nova_message)),
							(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
									(char*)("\n"))))))));
		l14_Nova_testResult = novex_nest_Nova_TestResult_Nova_construct(0,
			0,
			l1_Nova_testTimer,
		stabilitytest_Nova_StaticImportStability_Nova__testTestCase);
		stabilitytest_Nova_StaticImportStability_Nova_onResult(stabilitytest_Nova_StaticImportStability_ref_Nova_onResult,
			l14_Nova_testResult,
		stabilitytest_Nova_StaticImportStability_context_Nova_onResult);
	}
	FINALLY
	{
	}
	END_TRY;
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(out),
		nova_Nova_String_1_Nova_construct(0,
			(char*)("\n")));
}

stabilitytest_Nova_StaticImportStability* stabilitytest_Nova_StaticImportStability_Nova_this(stabilitytest_Nova_StaticImportStability* this) {
	return this;
}
nova_datastruct_list_Nova_Array* generated28(stabilitytest_Nova_StaticImportStability* this, novex_nest_Nova_TestCase* value0)
{
	novex_nest_Nova_TestCase** l1_Nova_temp = (novex_nest_Nova_TestCase**)nova_null;
	
	l1_Nova_temp = (novex_nest_Nova_TestCase**)NOVA_MALLOC(sizeof(novex_nest_Nova_TestCase) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0,
		(nova_Nova_Object**)(l1_Nova_temp),
	1);
}

void stabilitytest_Nova_StaticImportStability_Nova_lambda198(stabilitytest_Nova_StaticImportStability* this, novex_nest_Nova_TestResult* _1, Context219* context)
{
}

novex_nest_Nova_TestRunnerModel* stabilitytest_Nova_StaticImportStability_Accessorfunc_Nova_model(stabilitytest_Nova_StaticImportStability* this)
{
	return stabilitytest_Nova_StaticImportStability_Nova__runTestsTestRunner;
}


void stabilitytest_Nova_StaticImportStability_Nova_super(stabilitytest_Nova_StaticImportStability* this)
{
	this->stabilitytest_Nova_StaticImportStability_Nova_model = (novex_nest_Nova_TestRunnerModel*)nova_null;
}

