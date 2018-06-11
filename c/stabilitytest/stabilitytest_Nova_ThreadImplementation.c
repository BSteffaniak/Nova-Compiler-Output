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
#include <stabilitytest/stabilitytest_Nova_StaticImportStability.h>
#include <stabilitytest/stabilitytest_Nova_SyntaxStability.h>
#include <stabilitytest/stabilitytest_Nova_ThreadStability.h>
#include <stabilitytest/stabilitytest_Nova_TimeStability.h>
#include <stabilitytest/stabilitytest_Nova_ToStringStability.h>
#include <stabilitytest/stabilitytest_Nova_UnstableException.h>
#include <nova/thread/NativeThread.h>
#include <nova/thread/nova_thread_Nova_ThreadLocal.h>
#include <nova/thread/nova_thread_Nova_UncaughtExceptionHandler.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>



CCLASS_PRIVATE
(
	stabilitytest_Nova_ThreadImplementation,
	NOVA_THREAD_HANDLE* nova_thread_Nova_Thread_Nova_handle;
	/*nova_thread_Nova_Thread_closure1412_Nova_action*/nova_funcStruct* nova_thread_Nova_Thread_Nova_action;
	char nova_thread_Nova_Thread_Nova_useAction;
	
	int stabilitytest_Nova_ThreadImplementation_Nova_times;
	int stabilitytest_Nova_ThreadImplementation_Nova_millis;
	
)
char stabilitytest_Nova_ThreadImplementation_Nova_init_static_inited = 0;
void stabilitytest_Nova_ThreadImplementation_Nova_init_static()
{
	if (!stabilitytest_Nova_ThreadImplementation_Nova_init_static_inited) {
		stabilitytest_Nova_ThreadImplementation_Nova_init_static_inited = 1;
		{
		}
	}
}

stabilitytest_Nova_ThreadImplementation* stabilitytest_Nova_ThreadImplementation_Nova_construct(stabilitytest_Nova_ThreadImplementation* this, int times, int millis)
{
	CCLASS_NEW(stabilitytest_Nova_ThreadImplementation, this);
	this->vtable = &stabilitytest_Nova_ThreadImplementation_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	nova_thread_Nova_Thread_Nova_super((nova_thread_Nova_Thread*)this);
	stabilitytest_Nova_ThreadImplementation_Nova_super(this);
	
	return stabilitytest_Nova_ThreadImplementation_Nova_this((stabilitytest_Nova_ThreadImplementation*)(this),
		times,
	millis);
}

void stabilitytest_Nova_ThreadImplementation_Nova_destroy(stabilitytest_Nova_ThreadImplementation** this)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

stabilitytest_Nova_ThreadImplementation* stabilitytest_Nova_ThreadImplementation_Nova_this(stabilitytest_Nova_ThreadImplementation* this, int times, int millis) {
	this->prv->stabilitytest_Nova_ThreadImplementation_Nova_times = times;
	this->prv->stabilitytest_Nova_ThreadImplementation_Nova_millis = millis;
	return this;
}
void stabilitytest_Nova_ThreadImplementation_Nova_run(stabilitytest_Nova_ThreadImplementation* this)
{
	int l8_Nova_i;
	l8_Nova_i = (int)0;
	for (; l8_Nova_i < (int)this->prv->stabilitytest_Nova_ThreadImplementation_Nova_times; l8_Nova_i++)
	{
		nova_thread_Nova_Thread_static_Nova_sleep((nova_thread_Nova_Thread*)(0),
		this->prv->stabilitytest_Nova_ThreadImplementation_Nova_millis);
	}
}

void stabilitytest_Nova_ThreadImplementation_Nova_super(stabilitytest_Nova_ThreadImplementation* this)
{
	this->prv->stabilitytest_Nova_ThreadImplementation_Nova_times = 0;
	this->prv->stabilitytest_Nova_ThreadImplementation_Nova_millis = 0;
}

