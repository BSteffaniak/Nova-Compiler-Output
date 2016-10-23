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
#include <compiler/util/compiler_util_Nova_SyntaxUtils.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Identifier.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Value.h>






nova_datastruct_list_Nova_Array* generated11(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0);
nova_datastruct_list_Nova_Array* generated12(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0);
nova_datastruct_list_Nova_Array* generated13(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0);
nova_datastruct_list_Nova_Array* generated14(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0);




void compiler_tree_node_Nova_Accessible_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_node_Nova_Accessible* compiler_tree_node_Nova_Accessible_0_Nova_getNextAccessingOfType(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type)
{
	return compiler_tree_node_Nova_Accessible_1_Nova_getNextAccessingOfType(this, exceptionData, generated11(this, exceptionData, type));
}

compiler_tree_node_Nova_Accessible* compiler_tree_node_Nova_Accessible_1_Nova_getNextAccessingOfType(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types)
{
	return compiler_tree_node_Nova_Accessible_2_Nova_getNextAccessingOfType(this, exceptionData, types, 0);
}

compiler_tree_node_Nova_Accessible* compiler_tree_node_Nova_Accessible_2_Nova_getNextAccessingOfType(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite)
{
	compiler_tree_node_Nova_Accessible* l2_Nova_current = (compiler_tree_node_Nova_Accessible*)nova_null;
	
	l2_Nova_current = compiler_tree_node_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData);
	while (l2_Nova_current != (compiler_tree_node_Nova_Accessible*)nova_null && compiler_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l2_Nova_current)->nova_Nova_Object_Nova_class) == opposite)
	{
		l2_Nova_current = compiler_tree_node_Nova_Accessible_Accessor_Nova_accessingNode(l2_Nova_current, exceptionData);
	}
	return l2_Nova_current;
}

compiler_tree_node_Nova_Accessible* compiler_tree_node_Nova_Accessible_0_Nova_getLastAccessingOfType(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type, char opposite, int inclusive)
{
	inclusive = (int)(inclusive == (intptr_t)nova_null ? 0 : inclusive);
	return compiler_tree_node_Nova_Accessible_1_Nova_getLastAccessingOfType(this, exceptionData, generated12(this, exceptionData, type), opposite, inclusive);
}

compiler_tree_node_Nova_Accessible* compiler_tree_node_Nova_Accessible_1_Nova_getLastAccessingOfType(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite, int inclusive)
{
	compiler_tree_node_Nova_Accessible* l2_Nova_previous = (compiler_tree_node_Nova_Accessible*)nova_null;
	compiler_tree_node_Nova_Accessible* l2_Nova_current = (compiler_tree_node_Nova_Accessible*)nova_null;
	
	inclusive = (int)(inclusive == (intptr_t)nova_null ? 0 : inclusive);
	l2_Nova_previous = (compiler_tree_node_Nova_Accessible*)((nova_Nova_Object*)nova_null);
	l2_Nova_current = this;
	if (inclusive && compiler_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l2_Nova_current)->nova_Nova_Object_Nova_class) != opposite)
	{
		return l2_Nova_current;
	}
	while (l2_Nova_current != (compiler_tree_node_Nova_Accessible*)nova_null && compiler_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l2_Nova_current)->nova_Nova_Object_Nova_class) != opposite)
	{
		l2_Nova_previous = l2_Nova_current;
		l2_Nova_current = compiler_tree_node_Nova_Accessible_Accessor_Nova_accessingNode(l2_Nova_current, exceptionData);
	}
	return l2_Nova_previous;
}

compiler_tree_node_Nova_Accessible* compiler_tree_node_Nova_Accessible_0_Nova_getLastAccessedOfType(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type, char opposite)
{
	return compiler_tree_node_Nova_Accessible_1_Nova_getLastAccessedOfType(this, exceptionData, generated13(this, exceptionData, type), opposite);
}

compiler_tree_node_Nova_Accessible* compiler_tree_node_Nova_Accessible_1_Nova_getLastAccessedOfType(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types, char opposite)
{
	compiler_tree_node_Nova_Accessible* l2_Nova_previous = (compiler_tree_node_Nova_Accessible*)nova_null;
	compiler_tree_node_Nova_Accessible* l2_Nova_current = (compiler_tree_node_Nova_Accessible*)nova_null;
	
	l2_Nova_previous = (compiler_tree_node_Nova_Accessible*)((nova_Nova_Object*)nova_null);
	l2_Nova_current = this;
	while (l2_Nova_current != (compiler_tree_node_Nova_Accessible*)nova_null)
	{
		if (compiler_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l2_Nova_current)->nova_Nova_Object_Nova_class) != opposite)
		{
			l2_Nova_previous = l2_Nova_current;
		}
		l2_Nova_current = (compiler_tree_node_Nova_Accessible*)(l2_Nova_current->compiler_tree_node_Nova_Accessible_Nova_accessedNode);
	}
	return l2_Nova_previous;
}

compiler_tree_node_Nova_Accessible* compiler_tree_node_Nova_Accessible_Nova_getLastAccessed(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_node_Nova_Accessible* l2_Nova_previous = (compiler_tree_node_Nova_Accessible*)nova_null;
	compiler_tree_node_Nova_Accessible* l2_Nova_current = (compiler_tree_node_Nova_Accessible*)nova_null;
	
	l2_Nova_previous = this;
	l2_Nova_current = this;
	while (l2_Nova_current != (compiler_tree_node_Nova_Accessible*)nova_null)
	{
		l2_Nova_previous = l2_Nova_current;
		l2_Nova_current = (compiler_tree_node_Nova_Accessible*)(l2_Nova_current->compiler_tree_node_Nova_Accessible_Nova_accessedNode);
	}
	return l2_Nova_previous;
}

compiler_tree_node_Nova_Identifier* compiler_tree_node_Nova_Accessible_0_Nova_getNextAccessedOfType(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* type)
{
	return compiler_tree_node_Nova_Accessible_1_Nova_getNextAccessedOfType(this, exceptionData, generated14(this, exceptionData, type));
}

compiler_tree_node_Nova_Identifier* compiler_tree_node_Nova_Accessible_1_Nova_getNextAccessedOfType(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* types)
{
	compiler_tree_node_Nova_Identifier* l2_Nova_current = (compiler_tree_node_Nova_Identifier*)nova_null;
	
	l2_Nova_current = this->compiler_tree_node_Nova_Accessible_Nova_accessedNode;
	while (l2_Nova_current != (compiler_tree_node_Nova_Identifier*)nova_null && !compiler_util_Nova_SyntaxUtils_static_Nova_checkTypes(0, exceptionData, types, ((nova_Nova_Object*)l2_Nova_current)->nova_Nova_Object_Nova_class))
	{
		l2_Nova_current = l2_Nova_current->compiler_tree_node_Nova_Identifier_Nova_accessedNode;
	}
	return l2_Nova_current;
}

compiler_tree_node_Nova_Accessible* compiler_tree_node_Nova_Accessible_Nova_getRootReferenceNode(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, int inclusive)
{
	compiler_tree_node_Nova_Accessible* l2_Nova_reference = (compiler_tree_node_Nova_Accessible*)nova_null;
	compiler_tree_node_Nova_Accessible* l2_Nova_node = (compiler_tree_node_Nova_Accessible*)nova_null;
	
	inclusive = (int)(inclusive == (intptr_t)nova_null ? 0 : inclusive);
	if (!compiler_tree_node_Nova_Accessible_Accessor_Nova_isAccessed(this, exceptionData))
	{
		if (inclusive)
		{
			return this;
		}
		return compiler_tree_node_Nova_Accessible_Nova_getReferenceNode(this, exceptionData, 0, 1);
	}
	l2_Nova_reference = compiler_tree_node_Nova_Accessible_Nova_getReferenceNode(this, exceptionData, 0, 1);
	l2_Nova_node = (compiler_tree_node_Nova_Accessible*)((nova_Nova_Object*)nova_null);
	if (l2_Nova_node == (compiler_tree_node_Nova_Accessible*)nova_null)
	{
		return l2_Nova_reference;
	}
	return l2_Nova_node;
}

compiler_tree_node_Nova_Accessible* compiler_tree_node_Nova_Accessible_Nova_getReferenceNode(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, int requireAccessingNode, int skipPriority)
{
	compiler_tree_node_Nova_Value* l2_Nova_n = (compiler_tree_node_Nova_Value*)nova_null;
	compiler_tree_node_Nova_Accessible* l2_Nova_accessing = (compiler_tree_node_Nova_Accessible*)nova_null;
	
	requireAccessingNode = (int)(requireAccessingNode == (intptr_t)nova_null ? 0 : requireAccessingNode);
	skipPriority = (int)(skipPriority == (intptr_t)nova_null ? 0 : skipPriority);
	l2_Nova_n = (compiler_tree_node_Nova_Value*)((nova_Nova_Object*)nova_null);
	l2_Nova_accessing = compiler_tree_node_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData);
	if (l2_Nova_accessing != (compiler_tree_node_Nova_Accessible*)nova_null || requireAccessingNode)
	{
		return l2_Nova_accessing;
	}
	return (compiler_tree_node_Nova_Accessible*)compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentClass((compiler_tree_node_Nova_Node*)(l2_Nova_n), exceptionData);
}

nova_datastruct_list_Nova_Array* generated11(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0)
{
	nova_Nova_Class** l1_Nova_temp = (nova_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Class**)NOVA_MALLOC(sizeof(nova_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_datastruct_list_Nova_Array* generated12(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0)
{
	nova_Nova_Class** l1_Nova_temp = (nova_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Class**)NOVA_MALLOC(sizeof(nova_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_datastruct_list_Nova_Array* generated13(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0)
{
	nova_Nova_Class** l1_Nova_temp = (nova_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Class**)NOVA_MALLOC(sizeof(nova_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_datastruct_list_Nova_Array* generated14(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* value0)
{
	nova_Nova_Class** l1_Nova_temp = (nova_Nova_Class**)nova_null;
	
	l1_Nova_temp = (nova_Nova_Class**)NOVA_MALLOC(sizeof(nova_Nova_Class) * 1);
	l1_Nova_temp[0] = value0;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

compiler_tree_node_Nova_Accessible* compiler_tree_node_Nova_Accessible_Accessor_Nova_accessingNode(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (compiler_tree_node_Nova_Accessible*)(nova_Nova_Object*)nova_null;
}


char compiler_tree_node_Nova_Accessible_Accessor_Nova_isAccessed(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_node_Nova_Accessible_Accessor_Nova_accessingNode(this, exceptionData) != (compiler_tree_node_Nova_Accessible*)nova_null;
}


char compiler_tree_node_Nova_Accessible_Accessor_Nova_doesAccess(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_tree_node_Nova_Accessible_Nova_accessedNode != (compiler_tree_node_Nova_Identifier*)nova_null;
}


char compiler_tree_node_Nova_Accessible_Accessor_Nova_canAccess(compiler_tree_node_Nova_Accessible* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}

