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



void nova_regex_Nova_Pattern_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_regex_Nova_Pattern* nova_regex_Nova_Pattern_Nova_construct(nova_regex_Nova_Pattern* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* pattern)
{
	CCLASS_NEW(nova_regex_Nova_Pattern, this,);
	this->vtable = &nova_regex_Pattern_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_regex_Nova_Pattern_Nova_super(this, exceptionData);
	
	{
		nova_regex_Nova_Pattern_Nova_this(this, exceptionData, pattern);
	}
	
	return this;
}

void nova_regex_Nova_Pattern_Nova_destroy(nova_regex_Nova_Pattern** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->nova_regex_Nova_Pattern_Nova_pattern, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_regex_Nova_Pattern_Nova_this(nova_regex_Nova_Pattern* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* pattern)
{
	this->nova_regex_Nova_Pattern_Nova_pattern = pattern;
}

void nova_regex_Nova_Pattern_Nova_super(nova_regex_Nova_Pattern* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_regex_Nova_Pattern_Nova_pattern = (nova_Nova_String*)nova_null;
}

void nova_regex_Nova_PatternFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_regex_Nova_PatternFunctionMap* nova_regex_Nova_PatternFunctionMap_Nova_construct(nova_regex_Nova_PatternFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_regex_Nova_PatternFunctionMap, this,);
	this->vtable = &nova_regex_Pattern_PatternFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_regex_Nova_PatternFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_regex_Nova_PatternFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_regex_Nova_PatternFunctionMap_Nova_destroy(nova_regex_Nova_PatternFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_regex_Nova_PatternFunctionMap_Nova_this(nova_regex_Nova_PatternFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_regex_Nova_Pattern* nova_regex_Nova_PatternFunctionMap_functionMapPatternFunctionMap_Nova_construct(nova_regex_Nova_PatternFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* pattern)
{
	return nova_regex_Nova_Pattern_Nova_construct(0, exceptionData, pattern);
}

void nova_regex_Nova_PatternFunctionMap_Nova_super(nova_regex_Nova_PatternFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_regex_Nova_PatternPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_regex_Nova_PatternPropertyMap* nova_regex_Nova_PatternPropertyMap_Nova_construct(nova_regex_Nova_PatternPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_regex_Nova_PatternPropertyMap, this,);
	this->vtable = &nova_regex_Pattern_PatternPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_regex_Nova_PatternPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_regex_Nova_PatternPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_regex_Nova_PatternPropertyMap_Nova_destroy(nova_regex_Nova_PatternPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_regex_Nova_PatternPropertyMap_Nova_this(nova_regex_Nova_PatternPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* nova_regex_Nova_PatternPropertyMap_functionMap_Nova_pattern(nova_regex_Nova_PatternPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* reference)
{
	return reference->nova_regex_Nova_Pattern_Nova_pattern;
}

void nova_regex_Nova_PatternPropertyMap_Nova_super(nova_regex_Nova_PatternPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

