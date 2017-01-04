#ifndef FILE_spectra_tree_nodes_arrays_Nova_ArrayAccess_NOVA
#define FILE_spectra_tree_nodes_arrays_Nova_ArrayAccess_NOVA

typedef struct spectra_tree_nodes_arrays_Nova_ArrayAccess spectra_tree_nodes_arrays_Nova_ArrayAccess;
typedef struct spectra_tree_nodes_arrays_Nova_ArrayAccessFunctionMap spectra_tree_nodes_arrays_Nova_ArrayAccessFunctionMap;


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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/util/spectra_util_Nova_Location.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	spectra_tree_nodes_arrays_Nova_ArrayAccess, 
	
	spectra_tree_nodes_arrays_ArrayAccess_Extension_VTable* vtable;
	spectra_util_Nova_Location* spectra_tree_nodes_Nova_Node_Nova_location;
	nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_Node_Nova_annotations;
	spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_parent;
	nova_datastruct_list_Nova_Array* spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_dimensions;
)

void spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_arrays_Nova_ArrayAccess* spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_construct(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
void spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_destroy(spectra_tree_nodes_arrays_Nova_ArrayAccess** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_this(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
spectra_tree_nodes_arrays_Nova_ArrayAccess* spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_parse(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require);
char spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_parseDimension(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* dimension);
nova_Nova_String* spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_writeNova(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_super(spectra_tree_nodes_arrays_Nova_ArrayAccess* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_tree_nodes_arrays_Nova_ArrayAccessFunctionMap, 
	
	spectra_tree_nodes_arrays_ArrayAccess_ArrayAccessFunctionMap_Extension_VTable* vtable;
)

void spectra_tree_nodes_arrays_Nova_ArrayAccessFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_arrays_Nova_ArrayAccessFunctionMap* spectra_tree_nodes_arrays_Nova_ArrayAccessFunctionMap_Nova_construct(spectra_tree_nodes_arrays_Nova_ArrayAccessFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_arrays_Nova_ArrayAccessFunctionMap_Nova_destroy(spectra_tree_nodes_arrays_Nova_ArrayAccessFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_arrays_Nova_ArrayAccessFunctionMap_Nova_this(spectra_tree_nodes_arrays_Nova_ArrayAccessFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_arrays_Nova_ArrayAccessFunctionMap_Nova_super(spectra_tree_nodes_arrays_Nova_ArrayAccessFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
