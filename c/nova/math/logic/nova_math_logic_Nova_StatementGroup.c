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
#include <nova/datastruct/nova_datastruct_Nova_Bounds.h>
#include <nova/NativeObject.h>



void nova_math_logic_Nova_StatementGroup_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_logic_Nova_StatementGroup* nova_math_logic_Nova_StatementGroup_Nova_construct(nova_math_logic_Nova_StatementGroup* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* statement, nova_datastruct_Nova_Bounds* bounds)
{
	CCLASS_NEW(nova_math_logic_Nova_StatementGroup, this,);
	this->vtable = &nova_math_logic_StatementGroup_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_logic_Nova_StatementGroup_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_StatementGroup_Nova_this(this, exceptionData, statement, bounds);
	}
	
	return this;
}

void nova_math_logic_Nova_StatementGroup_Nova_destroy(nova_math_logic_Nova_StatementGroup** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	nova_datastruct_Nova_Bounds_Nova_destroy(&(*this)->nova_math_logic_Nova_StatementGroup_Nova_bounds, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_StatementGroup_Nova_this(nova_math_logic_Nova_StatementGroup* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* statement, nova_datastruct_Nova_Bounds* bounds)
{
	this->nova_math_logic_Nova_StatementGroup_Nova_statement = statement;
	this->nova_math_logic_Nova_StatementGroup_Nova_bounds = bounds;
}

void nova_math_logic_Nova_StatementGroup_Nova_super(nova_math_logic_Nova_StatementGroup* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_math_logic_Nova_StatementGroup_Nova_statement = (nova_Nova_Object*)nova_null;
	this->nova_math_logic_Nova_StatementGroup_Nova_bounds = (nova_datastruct_Nova_Bounds*)nova_null;
}

void nova_math_logic_Nova_StatementGroupFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_logic_Nova_StatementGroupFunctionMap* nova_math_logic_Nova_StatementGroupFunctionMap_Nova_construct(nova_math_logic_Nova_StatementGroupFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_logic_Nova_StatementGroupFunctionMap, this,);
	this->vtable = &nova_math_logic_StatementGroup_StatementGroupFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_math_logic_Nova_StatementGroupFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_StatementGroupFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_logic_Nova_StatementGroupFunctionMap_Nova_destroy(nova_math_logic_Nova_StatementGroupFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_StatementGroupFunctionMap_Nova_this(nova_math_logic_Nova_StatementGroupFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_math_logic_Nova_StatementGroup* nova_math_logic_Nova_StatementGroupFunctionMap_functionMapStatementGroupFunctionMap_Nova_construct(nova_math_logic_Nova_StatementGroupFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* statement, nova_datastruct_Nova_Bounds* bounds)
{
	return nova_math_logic_Nova_StatementGroup_Nova_construct(0, exceptionData, statement, bounds);
}

void nova_math_logic_Nova_StatementGroupFunctionMap_Nova_super(nova_math_logic_Nova_StatementGroupFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_logic_Nova_StatementGroupPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_logic_Nova_StatementGroupPropertyMap* nova_math_logic_Nova_StatementGroupPropertyMap_Nova_construct(nova_math_logic_Nova_StatementGroupPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_logic_Nova_StatementGroupPropertyMap, this,);
	this->vtable = &nova_math_logic_StatementGroup_StatementGroupPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_math_logic_Nova_StatementGroupPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_StatementGroupPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_logic_Nova_StatementGroupPropertyMap_Nova_destroy(nova_math_logic_Nova_StatementGroupPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_StatementGroupPropertyMap_Nova_this(nova_math_logic_Nova_StatementGroupPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_Object* nova_math_logic_Nova_StatementGroupPropertyMap_functionMap_Nova_statement(nova_math_logic_Nova_StatementGroupPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_logic_Nova_StatementGroup* reference)
{
	return (nova_Nova_Object*)reference->nova_math_logic_Nova_StatementGroup_Nova_statement;
}

nova_datastruct_Nova_Bounds* nova_math_logic_Nova_StatementGroupPropertyMap_functionMap_Nova_bounds(nova_math_logic_Nova_StatementGroupPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_logic_Nova_StatementGroup* reference)
{
	return reference->nova_math_logic_Nova_StatementGroup_Nova_bounds;
}

void nova_math_logic_Nova_StatementGroupPropertyMap_Nova_super(nova_math_logic_Nova_StatementGroupPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

