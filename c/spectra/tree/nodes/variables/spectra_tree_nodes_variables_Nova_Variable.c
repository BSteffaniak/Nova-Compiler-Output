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
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Type.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
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
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Cast.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Priority.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_StaticClassReference.h>
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





void spectra_tree_nodes_variables_Nova_Variable_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_variables_Nova_Variable* spectra_tree_nodes_variables_Nova_Variable_Nova_construct(spectra_tree_nodes_variables_Nova_Variable* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, spectra_tree_nodes_variables_Nova_VariableDeclaration* declaration)
{
	CCLASS_NEW(spectra_tree_nodes_variables_Nova_Variable, this,);
	this->vtable = &spectra_tree_nodes_variables_Variable_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_Nova_Identifier_Nova_super((spectra_tree_nodes_Nova_Identifier*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_Variable_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_variables_Nova_Variable_Nova_this(this, exceptionData, parent, location, declaration);
	}
	
	return this;
}

void spectra_tree_nodes_variables_Nova_Variable_Nova_destroy(spectra_tree_nodes_variables_Nova_Variable** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_destroy(&(*this)->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration, exceptionData);
	
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_variables_Nova_Variable_Nova_this(spectra_tree_nodes_variables_Nova_Variable* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, spectra_tree_nodes_variables_Nova_VariableDeclaration* declaration)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	declaration = (spectra_tree_nodes_variables_Nova_VariableDeclaration*)(declaration == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)declaration);
	spectra_tree_nodes_Nova_Identifier_Nova_this((spectra_tree_nodes_Nova_Identifier*)(this), exceptionData, parent, location);
	this->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration = declaration;
}

spectra_tree_nodes_variables_Nova_Variable* spectra_tree_nodes_variables_Nova_Variable_static_Nova_findVariable(spectra_tree_nodes_variables_Nova_Variable* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)parent->spectra_tree_nodes_Nova_Node_Nova_location : (nova_Nova_Object*)location);
	if (spectra_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(name, exceptionData))
	{
		spectra_tree_nodes_variables_Nova_VariableDeclaration* l2_Nova_declaration = (spectra_tree_nodes_variables_Nova_VariableDeclaration*)nova_null;
		
		l2_Nova_declaration = (spectra_tree_nodes_variables_Nova_VariableDeclaration*)(spectra_tree_nodes_Nova_Node_virtual_Nova_findVariableDeclaration((spectra_tree_nodes_Nova_Node*)(parent), exceptionData, name, (intptr_t)nova_null));
		if ((l2_Nova_declaration) != (spectra_tree_nodes_variables_Nova_VariableDeclaration*)nova_null)
		{
			return spectra_tree_nodes_variables_Nova_Variable_Nova_construct(0, exceptionData, parent, location, l2_Nova_declaration);
		}
		else
		{
			THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not find declaration for identifier '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((name), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), 0), 1);
		}
	}
	return (spectra_tree_nodes_variables_Nova_Variable*)(nova_Nova_Object*)nova_null;
}

void spectra_tree_nodes_variables_Nova_Variable_Nova_onAssigned(spectra_tree_nodes_variables_Nova_Variable* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Value* value)
{
	spectra_tree_nodes_operations_Nova_Assignable_virtual_Nova_onAssigned((spectra_tree_nodes_operations_Nova_Assignable*)(((spectra_tree_nodes_operations_Nova_Assignable*)this->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration)), exceptionData, value);
}

spectra_tree_nodes_variables_Nova_Variable* spectra_tree_nodes_variables_Nova_Variable_Nova_cloneTo(spectra_tree_nodes_variables_Nova_Variable* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_Variable* other)
{
	spectra_tree_nodes_Nova_Identifier_Nova_cloneTo(((spectra_tree_nodes_Nova_Identifier*)this), exceptionData, (spectra_tree_nodes_Nova_Identifier*)(other));
	spectra_tree_nodes_Nova_Accessible_0_Nova_cloneTo(((spectra_tree_nodes_Nova_Accessible*)this), exceptionData, (spectra_tree_nodes_Nova_Accessible*)(other));
	other->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration = this->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration;
	return other;
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_Variable_Nova_writeNova(spectra_tree_nodes_variables_Nova_Variable* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(this->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Value_Nova_writeArrayAccess((spectra_tree_nodes_Nova_Value*)(this), exceptionData), exceptionData, spectra_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes((spectra_tree_nodes_Nova_Accessible*)(this), exceptionData))));
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_variables_Nova_Variable_Accessorfunc_Nova_type(spectra_tree_nodes_variables_Nova_Variable* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration), exceptionData);
}


char spectra_tree_nodes_variables_Nova_Variable_Accessorfunc1_Nova_safeNavigation(spectra_tree_nodes_variables_Nova_Variable* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_variables_Nova_Variable_Nova_safeNavigation;
}

char spectra_tree_nodes_variables_Nova_Variable_Mutatorfunc0_Nova_safeNavigation(spectra_tree_nodes_variables_Nova_Variable* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	this->spectra_tree_nodes_variables_Nova_Variable_Nova_safeNavigation = value;
	return value;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_variables_Nova_Variable_Accessorfunc1_Nova_accessedNode(spectra_tree_nodes_variables_Nova_Variable* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_variables_Nova_Variable_Nova_accessedNode;
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_variables_Nova_Variable_Mutatorfunc0_Nova_accessedNode(spectra_tree_nodes_variables_Nova_Variable* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Accessible* value)
{
	this->spectra_tree_nodes_variables_Nova_Variable_Nova_accessedNode = value;
	return value;
}

void spectra_tree_nodes_variables_Nova_Variable_Nova_super(spectra_tree_nodes_variables_Nova_Variable* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration = (spectra_tree_nodes_variables_Nova_VariableDeclaration*)nova_null;
	this->spectra_tree_nodes_variables_Nova_Variable_Nova_safeNavigation = 0;
	this->spectra_tree_nodes_variables_Nova_Variable_Nova_accessedNode = (spectra_tree_nodes_Nova_Accessible*)nova_null;
}

void spectra_tree_nodes_variables_Nova_VariableFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_variables_Nova_VariableFunctionMap* spectra_tree_nodes_variables_Nova_VariableFunctionMap_Nova_construct(spectra_tree_nodes_variables_Nova_VariableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_variables_Nova_VariableFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_variables_Variable_VariableFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_IdentifierFunctionMap_Nova_super((spectra_tree_nodes_Nova_IdentifierFunctionMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariableFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_variables_Nova_VariableFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_variables_Nova_VariableFunctionMap_Nova_destroy(spectra_tree_nodes_variables_Nova_VariableFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_variables_Nova_VariableFunctionMap_Nova_this(spectra_tree_nodes_variables_Nova_VariableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_variables_Nova_Variable* spectra_tree_nodes_variables_Nova_VariableFunctionMap_functionMapVariableFunctionMap_Nova_construct(spectra_tree_nodes_variables_Nova_VariableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, spectra_tree_nodes_variables_Nova_VariableDeclaration* declaration)
{
	return spectra_tree_nodes_variables_Nova_Variable_Nova_construct(0, exceptionData, parent, location, declaration);
}

spectra_tree_nodes_variables_Nova_Variable* spectra_tree_nodes_variables_Nova_VariableFunctionMap_functionMap_static_Nova_findVariable(spectra_tree_nodes_variables_Nova_VariableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_variables_Nova_Variable_static_Nova_findVariable(0, exceptionData, name, parent, location);
}

void spectra_tree_nodes_variables_Nova_VariableFunctionMap_functionMap_Nova_onAssigned(spectra_tree_nodes_variables_Nova_VariableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_Variable* reference, spectra_tree_nodes_Nova_Value* value)
{
	spectra_tree_nodes_variables_Nova_Variable_Nova_onAssigned(reference, exceptionData, value);
}

spectra_tree_nodes_variables_Nova_Variable* spectra_tree_nodes_variables_Nova_VariableFunctionMap_functionMap_Nova_cloneTo(spectra_tree_nodes_variables_Nova_VariableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_Variable* reference, spectra_tree_nodes_variables_Nova_Variable* other)
{
	return spectra_tree_nodes_variables_Nova_Variable_Nova_cloneTo(reference, exceptionData, other);
}

nova_Nova_String* spectra_tree_nodes_variables_Nova_VariableFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_variables_Nova_VariableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_Variable* reference)
{
	return spectra_tree_nodes_variables_Nova_Variable_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_variables_Nova_VariableFunctionMap_Nova_super(spectra_tree_nodes_variables_Nova_VariableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_variables_Nova_VariablePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_variables_Nova_VariablePropertyMap* spectra_tree_nodes_variables_Nova_VariablePropertyMap_Nova_construct(spectra_tree_nodes_variables_Nova_VariablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_variables_Nova_VariablePropertyMap, this,);
	this->vtable = &spectra_tree_nodes_variables_Variable_VariablePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValuePropertyMap_Nova_super((spectra_tree_nodes_Nova_ValuePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_IdentifierPropertyMap_Nova_super((spectra_tree_nodes_Nova_IdentifierPropertyMap*)this, exceptionData);
	spectra_tree_nodes_variables_Nova_VariablePropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_variables_Nova_VariablePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_variables_Nova_VariablePropertyMap_Nova_destroy(spectra_tree_nodes_variables_Nova_VariablePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_variables_Nova_VariablePropertyMap_Nova_this(spectra_tree_nodes_variables_Nova_VariablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_variables_Nova_VariablePropertyMap_functionMap_Nova_declaration(spectra_tree_nodes_variables_Nova_VariablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_Variable* reference)
{
	return reference->spectra_tree_nodes_variables_Nova_Variable_Nova_declaration;
}

spectra_tree_nodes_Nova_Type* spectra_tree_nodes_variables_Nova_VariablePropertyMap_functionMap_Nova_type(spectra_tree_nodes_variables_Nova_VariablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_Variable* reference)
{
	return spectra_tree_nodes_variables_Nova_Variable_Accessorfunc_Nova_type(reference, exceptionData);
}

char spectra_tree_nodes_variables_Nova_VariablePropertyMap_functionMap0_Nova_safeNavigation(spectra_tree_nodes_variables_Nova_VariablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_Variable* reference)
{
	return spectra_tree_nodes_variables_Nova_Variable_Accessorfunc1_Nova_safeNavigation(reference, exceptionData);
}

spectra_tree_nodes_Nova_Accessible* spectra_tree_nodes_variables_Nova_VariablePropertyMap_functionMap0_Nova_accessedNode(spectra_tree_nodes_variables_Nova_VariablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_Variable* reference)
{
	return spectra_tree_nodes_variables_Nova_Variable_Accessorfunc1_Nova_accessedNode(reference, exceptionData);
}

void spectra_tree_nodes_variables_Nova_VariablePropertyMap_Nova_super(spectra_tree_nodes_variables_Nova_VariablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

