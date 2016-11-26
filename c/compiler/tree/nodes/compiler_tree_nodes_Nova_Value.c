#include <precompiled.h>
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
#include <nova/datastruct/nova_datastruct_Nova_Tuple2.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/compiler_Nova_InvalidParseException.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/arrays/compiler_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Assignable.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_Variable.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionCall.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_Instantiation.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Accessible.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Identifier.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Import.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Literal.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NumericRange.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_StaticClassReference.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Type.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;
typedef struct
{
} Context3;


compiler_tree_nodes_Value_Extension_VTable compiler_tree_nodes_Value_Extension_VTable_val =
{
	0,
	{
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		(void(*)(compiler_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*))compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
		0,
		0,
		0,
	},
	compiler_tree_nodes_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_Node_Nova_addChild,
	compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_Node_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode,
	compiler_tree_nodes_Nova_Node_Nova_replace,
	compiler_tree_nodes_Nova_Value_Nova_validateTypes,
	compiler_tree_nodes_Nova_Node_Nova_parsePlaceholders,
	compiler_tree_nodes_Nova_Value_Nova_cloneTo,
	compiler_tree_nodes_Nova_Node_Nova_toNova,
	compiler_tree_nodes_Nova_Node_Mutator_Nova_scope,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
	compiler_tree_nodes_Nova_Value_0_static_Nova_parse,
	compiler_tree_nodes_Nova_Value_Nova_parseType,
	compiler_tree_nodes_Nova_Value_Nova_writeType,
	compiler_tree_nodes_Nova_Value_Accessorfunc_Nova_type,
	compiler_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
};



compiler_tree_nodes_Nova_Value* compiler_tree_nodes_Nova_Value_static_Nova_parseValue(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, char require);
nova_datastruct_Nova_Tuple2* compiler_tree_nodes_Nova_Value_static_Nova_getArrayAccesses(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
nova_datastruct_list_Nova_Array* generated13(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_tree_nodes_Nova_Value_Nova_testLambda37(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Import* _1, Context1* context);
char compiler_tree_nodes_Nova_Value_Nova_testLambda38(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context2* context);
char compiler_tree_nodes_Nova_Value_Nova_testLambda103(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Import* _1, Context3* context);



char compiler_tree_nodes_Nova_Value_Nova_VALUE;
char compiler_tree_nodes_Nova_Value_Nova_POINTER;
char compiler_tree_nodes_Nova_Value_Nova_REFERENCE;
char compiler_tree_nodes_Nova_Value_Nova_DOUBLE_POINTER;
nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_Value_Nova_PRIMITIVE_TYPES;
void compiler_tree_nodes_Nova_Value_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		compiler_tree_nodes_Nova_Value_Nova_VALUE = 1;
		compiler_tree_nodes_Nova_Value_Nova_POINTER = 2;
		compiler_tree_nodes_Nova_Value_Nova_REFERENCE = 3;
		compiler_tree_nodes_Nova_Value_Nova_DOUBLE_POINTER = 4;
		compiler_tree_nodes_Nova_Value_Nova_PRIMITIVE_TYPES = generated13(0, exceptionData);
	}
}

compiler_tree_nodes_Nova_Value* compiler_tree_nodes_Nova_Value_Nova_construct(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, compiler_tree_nodes_Nova_Type* type)
{
	CCLASS_NEW(compiler_tree_nodes_Nova_Value, this,);
	this->vtable = &compiler_tree_nodes_Value_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_Nova_Value_Nova_this(this, exceptionData, parent, location, type);
	}
	
	return this;
}

void compiler_tree_nodes_Nova_Value_Nova_destroy(compiler_tree_nodes_Nova_Value** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_Value_Nova_arrayAccess, exceptionData);
	compiler_tree_nodes_Nova_Type_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_Value_Nova_type, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_Nova_Value_Nova_this(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, compiler_tree_nodes_Nova_Type* type)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	type = (compiler_tree_nodes_Nova_Type*)(type == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)type);
	compiler_tree_nodes_Nova_Node_Nova_this((compiler_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
	compiler_tree_nodes_Nova_Value_Mutatorfunc_Nova_type(this, exceptionData, type);
}

compiler_tree_nodes_Nova_Value* compiler_tree_nodes_Nova_Value_0_static_Nova_parse(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	nova_datastruct_Nova_Tuple2* l1_Nova_arrayData = (nova_datastruct_Nova_Tuple2*)nova_null;
	compiler_tree_nodes_Nova_Value* l1_Nova_value = (compiler_tree_nodes_Nova_Value*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_arrayData = compiler_tree_nodes_Nova_Value_static_Nova_getArrayAccesses(0, exceptionData, input);
	if ((nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Tuple2_Accessor_Nova_item1((nova_datastruct_Nova_Tuple2*)(l1_Nova_arrayData), exceptionData) != (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array*)nova_null)
	{
		input = nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(input, exceptionData, (intptr_t)nova_null, (int)(intptr_t)(nova_datastruct_list_Nova_IntArray_Nova_get((nova_datastruct_list_Nova_IntArray*)(nova_datastruct_Nova_Tuple2_Accessor_Nova_item2((nova_datastruct_Nova_Tuple2*)(l1_Nova_arrayData), exceptionData)), exceptionData, 0))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	}
	l1_Nova_value = compiler_tree_nodes_Nova_Value_static_Nova_parseValue(0, exceptionData, input, parent, location, require);
	if (l1_Nova_value != (compiler_tree_nodes_Nova_Value*)nova_null)
	{
		if ((nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Tuple2_Accessor_Nova_item1((nova_datastruct_Nova_Tuple2*)(l1_Nova_arrayData), exceptionData) != (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array*)nova_null)
		{
			l1_Nova_value->compiler_tree_nodes_Nova_Value_Nova_arrayAccess = compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_parse(0, exceptionData, (nova_datastruct_list_Nova_Array*)(nova_datastruct_Nova_Tuple2_Accessor_Nova_item1((nova_datastruct_Nova_Tuple2*)(l1_Nova_arrayData), exceptionData)), (compiler_tree_nodes_Nova_Node*)(l1_Nova_value), 0, (intptr_t)nova_null);
		}
		return l1_Nova_value;
	}
	return (compiler_tree_nodes_Nova_Value*)(nova_Nova_Object*)nova_null;
}

compiler_tree_nodes_Nova_Value* compiler_tree_nodes_Nova_Value_static_Nova_parseValue(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, char require)
{
	nova_Nova_Object* l1_Nova_node = (nova_Nova_Object*)nova_null;
	
	if (compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(input, exceptionData))
	{
		compiler_tree_nodes_variables_Nova_VariableDeclaration* l1_Nova_declaration = (compiler_tree_nodes_variables_Nova_VariableDeclaration*)nova_null;
		
		l1_Nova_declaration = (compiler_tree_nodes_variables_Nova_VariableDeclaration*)(compiler_tree_nodes_Nova_Node_virtual_Nova_findVariableDeclaration((compiler_tree_nodes_Nova_Node*)(parent), exceptionData, input, (intptr_t)nova_null));
		if (l1_Nova_declaration != (compiler_tree_nodes_variables_Nova_VariableDeclaration*)nova_null)
		{
			return (compiler_tree_nodes_Nova_Value*)compiler_tree_nodes_variables_Nova_Variable_Nova_construct(0, exceptionData, parent, location, l1_Nova_declaration);
		}
		else
		{
			THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not find declaration for identifier '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), 0), 1);
		}
	}
	l1_Nova_node = (nova_Nova_Object*)nova_null;
	if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_Value_Extension_VTable_val.classInstance))))
	{
		l1_Nova_node = (nova_Nova_Object*)(compiler_tree_nodes_Nova_Accessible_static_Nova_parseDotAccess(0, exceptionData, input, parent, require));
		if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_Value_Extension_VTable_val.classInstance))))
		{
			l1_Nova_node = (nova_Nova_Object*)(compiler_tree_nodes_Nova_Literal_static_Nova_parse(0, exceptionData, input, parent, location, require));
			if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_Value_Extension_VTable_val.classInstance))))
			{
				l1_Nova_node = (nova_Nova_Object*)(compiler_tree_nodes_Nova_StaticClassReference_static_Nova_parse(0, exceptionData, input, parent, location, require));
				if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_Value_Extension_VTable_val.classInstance))))
				{
					l1_Nova_node = (nova_Nova_Object*)(compiler_tree_nodes_Nova_NumericRange_static_Nova_parse(0, exceptionData, input, parent, location, require));
					if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_Value_Extension_VTable_val.classInstance))))
					{
						l1_Nova_node = (nova_Nova_Object*)(compiler_tree_nodes_functions_Nova_Instantiation_static_Nova_parse(0, exceptionData, input, parent, location, require));
						if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_Value_Extension_VTable_val.classInstance))))
						{
							l1_Nova_node = (nova_Nova_Object*)(compiler_tree_nodes_functions_Nova_FunctionCall_static_Nova_parse(0, exceptionData, input, parent, location, require));
							if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_Value_Extension_VTable_val.classInstance))))
							{
								l1_Nova_node = (nova_Nova_Object*)(compiler_tree_nodes_operations_Nova_Operation_static_Nova_parse(0, exceptionData, input, parent, location, require));
								if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_Value_Extension_VTable_val.classInstance))))
								{
									THROW(compiler_Nova_InvalidParseException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not parse value '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), 0), 1);
									if (!(nova_Nova_Class_Nova_isOfType(l1_Nova_node->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_Value_Extension_VTable_val.classInstance))))
									{
										return (compiler_tree_nodes_Nova_Value*)(nova_Nova_Object*)nova_null;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return (compiler_tree_nodes_Nova_Value*)l1_Nova_node;
}

nova_datastruct_Nova_Tuple2* compiler_tree_nodes_Nova_Value_static_Nova_getArrayAccesses(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_bracketIndex = 0;
	nova_datastruct_list_Nova_IntArray* l1_Nova_i = (nova_datastruct_list_Nova_IntArray*)nova_null;
	
	l1_Nova_array = (nova_datastruct_list_Nova_Array*)((nova_Nova_Object*)nova_null);
	l1_Nova_bracketIndex = input->nova_Nova_String_Nova_count - 1;
	while (nova_Nova_String_Nova_get(input, exceptionData, l1_Nova_bracketIndex) == ']')
	{
		int l1_Nova_start = 0;
		int l1_Nova_old = 0;
		
		l1_Nova_start = compiler_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch(input, exceptionData, l1_Nova_bracketIndex, '[', ']', -1, (intptr_t)nova_null);
		l1_Nova_old = l1_Nova_bracketIndex;
		l1_Nova_bracketIndex = l1_Nova_start - 1;
		if (l1_Nova_start > 0)
		{
			if (nova_Nova_String_Nova_get(input, exceptionData, l1_Nova_bracketIndex) == ')' || nova_Nova_String_Nova_get(input, exceptionData, l1_Nova_bracketIndex) == ']' || compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(nova_Nova_String_Nova_substring(input, exceptionData, (intptr_t)nova_null, l1_Nova_start), exceptionData))
		{
			nova_datastruct_list_Nova_Array* l3_Nova_nova_local_0 = (nova_datastruct_list_Nova_Array*)nova_null;
			
			l1_Nova_array = (nova_datastruct_list_Nova_Array*)((l3_Nova_nova_local_0 = l1_Nova_array) != (nova_datastruct_list_Nova_Array*)nova_null ? l3_Nova_nova_local_0 : nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
			nova_datastruct_list_Nova_Array_1_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_array), exceptionData, 0, (nova_Nova_Object*)(nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(input, exceptionData, l1_Nova_start + 1, l1_Nova_old), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0)));
		}
		else if (l1_Nova_array != (nova_datastruct_list_Nova_Array*)nova_null)
		{
			l1_Nova_array = (nova_datastruct_list_Nova_Array*)((nova_Nova_Object*)nova_null);
		}
	}
	if (l1_Nova_bracketIndex <= 1 || nova_Nova_String_Nova_get(input, exceptionData, l1_Nova_bracketIndex) != ']')
	{
		break;
	}
}
l1_Nova_i = nova_datastruct_list_Nova_IntArray_0_Nova_construct(0, exceptionData);
nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_i), exceptionData, (nova_Nova_Object*)(intptr_t)(l1_Nova_bracketIndex + 1));
return (nova_datastruct_Nova_Tuple2*)nova_datastruct_Nova_Tuple2_Nova_construct(0, exceptionData, (nova_Nova_Object*)(l1_Nova_array), (nova_Nova_Object*)(l1_Nova_i));}

compiler_tree_nodes_Nova_Value* compiler_tree_nodes_Nova_Value_1_static_Nova_parse(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_PlaceholderValue* placeholder, int require)
{
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return compiler_tree_nodes_Nova_Value_0_static_Nova_parse(0, exceptionData, placeholder->compiler_tree_nodes_Nova_PlaceholderValue_Nova_value, placeholder->compiler_tree_nodes_Nova_Node_Nova_parent, placeholder->compiler_tree_nodes_Nova_Node_Nova_location, require);
}

char compiler_tree_nodes_Nova_Value_Nova_parseType(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return (nova_Nova_Object*)input != (nova_Nova_Object*)(nova_Nova_String*)nova_null && (compiler_tree_nodes_Nova_Value_Mutatorfunc_Nova_type(this, exceptionData, compiler_tree_nodes_Nova_Type_static_Nova_parse(0, exceptionData, input, 0, 0, (intptr_t)nova_null))) != (compiler_tree_nodes_Nova_Type*)nova_null;
}

char compiler_tree_nodes_Nova_Value_Nova_validateTypes(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context3 contextArg103 = 
	{
	};
	
	if ((nova_Nova_Object*)compiler_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((compiler_tree_nodes_Nova_Value*)(this), exceptionData) != (nova_Nova_Object*)(compiler_tree_nodes_Nova_Type*)nova_null && !compiler_tree_nodes_Nova_Value_Accessor_Nova_isPrimitiveType(this, exceptionData) && !nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((compiler_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&compiler_tree_nodes_Nova_Value_Nova_testLambda103, this, &contextArg103))
	{
		compiler_tree_nodes_Nova_Value_Nova_invalidTypeError(this, exceptionData, 0, 0);
		return 0;
	}
	else
	{
		return 1;
	}
}

void compiler_tree_nodes_Nova_Value_Nova_invalidTypeError(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Type* type, int throwException)
{
	type = (compiler_tree_nodes_Nova_Type*)(type == 0 ? (nova_Nova_Object*)this->compiler_tree_nodes_Nova_Value_Nova_type : (nova_Nova_Object*)type);
	throwException = (int)(throwException == (intptr_t)nova_null ? 1 : throwException);
	compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid type '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((type)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(this), throwException);
}

nova_Nova_String* compiler_tree_nodes_Nova_Value_Nova_writeType(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_Type_Nova_toNova(compiler_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((compiler_tree_nodes_Nova_Value*)(this), exceptionData), exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* compiler_tree_nodes_Nova_Value_Nova_writeArrayAccess(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(this->compiler_tree_nodes_Nova_Value_Nova_arrayAccess != (compiler_tree_nodes_arrays_Nova_ArrayAccess*)nova_null ? compiler_tree_nodes_arrays_Nova_ArrayAccess_Nova_toNova(this->compiler_tree_nodes_Nova_Value_Nova_arrayAccess, exceptionData) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

compiler_tree_nodes_Nova_Value* compiler_tree_nodes_Nova_Value_Nova_cloneTo(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Value* other)
{
	compiler_tree_nodes_Nova_Node_Nova_cloneTo(((compiler_tree_nodes_Nova_Node*)this), exceptionData, (compiler_tree_nodes_Nova_Node*)(other));
	other->compiler_tree_nodes_Nova_Value_Nova_arrayAccess = this->compiler_tree_nodes_Nova_Value_Nova_arrayAccess;
	compiler_tree_nodes_Nova_Value_Mutatorfunc_Nova_type(other, exceptionData, compiler_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((compiler_tree_nodes_Nova_Value*)(this), exceptionData));
	return other;
}

nova_datastruct_list_Nova_Array* generated13(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 8);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Bool"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Byte"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Short"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Int"));
	l1_Nova_temp[4] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Long"));
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Float"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Double"));
	l1_Nova_temp[7] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Char"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 8);
}

char compiler_tree_nodes_Nova_Value_Nova_testLambda37(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Import* _1, Context1* context)
{
	return nova_Nova_String_Nova_equals(compiler_tree_nodes_Nova_Import_Accessor_Nova_className(_1, exceptionData), exceptionData, compiler_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((compiler_tree_nodes_Nova_Value*)(this), exceptionData)->compiler_tree_nodes_Nova_Type_Nova_name);
}

char compiler_tree_nodes_Nova_Value_Nova_testLambda38(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context2* context)
{
	return nova_Nova_String_Nova_equals(_1, exceptionData, compiler_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((compiler_tree_nodes_Nova_Value*)(this), exceptionData)->compiler_tree_nodes_Nova_Type_Nova_name);
}

char compiler_tree_nodes_Nova_Value_Nova_testLambda103(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Import* _1, Context3* context)
{
	return nova_Nova_String_Nova_equals(compiler_tree_nodes_Nova_Import_Accessor_Nova_className(_1, exceptionData), exceptionData, compiler_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((compiler_tree_nodes_Nova_Value*)(this), exceptionData)->compiler_tree_nodes_Nova_Type_Nova_name);
}

compiler_tree_nodes_Nova_Type* compiler_tree_nodes_Nova_Value_Accessorfunc_Nova_type(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_tree_nodes_Nova_Value_Nova_type;
}

compiler_tree_nodes_Nova_Type* compiler_tree_nodes_Nova_Value_Mutatorfunc_Nova_type(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Type* value)
{
	this->compiler_tree_nodes_Nova_Value_Nova_type = value;
	return value;
}

char compiler_tree_nodes_Nova_Value_Accessor_Nova_isAssignable(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_Class_Nova_isOfType(this->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_operations_Assignable_Extension_VTable_val.classInstance));
}


compiler_tree_nodes_Nova_ClassDeclaration* compiler_tree_nodes_Nova_Value_Accessor_Nova_typeClass(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1 contextArg37 = 
	{
	};
	compiler_tree_nodes_Nova_Import* l1_Nova_nova_local_0 = (compiler_tree_nodes_Nova_Import*)nova_null;
	
	return (compiler_tree_nodes_Nova_ClassDeclaration*)((l1_Nova_nova_local_0 = (compiler_tree_nodes_Nova_Import*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_Nova_NovaFile_Accessor_Nova_imports(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((compiler_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure18_Nova_func)&compiler_tree_nodes_Nova_Value_Nova_testLambda37, this, &contextArg37))) != (compiler_tree_nodes_Nova_Import*)nova_null ? (nova_Nova_Object*)(compiler_tree_nodes_Nova_Import_Accessor_Nova_classDeclaration(l1_Nova_nova_local_0, exceptionData)) : (nova_Nova_Object*)nova_null);
}


char compiler_tree_nodes_Nova_Value_Accessor_Nova_isPrimitiveType(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context2 contextArg38 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(compiler_tree_nodes_Nova_Value_Nova_PRIMITIVE_TYPES), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&compiler_tree_nodes_Nova_Value_Nova_testLambda38, this, &contextArg38);
}


void compiler_tree_nodes_Nova_Value_Nova_super(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_Nova_Value_Nova_arrayAccess = (compiler_tree_nodes_arrays_Nova_ArrayAccess*)nova_null;
	this->compiler_tree_nodes_Nova_Value_Nova_type = (compiler_tree_nodes_Nova_Type*)nova_null;
}

compiler_tree_nodes_Nova_Value* compiler_tree_nodes_Nova_Value_virtual0_static_Nova_parse(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	return this->vtable->compiler_tree_nodes_Nova_Value_virtual0_static_Nova_parse(0, exceptionData, input, parent, location, require);
}

char compiler_tree_nodes_Nova_Value_virtual_Nova_parseType(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return this->vtable->compiler_tree_nodes_Nova_Value_virtual_Nova_parseType((compiler_tree_nodes_Nova_Value*)(this), exceptionData, input);
}

nova_Nova_String* compiler_tree_nodes_Nova_Value_virtual_Nova_writeType(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_nodes_Nova_Value_virtual_Nova_writeType((compiler_tree_nodes_Nova_Value*)(this), exceptionData);
}

compiler_tree_nodes_Nova_Type* compiler_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_nodes_Nova_Value_virtual_Accessorfunc_Nova_type((compiler_tree_nodes_Nova_Value*)(this), exceptionData);
}

char compiler_tree_nodes_Nova_Value_virtual_Accessor_Nova_isAssignable(compiler_tree_nodes_Nova_Value* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_nodes_Nova_Value_virtual_Accessor_Nova_isAssignable((compiler_tree_nodes_Nova_Value*)(this), exceptionData);
}

