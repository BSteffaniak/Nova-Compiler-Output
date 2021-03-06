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



void spectra_Nova_SyntaxErrorException_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_Nova_SyntaxErrorException* spectra_Nova_SyntaxErrorException_0_Nova_construct(spectra_Nova_SyntaxErrorException* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_Nova_SyntaxErrorException, this,);
	this->vtable = &spectra_SyntaxErrorException_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_exception_Nova_Exception_Nova_super((nova_exception_Nova_Exception*)this, exceptionData);
	spectra_Nova_SyntaxErrorException_Nova_super(this, exceptionData);
	
	{
		spectra_Nova_SyntaxErrorException_Nova_this(this, exceptionData);
	}
	
	return this;
}

spectra_Nova_SyntaxErrorException* spectra_Nova_SyntaxErrorException_1_Nova_construct(spectra_Nova_SyntaxErrorException* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message, spectra_tree_nodes_Nova_Node* node, spectra_tree_nodes_Nova_Program* program)
{
	CCLASS_NEW(spectra_Nova_SyntaxErrorException, this,);
	this->vtable = &spectra_SyntaxErrorException_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_exception_Nova_Exception_Nova_super((nova_exception_Nova_Exception*)this, exceptionData);
	spectra_Nova_SyntaxErrorException_Nova_super(this, exceptionData);
	
	{
		spectra_Nova_SyntaxErrorException_0_Nova_this(this, exceptionData, message, node, program);
	}
	
	return this;
}

void spectra_Nova_SyntaxErrorException_Nova_destroy(spectra_Nova_SyntaxErrorException** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_Nova_SyntaxErrorException_Nova_this(spectra_Nova_SyntaxErrorException* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_Nova_SyntaxErrorException_0_Nova_this(spectra_Nova_SyntaxErrorException* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message, spectra_tree_nodes_Nova_Node* node, spectra_tree_nodes_Nova_Program* program)
{
	spectra_tree_nodes_Nova_Node* nova_local_0 = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	node = (spectra_tree_nodes_Nova_Node*)(node == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)node);
	program = (spectra_tree_nodes_Nova_Program*)(program == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)program);
	nova_exception_Nova_Exception_Nova_this((nova_exception_Nova_Exception*)(this), exceptionData, message);
	node = (spectra_tree_nodes_Nova_Node*)((nova_local_0 = node) != (spectra_tree_nodes_Nova_Node*)nova_null ? nova_local_0 : (spectra_tree_nodes_Nova_Node*)program);
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_Nova_Program_Accessor_Nova_compiler(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_program((spectra_tree_nodes_Nova_Node*)(node), exceptionData), exceptionData)->spectra_Nova_Spectra_Nova_errors), exceptionData, (nova_Nova_Object*)(message));
}

void spectra_Nova_SyntaxErrorException_Nova_super(spectra_Nova_SyntaxErrorException* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_Nova_SyntaxErrorExceptionFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_Nova_SyntaxErrorExceptionFunctionMap* spectra_Nova_SyntaxErrorExceptionFunctionMap_Nova_construct(spectra_Nova_SyntaxErrorExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_Nova_SyntaxErrorExceptionFunctionMap, this,);
	this->vtable = &spectra_SyntaxErrorException_SyntaxErrorExceptionFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_exception_Nova_ExceptionFunctionMap_Nova_super((nova_exception_Nova_ExceptionFunctionMap*)this, exceptionData);
	spectra_Nova_SyntaxErrorExceptionFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_Nova_SyntaxErrorExceptionFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_Nova_SyntaxErrorExceptionFunctionMap_Nova_destroy(spectra_Nova_SyntaxErrorExceptionFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_Nova_SyntaxErrorExceptionFunctionMap_Nova_this(spectra_Nova_SyntaxErrorExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_Nova_SyntaxErrorException* spectra_Nova_SyntaxErrorExceptionFunctionMap_functionMapSyntaxErrorExceptionFunctionMap0_Nova_construct(spectra_Nova_SyntaxErrorExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_Nova_SyntaxErrorException_0_Nova_construct(0, exceptionData);
}

spectra_Nova_SyntaxErrorException* spectra_Nova_SyntaxErrorExceptionFunctionMap_functionMapSyntaxErrorExceptionFunctionMap1_Nova_construct(spectra_Nova_SyntaxErrorExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message, spectra_tree_nodes_Nova_Node* node, spectra_tree_nodes_Nova_Program* program)
{
	return spectra_Nova_SyntaxErrorException_1_Nova_construct(0, exceptionData, message, node, program);
}

void spectra_Nova_SyntaxErrorExceptionFunctionMap_Nova_super(spectra_Nova_SyntaxErrorExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_Nova_SyntaxErrorExceptionPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_Nova_SyntaxErrorExceptionPropertyMap* spectra_Nova_SyntaxErrorExceptionPropertyMap_Nova_construct(spectra_Nova_SyntaxErrorExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_Nova_SyntaxErrorExceptionPropertyMap, this,);
	this->vtable = &spectra_SyntaxErrorException_SyntaxErrorExceptionPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_exception_Nova_ExceptionPropertyMap_Nova_super((nova_exception_Nova_ExceptionPropertyMap*)this, exceptionData);
	spectra_Nova_SyntaxErrorExceptionPropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_Nova_SyntaxErrorExceptionPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_Nova_SyntaxErrorExceptionPropertyMap_Nova_destroy(spectra_Nova_SyntaxErrorExceptionPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_Nova_SyntaxErrorExceptionPropertyMap_Nova_this(spectra_Nova_SyntaxErrorExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_Nova_SyntaxErrorExceptionPropertyMap_Nova_super(spectra_Nova_SyntaxErrorExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

