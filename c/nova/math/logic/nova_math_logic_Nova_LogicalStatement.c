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
#include <nova/math/nova_math_Nova_Statement.h>
#include <nova/math/logic/nova_math_logic_Nova_StatementComponent.h>
#include <nova/math/nova_math_Nova_Statement.h>
#include <nova/math/nova_math_Nova_Statement.h>
#include <nova/NativeObject.h>



CCLASS_PRIVATE
(
	nova_math_logic_Nova_LogicalStatement,
	nova_datastruct_list_Nova_Array* nova_math_logic_Nova_LogicalStatement_Nova_components;
	nova_Nova_String* nova_math_logic_Nova_LogicalStatement_Nova_statement;
	
)
void nova_math_logic_Nova_LogicalStatement_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_logic_Nova_LogicalStatement* nova_math_logic_Nova_LogicalStatement_Nova_construct(nova_math_logic_Nova_LogicalStatement* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement)
{
	CCLASS_NEW(nova_math_logic_Nova_LogicalStatement, this);
	this->vtable = &nova_math_logic_LogicalStatement_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Statement_Nova_super((nova_math_Nova_Statement*)this, exceptionData);
	nova_math_logic_Nova_LogicalStatement_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_LogicalStatement_Nova_this(this, exceptionData, statement);
	}
	
	return this;
}

void nova_math_logic_Nova_LogicalStatement_Nova_destroy(nova_math_logic_Nova_LogicalStatement** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->prv->nova_math_logic_Nova_LogicalStatement_Nova_components, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->prv->nova_math_logic_Nova_LogicalStatement_Nova_statement, exceptionData);
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_LogicalStatement_Nova_this(nova_math_logic_Nova_LogicalStatement* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement)
{
	this->prv->nova_math_logic_Nova_LogicalStatement_Nova_statement = statement;
	this->prv->nova_math_logic_Nova_LogicalStatement_Nova_components = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

nova_Nova_String* nova_math_logic_Nova_LogicalStatement_Nova_toString(nova_math_logic_Nova_LogicalStatement* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->prv->nova_math_logic_Nova_LogicalStatement_Nova_statement;
}

void nova_math_logic_Nova_LogicalStatement_Nova_super(nova_math_logic_Nova_LogicalStatement* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->nova_math_logic_Nova_LogicalStatement_Nova_components = (nova_datastruct_list_Nova_Array*)nova_null;
	this->prv->nova_math_logic_Nova_LogicalStatement_Nova_statement = (nova_Nova_String*)nova_null;
}

void nova_math_logic_Nova_LogicalStatementFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_logic_Nova_LogicalStatementFunctionMap* nova_math_logic_Nova_LogicalStatementFunctionMap_Nova_construct(nova_math_logic_Nova_LogicalStatementFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_logic_Nova_LogicalStatementFunctionMap, this,);
	this->vtable = &nova_math_logic_LogicalStatement_LogicalStatementFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_math_Nova_StatementFunctionMap_Nova_super((nova_math_Nova_StatementFunctionMap*)this, exceptionData);
	nova_math_logic_Nova_LogicalStatementFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_LogicalStatementFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_logic_Nova_LogicalStatementFunctionMap_Nova_destroy(nova_math_logic_Nova_LogicalStatementFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_LogicalStatementFunctionMap_Nova_this(nova_math_logic_Nova_LogicalStatementFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_math_logic_Nova_LogicalStatement* nova_math_logic_Nova_LogicalStatementFunctionMap_functionMapLogicalStatementFunctionMap_Nova_construct(nova_math_logic_Nova_LogicalStatementFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement)
{
	return nova_math_logic_Nova_LogicalStatement_Nova_construct(0, exceptionData, statement);
}

nova_Nova_String* nova_math_logic_Nova_LogicalStatementFunctionMap_functionMap_Nova_toString(nova_math_logic_Nova_LogicalStatementFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_logic_Nova_LogicalStatement* reference)
{
	return nova_math_logic_Nova_LogicalStatement_Nova_toString(reference, exceptionData);
}

void nova_math_logic_Nova_LogicalStatementFunctionMap_Nova_super(nova_math_logic_Nova_LogicalStatementFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_math_logic_Nova_LogicalStatement* nova_math_logic_Nova_LogicalStatementFunctionMap_virtualfunctionMapLogicalStatement_Nova_construct(nova_math_logic_Nova_LogicalStatementFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement)
{
	return this->vtable->nova_math_logic_Nova_LogicalStatementFunctionMap_virtualfunctionMapLogicalStatement_Nova_construct(this, exceptionData, statement);
}

void nova_math_logic_Nova_LogicalStatementPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_logic_Nova_LogicalStatementPropertyMap* nova_math_logic_Nova_LogicalStatementPropertyMap_Nova_construct(nova_math_logic_Nova_LogicalStatementPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_logic_Nova_LogicalStatementPropertyMap, this,);
	this->vtable = &nova_math_logic_LogicalStatement_LogicalStatementPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_math_Nova_StatementPropertyMap_Nova_super((nova_math_Nova_StatementPropertyMap*)this, exceptionData);
	nova_math_logic_Nova_LogicalStatementPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_LogicalStatementPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_logic_Nova_LogicalStatementPropertyMap_Nova_destroy(nova_math_logic_Nova_LogicalStatementPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_LogicalStatementPropertyMap_Nova_this(nova_math_logic_Nova_LogicalStatementPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_logic_Nova_LogicalStatementPropertyMap_Nova_super(nova_math_logic_Nova_LogicalStatementPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

