#pragma once
#ifndef FILE_spectra_tree_Nova_SyntaxTree_NOVA
#define FILE_spectra_tree_Nova_SyntaxTree_NOVA

typedef struct spectra_tree_Nova_SyntaxTree spectra_tree_Nova_SyntaxTree;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct spectra_tree_nodes_Nova_NovaFile spectra_tree_nodes_Nova_NovaFile;

typedef void (*spectra_tree_Nova_SyntaxTree_closure1_Nova_func)(void*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_NovaFile*, void*);
typedef void (*spectra_tree_Nova_SyntaxTree_closure2_Nova_func)(void*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_NovaFile*, void*);
typedef void (*spectra_tree_Nova_SyntaxTree_closure3_Nova_func)(void*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_NovaFile*, void*);
typedef void (*spectra_tree_Nova_SyntaxTree_closure4_Nova_func)(void*, nova_exception_Nova_ExceptionData*, spectra_tree_nodes_Nova_NovaFile*, void*);

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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Stack.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/spectra_Nova_Spectra.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/spectra_tree_Nova_AnnotationSearchResult.h>
#include <spectra/tree/spectra_tree_Nova_StatementIterator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>


typedef struct spectra_tree_SyntaxTree_Extension_VTable spectra_tree_SyntaxTree_Extension_VTable;
struct spectra_tree_SyntaxTree_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
};

extern spectra_tree_SyntaxTree_Extension_VTable spectra_tree_SyntaxTree_Extension_VTable_val;


CCLASS_CLASS
(
	spectra_tree_Nova_SyntaxTree, 
	
	spectra_tree_SyntaxTree_Extension_VTable* vtable;
	spectra_tree_nodes_Nova_Program* spectra_tree_Nova_SyntaxTree_Nova_root;
	char spectra_tree_Nova_SyntaxTree_Nova_phase;
	spectra_Nova_Spectra* spectra_tree_Nova_SyntaxTree_Nova_compiler;
	struct Private* prv;
)

void spectra_tree_Nova_SyntaxTree_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_Nova_SyntaxTree* spectra_tree_Nova_SyntaxTree_Nova_construct(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_Nova_Spectra* compiler, spectra_tree_nodes_Nova_Program* root);
void spectra_tree_Nova_SyntaxTree_Nova_destroy(spectra_tree_Nova_SyntaxTree** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_Nova_SyntaxTree_Nova_this(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_Nova_Spectra* compiler, spectra_tree_nodes_Nova_Program* root);
void spectra_tree_Nova_SyntaxTree_Nova_processFiles(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_SyntaxTree_closure4_Nova_func spectra_tree_Nova_SyntaxTree_Nova_func, void* spectra_tree_Nova_SyntaxTree_ref_Nova_func, void* func_context);
void spectra_tree_Nova_SyntaxTree_Nova_formTree(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_Nova_SyntaxTree_Nova_validateTypes(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_Nova_SyntaxTree_Nova_parseStatements(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_Nova_AnnotationSearchResult* spectra_tree_Nova_SyntaxTree_static_Nova_searchAnnotations(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement);
void spectra_tree_Nova_SyntaxTree_Nova_super(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif