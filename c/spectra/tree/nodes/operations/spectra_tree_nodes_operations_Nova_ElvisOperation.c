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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/tree/nodes/arrays/spectra_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Operation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_UnaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_TernaryOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_ElvisOperation.h>
#include <spectra/tree/nodes/operations/spectra_tree_nodes_operations_Nova_Assignable.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_Variable.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_ArrayInstantiation.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Accessible.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Cast.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Identifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Import.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Literal.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NumericRange.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
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
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>




char spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_parseCondition(spectra_tree_nodes_operations_Nova_ElvisOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_parseOtherwise(spectra_tree_nodes_operations_Nova_ElvisOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
char spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_parseType(spectra_tree_nodes_operations_Nova_ElvisOperation* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_operations_Nova_ElvisOperation* spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_construct(spectra_tree_nodes_operations_Nova_ElvisOperation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_operations_Nova_ElvisOperation, this,);
	this->vtable = &spectra_tree_nodes_operations_ElvisOperation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_super((spectra_tree_nodes_Nova_Value*)this, exceptionData);
	spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_destroy(spectra_tree_nodes_operations_Nova_ElvisOperation** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_tree_nodes_Nova_Value_Nova_destroy(&(*this)->spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_condition, exceptionData);
	spectra_tree_nodes_Nova_Value_Nova_destroy(&(*this)->spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_otherwise, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_this(spectra_tree_nodes_operations_Nova_ElvisOperation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_Value_Nova_this((spectra_tree_nodes_Nova_Value*)(this), exceptionData, parent, location, 0);
}

spectra_tree_nodes_operations_Nova_ElvisOperation* spectra_tree_nodes_operations_Nova_ElvisOperation_static_Nova_parse(spectra_tree_nodes_operations_Nova_ElvisOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	int l1_Nova_index = 0;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_index = spectra_util_Nova_CompilerStringFunctions_1_Nova_findOperatorOnTopLevel(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("?:")), (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_index > 0)
	{
		spectra_tree_nodes_operations_Nova_ElvisOperation* l2_Nova_node = (spectra_tree_nodes_operations_Nova_ElvisOperation*)nova_null;
		nova_Nova_String* l2_Nova_condition = (nova_Nova_String*)nova_null;
		nova_Nova_String* l2_Nova_otherwise = (nova_Nova_String*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_construct(0, exceptionData, parent, location);
		l2_Nova_condition = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, (intptr_t)nova_null, l1_Nova_index), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		l2_Nova_otherwise = nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(input), exceptionData, l1_Nova_index + 2, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
		if (!spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_parseCondition(l2_Nova_node, exceptionData, l2_Nova_condition))
		{
			THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse elvis operation condition '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l2_Nova_condition), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
		}
		else if (!spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_parseOtherwise(l2_Nova_node, exceptionData, l2_Nova_otherwise))
		{
			THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse elvis operation otherwise value '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l2_Nova_otherwise), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
		}
		else if (!spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_parseType(l2_Nova_node, exceptionData))
		{
			THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse elvis operation type for '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((input), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)(l2_Nova_node)), 1);
		}
		else
		{
			return l2_Nova_node;
		}
	}
	return (spectra_tree_nodes_operations_Nova_ElvisOperation*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_parseCondition(spectra_tree_nodes_operations_Nova_ElvisOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return (this->spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_condition = (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null))) != (spectra_tree_nodes_Nova_Value*)nova_null;
}

char spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_parseOtherwise(spectra_tree_nodes_operations_Nova_ElvisOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return (this->spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_otherwise = (spectra_tree_nodes_Nova_Value*)(spectra_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, input, (spectra_tree_nodes_Nova_Node*)(this), 0, (intptr_t)nova_null))) != (spectra_tree_nodes_Nova_Value*)nova_null;
}

char spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_parseType(spectra_tree_nodes_operations_Nova_ElvisOperation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Value_Mutatorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this), exceptionData, spectra_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((spectra_tree_nodes_Nova_Value*)(this->spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_condition), exceptionData));
	return 1;
}

nova_Nova_String* spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_writeNova(spectra_tree_nodes_operations_Nova_ElvisOperation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_condition)), exceptionData), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ?: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_otherwise)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
}

void spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_super(spectra_tree_nodes_operations_Nova_ElvisOperation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_condition = (spectra_tree_nodes_Nova_Value*)nova_null;
	this->spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_otherwise = (spectra_tree_nodes_Nova_Value*)nova_null;
}


char spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_functionMap_Nova_parseCondition(spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_ElvisOperation* reference, nova_Nova_String* input);
char spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_functionMap_Nova_parseOtherwise(spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_ElvisOperation* reference, nova_Nova_String* input);
char spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_functionMap_Nova_parseType(spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_ElvisOperation* reference);
void spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap* spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_Nova_construct(spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_operations_ElvisOperation_ElvisOperationFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValueFunctionMap_Nova_super((spectra_tree_nodes_Nova_ValueFunctionMap*)this, exceptionData);
	spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_Nova_destroy(spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_Nova_this(spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_operations_Nova_ElvisOperation* spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_functionMapElvisOperationFunctionMap_Nova_construct(spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_operations_Nova_ElvisOperation* spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_operations_Nova_ElvisOperation_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

char spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_functionMap_Nova_parseCondition(spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_ElvisOperation* reference, nova_Nova_String* input)
{
	return spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_parseCondition(reference, exceptionData, input);
}

char spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_functionMap_Nova_parseOtherwise(spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_ElvisOperation* reference, nova_Nova_String* input)
{
	return spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_parseOtherwise(reference, exceptionData, input);
}

char spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_functionMap_Nova_parseType(spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_ElvisOperation* reference)
{
	return spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_parseType(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_ElvisOperation* reference)
{
	return spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_Nova_super(spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap* spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap_Nova_construct(spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap, this,);
	this->vtable = &spectra_tree_nodes_operations_ElvisOperation_ElvisOperationPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ValuePropertyMap_Nova_super((spectra_tree_nodes_Nova_ValuePropertyMap*)this, exceptionData);
	spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap_Nova_destroy(spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap_Nova_this(spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_Value* spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap_functionMap_Nova_condition(spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_ElvisOperation* reference)
{
	return reference->spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_condition;
}

spectra_tree_nodes_Nova_Value* spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap_functionMap_Nova_otherwise(spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_operations_Nova_ElvisOperation* reference)
{
	return reference->spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_otherwise;
}

void spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap_Nova_super(spectra_tree_nodes_operations_Nova_ElvisOperationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

