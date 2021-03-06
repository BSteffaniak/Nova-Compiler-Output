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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/controlstructures/spectra_tree_nodes_controlstructures_Nova_ControlStructure.h>
#include <spectra/tree/nodes/controlstructures/spectra_tree_nodes_controlstructures_Nova_IfStatement.h>
#include <spectra/tree/nodes/controlstructures/spectra_tree_nodes_controlstructures_Nova_ControlStructure.h>
#include <spectra/tree/nodes/controlstructures/spectra_tree_nodes_controlstructures_Nova_ControlStructure.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>




char spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_parseContents(spectra_tree_nodes_controlstructures_Nova_ElseStatement* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_Nova_String* contents);
void spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_controlstructures_Nova_ElseStatement* spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_construct(spectra_tree_nodes_controlstructures_Nova_ElseStatement* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_controlstructures_Nova_ElseStatement, this,);
	this->vtable = &spectra_tree_nodes_controlstructures_ElseStatement_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_controlstructures_Nova_ControlStructure_Nova_super((spectra_tree_nodes_controlstructures_Nova_ControlStructure*)this, exceptionData);
	spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_destroy(spectra_tree_nodes_controlstructures_Nova_ElseStatement** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_controlstructures_Nova_IfStatement_Nova_destroy(&(*this)->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_inlineIf, exceptionData);
	spectra_tree_nodes_Nova_Scope_Nova_destroy(&(*this)->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_scope, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_this(spectra_tree_nodes_controlstructures_Nova_ElseStatement* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_controlstructures_Nova_ControlStructure_Nova_this((spectra_tree_nodes_controlstructures_Nova_ControlStructure*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_controlstructures_Nova_ElseStatement* spectra_tree_nodes_controlstructures_Nova_ElseStatement_static_Nova_parse(spectra_tree_nodes_controlstructures_Nova_ElseStatement* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (nova_Nova_String_Nova_equals(spectra_util_Nova_CompilerStringFunctions_Nova_nextWord(input, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("else"))))
	{
		nova_Nova_String* l2_Nova_contents = (nova_Nova_String*)nova_null;
		spectra_tree_nodes_controlstructures_Nova_ElseStatement* l2_Nova_node = (spectra_tree_nodes_controlstructures_Nova_ElseStatement*)nova_null;
		
		l2_Nova_contents = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("else"))->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		l2_Nova_node = spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_construct(0, exceptionData, parent, location);
		if (spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_parseContents(l2_Nova_node, exceptionData, input, l2_Nova_contents))
		{
			return l2_Nova_node;
		}
	}
	return (spectra_tree_nodes_controlstructures_Nova_ElseStatement*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_parseContents(spectra_tree_nodes_controlstructures_Nova_ElseStatement* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, nova_Nova_String* contents)
{
	if (nova_Nova_String_Nova_equals(spectra_util_Nova_CompilerStringFunctions_Nova_nextWord(contents, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("if"))))
	{
		this->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_inlineIf = spectra_tree_nodes_controlstructures_Nova_IfStatement_static_Nova_parse(0, exceptionData, contents, (spectra_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null);
		if ((this->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_inlineIf) == (spectra_tree_nodes_controlstructures_Nova_IfStatement*)nova_null)
		{
			spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable parse else if statement '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(this), 0);
			return 0;
		}
	}
	else if (contents->nova_Nova_String_Nova_count > 0)
	{
		spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable parse else statement '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(this), 0);
		return 0;
	}
	return 1;
}

nova_Nova_String* spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_writeNova(spectra_tree_nodes_controlstructures_Nova_ElseStatement* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("else ")), exceptionData, ((nova_Nova_String*)((this->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_inlineIf) != (spectra_tree_nodes_controlstructures_Nova_IfStatement*)nova_null ? spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_inlineIf), exceptionData) : spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((spectra_tree_nodes_Nova_Node*)(this), exceptionData)), exceptionData))));
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_controlstructures_Nova_ElseStatement_Mutatorfunc_Nova_scope(spectra_tree_nodes_controlstructures_Nova_ElseStatement* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* value)
{
	if ((this->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_inlineIf) != (spectra_tree_nodes_controlstructures_Nova_IfStatement*)nova_null)
	{
		spectra_tree_nodes_Nova_Node_virtual_Mutator_Nova_scope((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_inlineIf), exceptionData, value);
	}
	else
	{
		this->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_scope = value;
	}
	return value;
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_controlstructures_Nova_ElseStatement_Accessorfunc_Nova_scope(spectra_tree_nodes_controlstructures_Nova_ElseStatement* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_Nova_Scope*)((this->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_inlineIf) != (spectra_tree_nodes_controlstructures_Nova_IfStatement*)nova_null ? spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_inlineIf), exceptionData) : this->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_scope);
}

void spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_super(spectra_tree_nodes_controlstructures_Nova_ElseStatement* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_inlineIf = (spectra_tree_nodes_controlstructures_Nova_IfStatement*)nova_null;
	this->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_scope = (spectra_tree_nodes_Nova_Scope*)nova_null;
}


char spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap_functionMap_Nova_parseContents(spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_controlstructures_Nova_ElseStatement* reference, nova_Nova_String* input, nova_Nova_String* contents);
void spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap* spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap_Nova_construct(spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_controlstructures_ElseStatement_ElseStatementFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_controlstructures_Nova_ControlStructureFunctionMap_Nova_super((spectra_tree_nodes_controlstructures_Nova_ControlStructureFunctionMap*)this, exceptionData);
	spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap_Nova_destroy(spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap_Nova_this(spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_controlstructures_Nova_ElseStatement* spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap_functionMapElseStatementFunctionMap_Nova_construct(spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_controlstructures_Nova_ElseStatement* spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_controlstructures_Nova_ElseStatement_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

char spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap_functionMap_Nova_parseContents(spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_controlstructures_Nova_ElseStatement* reference, nova_Nova_String* input, nova_Nova_String* contents)
{
	return spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_parseContents(reference, exceptionData, input, contents);
}

nova_Nova_String* spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_controlstructures_Nova_ElseStatement* reference)
{
	return spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap_Nova_super(spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap* spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap_Nova_construct(spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap, this,);
	this->vtable = &spectra_tree_nodes_controlstructures_ElseStatement_ElseStatementPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_controlstructures_Nova_ControlStructurePropertyMap_Nova_super((spectra_tree_nodes_controlstructures_Nova_ControlStructurePropertyMap*)this, exceptionData);
	spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap_Nova_destroy(spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap_Nova_this(spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_controlstructures_Nova_IfStatement* spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap_functionMap_Nova_inlineIf(spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_controlstructures_Nova_ElseStatement* reference)
{
	return reference->spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_inlineIf;
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap_functionMap_Nova_scope(spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_controlstructures_Nova_ElseStatement* reference)
{
	return spectra_tree_nodes_controlstructures_Nova_ElseStatement_Accessorfunc_Nova_scope(reference, exceptionData);
}

void spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap_Nova_super(spectra_tree_nodes_controlstructures_Nova_ElseStatementPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

