#ifndef FILE_spectra_tree_nodes_Nova_ImportList_NOVA
#define FILE_spectra_tree_nodes_Nova_ImportList_NOVA

typedef struct spectra_tree_nodes_Nova_ImportList spectra_tree_nodes_Nova_ImportList;
typedef struct spectra_tree_nodes_Nova_ImportListFunctionMap spectra_tree_nodes_Nova_ImportListFunctionMap;
typedef struct spectra_tree_nodes_Nova_ImportListPropertyMap spectra_tree_nodes_Nova_ImportListPropertyMap;


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
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	spectra_tree_nodes_Nova_ImportList, 
	
	spectra_tree_nodes_ImportList_Extension_VTable* vtable;
	spectra_util_Nova_Location* spectra_tree_nodes_Nova_Node_Nova_location;
	nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_Node_Nova_annotations;
	spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_parent;
	nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NodeList_Nova_children;
)

void spectra_tree_nodes_Nova_ImportList_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_ImportList* spectra_tree_nodes_Nova_ImportList_Nova_construct(spectra_tree_nodes_Nova_ImportList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
void spectra_tree_nodes_Nova_ImportList_Nova_destroy(spectra_tree_nodes_Nova_ImportList** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_ImportList_Nova_this(spectra_tree_nodes_Nova_ImportList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_ImportList_Accessor_Nova_imports(spectra_tree_nodes_Nova_ImportList* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_ImportList_Nova_super(spectra_tree_nodes_Nova_ImportList* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_tree_nodes_Nova_ImportListFunctionMap, 
	
	spectra_tree_nodes_ImportList_ImportListFunctionMap_Extension_VTable* vtable;
)

void spectra_tree_nodes_Nova_ImportListFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_ImportListFunctionMap* spectra_tree_nodes_Nova_ImportListFunctionMap_Nova_construct(spectra_tree_nodes_Nova_ImportListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_ImportListFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_ImportListFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_ImportListFunctionMap_Nova_this(spectra_tree_nodes_Nova_ImportListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_ImportList* spectra_tree_nodes_Nova_ImportListFunctionMap_functionMapImportListFunctionMap_Nova_construct(spectra_tree_nodes_Nova_ImportListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
void spectra_tree_nodes_Nova_ImportListFunctionMap_Nova_super(spectra_tree_nodes_Nova_ImportListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_tree_nodes_Nova_ImportListPropertyMap, 
	
	spectra_tree_nodes_ImportList_ImportListPropertyMap_Extension_VTable* vtable;
)

void spectra_tree_nodes_Nova_ImportListPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_ImportListPropertyMap* spectra_tree_nodes_Nova_ImportListPropertyMap_Nova_construct(spectra_tree_nodes_Nova_ImportListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_ImportListPropertyMap_Nova_destroy(spectra_tree_nodes_Nova_ImportListPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_ImportListPropertyMap_Nova_this(spectra_tree_nodes_Nova_ImportListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_ImportListPropertyMap_functionMap_Nova_imports(spectra_tree_nodes_Nova_ImportListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ImportList* reference);
void spectra_tree_nodes_Nova_ImportListPropertyMap_Nova_super(spectra_tree_nodes_Nova_ImportListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
