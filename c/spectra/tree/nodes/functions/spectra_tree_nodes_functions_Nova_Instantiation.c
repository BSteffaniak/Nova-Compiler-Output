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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ObjectNotation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ObjectNotationProperty.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Constructor.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionArgumentList.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Cast.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
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
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context68;
typedef struct
{
} Context139;



char spectra_tree_nodes_functions_Nova_Instantiation_Nova_lambda69(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* placeholder, int _2, nova_datastruct_list_Nova_List* _3, Context68* context);
char spectra_tree_nodes_functions_Nova_Instantiation_static_Nova_lambda140(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, Context139* context);

void spectra_tree_nodes_functions_Nova_Instantiation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_functions_Nova_Instantiation_Nova_construct(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_functions_Nova_Instantiation, this,);
	this->vtable = &spectra_tree_nodes_functions_Instantiation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_Variable_Nova_super((spectra_tree_nodes_variables_Nova_Variable*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_FunctionCall_Nova_super((spectra_tree_nodes_functions_Nova_FunctionCall*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_Instantiation_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_Nova_Instantiation_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_functions_Nova_Instantiation_Nova_destroy(spectra_tree_nodes_functions_Nova_Instantiation** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_functions_Nova_ObjectNotation_Nova_destroy(&(*this)->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_Nova_Instantiation_Nova_this(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_functions_Nova_FunctionCall_Nova_this((spectra_tree_nodes_functions_Nova_FunctionCall*)(this), exceptionData, parent, location);
}

void spectra_tree_nodes_functions_Nova_Instantiation_Nova_addChild(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* node)
{
	spectra_tree_nodes_functions_Nova_ObjectNotation* nova_local_0 = (spectra_tree_nodes_functions_Nova_ObjectNotation*)nova_null;
	
	this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation = (spectra_tree_nodes_functions_Nova_ObjectNotation*)((nova_local_0 = this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation) != (spectra_tree_nodes_functions_Nova_ObjectNotation*)nova_null ? nova_local_0 : spectra_tree_nodes_functions_Nova_ObjectNotation_Nova_construct(0, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), 0));
	spectra_tree_nodes_Nova_NodeList_Nova_addChild((spectra_tree_nodes_Nova_NodeList*)(this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation), exceptionData, node, (intptr_t)nova_null, (intptr_t)nova_null);
}

char spectra_tree_nodes_functions_Nova_Instantiation_Nova_parsePlaceholderChildren(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* nodes)
{
	Context68* contextArg69 = NOVA_MALLOC(sizeof(Context68));
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(nodes->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure300_Nova_allFunc)&spectra_tree_nodes_functions_Nova_Instantiation_Nova_lambda69, this, contextArg69, 0);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_functions_Nova_Instantiation_Nova_parseStatement(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	spectra_tree_nodes_functions_Nova_ObjectNotationProperty* l1_Nova_node = (spectra_tree_nodes_functions_Nova_ObjectNotationProperty*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = (spectra_tree_nodes_functions_Nova_ObjectNotationProperty*)(spectra_tree_nodes_functions_Nova_ObjectNotationProperty_static_Nova_parse(0, exceptionData, input, parent, location, require));
	return (spectra_tree_nodes_Nova_Node*)l1_Nova_node;
	return (spectra_tree_nodes_Nova_Node*)(nova_Nova_Object*)nova_null;
}

spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_functions_Nova_Instantiation_static_Nova_parse(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (nova_Nova_String_Nova_equals(spectra_util_Nova_CompilerStringFunctions_Nova_nextWord(input, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("new"))))
	{
		spectra_tree_nodes_functions_Nova_Instantiation* l2_Nova_node = (spectra_tree_nodes_functions_Nova_Instantiation*)nova_null;
		nova_Nova_String* l2_Nova_callString = (nova_Nova_String*)nova_null;
		int l2_Nova_parenthesisIndex = 0;
		nova_Nova_String* l2_Nova_className = (nova_Nova_String*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_functions_Nova_Instantiation_Nova_construct(0, exceptionData, parent, location);
		l2_Nova_callString = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("new"))->nova_Nova_String_Nova_count + 1, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		l2_Nova_parenthesisIndex = nova_Nova_String_1_Nova_indexOf(l2_Nova_callString, exceptionData, '(', (intptr_t)nova_null, (intptr_t)nova_null, 0);
		l2_Nova_className = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l2_Nova_callString), exceptionData, 0, l2_Nova_parenthesisIndex), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		if (spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(l2_Nova_className, exceptionData))
		{
			spectra_tree_nodes_Nova_ClassDeclaration* l3_Nova_clazz = (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null;
			
			l3_Nova_clazz = spectra_tree_nodes_Nova_NovaFile_Nova_getImportedClass(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(parent), exceptionData), exceptionData, l2_Nova_className, (intptr_t)nova_null);
			if ((l3_Nova_clazz) != (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null)
			{
				spectra_tree_nodes_functions_Nova_FunctionDeclaration* l4_Nova_constructor = (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null;
				Context139* contextArg140 = NOVA_MALLOC(sizeof(Context139));
				
				l4_Nova_constructor = (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(l3_Nova_clazz->spectra_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure316_Nova_func)&spectra_tree_nodes_functions_Nova_Instantiation_static_Nova_lambda140, nova_null, contextArg140));
				if ((l4_Nova_constructor) != (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null)
				{
					nova_Nova_String* l5_Nova_parameters = (nova_Nova_String*)nova_null;
					spectra_tree_nodes_functions_Nova_FunctionCall* l5_Nova_call = (spectra_tree_nodes_functions_Nova_FunctionCall*)nova_null;
					
					l5_Nova_parameters = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l2_Nova_callString), exceptionData, l2_Nova_parenthesisIndex, (intptr_t)nova_null));
					l5_Nova_call = spectra_tree_nodes_functions_Nova_FunctionCall_0_static_Nova_parse(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(l2_Nova_className, exceptionData, l5_Nova_parameters)), parent, 0, (intptr_t)nova_null, l4_Nova_constructor);
					if ((l5_Nova_call) != (spectra_tree_nodes_functions_Nova_FunctionCall*)nova_null)
					{
						return (spectra_tree_nodes_functions_Nova_Instantiation*)spectra_tree_nodes_Nova_Node_virtual_Nova_cloneTo((spectra_tree_nodes_Nova_Node*)(l5_Nova_call), exceptionData, (spectra_tree_nodes_Nova_Node*)(l2_Nova_node));
					}
				}
			}
		}
	}
	return (spectra_tree_nodes_functions_Nova_Instantiation*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeName(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration), exceptionData)->spectra_tree_nodes_Nova_Identifier_Nova_name;
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeObjectNotation(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)((this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation) != (spectra_tree_nodes_functions_Nova_ObjectNotation*)nova_null ? nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")), exceptionData, spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation), exceptionData)) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeNova(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus((nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("new ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_functions_Nova_FunctionCall_Nova_writeNova(((spectra_tree_nodes_functions_Nova_FunctionCall*)this), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Value_Nova_writeArrayAccess((spectra_tree_nodes_Nova_Value*)(this), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeObjectNotation(this, exceptionData), exceptionData, spectra_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData))))));
}

char spectra_tree_nodes_functions_Nova_Instantiation_Nova_lambda69(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* placeholder, int _2, nova_datastruct_list_Nova_List* _3, Context68* context)
{
	spectra_tree_nodes_Nova_Node* l1_Nova_property = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	spectra_tree_nodes_Nova_Node_virtual_Nova_addChild((spectra_tree_nodes_Nova_Node*)(this), exceptionData, (spectra_tree_nodes_Nova_Node*)(placeholder));
	l1_Nova_property = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Node_virtual_Nova_parseStatement((spectra_tree_nodes_Nova_Node*)(this), exceptionData, placeholder->spectra_tree_nodes_Nova_PlaceholderValue_Nova_value, (spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation), 0, (intptr_t)nova_null));
	if ((l1_Nova_property) != (spectra_tree_nodes_Nova_Node*)nova_null)
	{
		spectra_tree_nodes_Nova_NodeList_Nova_replace((spectra_tree_nodes_Nova_NodeList*)(this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation), exceptionData, (spectra_tree_nodes_Nova_Node*)(placeholder), l1_Nova_property, (intptr_t)nova_null);
	}
	return l1_Nova_property != (spectra_tree_nodes_Nova_Node*)nova_null;
}

char spectra_tree_nodes_functions_Nova_Instantiation_static_Nova_lambda140(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_FunctionDeclaration* _1, Context139* context)
{
	return nova_Nova_String_Nova_equals(_1->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("construct")));
}

spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_functions_Nova_Instantiation_Accessor_Nova_parentInstantiation(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


void spectra_tree_nodes_functions_Nova_Instantiation_Nova_super(spectra_tree_nodes_functions_Nova_Instantiation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation = (spectra_tree_nodes_functions_Nova_ObjectNotation*)nova_null;
}

void spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_InstantiationFunctionMap* spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_Nova_construct(spectra_tree_nodes_functions_Nova_InstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_functions_Nova_InstantiationFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_functions_Instantiation_InstantiationFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_IdentifierFunctionMap_Nova_super((spectra_tree_nodes_Nova_IdentifierFunctionMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableFunctionMap_Nova_super((spectra_tree_nodes_variables_Nova_VariableFunctionMap*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_Nova_super((spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_Nova_destroy(spectra_tree_nodes_functions_Nova_InstantiationFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_Nova_this(spectra_tree_nodes_functions_Nova_InstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_functionMapInstantiationFunctionMap_Nova_construct(spectra_tree_nodes_functions_Nova_InstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_functions_Nova_Instantiation_Nova_construct(0, exceptionData, parent, location);
}

void spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_functionMap_Nova_addChild(spectra_tree_nodes_functions_Nova_InstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Instantiation* reference, spectra_tree_nodes_Nova_Node* node)
{
	spectra_tree_nodes_functions_Nova_Instantiation_Nova_addChild(reference, exceptionData, node);
}

char spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_functionMap_Nova_parsePlaceholderChildren(spectra_tree_nodes_functions_Nova_InstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Instantiation* reference, spectra_tree_nodes_Nova_NodeList* nodes)
{
	return spectra_tree_nodes_functions_Nova_Instantiation_Nova_parsePlaceholderChildren(reference, exceptionData, nodes);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_functionMap_Nova_parseStatement(spectra_tree_nodes_functions_Nova_InstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Instantiation* reference, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_functions_Nova_Instantiation_Nova_parseStatement(reference, exceptionData, input, parent, location, require);
}

spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_functions_Nova_InstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_functions_Nova_Instantiation_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_functionMap_Nova_writeName(spectra_tree_nodes_functions_Nova_InstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Instantiation* reference)
{
	return spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeName(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_functionMap_Nova_writeObjectNotation(spectra_tree_nodes_functions_Nova_InstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Instantiation* reference)
{
	return spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeObjectNotation(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_functions_Nova_InstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Instantiation* reference)
{
	return spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_Nova_super(spectra_tree_nodes_functions_Nova_InstantiationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_functions_Nova_InstantiationPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_InstantiationPropertyMap* spectra_tree_nodes_functions_Nova_InstantiationPropertyMap_Nova_construct(spectra_tree_nodes_functions_Nova_InstantiationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_functions_Nova_InstantiationPropertyMap, this,);
	this->vtable = &spectra_tree_nodes_functions_Instantiation_InstantiationPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValuePropertyMap_Nova_super((spectra_tree_nodes_Nova_ValuePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_IdentifierPropertyMap_Nova_super((spectra_tree_nodes_Nova_IdentifierPropertyMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariablePropertyMap_Nova_super((spectra_tree_nodes_variables_Nova_VariablePropertyMap*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_FunctionCallPropertyMap_Nova_super((spectra_tree_nodes_functions_Nova_FunctionCallPropertyMap*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_InstantiationPropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_Nova_InstantiationPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_functions_Nova_InstantiationPropertyMap_Nova_destroy(spectra_tree_nodes_functions_Nova_InstantiationPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_Nova_InstantiationPropertyMap_Nova_this(spectra_tree_nodes_functions_Nova_InstantiationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_functions_Nova_ObjectNotation* spectra_tree_nodes_functions_Nova_InstantiationPropertyMap_functionMap_Nova_objectNotation(spectra_tree_nodes_functions_Nova_InstantiationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Instantiation* reference)
{
	return reference->spectra_tree_nodes_functions_Nova_Instantiation_Nova_objectNotation;
}

spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_functions_Nova_InstantiationPropertyMap_functionMap_Nova_parentInstantiation(spectra_tree_nodes_functions_Nova_InstantiationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Instantiation* reference)
{
	return spectra_tree_nodes_functions_Nova_Instantiation_Accessor_Nova_parentInstantiation(reference, exceptionData);
}

void spectra_tree_nodes_functions_Nova_InstantiationPropertyMap_Nova_super(spectra_tree_nodes_functions_Nova_InstantiationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

