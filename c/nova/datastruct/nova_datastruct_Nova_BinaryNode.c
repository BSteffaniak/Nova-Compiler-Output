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
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/datastruct/nova_datastruct_Nova_Node.h>
#include <nova/datastruct/nova_datastruct_Nova_Node.h>
#include <nova/datastruct/nova_datastruct_Nova_Node.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Queue.h>
#include <nova/NativeObject.h>




nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNode_Nova_getNode(nova_datastruct_Nova_BinaryNode* this, nova_exception_Nova_ExceptionData* exceptionData, int index);
void nova_datastruct_Nova_BinaryNode_Nova_setNode(nova_datastruct_Nova_BinaryNode* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_datastruct_Nova_BinaryNode* data);
void nova_datastruct_Nova_BinaryNode_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNode_0_Nova_construct(nova_datastruct_Nova_BinaryNode* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Comparable* data)
{
	CCLASS_NEW(nova_datastruct_Nova_BinaryNode, this,);
	this->vtable = &nova_datastruct_BinaryNode_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Node_Nova_super((nova_datastruct_Nova_Node*)this, exceptionData);
	nova_datastruct_Nova_BinaryNode_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_BinaryNode_0_Nova_this(this, exceptionData, data);
	}
	
	return this;
}

nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNode_1_Nova_construct(nova_datastruct_Nova_BinaryNode* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Comparable* data, int size)
{
	CCLASS_NEW(nova_datastruct_Nova_BinaryNode, this,);
	this->vtable = &nova_datastruct_BinaryNode_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Node_Nova_super((nova_datastruct_Nova_Node*)this, exceptionData);
	nova_datastruct_Nova_BinaryNode_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_BinaryNode_1_Nova_this(this, exceptionData, data, size);
	}
	
	return this;
}

void nova_datastruct_Nova_BinaryNode_Nova_destroy(nova_datastruct_Nova_BinaryNode** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_BinaryNode_0_Nova_this(nova_datastruct_Nova_BinaryNode* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Comparable* data)
{
	data = (nova_datastruct_Nova_Comparable*)(data == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)data);
	nova_datastruct_Nova_BinaryNode_1_Nova_this(this, exceptionData, data, 2);
}

void nova_datastruct_Nova_BinaryNode_1_Nova_this(nova_datastruct_Nova_BinaryNode* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Comparable* data, int size)
{
	nova_datastruct_Nova_Node_Nova_this((nova_datastruct_Nova_Node*)(this), exceptionData, (nova_Nova_Object*)(data), size);
}

nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNode_Nova_getNode(nova_datastruct_Nova_BinaryNode* this, nova_exception_Nova_ExceptionData* exceptionData, int index)
{
	return (nova_datastruct_Nova_BinaryNode*)(nova_datastruct_Nova_BinaryNode*)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData) > index ? (nova_Nova_Object*)(nova_datastruct_Nova_BinaryNode*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, index) : (nova_Nova_Object*)nova_null);
}

void nova_datastruct_Nova_BinaryNode_Nova_setNode(nova_datastruct_Nova_BinaryNode* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_datastruct_Nova_BinaryNode* data)
{
	if (nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData) <= index)
	{
		nova_datastruct_list_Nova_Array_1_Nova_add((nova_datastruct_list_Nova_Array*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, index, (nova_Nova_Object*)(data));
	}
	else
	{
		nova_datastruct_list_Nova_Array_Nova_set((nova_datastruct_list_Nova_Array*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, index, (nova_Nova_Object*)(data));
	}
}

void nova_datastruct_Nova_BinaryNode_Nova_addChild(nova_datastruct_Nova_BinaryNode* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Comparable* data)
{
	if (nova_datastruct_Nova_Comparable_virtual0_Nova_compareTo((nova_datastruct_Nova_Comparable*)(this->nova_datastruct_Nova_Node_Nova_data), exceptionData, (nova_Nova_Object*)(data)) >= 0)
	{
		if ((nova_datastruct_Nova_BinaryNode_Accessor_Nova_left(this, exceptionData)) != (nova_datastruct_Nova_BinaryNode*)nova_null)
		{
			nova_datastruct_Nova_BinaryNode_Nova_addChild(nova_datastruct_Nova_BinaryNode_Accessor_Nova_left(this, exceptionData), exceptionData, data);
		}
		else
		{
			nova_datastruct_Nova_BinaryNode_Mutator_Nova_left(this, exceptionData, (nova_datastruct_Nova_BinaryNode*)(nova_datastruct_Nova_BinaryNode_0_Nova_construct(0, exceptionData, data)));
		}
	}
	else
	{
		if ((nova_datastruct_Nova_BinaryNode_Accessor_Nova_right(this, exceptionData)) != (nova_datastruct_Nova_BinaryNode*)nova_null)
		{
			nova_datastruct_Nova_BinaryNode_Nova_addChild(nova_datastruct_Nova_BinaryNode_Accessor_Nova_right(this, exceptionData), exceptionData, data);
		}
		else
		{
			nova_datastruct_Nova_BinaryNode_Mutator_Nova_right(this, exceptionData, (nova_datastruct_Nova_BinaryNode*)(nova_datastruct_Nova_BinaryNode_0_Nova_construct(0, exceptionData, data)));
		}
	}
}

nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNode_Accessor_Nova_left(nova_datastruct_Nova_BinaryNode* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_Nova_BinaryNode*)nova_datastruct_Nova_Node_Nova_get((nova_datastruct_Nova_Node*)(this), exceptionData, 0);
}

nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNode_Mutator_Nova_left(nova_datastruct_Nova_BinaryNode* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_BinaryNode* value)
{
	nova_datastruct_Nova_Node_Nova_set((nova_datastruct_Nova_Node*)(this), exceptionData, 0, (nova_datastruct_Nova_Node*)(value));
	return value;
}

nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNode_Accessor_Nova_right(nova_datastruct_Nova_BinaryNode* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_Nova_BinaryNode*)nova_datastruct_Nova_Node_Nova_get((nova_datastruct_Nova_Node*)(this), exceptionData, 1);
}

nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNode_Mutator_Nova_right(nova_datastruct_Nova_BinaryNode* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_BinaryNode* value)
{
	nova_datastruct_Nova_Node_Nova_set((nova_datastruct_Nova_Node*)(this), exceptionData, 1, (nova_datastruct_Nova_Node*)(value));
	return value;
}

void nova_datastruct_Nova_BinaryNode_Nova_super(nova_datastruct_Nova_BinaryNode* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNodeFunctionMap_functionMapBinaryNodeFunctionMap1_Nova_construct(nova_datastruct_Nova_BinaryNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data, int size);
nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNodeFunctionMap_functionMap_Nova_getNode(nova_datastruct_Nova_BinaryNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_BinaryNode* reference, int index);
void nova_datastruct_Nova_BinaryNodeFunctionMap_functionMap_Nova_setNode(nova_datastruct_Nova_BinaryNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_BinaryNode* reference, int index, nova_datastruct_Nova_BinaryNode* data);
void nova_datastruct_Nova_BinaryNodeFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_BinaryNodeFunctionMap* nova_datastruct_Nova_BinaryNodeFunctionMap_Nova_construct(nova_datastruct_Nova_BinaryNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_BinaryNodeFunctionMap, this,);
	this->vtable = &nova_datastruct_BinaryNode_BinaryNodeFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_Nova_NodeFunctionMap_Nova_super((nova_datastruct_Nova_NodeFunctionMap*)this, exceptionData);
	nova_datastruct_Nova_BinaryNodeFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_BinaryNodeFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_BinaryNodeFunctionMap_Nova_destroy(nova_datastruct_Nova_BinaryNodeFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_BinaryNodeFunctionMap_Nova_this(nova_datastruct_Nova_BinaryNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNodeFunctionMap_functionMapBinaryNodeFunctionMap0_Nova_construct(nova_datastruct_Nova_BinaryNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data)
{
	return (nova_datastruct_Nova_BinaryNode*)nova_datastruct_Nova_BinaryNode_0_Nova_construct(0, exceptionData, (nova_datastruct_Nova_Comparable*)(data));
}

nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNodeFunctionMap_functionMapBinaryNodeFunctionMap1_Nova_construct(nova_datastruct_Nova_BinaryNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data, int size)
{
	return (nova_datastruct_Nova_BinaryNode*)nova_datastruct_Nova_BinaryNode_1_Nova_construct(0, exceptionData, (nova_datastruct_Nova_Comparable*)(data), size);
}

nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNodeFunctionMap_functionMap_Nova_getNode(nova_datastruct_Nova_BinaryNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_BinaryNode* reference, int index)
{
	return nova_datastruct_Nova_BinaryNode_Nova_getNode(reference, exceptionData, index);
}

void nova_datastruct_Nova_BinaryNodeFunctionMap_functionMap_Nova_setNode(nova_datastruct_Nova_BinaryNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_BinaryNode* reference, int index, nova_datastruct_Nova_BinaryNode* data)
{
	nova_datastruct_Nova_BinaryNode_Nova_setNode(reference, exceptionData, index, data);
}

void nova_datastruct_Nova_BinaryNodeFunctionMap_functionMap_Nova_addChild(nova_datastruct_Nova_BinaryNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_BinaryNode* reference, nova_Nova_Object* data)
{
	nova_datastruct_Nova_BinaryNode_Nova_addChild(reference, exceptionData, (nova_datastruct_Nova_Comparable*)(data));
}

void nova_datastruct_Nova_BinaryNodeFunctionMap_Nova_super(nova_datastruct_Nova_BinaryNodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_Nova_BinaryNodePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_BinaryNodePropertyMap* nova_datastruct_Nova_BinaryNodePropertyMap_Nova_construct(nova_datastruct_Nova_BinaryNodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_BinaryNodePropertyMap, this,);
	this->vtable = &nova_datastruct_BinaryNode_BinaryNodePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_datastruct_Nova_NodePropertyMap_Nova_super((nova_datastruct_Nova_NodePropertyMap*)this, exceptionData);
	nova_datastruct_Nova_BinaryNodePropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_BinaryNodePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_BinaryNodePropertyMap_Nova_destroy(nova_datastruct_Nova_BinaryNodePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_BinaryNodePropertyMap_Nova_this(nova_datastruct_Nova_BinaryNodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNodePropertyMap_functionMap_Nova_left(nova_datastruct_Nova_BinaryNodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_BinaryNode* reference)
{
	return nova_datastruct_Nova_BinaryNode_Accessor_Nova_left(reference, exceptionData);
}

nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryNodePropertyMap_functionMap_Nova_right(nova_datastruct_Nova_BinaryNodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_BinaryNode* reference)
{
	return nova_datastruct_Nova_BinaryNode_Accessor_Nova_right(reference, exceptionData);
}

void nova_datastruct_Nova_BinaryNodePropertyMap_Nova_super(nova_datastruct_Nova_BinaryNodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

