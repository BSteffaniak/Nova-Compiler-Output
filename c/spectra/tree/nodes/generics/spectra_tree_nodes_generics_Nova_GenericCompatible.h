#pragma once
#ifndef FILE_spectra_tree_nodes_generics_Nova_GenericCompatible_NOVA
#define FILE_spectra_tree_nodes_generics_Nova_GenericCompatible_NOVA

typedef struct spectra_tree_nodes_generics_Nova_GenericCompatible spectra_tree_nodes_generics_Nova_GenericCompatible;


#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
#include <NovaClassData.h>
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
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/generics/spectra_tree_nodes_generics_Nova_GenericParameter.h>


typedef struct spectra_tree_nodes_generics_GenericCompatible_Extension_VTable spectra_tree_nodes_generics_GenericCompatible_Extension_VTable;
struct spectra_tree_nodes_generics_GenericCompatible_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
};

extern spectra_tree_nodes_generics_GenericCompatible_Extension_VTable spectra_tree_nodes_generics_GenericCompatible_Extension_VTable_val;


CCLASS_CLASS
(
	spectra_tree_nodes_generics_Nova_GenericCompatible, 
	
	spectra_tree_nodes_generics_GenericCompatible_Extension_VTable* vtable;
)

void spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
char spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_parseGenericParameters(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int requireWholeString);
nova_Nova_String* spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_writeGenericParameters(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_generics_Nova_GenericCompatible* spectra_tree_nodes_generics_Nova_GenericCompatible_1_Nova_cloneTo(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_generics_Nova_GenericCompatible* other);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_generics_Nova_GenericCompatible_Accessor_Nova_genericParameters(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_generics_Nova_GenericCompatible_Mutator_Nova_genericParameters(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* value);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Accessor_Nova_genericParameters(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_generics_Nova_GenericCompatible_virtual_Mutator_Nova_genericParameters(spectra_tree_nodes_generics_Nova_GenericCompatible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* value);

#endif