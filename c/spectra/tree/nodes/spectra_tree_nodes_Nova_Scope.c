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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignment.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Catch.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Throw.h>
#include <spectra/tree/nodes/controlstructures/spectra_tree_nodes_controlstructures_Nova_IfStatement.h>
#include <spectra/tree/nodes/controlstructures/spectra_tree_nodes_controlstructures_Nova_ElseStatement.h>
#include <spectra/tree/nodes/controlstructures/loops/spectra_tree_nodes_controlstructures_loops_Nova_Loop.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_LocalDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Return.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context39;
typedef struct
{
	/* var
	PlaceholderValue placeholder */ spectra_tree_nodes_Nova_PlaceholderValue** spectra_tree_nodes_Nova_Scope_Nova_placeholder;
	/* Node child */ spectra_tree_nodes_Nova_Node** spectra_tree_nodes_Nova_Scope_Nova_child;
} Context40;


CCLASS_PRIVATE
(
	spectra_tree_nodes_Nova_Scope,
	int spectra_tree_nodes_Nova_Scope_Nova_id;
	
)

nova_Nova_String* spectra_tree_nodes_Nova_Scope_Nova_printPrecedingWhitespace(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child);
nova_Nova_String* spectra_tree_nodes_Nova_Scope_Nova_childToNova(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child);
char spectra_tree_nodes_Nova_Scope_Nova_lambda40(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child, int _2, nova_datastruct_list_Nova_List* _3, Context39* context);
void spectra_tree_nodes_Nova_Scope_Nova_lambda41(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, Context40* context);
nova_datastruct_list_Nova_Array* generated30(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* value0, nova_meta_Nova_Class* value1);

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_Scope_Nova_LADDER_FORM;
void spectra_tree_nodes_Nova_Scope_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		spectra_tree_nodes_Nova_Scope_Nova_LADDER_FORM = generated30(0, exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_controlstructures_ElseStatement_Extension_VTable_val.classInstance), (nova_meta_Nova_Class*)(spectra_tree_nodes_exceptionhandling_Catch_Extension_VTable_val.classInstance));
	}
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_Scope_Nova_construct(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_Scope, this);
	this->vtable = &spectra_tree_nodes_Scope_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeList_Nova_super((spectra_tree_nodes_Nova_NodeList*)this, exceptionData);
	spectra_tree_nodes_Nova_Scope_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_Scope_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_Scope_Nova_destroy(spectra_tree_nodes_Nova_Scope** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Scope_Nova_declarations, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_Scope_Nova_this(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_NodeList_Nova_this((spectra_tree_nodes_Nova_NodeList*)(this), exceptionData, parent, location);
	this->spectra_tree_nodes_Nova_Scope_Nova_declarations = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Scope_Nova_parseStatement(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	spectra_tree_nodes_Nova_Node* l1_Nova_node = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (spectra_tree_nodes_Nova_Node_Accessor_Nova_phase((spectra_tree_nodes_Nova_Node*)(this), exceptionData) == 1)
	{
		return (spectra_tree_nodes_Nova_Node*)spectra_tree_nodes_Nova_PlaceholderValue_static_Nova_parse(0, exceptionData, input, parent, location, (intptr_t)nova_null);
	}
	l1_Nova_node = (spectra_tree_nodes_Nova_Node*)((nova_Nova_Object*)nova_null);
	if (((l1_Nova_node)) == (spectra_tree_nodes_Nova_Node*)nova_null)
	{
		l1_Nova_node = spectra_tree_nodes_Nova_Accessible_static_Nova_parseDotAccess(0, exceptionData, input, parent, require);
		if (((l1_Nova_node)) == (spectra_tree_nodes_Nova_Node*)nova_null)
		{
			l1_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_controlstructures_Nova_IfStatement_static_Nova_parse(0, exceptionData, input, parent, location, require));
			if (((l1_Nova_node)) == (spectra_tree_nodes_Nova_Node*)nova_null)
			{
				l1_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_controlstructures_Nova_ElseStatement_static_Nova_parse(0, exceptionData, input, parent, location, require));
				if (((l1_Nova_node)) == (spectra_tree_nodes_Nova_Node*)nova_null)
				{
					l1_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_exceptionhandling_Nova_Throw_static_Nova_parse(0, exceptionData, input, parent, location, require));
					if (((l1_Nova_node)) == (spectra_tree_nodes_Nova_Node*)nova_null)
					{
						l1_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_controlstructures_loops_Nova_Loop_static_Nova_parse(0, exceptionData, input, parent, location, require));
						if (((l1_Nova_node)) == (spectra_tree_nodes_Nova_Node*)nova_null)
						{
							l1_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Return_static_Nova_parse(0, exceptionData, input, parent, location, require));
							if (((l1_Nova_node)) == (spectra_tree_nodes_Nova_Node*)nova_null)
							{
								l1_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_variables_Nova_LocalDeclaration_static_Nova_parse(0, exceptionData, input, parent, location, require));
								if (((l1_Nova_node)) == (spectra_tree_nodes_Nova_Node*)nova_null)
								{
									l1_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_operations_Nova_Assignment_static_Nova_parse(0, exceptionData, input, parent, location, require));
									if (((l1_Nova_node)) == (spectra_tree_nodes_Nova_Node*)nova_null)
									{
										l1_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_operations_Nova_Operation_static_Nova_parse(0, exceptionData, input, parent, location, require));
										if (((l1_Nova_node)) == (spectra_tree_nodes_Nova_Node*)nova_null)
										{
											l1_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, input, parent, location, require));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(l1_Nova_node->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_variables_LocalDeclaration_Extension_VTable_val.classInstance)))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_Scope_Nova_declarations), exceptionData, (nova_Nova_Object*)((spectra_tree_nodes_variables_Nova_LocalDeclaration*)l1_Nova_node));
	}
	return l1_Nova_node;
}

char spectra_tree_nodes_Nova_Scope_Nova_parsePlaceholders(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context39* contextArg41 = NOVA_MALLOC(sizeof(Context39));
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure300_Nova_allFunc)&spectra_tree_nodes_Nova_Scope_Nova_lambda40, this, contextArg41, 0);
}

nova_Nova_String* spectra_tree_nodes_Nova_Scope_Nova_printPrecedingWhitespace(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child)
{
	return (nova_Nova_String*)(nova_datastruct_list_Nova_List_0_Nova_contains((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_Scope_Nova_LADDER_FORM), exceptionData, (nova_Nova_Object*)(child->vtable->classInstance)) ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")));
}

nova_Nova_String* spectra_tree_nodes_Nova_Scope_Nova_childToNova(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Scope_Nova_printPrecedingWhitespace(this, exceptionData, child), exceptionData, spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(child), exceptionData));
}

nova_Nova_String* spectra_tree_nodes_Nova_Scope_Nova_writeNova(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("{")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&spectra_tree_nodes_Nova_Scope_Nova_childToNova, this, nova_null)), exceptionData, 0), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData) > 0 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("}")))))));
}

char spectra_tree_nodes_Nova_Scope_Nova_lambda40(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child, int _2, nova_datastruct_list_Nova_List* _3, Context39* context)
{
	if (nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(child->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_PlaceholderValue_Extension_VTable_val.classInstance)))
	{
		spectra_tree_nodes_Nova_PlaceholderValue* l2_Nova_placeholder = (spectra_tree_nodes_Nova_PlaceholderValue*)nova_null;
		Context40* contextArg40 = NOVA_MALLOC(sizeof(Context40));
		contextArg40->spectra_tree_nodes_Nova_Scope_Nova_placeholder = &l2_Nova_placeholder;
		contextArg40->spectra_tree_nodes_Nova_Scope_Nova_child = &child;
		
		l2_Nova_placeholder = (spectra_tree_nodes_Nova_PlaceholderValue*)child;
		spectra_tree_nodes_Nova_Node_static_Nova_catchSyntaxErrors((spectra_tree_nodes_Nova_Node*)(this), exceptionData, (spectra_tree_nodes_Nova_Node_closure365_Nova_action)&spectra_tree_nodes_Nova_Scope_Nova_lambda41, this, contextArg40);
		return 0;
	}
	else
	{
		return 1;
	}
}

void spectra_tree_nodes_Nova_Scope_Nova_lambda41(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, Context40* context)
{
	spectra_tree_nodes_Nova_Node* l2_Nova_parsed = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	l2_Nova_parsed = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Node_virtual_Nova_parseStatement((spectra_tree_nodes_Nova_Node*)(this), exceptionData, (*context->spectra_tree_nodes_Nova_Scope_Nova_placeholder)->spectra_tree_nodes_Nova_PlaceholderValue_Nova_value, (*context->spectra_tree_nodes_Nova_Scope_Nova_child)->spectra_tree_nodes_Nova_Node_Nova_parent, (*context->spectra_tree_nodes_Nova_Scope_Nova_child)->spectra_tree_nodes_Nova_Node_Nova_location, 1));
	if ((l2_Nova_parsed) != (spectra_tree_nodes_Nova_Node*)nova_null)
	{
		nova_datastruct_list_Nova_Array_Nova_replace((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_Nova_Object*)((*context->spectra_tree_nodes_Nova_Scope_Nova_child)), (nova_Nova_Object*)(l2_Nova_parsed));
		if (((*context->spectra_tree_nodes_Nova_Scope_Nova_placeholder)->spectra_tree_nodes_Nova_PlaceholderValue_Nova_nodes) != (spectra_tree_nodes_Nova_NodeList*)nova_null)
		{
			spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholderChildren((spectra_tree_nodes_Nova_Node*)(l2_Nova_parsed), exceptionData, (*context->spectra_tree_nodes_Nova_Scope_Nova_placeholder)->spectra_tree_nodes_Nova_PlaceholderValue_Nova_nodes);
		}
		return (void)spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders((spectra_tree_nodes_Nova_Node*)(l2_Nova_parsed), exceptionData);
	}
}

nova_datastruct_list_Nova_Array* generated30(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* value0, nova_meta_Nova_Class* value1)
{
	nova_meta_Nova_Class** l1_Nova_temp = (nova_meta_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_meta_Nova_Class**)NOVA_MALLOC(sizeof(nova_meta_Nova_Class) * 2);
	l1_Nova_temp[0] = value0;
	l1_Nova_temp[1] = value1;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 2);
}

int spectra_tree_nodes_Nova_Scope_Accessor_Nova_depth(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Node* l1_Nova_current = (spectra_tree_nodes_Nova_Node*)nova_null;
	char l1_Nova_depth = 0;
	
	l1_Nova_current = (spectra_tree_nodes_Nova_Node*)(this);
	l1_Nova_depth = 0;
	while ((l1_Nova_current) != (spectra_tree_nodes_Nova_Node*)nova_null)
	{
		l1_Nova_depth++;
		l1_Nova_current = spectra_tree_nodes_Nova_Node_Accessor_Nova_parentWithScope(l1_Nova_current, exceptionData);
	}
	return (int)l1_Nova_depth;
}


void spectra_tree_nodes_Nova_Scope_Nova_super(spectra_tree_nodes_Nova_Scope* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_Scope_Nova_declarations = (nova_datastruct_list_Nova_Array*)nova_null;
	this->prv->spectra_tree_nodes_Nova_Scope_Nova_id = 0;
}


nova_Nova_String* spectra_tree_nodes_Nova_ScopeFunctionMap_functionMap_Nova_printPrecedingWhitespace(spectra_tree_nodes_Nova_ScopeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* reference, spectra_tree_nodes_Nova_Node* child);
nova_Nova_String* spectra_tree_nodes_Nova_ScopeFunctionMap_functionMap_Nova_childToNova(spectra_tree_nodes_Nova_ScopeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* reference, spectra_tree_nodes_Nova_Node* child);
void spectra_tree_nodes_Nova_ScopeFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_ScopeFunctionMap* spectra_tree_nodes_Nova_ScopeFunctionMap_Nova_construct(spectra_tree_nodes_Nova_ScopeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_ScopeFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_Scope_ScopeFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeListFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeListFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ScopeFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_ScopeFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_ScopeFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_ScopeFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ScopeFunctionMap_Nova_this(spectra_tree_nodes_Nova_ScopeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_ScopeFunctionMap_functionMapScopeFunctionMap_Nova_construct(spectra_tree_nodes_Nova_ScopeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_Nova_Scope_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_ScopeFunctionMap_functionMap_Nova_parseStatement(spectra_tree_nodes_Nova_ScopeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* reference, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_Nova_Scope_Nova_parseStatement(reference, exceptionData, input, parent, location, require);
}

char spectra_tree_nodes_Nova_ScopeFunctionMap_functionMap_Nova_parsePlaceholders(spectra_tree_nodes_Nova_ScopeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* reference)
{
	return spectra_tree_nodes_Nova_Scope_Nova_parsePlaceholders(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_ScopeFunctionMap_functionMap_Nova_printPrecedingWhitespace(spectra_tree_nodes_Nova_ScopeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* reference, spectra_tree_nodes_Nova_Node* child)
{
	return spectra_tree_nodes_Nova_Scope_Nova_printPrecedingWhitespace(reference, exceptionData, child);
}

nova_Nova_String* spectra_tree_nodes_Nova_ScopeFunctionMap_functionMap_Nova_childToNova(spectra_tree_nodes_Nova_ScopeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* reference, spectra_tree_nodes_Nova_Node* child)
{
	return spectra_tree_nodes_Nova_Scope_Nova_childToNova(reference, exceptionData, child);
}

nova_Nova_String* spectra_tree_nodes_Nova_ScopeFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_Nova_ScopeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* reference)
{
	return spectra_tree_nodes_Nova_Scope_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_Nova_ScopeFunctionMap_Nova_super(spectra_tree_nodes_Nova_ScopeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_Nova_ScopePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_ScopePropertyMap* spectra_tree_nodes_Nova_ScopePropertyMap_Nova_construct(spectra_tree_nodes_Nova_ScopePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_ScopePropertyMap, this,);
	this->vtable = &spectra_tree_nodes_Scope_ScopePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeListPropertyMap_Nova_super((spectra_tree_nodes_Nova_NodeListPropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ScopePropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_ScopePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_ScopePropertyMap_Nova_destroy(spectra_tree_nodes_Nova_ScopePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ScopePropertyMap_Nova_this(spectra_tree_nodes_Nova_ScopePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_ScopePropertyMap_functionMap_Nova_declarations(spectra_tree_nodes_Nova_ScopePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* reference)
{
	return reference->spectra_tree_nodes_Nova_Scope_Nova_declarations;
}

int spectra_tree_nodes_Nova_ScopePropertyMap_functionMap_Nova_depth(spectra_tree_nodes_Nova_ScopePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* reference)
{
	return spectra_tree_nodes_Nova_Scope_Accessor_Nova_depth(reference, exceptionData);
}

void spectra_tree_nodes_Nova_ScopePropertyMap_Nova_super(spectra_tree_nodes_Nova_ScopePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

