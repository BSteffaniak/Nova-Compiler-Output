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
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_InstanceDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_FieldDeclaration.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <compiler/tree/nodes/functions/compiler_tree_nodes_functions_Nova_BodyFunction.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Abstractable.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Node.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_NovaFile.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Value.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Identifier.h>
#include <compiler/tree/nodes/arrays/compiler_tree_nodes_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/nodes/operations/compiler_tree_nodes_operations_Nova_Operation.h>
#include <compiler/tree/nodes/variables/compiler_tree_nodes_variables_Nova_Variable.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ClassDeclaration.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Import.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Literal.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_PlaceholderValue.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotatable.h>
#include <compiler/tree/nodes/annotations/compiler_tree_nodes_annotations_Nova_Annotation.h>
#include <compiler/tree/nodes/exceptionhandling/compiler_tree_nodes_exceptionhandling_Nova_Try.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Program.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_Scope.h>
#include <compiler/tree/nodes/compiler_tree_nodes_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* String name */ nova_Nova_String** compiler_tree_nodes_Nova_ClassDeclaration_Nova_name;
	/* Array<Value> argumentTypes = null */ nova_datastruct_list_Nova_Array** compiler_tree_nodes_Nova_ClassDeclaration_Nova_argumentTypes;
} Context1;
typedef struct
{
} Context2;
typedef struct
{
} Context3;
typedef struct
{
} Context4;
typedef struct
{
} Context5;
typedef struct
{
} Context6;
typedef struct
{
} Context7;
typedef struct
{
	/* String name */ nova_Nova_String** compiler_tree_nodes_Nova_ClassDeclaration_Nova_name;
} Context8;
typedef struct
{
} Context9;
typedef struct
{
} Context10;


compiler_tree_nodes_ClassDeclaration_Extension_VTable compiler_tree_nodes_ClassDeclaration_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		(char(*)(compiler_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*, char))compiler_tree_nodes_Nova_ClassDeclaration_Mutatorfunc0_Nova_isAbstract,
		(char(*)(compiler_tree_nodes_Nova_Abstractable*, nova_exception_Nova_ExceptionData*))compiler_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_isAbstract,
		0,
		0,
		(void(*)(compiler_tree_nodes_annotations_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_nodes_annotations_Nova_Annotation*))compiler_tree_nodes_Nova_Node_Nova_addAnnotation,
	},
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_addChild,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_findVariableDeclaration,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseStatement,
	compiler_tree_nodes_Nova_Node_Nova_clone,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_replace,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_validateTypes,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_parsePlaceholders,
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_cloneTo,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_toNova,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_program,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_parentClass,
	compiler_tree_nodes_Nova_Node_Accessor_Nova_scope,
	compiler_tree_nodes_Nova_ClassDeclaration_static_Nova_parse,
	compiler_tree_nodes_Nova_Value_Accessor_Nova_isAssignable,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseModifier,
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_writeModifiers,
};



char compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseModifiers(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int index, char require);
char compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseName(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int start, int end, char require);
char compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseInheritence(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int nameEndIndex, char require);
char compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseExtension(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* extension, char require);
char compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseImplementations(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* implementations, char require);
char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda14(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_FunctionDeclaration* func, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda15(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context2* context);
char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda16(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context3* context);
char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda17(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context4* context);
char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda18(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context5* context);
nova_Nova_String* compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda20(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context);
nova_Nova_String* compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda21(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context7* context);
char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda84(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_variables_Nova_FieldDeclaration* _1, Context8* context);
char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda85(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context9* context);
char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda86(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context10* context);


void compiler_tree_nodes_Nova_ClassDeclaration_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_nodes_Nova_ClassDeclaration* compiler_tree_nodes_Nova_ClassDeclaration_Nova_construct(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_nodes_Nova_ClassDeclaration, this,);
	this->vtable = &compiler_tree_nodes_ClassDeclaration_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_nodes_Nova_Node_Nova_super((compiler_tree_nodes_Nova_Node*)this, exceptionData);
	compiler_tree_nodes_Nova_Value_Nova_super((compiler_tree_nodes_Nova_Value*)this, exceptionData);
	compiler_tree_nodes_Nova_Identifier_Nova_super((compiler_tree_nodes_Nova_Identifier*)this, exceptionData);
	compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_super((compiler_tree_nodes_variables_Nova_VariableDeclaration*)this, exceptionData);
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_super((compiler_tree_nodes_variables_Nova_InstanceDeclaration*)this, exceptionData);
	compiler_tree_nodes_Nova_ClassDeclaration_Nova_super(this, exceptionData);
	
	{
		compiler_tree_nodes_Nova_ClassDeclaration_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_nodes_Nova_ClassDeclaration_Nova_destroy(compiler_tree_nodes_Nova_ClassDeclaration** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	nova_Nova_String_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_ClassDeclaration_Nova_fields, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_nodes_Nova_ClassDeclaration_Nova_functions, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_nodes_Nova_ClassDeclaration_Nova_this(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_this((compiler_tree_nodes_variables_Nova_InstanceDeclaration*)(this), exceptionData, parent, location);
	this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_fields = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_functions = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

void compiler_tree_nodes_Nova_ClassDeclaration_Nova_addChild(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* child)
{
	if (nova_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_variables_FieldDeclaration_Extension_VTable_val.classInstance)))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_Nova_Object*)((compiler_tree_nodes_variables_Nova_FieldDeclaration*)child));
	}
	else if (nova_Nova_Class_Nova_isOfType(child->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_functions_FunctionDeclaration_Extension_VTable_val.classInstance)))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_Nova_Object*)((compiler_tree_nodes_functions_Nova_FunctionDeclaration*)child));
	}
	else
	{
		compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Statement '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((child)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' used in wrong context")))), child, (intptr_t)nova_null);
	}
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_replace(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_Nova_Node* toReplace, compiler_tree_nodes_Nova_Node* replacement)
{
	if (nova_Nova_Class_Nova_isOfType(toReplace->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_variables_FieldDeclaration_Extension_VTable_val.classInstance)))
	{
		return nova_datastruct_list_Nova_Array_Nova_replace((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_Nova_Object*)((compiler_tree_nodes_variables_Nova_FieldDeclaration*)toReplace), (nova_Nova_Object*)((compiler_tree_nodes_variables_Nova_FieldDeclaration*)replacement));
	}
	else if (nova_Nova_Class_Nova_isOfType(toReplace->vtable->classInstance, exceptionData, (nova_Nova_Class*)(compiler_tree_nodes_functions_FunctionDeclaration_Extension_VTable_val.classInstance)))
	{
		return nova_datastruct_list_Nova_Array_Nova_replace((nova_datastruct_list_Nova_Array*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_Nova_Object*)((compiler_tree_nodes_functions_Nova_FunctionDeclaration*)toReplace), (nova_Nova_Object*)((compiler_tree_nodes_functions_Nova_FunctionDeclaration*)replacement));
	}
	else
	{
		return 0;
	}
}

nova_datastruct_list_Nova_Array* compiler_tree_nodes_Nova_ClassDeclaration_Nova_findCompatibleFunctions(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, nova_datastruct_list_Nova_Array* argumentTypes)
{
	Context1 contextArg14 = 
	{
		&name,
		&argumentTypes,
	};
	
	argumentTypes = (nova_datastruct_list_Nova_Array*)(argumentTypes == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)argumentTypes);
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda14, this, &contextArg14);
}

compiler_tree_nodes_variables_Nova_VariableDeclaration* compiler_tree_nodes_Nova_ClassDeclaration_Nova_findVariableDeclaration(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors)
{
	compiler_tree_nodes_variables_Nova_FieldDeclaration* l1_Nova_field = (compiler_tree_nodes_variables_Nova_FieldDeclaration*)nova_null;
	Context8 contextArg84 = 
	{
		&name,
	};
	
	searchAncestors = (int)(searchAncestors == (intptr_t)nova_null ? 1 : searchAncestors);
	l1_Nova_field = (compiler_tree_nodes_variables_Nova_FieldDeclaration*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_datastruct_list_Nova_List_closure18_Nova_func)&compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda84, this, &contextArg84));
	if (l1_Nova_field != (compiler_tree_nodes_variables_Nova_FieldDeclaration*)nova_null)
	{
		return (compiler_tree_nodes_variables_Nova_VariableDeclaration*)l1_Nova_field;
	}
	return compiler_tree_nodes_Nova_Node_Nova_findVariableDeclaration((compiler_tree_nodes_Nova_Node*)(((compiler_tree_nodes_variables_Nova_InstanceDeclaration*)this)), exceptionData, name, searchAncestors);
}

compiler_tree_nodes_Nova_Node* compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseStatement(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	compiler_tree_nodes_Nova_Node* l1_Nova_node = (compiler_tree_nodes_Nova_Node*)nova_null;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = (compiler_tree_nodes_Nova_Node*)((nova_Nova_Object*)nova_null);
	if (!(l1_Nova_node != (compiler_tree_nodes_Nova_Node*)nova_null))
	{
		l1_Nova_node = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_functions_Nova_BodyFunction_static_Nova_parse(0, exceptionData, input, (compiler_tree_nodes_Nova_Node*)(this), location, require));
		if (!(l1_Nova_node != (compiler_tree_nodes_Nova_Node*)nova_null))
		{
			l1_Nova_node = (compiler_tree_nodes_Nova_Node*)(compiler_tree_nodes_variables_Nova_FieldDeclaration_static_Nova_parse(0, exceptionData, input, (compiler_tree_nodes_Nova_Node*)(this), location, require));
		}
	}
	return l1_Nova_node;
}

compiler_tree_nodes_Nova_ClassDeclaration* compiler_tree_nodes_Nova_ClassDeclaration_static_Nova_parse(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_nodes_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	int l1_Nova_index = 0;
	
	parent = (compiler_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_index = compiler_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(input, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("class")), (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_index >= 0)
	{
		compiler_tree_nodes_Nova_ClassDeclaration* l1_Nova_node = (compiler_tree_nodes_Nova_ClassDeclaration*)nova_null;
		int l1_Nova_nameStartIndex = 0;
		int l1_Nova_nameEndIndex = 0;
		
		l1_Nova_node = compiler_tree_nodes_Nova_ClassDeclaration_Nova_construct(0, exceptionData, parent, location);
		if (!compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseModifiers(l1_Nova_node, exceptionData, input, l1_Nova_index, require))
		{
			return (compiler_tree_nodes_Nova_ClassDeclaration*)(nova_Nova_Object*)nova_null;
		}
		l1_Nova_nameStartIndex = compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(input, exceptionData, l1_Nova_index + 6, (intptr_t)nova_null, (intptr_t)nova_null);
		l1_Nova_nameEndIndex = compiler_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex(input, exceptionData, l1_Nova_nameStartIndex + 1, (intptr_t)nova_null, (intptr_t)nova_null);
		if (compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseName(l1_Nova_node, exceptionData, input, l1_Nova_nameStartIndex, l1_Nova_nameEndIndex, require) && compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseInheritence(l1_Nova_node, exceptionData, input, l1_Nova_nameEndIndex, require))
		{
			return l1_Nova_node;
		}
		else if (require)
		{
			compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid class declaration '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(l1_Nova_node), (intptr_t)nova_null);
		}
	}
	else if (require)
	{
		compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid class declaration '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), parent, (intptr_t)nova_null);
	}
	return (compiler_tree_nodes_Nova_ClassDeclaration*)(nova_Nova_Object*)nova_null;
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseModifiers(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int index, char require)
{
	nova_Nova_String* l1_Nova_modifiers = (nova_Nova_String*)nova_null;
	
	l1_Nova_modifiers = nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(input, exceptionData, (intptr_t)nova_null, index), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
	if (!compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_parseModifiers((compiler_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData, l1_Nova_modifiers))
	{
		nova_datastruct_list_Nova_Array* l1_Nova_invalid = (nova_datastruct_list_Nova_Array*)nova_null;
		
		l1_Nova_invalid = compiler_tree_nodes_variables_Nova_VariableDeclaration_Nova_getInvalidModifiers((compiler_tree_nodes_variables_Nova_VariableDeclaration*)(this), exceptionData, l1_Nova_modifiers);
		compiler_Nova_SyntaxMessage_static_Nova_errorIf(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid modifier"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((nova_Nova_String*)(l1_Nova_invalid->nova_datastruct_list_Nova_Array_Nova_count != 1 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("s")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(l1_Nova_invalid), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("', '"))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (compiler_tree_nodes_Nova_Node*)(this), require, (intptr_t)nova_null);
		return 0;
	}
	return 1;
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseName(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int start, int end, char require)
{
	if (end > start)
	{
		this->compiler_tree_nodes_Nova_Identifier_Nova_name = nova_Nova_String_Nova_substring(input, exceptionData, start, end);
		if (compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(this->compiler_tree_nodes_Nova_Identifier_Nova_name, exceptionData))
		{
			return 1;
		}
		else
		{
			compiler_Nova_SyntaxMessage_static_Nova_errorIf(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid class name '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->compiler_tree_nodes_Nova_Identifier_Nova_name)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), (compiler_tree_nodes_Nova_Node*)(this), require, (intptr_t)nova_null);
		}
	}
	return 0;
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseInheritence(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, int nameEndIndex, char require)
{
	nova_Nova_String* l1_Nova_extension = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_implementations = (nova_Nova_String*)nova_null;
	int l1_Nova_implementsIndex = 0;
	
	l1_Nova_extension = nova_Nova_String_Nova_substring(input, exceptionData, compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(input, exceptionData, nameEndIndex + 1, (intptr_t)nova_null, input->nova_Nova_String_Nova_count), (intptr_t)nova_null);
	l1_Nova_implementations = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	l1_Nova_implementsIndex = compiler_util_Nova_CompilerStringFunctions_Nova_nextWordIndex(l1_Nova_extension, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("implements")), (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_implementsIndex >= 0)
	{
		l1_Nova_implementations = nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(l1_Nova_extension, exceptionData, l1_Nova_implementsIndex, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
		l1_Nova_extension = nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(l1_Nova_extension, exceptionData, (intptr_t)nova_null, l1_Nova_implementsIndex), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
	}
	return compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseExtension(this, exceptionData, l1_Nova_extension, require) && compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseImplementations(this, exceptionData, l1_Nova_implementations, require);
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseExtension(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* extension, char require)
{
	if (nova_Nova_String_1_Nova_startsWith(extension, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("extends\\s+")))))
	{
		extension = nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(extension, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("extends "))->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
		if (!compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(extension, exceptionData))
		{
			compiler_Nova_SyntaxMessage_static_Nova_errorIf(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Extended class '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((extension)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' is not a valid type")))), (compiler_tree_nodes_Nova_Node*)(this), require, (intptr_t)nova_null);
			return 0;
		}
		this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass = extension;
		return 1;
	}
	return extension->nova_Nova_String_Nova_count == 0;
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseImplementations(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* implementations, char require)
{
	if (nova_Nova_String_1_Nova_startsWith(implementations, exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("implements\\s+")))))
	{
		Context9 contextArg85 = 
		{
		};
		
		this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces = compiler_util_Nova_CompilerStringFunctions_Nova_splitAtCommas(nova_Nova_String_Nova_substring(implementations, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("implements "))->nova_Nova_String_Nova_count, (intptr_t)nova_null), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
		if (nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda85, this, &contextArg85))
		{
			nova_datastruct_list_Nova_Array* l2_Nova_invalid = (nova_datastruct_list_Nova_Array*)nova_null;
			Context10 contextArg86 = 
			{
			};
			
			l2_Nova_invalid = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda86, this, &contextArg86));
			compiler_Nova_SyntaxMessage_static_Nova_errorIf(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid interface type"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((nova_Nova_String*)(l2_Nova_invalid->nova_datastruct_list_Nova_Array_Nova_count != 1 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("s")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(l2_Nova_invalid), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("', '"))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (compiler_tree_nodes_Nova_Node*)(this), require, (intptr_t)nova_null);
			return 0;
		}
		return 1;
	}
	return implementations->nova_Nova_String_Nova_count == 0;
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_parseModifier(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifier)
{
	if (compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_parseModifier(((compiler_tree_nodes_variables_Nova_InstanceDeclaration*)this), exceptionData, modifier))
	{
		return 1;
	}
	if (nova_Nova_String_Nova_equals((modifier), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("abstract"))))
	{
		compiler_tree_nodes_Nova_ClassDeclaration_Mutatorfunc0_Nova_isAbstract(this, exceptionData, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_validateTypes(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context2 contextArg15 = 
	{
	};
	Context3 contextArg16 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda15, this, &contextArg15, 0) & nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda16, this, &contextArg16, 0);
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_parsePlaceholders(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context4 contextArg17 = 
	{
	};
	Context5 contextArg18 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda17, this, &contextArg17, 0) & nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda18, this, &contextArg18, 0);
}

nova_Nova_String* compiler_tree_nodes_Nova_ClassDeclaration_Nova_writeHeader(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_trim(nova_Nova_String_0_Nova_replace(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_ClassDeclaration_Nova_writeModifiers(this, exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" class "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->compiler_tree_nodes_Nova_Identifier_Nova_name)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_ClassDeclaration_Nova_writeExtension(this, exceptionData))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_nodes_Nova_ClassDeclaration_Nova_writeImplementedInterfaces(this, exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))))))), exceptionData, nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+"))), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
}

nova_Nova_String* compiler_tree_nodes_Nova_ClassDeclaration_Nova_writeModifiers(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeModifiers(((compiler_tree_nodes_variables_Nova_InstanceDeclaration*)this), exceptionData)), exceptionData, compiler_tree_nodes_Nova_Abstractable_Nova_writeAbstract((compiler_tree_nodes_Nova_Abstractable*)(this), exceptionData));
}

nova_Nova_String* compiler_tree_nodes_Nova_ClassDeclaration_Nova_writeExtension(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass != (nova_Nova_String*)nova_null ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("extends "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* compiler_tree_nodes_Nova_ClassDeclaration_Nova_writeImplementedInterfaces(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces->nova_datastruct_list_Nova_Array_Nova_count > 0 ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("implements "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* compiler_tree_nodes_Nova_ClassDeclaration_Nova_toNova(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context6 contextArg20 = 
	{
	};
	Context7 contextArg21 = 
	{
	};
	
	return nova_Nova_String_Nova_trim((nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_tree_nodes_Nova_ClassDeclaration_Nova_writeHeader(this, exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" {\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_fields), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda20, this, &contextArg20)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n\n"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_functions), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda21, this, &contextArg21)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("}"))))))))), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
}

nova_Nova_String* compiler_tree_nodes_Nova_ClassDeclaration_Nova_toString(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_nodes_Nova_ClassDeclaration_Nova_writeHeader(this, exceptionData);
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda14(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_FunctionDeclaration* func, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return nova_Nova_String_Nova_equals(func->compiler_tree_nodes_Nova_Identifier_Nova_name, exceptionData, (*context->compiler_tree_nodes_Nova_ClassDeclaration_Nova_name)) && ((nova_Nova_Object*)(*context->compiler_tree_nodes_Nova_ClassDeclaration_Nova_argumentTypes) == (nova_Nova_Object*)(nova_datastruct_list_Nova_Array*)nova_null || compiler_tree_nodes_functions_Nova_FunctionDeclaration_Nova_compatibleArguments(func, exceptionData, (*context->compiler_tree_nodes_Nova_ClassDeclaration_Nova_argumentTypes)));
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda15(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context2* context)
{
	return compiler_tree_nodes_Nova_Node_virtual_Nova_validateTypes((compiler_tree_nodes_Nova_Node*)(_1), exceptionData);
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda16(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context3* context)
{
	return compiler_tree_nodes_Nova_Node_virtual_Nova_validateTypes((compiler_tree_nodes_Nova_Node*)(_1), exceptionData);
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda17(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context4* context)
{
	return compiler_tree_nodes_variables_Nova_FieldDeclaration_Nova_parsePlaceholders(_1, exceptionData);
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda18(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context5* context)
{
	return compiler_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders((compiler_tree_nodes_Nova_Node*)(_1), exceptionData);
}

nova_Nova_String* compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda20(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_variables_Nova_FieldDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context)
{
	return compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(_1), exceptionData);
}

nova_Nova_String* compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda21(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_functions_Nova_FunctionDeclaration* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context7* context)
{
	return compiler_tree_nodes_Nova_Node_virtual_Nova_toNova((compiler_tree_nodes_Nova_Node*)(_1), exceptionData);
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda84(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_nodes_variables_Nova_FieldDeclaration* _1, Context8* context)
{
	return nova_Nova_String_Nova_equals(_1->compiler_tree_nodes_Nova_Identifier_Nova_name, exceptionData, (*context->compiler_tree_nodes_Nova_ClassDeclaration_Nova_name));
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda85(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context9* context)
{
	return !compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(_1, exceptionData);
}

char compiler_tree_nodes_Nova_ClassDeclaration_Nova_testLambda86(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context10* context)
{
	return !compiler_util_Nova_CompilerStringFunctions_Accessor_Nova_isIdentifier(_1, exceptionData);
}

compiler_tree_nodes_Nova_ClassDeclaration* compiler_tree_nodes_Nova_ClassDeclaration_Accessor_Nova_parentClass(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


nova_Nova_String* compiler_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_location(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((compiler_tree_nodes_Nova_Node*)(this), exceptionData)->compiler_tree_nodes_Nova_NovaFile_Nova_packageDeclaration->compiler_tree_nodes_Nova_Package_Nova_location != (nova_Nova_String*)nova_null ? nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((compiler_tree_nodes_Nova_Node*)(this), exceptionData)->compiler_tree_nodes_Nova_NovaFile_Nova_packageDeclaration->compiler_tree_nodes_Nova_Package_Nova_location), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/"))), exceptionData, this->compiler_tree_nodes_Nova_Identifier_Nova_name)) : this->compiler_tree_nodes_Nova_Identifier_Nova_name);
}


char compiler_tree_nodes_Nova_ClassDeclaration_Accessorfunc_Nova_isAbstract(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_isAbstract;
}

char compiler_tree_nodes_Nova_ClassDeclaration_Mutatorfunc0_Nova_isAbstract(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_isAbstract = value;
	return value;
}

void compiler_tree_nodes_Nova_ClassDeclaration_Nova_super(compiler_tree_nodes_Nova_ClassDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_isAbstract = 0;
	this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_extendedClass = (nova_Nova_String*)nova_null;
	this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_fields = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_functions = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_nodes_Nova_ClassDeclaration_Nova_implementedInterfaces = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 0, (intptr_t)nova_null);
}
