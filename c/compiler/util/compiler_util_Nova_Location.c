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
#include <nova/datastruct/nova_datastruct_Nova_Bounds.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_util_Location_Extension_VTable compiler_util_Location_Extension_VTable_val =
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
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	compiler_util_Nova_Location_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


compiler_util_Nova_Location* compiler_util_Nova_Location_Nova_INVALID;
void compiler_util_Nova_Location_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		compiler_util_Nova_Location_Nova_INVALID = compiler_util_Nova_Location_2_Nova_construct(0, exceptionData, 0, 0, 0, 0);
	}
}

compiler_util_Nova_Location* compiler_util_Nova_Location_0_Nova_construct(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(compiler_util_Nova_Location, this,);
	this->vtable = &compiler_util_Location_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_util_Nova_Location_Nova_super(this, exceptionData);
	
	{
		compiler_util_Nova_Location_Nova_this(this, exceptionData);
	}
	
	return this;
}

compiler_util_Nova_Location* compiler_util_Nova_Location_1_Nova_construct(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_util_Nova_Location* loc)
{
	CCLASS_NEW(compiler_util_Nova_Location, this,);
	this->vtable = &compiler_util_Location_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_util_Nova_Location_Nova_super(this, exceptionData);
	
	{
		compiler_util_Nova_Location_0_Nova_this(this, exceptionData, loc);
	}
	
	return this;
}

compiler_util_Nova_Location* compiler_util_Nova_Location_2_Nova_construct(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int lineNumber, int offset, int start, int end)
{
	CCLASS_NEW(compiler_util_Nova_Location, this,);
	this->vtable = &compiler_util_Location_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_util_Nova_Location_Nova_super(this, exceptionData);
	
	{
		compiler_util_Nova_Location_1_Nova_this(this, exceptionData, lineNumber, offset, start, end);
	}
	
	return this;
}

void compiler_util_Nova_Location_Nova_destroy(compiler_util_Nova_Location** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	nova_datastruct_Nova_Bounds_Nova_destroy(&(*this)->compiler_util_Nova_Location_Nova_bounds, exceptionData);
	
	NOVA_FREE(*this);
}

void compiler_util_Nova_Location_Nova_this(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_util_Nova_Location_Nova_bounds = nova_datastruct_Nova_Bounds_1_Nova_construct(0, exceptionData, 0, 0);
}

void compiler_util_Nova_Location_0_Nova_this(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_util_Nova_Location* loc)
{
	compiler_util_Nova_Location_1_Nova_this(this, exceptionData, 0, loc->compiler_util_Nova_Location_Nova_offset, loc->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start, loc->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end);
}

void compiler_util_Nova_Location_1_Nova_this(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int lineNumber, int offset, int start, int end)
{
	compiler_util_Nova_Location_Nova_this(this, exceptionData);
	this->compiler_util_Nova_Location_Nova_offset = offset;
	this->compiler_util_Nova_Location_Nova_lineNumber = lineNumber;
	compiler_util_Nova_Location_1_Nova_setBounds(this, exceptionData, start, end);
}

void compiler_util_Nova_Location_Nova_setLineNumber(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int lineNumber)
{
	this->compiler_util_Nova_Location_Nova_lineNumber = lineNumber;
}

int compiler_util_Nova_Location_Nova_getStart(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start;
}

int compiler_util_Nova_Location_Nova_getEnd(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end;
}

void compiler_util_Nova_Location_Nova_setOffset(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int offset)
{
	this->compiler_util_Nova_Location_Nova_offset = offset;
}

void compiler_util_Nova_Location_Nova_addOffset(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount)
{
	this->compiler_util_Nova_Location_Nova_offset += amount;
}

void compiler_util_Nova_Location_Nova_subtractOffset(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount)
{
	this->compiler_util_Nova_Location_Nova_offset -= amount;
}

void compiler_util_Nova_Location_0_Nova_setBounds(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* bounds)
{
	this->compiler_util_Nova_Location_Nova_bounds = bounds;
}

void compiler_util_Nova_Location_1_Nova_setBounds(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	this->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start = start;
	this->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end = end;
}

void compiler_util_Nova_Location_0_Nova_addBounds(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount)
{
	this->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start += amount;
	this->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end += amount;
}

void compiler_util_Nova_Location_Nova_moveBounds(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int startAmount, int endAmount)
{
	this->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start += startAmount;
	this->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end += endAmount;
}

void compiler_util_Nova_Location_0_Nova_subtractBounds(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int startAmount, int endAmount)
{
	this->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start -= startAmount;
	this->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end -= endAmount;
}

void compiler_util_Nova_Location_1_Nova_subtractBounds(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount)
{
	this->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start -= amount;
	this->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end -= amount;
}

void compiler_util_Nova_Location_1_Nova_addBounds(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int startAmount, int endAmount)
{
	this->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start += startAmount;
	this->compiler_util_Nova_Location_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_end += endAmount;
}

char compiler_util_Nova_Location_Nova_isValid(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_util_Nova_Location_Nova_lineNumber > 0;
}

compiler_util_Nova_Location* compiler_util_Nova_Location_Nova_asNew(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_util_Nova_Location_1_Nova_construct(0, exceptionData, this);
}

nova_Nova_String* compiler_util_Nova_Location_Nova_toString(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Line "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (this->compiler_util_Nova_Location_Nova_lineNumber))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->compiler_util_Nova_Location_Nova_bounds)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))));
}

void compiler_util_Nova_Location_Nova_super(compiler_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_util_Nova_Location_Nova_lineNumber = 0;
	this->compiler_util_Nova_Location_Nova_offset = 0;
	this->compiler_util_Nova_Location_Nova_bounds = (nova_datastruct_Nova_Bounds*)nova_null;
}
