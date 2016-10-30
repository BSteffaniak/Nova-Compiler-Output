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
#include <compiler/tree/node/compiler_tree_node_Nova_Node.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Scope.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/compiler_Nova_SyntaxMessage.h>
#include <compiler/tree/node/functions/compiler_tree_node_functions_Nova_NovaFunction.h>
#include <compiler/tree/node/variables/compiler_tree_node_variables_Nova_InstanceDeclaration.h>
#include <compiler/tree/node/functions/compiler_tree_node_functions_Nova_Parameter.h>
#include <compiler/tree/node/functions/compiler_tree_node_functions_Nova_ParameterList.h>
#include <compiler/tree/node/variables/compiler_tree_node_variables_Nova_VariableDeclaration.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Identifier.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Accessible.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Value.h>
#include <compiler/tree/node/arrays/compiler_tree_node_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/node/annotation/compiler_tree_node_annotation_Nova_Annotatable.h>
#include <compiler/tree/node/annotation/compiler_tree_node_annotation_Nova_Annotation.h>
#include <compiler/tree/node/exceptionhandling/compiler_tree_node_exceptionhandling_Nova_Try.h>
#include <compiler/tree/node/compiler_tree_node_Nova_NovaClass.h>
#include <compiler/tree/node/compiler_tree_node_Nova_NovaFile.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Program.h>
#include <compiler/tree/node/compiler_tree_node_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_tree_node_functions_BodyFunction_Extension_VTable compiler_tree_node_functions_BodyFunction_Extension_VTable_val =
{
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		(void(*)(compiler_tree_node_annotation_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_node_annotation_Nova_Annotation*))compiler_tree_node_Nova_Node_Nova_addAnnotation,
	},
	nova_Nova_Object_Nova_equals,
	compiler_tree_node_functions_Nova_NovaFunction_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_node_functions_Nova_BodyFunction_Nova_parseChild,
	compiler_tree_node_Nova_Node_Nova_addAnnotation,
	compiler_tree_node_Nova_Node_Nova_clone,
	compiler_tree_node_variables_Nova_VariableDeclaration_Nova_cloneTo,
	compiler_tree_node_Nova_Node_Accessor_Nova_program,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_node_functions_Nova_NovaFunction_Accessor_Nova_parentFunction,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_node_functions_Nova_BodyFunction_static_Nova_parse,
	compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_parseModifier,
	compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_writeModifiers,
};


void compiler_tree_node_functions_Nova_BodyFunction_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_node_functions_Nova_BodyFunction* compiler_tree_node_functions_Nova_BodyFunction_Nova_construct(compiler_tree_node_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_node_functions_Nova_BodyFunction, this,);
	this->vtable = &compiler_tree_node_functions_BodyFunction_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_node_Nova_Node_Nova_super((compiler_tree_node_Nova_Node*)this, exceptionData);
	compiler_tree_node_Nova_Value_Nova_super((compiler_tree_node_Nova_Value*)this, exceptionData);
	compiler_tree_node_Nova_Identifier_Nova_super((compiler_tree_node_Nova_Identifier*)this, exceptionData);
	compiler_tree_node_variables_Nova_VariableDeclaration_Nova_super((compiler_tree_node_variables_Nova_VariableDeclaration*)this, exceptionData);
	compiler_tree_node_variables_Nova_InstanceDeclaration_Nova_super((compiler_tree_node_variables_Nova_InstanceDeclaration*)this, exceptionData);
	compiler_tree_node_functions_Nova_NovaFunction_Nova_super((compiler_tree_node_functions_Nova_NovaFunction*)this, exceptionData);
	compiler_tree_node_functions_Nova_BodyFunction_Nova_super(this, exceptionData);
	
	{
		compiler_tree_node_functions_Nova_BodyFunction_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_node_functions_Nova_BodyFunction_Nova_destroy(compiler_tree_node_functions_Nova_BodyFunction** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	compiler_tree_node_Nova_Scope_Nova_destroy(&(*this)->compiler_tree_node_functions_Nova_BodyFunction_Nova_scope, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_tree_node_functions_Nova_BodyFunction_Nova_this(compiler_tree_node_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_node_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_node_functions_Nova_NovaFunction_Nova_this((compiler_tree_node_functions_Nova_NovaFunction*)(this), exceptionData, parent, location);
	this->compiler_tree_node_functions_Nova_BodyFunction_Nova_scope = compiler_tree_node_Nova_Scope_Nova_construct(0, exceptionData, (compiler_tree_node_Nova_Node*)(this), location);
}

compiler_tree_node_Nova_Node* compiler_tree_node_functions_Nova_BodyFunction_Nova_parseChild(compiler_tree_node_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement, int require)
{
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return compiler_tree_node_Nova_Scope_Nova_parseChild(this->compiler_tree_node_functions_Nova_BodyFunction_Nova_scope, exceptionData, statement, require);
}

compiler_tree_node_functions_Nova_BodyFunction* compiler_tree_node_functions_Nova_BodyFunction_static_Nova_parse(compiler_tree_node_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_node_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	compiler_tree_node_functions_Nova_BodyFunction* l1_Nova_node = (compiler_tree_node_functions_Nova_BodyFunction*)nova_null;
	nova_Nova_String* l1_Nova_signature = (nova_Nova_String*)nova_null;
	
	parent = (compiler_tree_node_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	l1_Nova_node = compiler_tree_node_functions_Nova_BodyFunction_Nova_construct(0, exceptionData, parent, location);
	l1_Nova_signature = compiler_tree_node_functions_Nova_NovaFunction_Nova_findSignature((compiler_tree_node_functions_Nova_NovaFunction*)(l1_Nova_node), exceptionData, input);
	if (l1_Nova_signature != (nova_Nova_String*)nova_null)
	{
		nova_Nova_String* l1_Nova_parameters = (nova_Nova_String*)nova_null;
		
		l1_Nova_parameters = compiler_tree_node_functions_Nova_NovaFunction_Nova_findParameters((compiler_tree_node_functions_Nova_NovaFunction*)(l1_Nova_node), exceptionData, input);
		if (l1_Nova_parameters != (nova_Nova_String*)nova_null)
		{
			if (compiler_tree_node_functions_Nova_NovaFunction_Nova_parseSignature((compiler_tree_node_functions_Nova_NovaFunction*)(l1_Nova_node), exceptionData, l1_Nova_signature) && compiler_tree_node_functions_Nova_NovaFunction_Nova_parseParameters((compiler_tree_node_functions_Nova_NovaFunction*)(l1_Nova_node), exceptionData, l1_Nova_parameters))
			{
				return l1_Nova_node;
			}
		}
	}
	else if (require)
	{
		compiler_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid function declaration '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((input)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))), parent, (intptr_t)nova_null);
	}
	return (compiler_tree_node_functions_Nova_BodyFunction*)(nova_Nova_Object*)nova_null;
}

void compiler_tree_node_functions_Nova_BodyFunction_Nova_super(compiler_tree_node_functions_Nova_BodyFunction* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_node_functions_Nova_BodyFunction_Nova_scope = (compiler_tree_node_Nova_Scope*)nova_null;
}

