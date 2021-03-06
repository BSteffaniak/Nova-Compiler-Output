#ifndef FILE_nova_network_Nova_ClientSocket_NOVA
#define FILE_nova_network_Nova_ClientSocket_NOVA

typedef struct nova_network_Nova_ClientSocket nova_network_Nova_ClientSocket;
typedef struct nova_network_Nova_ClientSocketFunctionMap nova_network_Nova_ClientSocketFunctionMap;
typedef struct nova_network_Nova_ClientSocketPropertyMap nova_network_Nova_ClientSocketPropertyMap;


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
#include <nova/network/NativeClientSocket.h>
#include <nova/network/NativeSocket.h>
#include <nova/network/nova_network_Nova_ConnectionSocket.h>
#include <nova/network/nova_network_Nova_Socket.h>
#include <nova/network/nova_network_Nova_Socket.h>
#include <nova/network/nova_network_Nova_Socket.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_network_Nova_ClientSocket, 
	
	nova_network_ClientSocket_Extension_VTable* vtable;
	nova_Nova_String* nova_network_Nova_Socket_Nova_ip;
	int nova_network_Nova_Socket_Nova_port;
	nova_network_Nova_ConnectionSocket* nova_network_Nova_ClientSocket_Nova_connection;
	struct Private_nova_network_Nova_ClientSocket* prv;
)

void nova_network_Nova_ClientSocket_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_network_Nova_ClientSocket* nova_network_Nova_ClientSocket_Nova_construct(nova_network_Nova_ClientSocket* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_network_Nova_ClientSocket_Nova_destroy(nova_network_Nova_ClientSocket** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_network_Nova_ClientSocket_Nova_this(nova_network_Nova_ClientSocket* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_network_Nova_ClientSocket_Nova_connect(nova_network_Nova_ClientSocket* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* ipAddress, int port);
char nova_network_Nova_ClientSocket_Nova_close(nova_network_Nova_ClientSocket* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_network_Nova_ClientSocket_Nova_super(nova_network_Nova_ClientSocket* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_network_Nova_ClientSocketFunctionMap, 
	
	nova_network_ClientSocket_ClientSocketFunctionMap_Extension_VTable* vtable;
)

void nova_network_Nova_ClientSocketFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_network_Nova_ClientSocketFunctionMap* nova_network_Nova_ClientSocketFunctionMap_Nova_construct(nova_network_Nova_ClientSocketFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_network_Nova_ClientSocketFunctionMap_Nova_destroy(nova_network_Nova_ClientSocketFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_network_Nova_ClientSocketFunctionMap_Nova_this(nova_network_Nova_ClientSocketFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_network_Nova_ClientSocket* nova_network_Nova_ClientSocketFunctionMap_functionMapClientSocketFunctionMap_Nova_construct(nova_network_Nova_ClientSocketFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_network_Nova_ClientSocketFunctionMap_functionMap_Nova_connect(nova_network_Nova_ClientSocketFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_network_Nova_ClientSocket* reference, nova_Nova_String* ipAddress, int port);
char nova_network_Nova_ClientSocketFunctionMap_functionMap_Nova_close(nova_network_Nova_ClientSocketFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_network_Nova_ClientSocket* reference);
void nova_network_Nova_ClientSocketFunctionMap_Nova_super(nova_network_Nova_ClientSocketFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_network_Nova_ClientSocketPropertyMap, 
	
	nova_network_ClientSocket_ClientSocketPropertyMap_Extension_VTable* vtable;
)

void nova_network_Nova_ClientSocketPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_network_Nova_ClientSocketPropertyMap* nova_network_Nova_ClientSocketPropertyMap_Nova_construct(nova_network_Nova_ClientSocketPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_network_Nova_ClientSocketPropertyMap_Nova_destroy(nova_network_Nova_ClientSocketPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_network_Nova_ClientSocketPropertyMap_Nova_this(nova_network_Nova_ClientSocketPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_network_Nova_ConnectionSocket* nova_network_Nova_ClientSocketPropertyMap_functionMap_Nova_connection(nova_network_Nova_ClientSocketPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_network_Nova_ClientSocket* reference);
void nova_network_Nova_ClientSocketPropertyMap_Nova_super(nova_network_Nova_ClientSocketPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
