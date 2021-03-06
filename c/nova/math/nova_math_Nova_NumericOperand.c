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
#include <nova/NativeObject.h>



CCLASS_PRIVATE
(
	nova_math_Nova_NumericOperand,
	nova_Nova_Object* nova_math_Nova_NumericOperand_Nova_data;
	
)
void nova_math_Nova_NumericOperand_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_NumericOperand* nova_math_Nova_NumericOperand_Nova_construct(nova_math_Nova_NumericOperand* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data)
{
	CCLASS_NEW(nova_math_Nova_NumericOperand, this);
	this->vtable = &nova_math_NumericOperand_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_NumericOperand_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_NumericOperand_Nova_this(this, exceptionData, data);
	}
	
	return this;
}

void nova_math_Nova_NumericOperand_Nova_destroy(nova_math_Nova_NumericOperand** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void nova_math_Nova_NumericOperand_Nova_this(nova_math_Nova_NumericOperand* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data)
{
	this->prv->nova_math_Nova_NumericOperand_Nova_data = data;
}

nova_Nova_String* nova_math_Nova_NumericOperand_Nova_toString(nova_math_Nova_NumericOperand* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->prv->nova_math_Nova_NumericOperand_Nova_data)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

void nova_math_Nova_NumericOperand_Nova_super(nova_math_Nova_NumericOperand* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->nova_math_Nova_NumericOperand_Nova_data = (nova_Nova_Object*)nova_null;
}

void nova_math_Nova_NumericOperandFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_NumericOperandFunctionMap* nova_math_Nova_NumericOperandFunctionMap_Nova_construct(nova_math_Nova_NumericOperandFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_Nova_NumericOperandFunctionMap, this,);
	this->vtable = &nova_math_NumericOperand_NumericOperandFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_math_Nova_NumericOperandFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_NumericOperandFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_Nova_NumericOperandFunctionMap_Nova_destroy(nova_math_Nova_NumericOperandFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_Nova_NumericOperandFunctionMap_Nova_this(nova_math_Nova_NumericOperandFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_math_Nova_NumericOperand* nova_math_Nova_NumericOperandFunctionMap_functionMapNumericOperandFunctionMap_Nova_construct(nova_math_Nova_NumericOperandFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data)
{
	return nova_math_Nova_NumericOperand_Nova_construct(0, exceptionData, data);
}

nova_Nova_String* nova_math_Nova_NumericOperandFunctionMap_functionMap_Nova_toString(nova_math_Nova_NumericOperandFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_NumericOperand* reference)
{
	return nova_math_Nova_NumericOperand_Nova_toString(reference, exceptionData);
}

void nova_math_Nova_NumericOperandFunctionMap_Nova_super(nova_math_Nova_NumericOperandFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_math_Nova_NumericOperand* nova_math_Nova_NumericOperandFunctionMap_virtualfunctionMapNumericOperand_Nova_construct(nova_math_Nova_NumericOperandFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data)
{
	return this->vtable->nova_math_Nova_NumericOperandFunctionMap_virtualfunctionMapNumericOperand_Nova_construct(this, exceptionData, data);
}

nova_Nova_String* nova_math_Nova_NumericOperandFunctionMap_virtualfunctionMap_Nova_toString(nova_math_Nova_NumericOperandFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_NumericOperand* reference)
{
	return this->vtable->nova_math_Nova_NumericOperandFunctionMap_virtualfunctionMap_Nova_toString(this, exceptionData, reference);
}

void nova_math_Nova_NumericOperandPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_NumericOperandPropertyMap* nova_math_Nova_NumericOperandPropertyMap_Nova_construct(nova_math_Nova_NumericOperandPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_Nova_NumericOperandPropertyMap, this,);
	this->vtable = &nova_math_NumericOperand_NumericOperandPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_math_Nova_NumericOperandPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_NumericOperandPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_Nova_NumericOperandPropertyMap_Nova_destroy(nova_math_Nova_NumericOperandPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_Nova_NumericOperandPropertyMap_Nova_this(nova_math_Nova_NumericOperandPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_Nova_NumericOperandPropertyMap_Nova_super(nova_math_Nova_NumericOperandPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

