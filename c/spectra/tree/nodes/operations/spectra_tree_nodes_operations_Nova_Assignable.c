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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <nova/NativeObject.h>



void spectra_tree_nodes_operations_Nova_Assignable_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

void spectra_tree_nodes_operations_Nova_Assignable_Nova_onAssigned(spectra_tree_nodes_operations_Nova_Assignable* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* value)
{
}

void spectra_tree_nodes_operations_Nova_Assignable_Nova_onAssignedTo(spectra_tree_nodes_operations_Nova_Assignable* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* declaration)
{
}

void spectra_tree_nodes_operations_Nova_Assignable_virtual_Nova_onAssigned(spectra_tree_nodes_operations_Nova_Assignable* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* value)
{
	this->vtable->itable.spectra_tree_nodes_operations_Nova_Assignable_virtual_Nova_onAssigned((spectra_tree_nodes_operations_Nova_Assignable*)(this), exceptionData, value);
}

void spectra_tree_nodes_operations_Nova_AssignableFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_operations_Nova_AssignableFunctionMap* spectra_tree_nodes_operations_Nova_AssignableFunctionMap_Nova_construct(spectra_tree_nodes_operations_Nova_AssignableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_operations_Nova_AssignableFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_operations_Assignable_AssignableFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_operations_Nova_AssignableFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_operations_Nova_AssignableFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_operations_Nova_AssignableFunctionMap_Nova_destroy(spectra_tree_nodes_operations_Nova_AssignableFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_operations_Nova_AssignableFunctionMap_Nova_this(spectra_tree_nodes_operations_Nova_AssignableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_operations_Nova_AssignableFunctionMap_functionMap0_Nova_onAssigned(spectra_tree_nodes_operations_Nova_AssignableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_Assignable* reference, spectra_tree_nodes_Nova_Value* value)
{
	spectra_tree_nodes_operations_Nova_Assignable_Nova_onAssigned(reference, exceptionData, value);
}

void spectra_tree_nodes_operations_Nova_AssignableFunctionMap_functionMap_Nova_onAssignedTo(spectra_tree_nodes_operations_Nova_AssignableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_Assignable* reference, spectra_tree_nodes_variables_Nova_VariableDeclaration* declaration)
{
	spectra_tree_nodes_operations_Nova_Assignable_Nova_onAssignedTo(reference, exceptionData, declaration);
}

void spectra_tree_nodes_operations_Nova_AssignableFunctionMap_Nova_super(spectra_tree_nodes_operations_Nova_AssignableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_operations_Nova_AssignableFunctionMap_virtualfunctionMap0_Nova_onAssigned(spectra_tree_nodes_operations_Nova_AssignableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_Assignable* reference, spectra_tree_nodes_Nova_Value* value)
{
	this->vtable->itable.spectra_tree_nodes_operations_Nova_AssignableFunctionMap_virtualfunctionMap0_Nova_onAssigned(this, exceptionData, reference, value);
}

void spectra_tree_nodes_operations_Nova_AssignablePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_operations_Nova_AssignablePropertyMap* spectra_tree_nodes_operations_Nova_AssignablePropertyMap_Nova_construct(spectra_tree_nodes_operations_Nova_AssignablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_operations_Nova_AssignablePropertyMap, this,);
	this->vtable = &spectra_tree_nodes_operations_Assignable_AssignablePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_operations_Nova_AssignablePropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_operations_Nova_AssignablePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_operations_Nova_AssignablePropertyMap_Nova_destroy(spectra_tree_nodes_operations_Nova_AssignablePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_operations_Nova_AssignablePropertyMap_Nova_this(spectra_tree_nodes_operations_Nova_AssignablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_operations_Nova_AssignablePropertyMap_Nova_super(spectra_tree_nodes_operations_Nova_AssignablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

