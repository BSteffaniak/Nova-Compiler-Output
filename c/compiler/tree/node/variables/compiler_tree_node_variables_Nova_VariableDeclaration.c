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
#include <compiler/tree/node/compiler_tree_node_Nova_Node.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Identifier.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Accessible.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Value.h>
#include <compiler/tree/node/arrays/compiler_tree_node_arrays_Nova_ArrayAccess.h>
#include <compiler/tree/node/compiler_tree_node_Nova_NovaClass.h>
#include <compiler/error/compiler_error_Nova_UnimplementedOperationException.h>
#include <compiler/tree/node/annotation/compiler_tree_node_annotation_Nova_Annotatable.h>
#include <compiler/tree/node/annotation/compiler_tree_node_annotation_Nova_Annotation.h>
#include <compiler/tree/node/exceptionhandling/compiler_tree_node_exceptionhandling_Nova_Try.h>
#include <compiler/tree/node/functions/compiler_tree_node_functions_Nova_NovaFunction.h>
#include <compiler/tree/node/compiler_tree_node_Nova_NovaFile.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Program.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Scope.h>
#include <compiler/tree/node/compiler_tree_node_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;
typedef struct
{
} Context2;


compiler_tree_node_variables_VariableDeclaration_Extension_VTable compiler_tree_node_variables_VariableDeclaration_Extension_VTable_val =
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
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_node_Nova_Node_Nova_addAnnotation,
	compiler_tree_node_Nova_Node_Nova_clone,
	compiler_tree_node_Nova_Node_Accessor_Nova_program,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentClass,
	compiler_tree_node_variables_Nova_VariableDeclaration_Nova_tryParse,
	compiler_tree_node_variables_Nova_VariableDeclaration_Nova_parseModifier,
};



char compiler_tree_node_variables_Nova_VariableDeclaration_Nova_testLambda21(compiler_tree_node_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context1* context);
char compiler_tree_node_variables_Nova_VariableDeclaration_Nova_testLambda22(compiler_tree_node_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
void compiler_tree_node_variables_Nova_VariableDeclaration_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_node_variables_Nova_VariableDeclaration* compiler_tree_node_variables_Nova_VariableDeclaration_Nova_construct(compiler_tree_node_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	CCLASS_NEW(compiler_tree_node_variables_Nova_VariableDeclaration, this,);
	this->vtable = &compiler_tree_node_variables_VariableDeclaration_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_node_Nova_Node_Nova_super((compiler_tree_node_Nova_Node*)this, exceptionData);
	compiler_tree_node_Nova_Value_Nova_super((compiler_tree_node_Nova_Value*)this, exceptionData);
	compiler_tree_node_Nova_Identifier_Nova_super((compiler_tree_node_Nova_Identifier*)this, exceptionData);
	compiler_tree_node_variables_Nova_VariableDeclaration_Nova_super(this, exceptionData);
	
	{
		compiler_tree_node_variables_Nova_VariableDeclaration_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void compiler_tree_node_variables_Nova_VariableDeclaration_Nova_destroy(compiler_tree_node_variables_Nova_VariableDeclaration** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void compiler_tree_node_variables_Nova_VariableDeclaration_Nova_this(compiler_tree_node_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* parent, compiler_util_Nova_Location* location)
{
	parent = (compiler_tree_node_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	compiler_tree_node_Nova_Identifier_Nova_this((compiler_tree_node_Nova_Identifier*)(this), exceptionData, parent, location);
}

compiler_tree_node_variables_Nova_VariableDeclaration* compiler_tree_node_variables_Nova_VariableDeclaration_Nova_tryParse(compiler_tree_node_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, compiler_tree_node_Nova_Node* parent, compiler_util_Nova_Location* location, int require)
{
	parent = (compiler_tree_node_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (compiler_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (1)
	{
		compiler_tree_node_variables_Nova_VariableDeclaration* l1_Nova_node = (compiler_tree_node_variables_Nova_VariableDeclaration*)nova_null;
		
		l1_Nova_node = compiler_tree_node_variables_Nova_VariableDeclaration_Nova_construct(0, exceptionData, parent, location);
		return l1_Nova_node;
	}
	return (compiler_tree_node_variables_Nova_VariableDeclaration*)(nova_Nova_Object*)nova_null;
}

char compiler_tree_node_variables_Nova_VariableDeclaration_Nova_parseModifier(compiler_tree_node_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifier)
{
	return 0;
}

char compiler_tree_node_variables_Nova_VariableDeclaration_Nova_parseModifiers(compiler_tree_node_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifiers)
{
	Context1 contextArg21 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(nova_Nova_String_Nova_split(modifiers, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+")))), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_node_variables_Nova_VariableDeclaration_Nova_testLambda21, this, &contextArg21);
}

nova_datastruct_list_Nova_Array* compiler_tree_node_variables_Nova_VariableDeclaration_Nova_getInvalidModifiers(compiler_tree_node_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifiers)
{
	Context2 contextArg22 = 
	{
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_Nova_String_Nova_split(modifiers, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\s+")))), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&compiler_tree_node_variables_Nova_VariableDeclaration_Nova_testLambda22, this, &contextArg22);
}

char compiler_tree_node_variables_Nova_VariableDeclaration_Nova_testLambda21(compiler_tree_node_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, Context1* context)
{
	return compiler_tree_node_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier((compiler_tree_node_variables_Nova_VariableDeclaration*)(this), exceptionData, _1);
}

char compiler_tree_node_variables_Nova_VariableDeclaration_Nova_testLambda22(compiler_tree_node_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	return !compiler_tree_node_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier((compiler_tree_node_variables_Nova_VariableDeclaration*)(this), exceptionData, _1);
}

void compiler_tree_node_variables_Nova_VariableDeclaration_Nova_super(compiler_tree_node_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char compiler_tree_node_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier(compiler_tree_node_variables_Nova_VariableDeclaration* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* modifier)
{
	return this->vtable->compiler_tree_node_variables_Nova_VariableDeclaration_virtual_Nova_parseModifier((compiler_tree_node_variables_Nova_VariableDeclaration*)(this), exceptionData, modifier);
}
