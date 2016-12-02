#pragma once
#ifndef FILE_compiler_tree_nodes_Nova_Node_NOVA
#define FILE_compiler_tree_nodes_Nova_Node_NOVA

typedef struct compiler_tree_nodes_Nova_Node compiler_tree_nodes_Nova_Node;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;

typedef void (*compiler_tree_nodes_Nova_Node_closure1_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*compiler_tree_nodes_Nova_Node_closure2_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*compiler_tree_nodes_Nova_Node_closure3_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*compiler_tree_nodes_Nova_Node_closure4_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*compiler_tree_nodes_Nova_Node_closure5_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*compiler_tree_nodes_Nova_Node_closure6_Nova_action)(void*, nova_exception_Nova_ExceptionData*, void*);

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
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <compiler/compiler_Nova_InvalidParseException.h>
#include <compiler/compiler_Nova_SyntaxErrorException.h>
#include <compiler/error/compiler_error_Nova_UnimplementedOperationException.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionCall.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Instantiation.h>
#include <compiler/tree/nodes/functions/closures/compiler_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NodeList.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct compiler_tree_nodes_Node_Extension_VTable compiler_tree_nodes_Node_Extension_VTable;
struct compiler_tree_nodes_Node_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	void (*compiler_tree_nodes_Nova_Node_virtual_Nova_addChild)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Node*);
	compiler_tree_nodes_variables_Nova_VariableDeclaration* (*compiler_tree_nodes_Nova_Node_virtual_Nova_findVariableDeclaration)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, int);
	compiler_tree_nodes_Nova_Node* (*compiler_tree_nodes_Nova_Node_virtual_Nova_parseStatement)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, nova_Nova_String*, compiler_tree_nodes_Nova_Node*, compiler_util_Nova_Location*, int);
	compiler_tree_nodes_Nova_Node* (*compiler_tree_nodes_Nova_Node_virtual_Nova_generateTemporaryScopeNode)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_Nova_Node* (*compiler_tree_nodes_Nova_Node_virtual_Nova_cloneTo)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Node*);
	char (*compiler_tree_nodes_Nova_Node_virtual_Nova_replace)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Node*, compiler_tree_nodes_Nova_Node*);
	char (*compiler_tree_nodes_Nova_Node_virtual_Nova_validateTypes)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	char (*compiler_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	char (*compiler_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholderChildren)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_NodeList*);
	nova_Nova_String* (*compiler_tree_nodes_Nova_Node_virtual_Nova_writeAnnotationSeparator)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	nova_Nova_String* (*compiler_tree_nodes_Nova_Node_virtual_Nova_toNova)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	nova_Nova_String* (*compiler_tree_nodes_Nova_Node_virtual_Nova_writeNova)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_Nova_Scope* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_Nova_Scope* (*compiler_tree_nodes_Nova_Node_virtual_Mutator_Nova_scope)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_Nova_Scope*);
	int (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_index)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_Nova_Program* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_program)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_functions_Nova_Instantiation* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentInstantiation)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_functions_closures_Nova_LambdaExpression* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentLambda)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_Nova_NovaFile* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_functions_Nova_FunctionCall* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_functions_Nova_FunctionDeclaration* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_exceptionhandling_Nova_Try* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_Nova_ClassDeclaration* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
	compiler_tree_nodes_Nova_Node* (*compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_scopeConsumer)(compiler_tree_nodes_Nova_Node*, nova_exception_Nova_ExceptionData*);
};

extern compiler_tree_nodes_Node_Extension_VTable compiler_tree_nodes_Node_Extension_VTable_val;


CCLASS_CLASS
(
	compiler_tree_nodes_Nova_Node, 
	
	compiler_tree_nodes_Node_Extension_VTable* vtable;
	compiler_util_Nova_Location* compiler_tree_nodes_Nova_Node_Nova_location;
	nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_Node_Nova_annotations;
	compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Nova_parent;
)

void compiler_tree_nodes_Nova_Node_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Nova_construct(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location);
void compiler_tree_nodes_Nova_Node_Nova_destroy(compiler_tree_nodes_Nova_Node** this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Nova_getAdjacentNode(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int offset);
void compiler_tree_nodes_Nova_Node_Nova_this(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location);
void compiler_tree_nodes_Nova_Node_Nova_addAnnotation(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_annotations_Nova_Annotation* annotation);
void compiler_tree_nodes_Nova_Node_0_Nova_detach(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_nodes_Nova_Node_1_Nova_detach(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* fromNode);
void compiler_tree_nodes_Nova_Node_Nova_addChild(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child);
void compiler_tree_nodes_Nova_Node_Nova_onAdded(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent);
void compiler_tree_nodes_Nova_Node_Nova_onRemoved(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* from);
char compiler_tree_nodes_Nova_Node_Nova_onAfterDecoded(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_Nova_onNextStatementDecoded(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* next);
void compiler_tree_nodes_Nova_Node_Nova_onStackPopped(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_nodes_Nova_Node_Nova_followedByScope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, char scope);
void compiler_tree_nodes_Nova_Node_Nova_onChildReplaced(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* old, compiler_tree_nodes_Nova_Node* replacement);
void compiler_tree_nodes_Nova_Node_Nova_onReplaced(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_tree_nodes_Nova_Node* replacement);
void compiler_tree_nodes_Nova_Node_Nova_onChildDetached(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child);
compiler_tree_nodes_Nova_ValidationResult* compiler_tree_nodes_Nova_Node_Nova_validate(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int phase);
compiler_tree_nodes_variables_Nova_VariableDeclaration* compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Nova_parseStatement(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_nodes_Nova_Node_static_Nova_strictParse(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node_closure3_Nova_action compiler_tree_nodes_Nova_Node_Nova_action, void* compiler_tree_nodes_Nova_Node_ref_Nova_action, void* action_context);
void compiler_tree_nodes_Nova_Node_static_Nova_catchSyntaxErrors(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node_closure6_Nova_action compiler_tree_nodes_Nova_Node_Nova_action, void* compiler_tree_nodes_Nova_Node_ref_Nova_action, void* action_context);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Nova_clone(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int cloneChildren);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Nova_cloneTo(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* other);
char compiler_tree_nodes_Nova_Node_Nova_replace(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* toReplace, compiler_tree_nodes_Nova_Node* replacement);
char compiler_tree_nodes_Nova_Node_Nova_validateTypes(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NodeList* nodes);
nova_Nova_String* compiler_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* compiler_tree_nodes_Nova_Node_Nova_writeAnnotations(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* compiler_tree_nodes_Nova_Node_Nova_toNova(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* compiler_tree_nodes_Nova_Node_Nova_writeNova(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* compiler_tree_nodes_Nova_Node_Nova_toString(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* compiler_tree_nodes_Nova_Node_Accessor_Nova_locationInfo(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* compiler_tree_nodes_Nova_Node_Accessor_Nova_nodeType(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentWithScope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_Nova_Node_Accessor_Nova_scope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_Nova_Node_Mutator_Nova_scope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Scope* value);
int compiler_tree_nodes_Nova_Node_Accessor_Nova_index(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
int compiler_tree_nodes_Nova_Node_Mutator_Nova_index(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int value);
char compiler_tree_nodes_Nova_Node_Accessor_Nova_isDecoding(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_Accessor_Nova_isValid(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_Accessor_Nova_isUserMade(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinStaticContext(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinExternalContext(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Program* compiler_tree_nodes_Nova_Node_Accessor_Nova_program(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_Accessor_Nova_phase(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_functions_Nova_Instantiation* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_functions_closures_Nova_LambdaExpression* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentLambda(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_NovaFile* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinFile(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_functions_Nova_FunctionCall* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunctionCall(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_functions_Nova_FunctionDeclaration* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinFunction(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_exceptionhandling_Nova_Try* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinTry(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_ClassDeclaration* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinClass(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_Nova_Node_Accessor_Nova_parentScope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_Accessor_Nova_isWithinScope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_Accessor_Nova_containsScope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Accessor_Nova_next(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_Accessor_Nova_previous(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_nodes_Nova_Node_Nova_super(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_nodes_Nova_Node_virtual_Nova_addChild(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child);
compiler_tree_nodes_variables_Nova_VariableDeclaration* compiler_tree_nodes_Nova_Node_virtual_Nova_findVariableDeclaration(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_virtual_Nova_parseStatement(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_virtual_Nova_generateTemporaryScopeNode(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_virtual_Nova_cloneTo(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* other);
char compiler_tree_nodes_Nova_Node_virtual_Nova_replace(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* toReplace, compiler_tree_nodes_Nova_Node* replacement);
char compiler_tree_nodes_Nova_Node_virtual_Nova_validateTypes(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholderChildren(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_NodeList* nodes);
nova_Nova_String* compiler_tree_nodes_Nova_Node_virtual_Nova_writeAnnotationSeparator(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* compiler_tree_nodes_Nova_Node_virtual_Nova_toNova(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* compiler_tree_nodes_Nova_Node_virtual_Nova_writeNova(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Scope* compiler_tree_nodes_Nova_Node_virtual_Mutator_Nova_scope(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Scope* value);
int compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_index(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Program* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_program(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_functions_Nova_Instantiation* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentInstantiation(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_functions_closures_Nova_LambdaExpression* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentLambda(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_NovaFile* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_functions_Nova_FunctionCall* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_functions_Nova_FunctionDeclaration* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_exceptionhandling_Nova_Try* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_ClassDeclaration* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_scopeConsumer(compiler_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
