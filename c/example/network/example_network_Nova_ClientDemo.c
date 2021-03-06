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
#include <nova/network/nova_network_Nova_ClientSocket.h>
#include <nova/network/nova_network_Nova_ConnectionSocket.h>
#include <example/network/example_network_Nova_ConnectionThread.h>
#include <example/network/example_network_Nova_OutputThread.h>
#include <example/network/example_network_Nova_ServerDemo.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/nova_Nova_Substring.h>



char example_network_Nova_ClientDemo_Nova_init_static_inited = 0;
void example_network_Nova_ClientDemo_Nova_init_static()
{
	if (!example_network_Nova_ClientDemo_Nova_init_static_inited) {
		example_network_Nova_ClientDemo_Nova_init_static_inited = 1;
		{
		}
	}
}

example_network_Nova_ClientDemo* example_network_Nova_ClientDemo_Nova_construct(example_network_Nova_ClientDemo* this)
{
	CCLASS_NEW(example_network_Nova_ClientDemo, this,);
	this->vtable = &example_network_Nova_ClientDemo_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this);
	example_network_Nova_ClientDemo_Nova_super(this);
	
	return example_network_Nova_ClientDemo_Nova_this((example_network_Nova_ClientDemo*)(this));
}

void example_network_Nova_ClientDemo_Nova_destroy(example_network_Nova_ClientDemo** this)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_network_Nova_ClientDemo_static_Nova_main(example_network_Nova_ClientDemo* this, nova_datastruct_list_Nova_Array* args)
{
	nova_network_Nova_ClientSocket* l1_Nova_socket = (nova_network_Nova_ClientSocket*)nova_null;
	nova_Nova_String* l1_Nova_ip = (nova_Nova_String*)nova_null;
	int l1_Nova_port = 0;
	char l1_Nova_connected = 0;
	
	l1_Nova_socket = nova_network_Nova_ClientSocket_Nova_construct(0);
	l1_Nova_ip = nova_Nova_String_1_Nova_construct(0,
		(char*)("127.0.0.1"));
	l1_Nova_port = (int)(5675);
	nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
		(nova_Nova_String*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
						(char*)("Attempting to connect to "))),
				(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(l1_Nova_ip),
						(nova_Nova_Object*)(nova_operators_Nova_PlusOperator_virtual1_Nova_plus((nova_operators_Nova_PlusOperator*)(nova_Nova_String_1_Nova_construct(0,
										(char*)(":"))),
								(nova_Nova_Object*)(nova_primitive_number_Nova_Int_static_Nova_toString((nova_primitive_number_Nova_Int*)(0),
	l1_Nova_port)))))))));
	l1_Nova_connected = nova_network_Nova_ClientSocket_Nova_connect((nova_network_Nova_ClientSocket*)(l1_Nova_socket),
		l1_Nova_ip,
	l1_Nova_port);
	if (l1_Nova_connected)
	{
		example_network_Nova_ConnectionThread* l18_Nova_thread = (example_network_Nova_ConnectionThread*)nova_null;
		
		l18_Nova_thread = example_network_Nova_ConnectionThread_Nova_construct(0,
		l1_Nova_socket->nova_network_Nova_ClientSocket_Nova_connection);
		nova_thread_Nova_Thread_Nova_start((nova_thread_Nova_Thread*)(l18_Nova_thread));
		nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Connected!")));
		while (l1_Nova_socket->nova_network_Nova_ClientSocket_Nova_connection->nova_network_Nova_ConnectionSocket_Nova_connected)
		{
			nova_Nova_String* l26_Nova_message = (nova_Nova_String*)nova_null;
			
			l26_Nova_message = nova_io_Nova_Console_static_Nova_readLine((nova_io_Nova_Console*)(0));
			if (nova_operators_Nova_EqualsOperator_virtual1_Nova_equals((nova_operators_Nova_EqualsOperator*)(l26_Nova_message),
					(nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0,
							(char*)("q")))))
			{
				nova_network_Nova_ClientSocket_Nova_close((nova_network_Nova_ClientSocket*)(l1_Nova_socket));
				break;
			}
			nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(l1_Nova_socket->nova_network_Nova_ClientSocket_Nova_connection->nova_network_Nova_ConnectionSocket_Nova_out),
			l26_Nova_message);
		}
		nova_network_Nova_ClientSocket_Nova_close((nova_network_Nova_ClientSocket*)(l1_Nova_socket));
	}
	else
	{
		nova_io_Nova_Console_1_static_Nova_writeLine((nova_io_Nova_Console*)(0),
			nova_Nova_String_1_Nova_construct(0,
				(char*)("Failed to connect")));
		nova_io_Nova_Console_static_Nova_waitForEnter((nova_io_Nova_Console*)(0));
	}
}

example_network_Nova_ClientDemo* example_network_Nova_ClientDemo_Nova_this(example_network_Nova_ClientDemo* this) {
	return this;
}
void example_network_Nova_ClientDemo_Nova_super(example_network_Nova_ClientDemo* this)
{
}

