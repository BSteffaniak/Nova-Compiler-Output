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
#include <nova/network/nova_network_Nova_ConnectionSocket.h>
#include <nova/network/nova_network_Nova_ServerSocket.h>
#include <example/network/example_network_Nova_ClientDemo.h>
#include <example/network/example_network_Nova_ConnectionThread.h>
#include <example/network/example_network_Nova_ServerDemo.h>
#include <nova/thread/NativeThread.h>
#include <nova/thread/nova_thread_Nova_ThreadLocal.h>
#include <nova/thread/nova_thread_Nova_UncaughtExceptionHandler.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>



CCLASS_PRIVATE
(
	example_network_Nova_OutputThread,
	NOVA_THREAD_HANDLE* nova_thread_Nova_Thread_Nova_handle;
	/*nova_thread_Nova_Thread_closure1412_Nova_action*/nova_funcStruct* nova_thread_Nova_Thread_Nova_action;
	char nova_thread_Nova_Thread_Nova_useAction;
	
	nova_network_Nova_ServerSocket* example_network_Nova_OutputThread_Nova_serverSocket;
	nova_network_Nova_ConnectionSocket* example_network_Nova_OutputThread_Nova_socket;
	
)
char example_network_Nova_OutputThread_Nova_init_static_inited = 0;
void example_network_Nova_OutputThread_Nova_init_static()
{
	if (!example_network_Nova_OutputThread_Nova_init_static_inited) {
		example_network_Nova_OutputThread_Nova_init_static_inited = 1;
		{
		}
	}
}

example_network_Nova_OutputThread* example_network_Nova_OutputThread_Nova_construct(example_network_Nova_OutputThread* this, nova_network_Nova_ServerSocket* serverSocket, nova_network_Nova_ConnectionSocket* socket)
{
	CCLASS_NEW(example_network_Nova_OutputThread, this);
	this->vtable = &example_network_Nova_OutputThread_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	nova_thread_Nova_Thread_Nova_super((nova_thread_Nova_Thread*)this);
	example_network_Nova_OutputThread_Nova_super(this);
	
	return example_network_Nova_OutputThread_Nova_this((example_network_Nova_OutputThread*)(this),
		serverSocket,
	socket);
}

void example_network_Nova_OutputThread_Nova_destroy(example_network_Nova_OutputThread** this)
{
	if (!*this)
	{
		return;
	}
	
	nova_network_Nova_ServerSocket_Nova_destroy(&(*this)->prv->example_network_Nova_OutputThread_Nova_serverSocket);
	nova_network_Nova_ConnectionSocket_Nova_destroy(&(*this)->prv->example_network_Nova_OutputThread_Nova_socket);
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

example_network_Nova_OutputThread* example_network_Nova_OutputThread_Nova_this(example_network_Nova_OutputThread* this, nova_network_Nova_ServerSocket* serverSocket, nova_network_Nova_ConnectionSocket* socket) {
	this->prv->example_network_Nova_OutputThread_Nova_serverSocket = serverSocket;
	this->prv->example_network_Nova_OutputThread_Nova_socket = socket;
	return this;
}
void example_network_Nova_OutputThread_Nova_run(example_network_Nova_OutputThread* this)
{
	while (this->prv->example_network_Nova_OutputThread_Nova_socket->nova_network_Nova_ConnectionSocket_Nova_connected)
	{
		nova_Nova_String* l2_Nova_message = (nova_Nova_String*)nova_null;
		
		l2_Nova_message = nova_io_Nova_Console_static_Nova_readLine((nova_io_Nova_Console*)(0));
		if (nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(l2_Nova_message),
				(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("q")))))
		{
			nova_network_Nova_ServerSocket_Nova_close((nova_network_Nova_ServerSocket*)(this->prv->example_network_Nova_OutputThread_Nova_serverSocket));
			break;
		}
		if (!this->prv->example_network_Nova_OutputThread_Nova_socket->nova_network_Nova_ConnectionSocket_Nova_connected)
		{
			break;
		}
		nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(this->prv->example_network_Nova_OutputThread_Nova_socket->nova_network_Nova_ConnectionSocket_Nova_out),
		l2_Nova_message);
	}
}

void example_network_Nova_OutputThread_Nova_super(example_network_Nova_OutputThread* this)
{
	this->prv->example_network_Nova_OutputThread_Nova_serverSocket = (nova_network_Nova_ServerSocket*)nova_null;
	this->prv->example_network_Nova_OutputThread_Nova_socket = (nova_network_Nova_ConnectionSocket*)nova_null;
}

