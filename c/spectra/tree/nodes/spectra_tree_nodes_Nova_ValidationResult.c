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
#include <nova/NativeObject.h>





void spectra_tree_nodes_Nova_ValidationResult_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_ValidationResult* spectra_tree_nodes_Nova_ValidationResult_Nova_construct(spectra_tree_nodes_Nova_ValidationResult* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* node)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_ValidationResult, this,);
	this->vtable = &spectra_tree_nodes_ValidationResult_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_ValidationResult_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_ValidationResult_Nova_this(this, exceptionData, node);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_ValidationResult_Nova_destroy(spectra_tree_nodes_Nova_ValidationResult** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_Nova_Node_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_ValidationResult_Nova_node, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ValidationResult_Nova_this(spectra_tree_nodes_Nova_ValidationResult* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* node)
{
	this->spectra_tree_nodes_Nova_ValidationResult_Nova_node = node;
}

char spectra_tree_nodes_Nova_ValidationResult_Accessor_Nova_skipValidation(spectra_tree_nodes_Nova_ValidationResult* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}


void spectra_tree_nodes_Nova_ValidationResult_Nova_super(spectra_tree_nodes_Nova_ValidationResult* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_ValidationResult_Nova_node = (spectra_tree_nodes_Nova_Node*)nova_null;
}

void spectra_tree_nodes_Nova_ValidationResultFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_ValidationResultFunctionMap* spectra_tree_nodes_Nova_ValidationResultFunctionMap_Nova_construct(spectra_tree_nodes_Nova_ValidationResultFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_ValidationResultFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_ValidationResult_ValidationResultFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValidationResultFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_ValidationResultFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_ValidationResultFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_ValidationResultFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ValidationResultFunctionMap_Nova_this(spectra_tree_nodes_Nova_ValidationResultFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_ValidationResult* spectra_tree_nodes_Nova_ValidationResultFunctionMap_functionMapValidationResultFunctionMap_Nova_construct(spectra_tree_nodes_Nova_ValidationResultFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* node)
{
	return spectra_tree_nodes_Nova_ValidationResult_Nova_construct(0, exceptionData, node);
}

void spectra_tree_nodes_Nova_ValidationResultFunctionMap_Nova_super(spectra_tree_nodes_Nova_ValidationResultFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_Nova_ValidationResultPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_ValidationResultPropertyMap* spectra_tree_nodes_Nova_ValidationResultPropertyMap_Nova_construct(spectra_tree_nodes_Nova_ValidationResultPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_ValidationResultPropertyMap, this,);
	this->vtable = &spectra_tree_nodes_ValidationResult_ValidationResultPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValidationResultPropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_ValidationResultPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_ValidationResultPropertyMap_Nova_destroy(spectra_tree_nodes_Nova_ValidationResultPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ValidationResultPropertyMap_Nova_this(spectra_tree_nodes_Nova_ValidationResultPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char spectra_tree_nodes_Nova_ValidationResultPropertyMap_functionMap_Nova_skipValidation(spectra_tree_nodes_Nova_ValidationResultPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ValidationResult* reference)
{
	return spectra_tree_nodes_Nova_ValidationResult_Accessor_Nova_skipValidation(reference, exceptionData);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_ValidationResultPropertyMap_functionMap_Nova_node(spectra_tree_nodes_Nova_ValidationResultPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ValidationResult* reference)
{
	return reference->spectra_tree_nodes_Nova_ValidationResult_Nova_node;
}

void spectra_tree_nodes_Nova_ValidationResultPropertyMap_Nova_super(spectra_tree_nodes_Nova_ValidationResultPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

