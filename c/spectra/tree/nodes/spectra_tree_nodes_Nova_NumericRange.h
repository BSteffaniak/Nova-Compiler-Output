#ifndef FILE_spectra_tree_nodes_Nova_NumericRange_NOVA
#define FILE_spectra_tree_nodes_Nova_NumericRange_NOVA

typedef struct spectra_tree_nodes_Nova_NumericRange spectra_tree_nodes_Nova_NumericRange;
typedef struct spectra_tree_nodes_Nova_NumericRangeFunctionMap spectra_tree_nodes_Nova_NumericRangeFunctionMap;


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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ObjectNotation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ObjectNotationProperty.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Constructor.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionArgumentList.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Cast.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	spectra_tree_nodes_Nova_NumericRange, 
	
	spectra_tree_nodes_NumericRange_Extension_VTable* vtable;
	spectra_util_Nova_Location* spectra_tree_nodes_Nova_Node_Nova_location;
	nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_Node_Nova_annotations;
	spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_parent;
	spectra_tree_nodes_arrays_Nova_ArrayAccess* spectra_tree_nodes_Nova_Value_Nova_arrayAccess;
	spectra_tree_nodes_Nova_Type* spectra_tree_nodes_Nova_Value_Nova_type;
	nova_Nova_String* spectra_tree_nodes_Nova_Identifier_Nova_name;
	spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_variables_Nova_Variable_Nova_declaration;
	char spectra_tree_nodes_variables_Nova_Variable_Nova_safeNavigation;
	spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_variables_Nova_Variable_Nova_accessedNode;
	spectra_tree_nodes_functions_Nova_FunctionArgumentList* spectra_tree_nodes_functions_Nova_FunctionCall_Nova_argumentList;
	spectra_tree_nodes_functions_Nova_ObjectNotation* spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation;
)

void spectra_tree_nodes_Nova_NumericRange_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_NumericRange* spectra_tree_nodes_Nova_NumericRange_Nova_construct(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
void spectra_tree_nodes_Nova_NumericRange_Nova_destroy(spectra_tree_nodes_Nova_NumericRange** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_NumericRange_Nova_this(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
spectra_tree_nodes_Nova_NumericRange* spectra_tree_nodes_Nova_NumericRange_static_Nova_parse(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require);
nova_Nova_String* spectra_tree_nodes_Nova_NumericRange_Nova_writeNova(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_NumericRange_Accessor_Nova_start(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_NumericRange_Mutator_Nova_start(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* value);
spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_NumericRange_Accessor_Nova_end(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_Value* spectra_tree_nodes_Nova_NumericRange_Mutator_Nova_end(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* value);
void spectra_tree_nodes_Nova_NumericRange_Nova_super(spectra_tree_nodes_Nova_NumericRange* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_tree_nodes_Nova_NumericRangeFunctionMap, 
	
	spectra_tree_nodes_NumericRange_NumericRangeFunctionMap_Extension_VTable* vtable;
)

void spectra_tree_nodes_Nova_NumericRangeFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_NumericRangeFunctionMap* spectra_tree_nodes_Nova_NumericRangeFunctionMap_Nova_construct(spectra_tree_nodes_Nova_NumericRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_NumericRangeFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_NumericRangeFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_Nova_NumericRangeFunctionMap_Nova_this(spectra_tree_nodes_Nova_NumericRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_nodes_Nova_NumericRange* spectra_tree_nodes_Nova_NumericRangeFunctionMap_functionMapNumericRangeFunctionMap_static_Nova_construct(spectra_tree_nodes_Nova_NumericRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location);
spectra_tree_nodes_Nova_NumericRange* spectra_tree_nodes_Nova_NumericRangeFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_Nova_NumericRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require);
nova_Nova_String* spectra_tree_nodes_Nova_NumericRangeFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_Nova_NumericRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NumericRange* reference);
void spectra_tree_nodes_Nova_NumericRangeFunctionMap_Nova_super(spectra_tree_nodes_Nova_NumericRangeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
