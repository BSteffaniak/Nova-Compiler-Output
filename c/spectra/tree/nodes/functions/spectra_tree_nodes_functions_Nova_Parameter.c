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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_LocalDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ParameterList.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_LocalDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_LocalDeclaration.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Cast.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>





void spectra_tree_nodes_functions_Nova_Parameter_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_Parameter* spectra_tree_nodes_functions_Nova_Parameter_Nova_construct(spectra_tree_nodes_functions_Nova_Parameter* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_functions_Nova_Parameter, this,);
	this->vtable = &spectra_tree_nodes_functions_Parameter_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_VariableDeclaration*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_LocalDeclaration_Nova_super((spectra_tree_nodes_variables_Nova_LocalDeclaration*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_Parameter_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_Nova_Parameter_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_functions_Nova_Parameter_Nova_destroy(spectra_tree_nodes_functions_Nova_Parameter** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_Nova_Value_Nova_destroy(&(*this)->spectra_tree_nodes_functions_Nova_Parameter_Nova_defaultValue, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_Nova_Parameter_Nova_this(spectra_tree_nodes_functions_Nova_Parameter* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_variables_Nova_LocalDeclaration_Nova_this((spectra_tree_nodes_variables_Nova_LocalDeclaration*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_functions_Nova_Parameter* spectra_tree_nodes_functions_Nova_Parameter_static_Nova_parse(spectra_tree_nodes_functions_Nova_Parameter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration* l1_Nova_closure = (spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration*)nova_null;
	nova_Nova_String* l1_Nova_defaultValue = (nova_Nova_String*)nova_null;
	int l1_Nova_assignmentIndex = 0;
	spectra_tree_nodes_variables_Nova_LocalDeclaration* l1_Nova_declaration = (spectra_tree_nodes_variables_Nova_LocalDeclaration*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_closure = (spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration*)(spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_static_Nova_parse(0, exceptionData, input, parent, location, require));
	if ((l1_Nova_closure) != (spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration*)nova_null)
	{
		return (spectra_tree_nodes_functions_Nova_Parameter*)l1_Nova_closure;
	}
	l1_Nova_defaultValue = (nova_Nova_String*)((nova_Nova_Object*)nova_null);
	l1_Nova_assignmentIndex = nova_Nova_String_1_Nova_indexOf(input, exceptionData, '=', (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_assignmentIndex > 0 && spectra_util_Nova_CompilerStringFunctions_0_Nova_isStrictlyOperator(input, exceptionData, '=', l1_Nova_assignmentIndex))
	{
		l1_Nova_defaultValue = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_assignmentIndex + 1, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		input = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, l1_Nova_assignmentIndex), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	}
	l1_Nova_declaration = (spectra_tree_nodes_variables_Nova_LocalDeclaration*)(spectra_tree_nodes_variables_Nova_LocalDeclaration_static_Nova_parse(0, exceptionData, input, parent, location, require));
	if ((l1_Nova_declaration) != (spectra_tree_nodes_variables_Nova_LocalDeclaration*)nova_null)
	{
		spectra_tree_nodes_functions_Nova_Parameter* l4_Nova_node = (spectra_tree_nodes_functions_Nova_Parameter*)nova_null;
		
		l4_Nova_node = spectra_tree_nodes_functions_Nova_Parameter_Nova_construct(0, exceptionData, parent, location);
		if ((l1_Nova_defaultValue) != (nova_Nova_String*)nova_null)
		{
			l4_Nova_node->spectra_tree_nodes_functions_Nova_Parameter_Nova_defaultValue = (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_PlaceholderValue_static_Nova_parse(0, exceptionData, l1_Nova_defaultValue, (spectra_tree_nodes_Nova_Node*)(l4_Nova_node), location, require));
		}
		return (spectra_tree_nodes_functions_Nova_Parameter*)spectra_tree_nodes_Nova_Node_virtual_Nova_cloneTo((spectra_tree_nodes_Nova_Node*)(l1_Nova_declaration), exceptionData, (spectra_tree_nodes_Nova_Node*)(l4_Nova_node));
	}
	return (spectra_tree_nodes_functions_Nova_Parameter*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_functions_Nova_Parameter_Nova_parsePlaceholders(spectra_tree_nodes_functions_Nova_Parameter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (char)(nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(this->spectra_tree_nodes_functions_Nova_Parameter_Nova_defaultValue->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_PlaceholderValue_Extension_VTable_val.classInstance)) ? (this->spectra_tree_nodes_functions_Nova_Parameter_Nova_defaultValue = spectra_tree_nodes_Nova_Value_1_static_Nova_parse(0, exceptionData, (spectra_tree_nodes_Nova_PlaceholderValue*)this->spectra_tree_nodes_functions_Nova_Parameter_Nova_defaultValue, (intptr_t)nova_null)) != (spectra_tree_nodes_Nova_Value*)nova_null : 1);
}

spectra_tree_nodes_functions_Nova_Parameter* spectra_tree_nodes_functions_Nova_Parameter_Nova_cloneTo(spectra_tree_nodes_functions_Nova_Parameter* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Parameter* other)
{
	spectra_tree_nodes_variables_Nova_LocalDeclaration_Nova_cloneTo(((spectra_tree_nodes_variables_Nova_LocalDeclaration*)this), exceptionData, (spectra_tree_nodes_variables_Nova_LocalDeclaration*)(other));
	other->spectra_tree_nodes_functions_Nova_Parameter_Nova_defaultValue = this->spectra_tree_nodes_functions_Nova_Parameter_Nova_defaultValue;
	return other;
}

spectra_tree_nodes_functions_Nova_ParameterList* spectra_tree_nodes_functions_Nova_Parameter_Accessor_Nova_parentParameterList(spectra_tree_nodes_functions_Nova_Parameter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_functions_Nova_ParameterList*)(nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(this->spectra_tree_nodes_Nova_Node_Nova_parent->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_functions_ParameterList_Extension_VTable_val.classInstance)) ? (nova_Nova_Object*)(spectra_tree_nodes_functions_Nova_ParameterList*)this->spectra_tree_nodes_Nova_Node_Nova_parent : (nova_Nova_Object*)nova_null);
}


void spectra_tree_nodes_functions_Nova_Parameter_Nova_super(spectra_tree_nodes_functions_Nova_Parameter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_functions_Nova_Parameter_Nova_defaultValue = (spectra_tree_nodes_Nova_Value*)nova_null;
}

void spectra_tree_nodes_functions_Nova_ParameterFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_ParameterFunctionMap* spectra_tree_nodes_functions_Nova_ParameterFunctionMap_Nova_construct(spectra_tree_nodes_functions_Nova_ParameterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_functions_Nova_ParameterFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_functions_Parameter_ParameterFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_IdentifierFunctionMap_Nova_super((spectra_tree_nodes_Nova_IdentifierFunctionMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_Nova_super((spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_LocalDeclarationFunctionMap_Nova_super((spectra_tree_nodes_variables_Nova_LocalDeclarationFunctionMap*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_ParameterFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_Nova_ParameterFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_functions_Nova_ParameterFunctionMap_Nova_destroy(spectra_tree_nodes_functions_Nova_ParameterFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_Nova_ParameterFunctionMap_Nova_this(spectra_tree_nodes_functions_Nova_ParameterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_functions_Nova_Parameter* spectra_tree_nodes_functions_Nova_ParameterFunctionMap_functionMapParameterFunctionMap_Nova_construct(spectra_tree_nodes_functions_Nova_ParameterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_functions_Nova_Parameter_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_functions_Nova_Parameter* spectra_tree_nodes_functions_Nova_ParameterFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_functions_Nova_ParameterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_functions_Nova_Parameter_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

char spectra_tree_nodes_functions_Nova_ParameterFunctionMap_functionMap_Nova_parsePlaceholders(spectra_tree_nodes_functions_Nova_ParameterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Parameter* reference)
{
	return spectra_tree_nodes_functions_Nova_Parameter_Nova_parsePlaceholders(reference, exceptionData);
}

spectra_tree_nodes_functions_Nova_Parameter* spectra_tree_nodes_functions_Nova_ParameterFunctionMap_functionMap_Nova_cloneTo(spectra_tree_nodes_functions_Nova_ParameterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Parameter* reference, spectra_tree_nodes_functions_Nova_Parameter* other)
{
	return spectra_tree_nodes_functions_Nova_Parameter_Nova_cloneTo(reference, exceptionData, other);
}

void spectra_tree_nodes_functions_Nova_ParameterFunctionMap_Nova_super(spectra_tree_nodes_functions_Nova_ParameterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_functions_Nova_ParameterPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_functions_Nova_ParameterPropertyMap* spectra_tree_nodes_functions_Nova_ParameterPropertyMap_Nova_construct(spectra_tree_nodes_functions_Nova_ParameterPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_functions_Nova_ParameterPropertyMap, this,);
	this->vtable = &spectra_tree_nodes_functions_Parameter_ParameterPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValuePropertyMap_Nova_super((spectra_tree_nodes_Nova_ValuePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_IdentifierPropertyMap_Nova_super((spectra_tree_nodes_Nova_IdentifierPropertyMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableDeclarationPropertyMap_Nova_super((spectra_tree_nodes_variables_Nova_VariableDeclarationPropertyMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_LocalDeclarationPropertyMap_Nova_super((spectra_tree_nodes_variables_Nova_LocalDeclarationPropertyMap*)this, exceptionData);
	spectra_tree_nodes_functions_Nova_ParameterPropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_functions_Nova_ParameterPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_functions_Nova_ParameterPropertyMap_Nova_destroy(spectra_tree_nodes_functions_Nova_ParameterPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_functions_Nova_ParameterPropertyMap_Nova_this(spectra_tree_nodes_functions_Nova_ParameterPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_Value* spectra_tree_nodes_functions_Nova_ParameterPropertyMap_functionMap_Nova_defaultValue(spectra_tree_nodes_functions_Nova_ParameterPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Parameter* reference)
{
	return reference->spectra_tree_nodes_functions_Nova_Parameter_Nova_defaultValue;
}

spectra_tree_nodes_functions_Nova_ParameterList* spectra_tree_nodes_functions_Nova_ParameterPropertyMap_functionMap_Nova_parentParameterList(spectra_tree_nodes_functions_Nova_ParameterPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_functions_Nova_Parameter* reference)
{
	return spectra_tree_nodes_functions_Nova_Parameter_Accessor_Nova_parentParameterList(reference, exceptionData);
}

void spectra_tree_nodes_functions_Nova_ParameterPropertyMap_Nova_super(spectra_tree_nodes_functions_Nova_ParameterPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

