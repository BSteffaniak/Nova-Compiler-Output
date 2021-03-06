#ifndef FILE_spectra_Nova_SyntaxErrorException_NOVA
#define FILE_spectra_Nova_SyntaxErrorException_NOVA

typedef struct spectra_Nova_SyntaxErrorException spectra_Nova_SyntaxErrorException;
typedef struct spectra_Nova_SyntaxErrorExceptionFunctionMap spectra_Nova_SyntaxErrorExceptionFunctionMap;
typedef struct spectra_Nova_SyntaxErrorExceptionPropertyMap spectra_Nova_SyntaxErrorExceptionPropertyMap;


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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	spectra_Nova_SyntaxErrorException, 
	
	spectra_SyntaxErrorException_Extension_VTable* vtable;
	nova_Nova_String* nova_exception_Nova_Exception_Nova_message;
)

void spectra_Nova_SyntaxErrorException_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_Nova_SyntaxErrorException* spectra_Nova_SyntaxErrorException_0_Nova_construct(spectra_Nova_SyntaxErrorException* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_Nova_SyntaxErrorException* spectra_Nova_SyntaxErrorException_1_Nova_construct(spectra_Nova_SyntaxErrorException* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message, spectra_tree_nodes_Nova_Node* node, spectra_tree_nodes_Nova_Program* program);
void spectra_Nova_SyntaxErrorException_Nova_destroy(spectra_Nova_SyntaxErrorException** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_Nova_SyntaxErrorException_Nova_this(spectra_Nova_SyntaxErrorException* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_Nova_SyntaxErrorException_0_Nova_this(spectra_Nova_SyntaxErrorException* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message, spectra_tree_nodes_Nova_Node* node, spectra_tree_nodes_Nova_Program* program);
void spectra_Nova_SyntaxErrorException_Nova_super(spectra_Nova_SyntaxErrorException* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_Nova_SyntaxErrorExceptionFunctionMap, 
	
	spectra_SyntaxErrorException_SyntaxErrorExceptionFunctionMap_Extension_VTable* vtable;
)

void spectra_Nova_SyntaxErrorExceptionFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_Nova_SyntaxErrorExceptionFunctionMap* spectra_Nova_SyntaxErrorExceptionFunctionMap_Nova_construct(spectra_Nova_SyntaxErrorExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_Nova_SyntaxErrorExceptionFunctionMap_Nova_destroy(spectra_Nova_SyntaxErrorExceptionFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_Nova_SyntaxErrorExceptionFunctionMap_Nova_this(spectra_Nova_SyntaxErrorExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_Nova_SyntaxErrorException* spectra_Nova_SyntaxErrorExceptionFunctionMap_functionMapSyntaxErrorExceptionFunctionMap0_Nova_construct(spectra_Nova_SyntaxErrorExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_Nova_SyntaxErrorException* spectra_Nova_SyntaxErrorExceptionFunctionMap_functionMapSyntaxErrorExceptionFunctionMap1_Nova_construct(spectra_Nova_SyntaxErrorExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message, spectra_tree_nodes_Nova_Node* node, spectra_tree_nodes_Nova_Program* program);
void spectra_Nova_SyntaxErrorExceptionFunctionMap_Nova_super(spectra_Nova_SyntaxErrorExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_Nova_SyntaxErrorExceptionPropertyMap, 
	
	spectra_SyntaxErrorException_SyntaxErrorExceptionPropertyMap_Extension_VTable* vtable;
)

void spectra_Nova_SyntaxErrorExceptionPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_Nova_SyntaxErrorExceptionPropertyMap* spectra_Nova_SyntaxErrorExceptionPropertyMap_Nova_construct(spectra_Nova_SyntaxErrorExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_Nova_SyntaxErrorExceptionPropertyMap_Nova_destroy(spectra_Nova_SyntaxErrorExceptionPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_Nova_SyntaxErrorExceptionPropertyMap_Nova_this(spectra_Nova_SyntaxErrorExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_Nova_SyntaxErrorExceptionPropertyMap_Nova_super(spectra_Nova_SyntaxErrorExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
