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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/datastruct/nova_datastruct_Nova_Node.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>



void nova_datastruct_Nova_Tree_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_Tree* nova_datastruct_Nova_Tree_Nova_construct(nova_datastruct_Nova_Tree* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* root)
{
	CCLASS_NEW(nova_datastruct_Nova_Tree, this,);
	this->vtable = &nova_datastruct_Tree_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Tree_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_Tree_Nova_this(this, exceptionData, root);
	}
	
	return this;
}

void nova_datastruct_Nova_Tree_Nova_destroy(nova_datastruct_Nova_Tree** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_Nova_Node_Nova_destroy(&(*this)->nova_datastruct_Nova_Tree_Nova_root, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_Tree_Nova_this(nova_datastruct_Nova_Tree* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* root)
{
	root = (nova_datastruct_Nova_Node*)(root == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)root);
	this->nova_datastruct_Nova_Tree_Nova_root = root;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tree_Nova_preorder(nova_datastruct_Nova_Tree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_0_Nova_preorder(this->nova_datastruct_Nova_Tree_Nova_root, exceptionData);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tree_Nova_inorder(nova_datastruct_Nova_Tree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_0_Nova_inorder(this->nova_datastruct_Nova_Tree_Nova_root, exceptionData);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tree_Nova_postorder(nova_datastruct_Nova_Tree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_0_Nova_postorder(this->nova_datastruct_Nova_Tree_Nova_root, exceptionData);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tree_Nova_levelorder(nova_datastruct_Nova_Tree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_0_Nova_levelorder(this->nova_datastruct_Nova_Tree_Nova_root, exceptionData);
}

void nova_datastruct_Nova_Tree_Nova_super(nova_datastruct_Nova_Tree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_Nova_Tree_Nova_root = (nova_datastruct_Nova_Node*)nova_null;
}

