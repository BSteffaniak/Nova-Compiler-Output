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
#include <nova/meta/nova_meta_Nova_Type.h>
#include <nova/NativeObject.h>



void nova_meta_Nova_Field_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_meta_Nova_Field* nova_meta_Nova_Field_Nova_construct(nova_meta_Nova_Field* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, nova_meta_Nova_Type* type)
{
	CCLASS_NEW(nova_meta_Nova_Field, this,);
	this->vtable = &nova_meta_Field_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_Field_Nova_super(this, exceptionData);
	
	{
		nova_meta_Nova_Field_Nova_this(this, exceptionData, name, type);
	}
	
	return this;
}

void nova_meta_Nova_Field_Nova_destroy(nova_meta_Nova_Field** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->nova_meta_Nova_Field_Nova_name, exceptionData);
	nova_meta_Nova_Type_Nova_destroy(&(*this)->nova_meta_Nova_Field_Nova_type, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_meta_Nova_Field_Nova_this(nova_meta_Nova_Field* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, nova_meta_Nova_Type* type)
{
	this->nova_meta_Nova_Field_Nova_name = name;
	this->nova_meta_Nova_Field_Nova_type = type;
}

void nova_meta_Nova_Field_Nova_super(nova_meta_Nova_Field* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_meta_Nova_Field_Nova_name = (nova_Nova_String*)nova_null;
	this->nova_meta_Nova_Field_Nova_type = (nova_meta_Nova_Type*)nova_null;
}

void nova_meta_Nova_FieldFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_meta_Nova_FieldFunctionMap* nova_meta_Nova_FieldFunctionMap_Nova_construct(nova_meta_Nova_FieldFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_meta_Nova_FieldFunctionMap, this,);
	this->vtable = &nova_meta_Field_FieldFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_meta_Nova_FieldFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_meta_Nova_FieldFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_meta_Nova_FieldFunctionMap_Nova_destroy(nova_meta_Nova_FieldFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_meta_Nova_FieldFunctionMap_Nova_this(nova_meta_Nova_FieldFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_meta_Nova_Field* nova_meta_Nova_FieldFunctionMap_functionMapFieldFunctionMap_Nova_construct(nova_meta_Nova_FieldFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, nova_meta_Nova_Type* type)
{
	return nova_meta_Nova_Field_Nova_construct(0, exceptionData, name, type);
}

void nova_meta_Nova_FieldFunctionMap_Nova_super(nova_meta_Nova_FieldFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_meta_Nova_FieldPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_meta_Nova_FieldPropertyMap* nova_meta_Nova_FieldPropertyMap_Nova_construct(nova_meta_Nova_FieldPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_meta_Nova_FieldPropertyMap, this,);
	this->vtable = &nova_meta_Field_FieldPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_meta_Nova_FieldPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_meta_Nova_FieldPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_meta_Nova_FieldPropertyMap_Nova_destroy(nova_meta_Nova_FieldPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_meta_Nova_FieldPropertyMap_Nova_this(nova_meta_Nova_FieldPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* nova_meta_Nova_FieldPropertyMap_functionMap_Nova_name(nova_meta_Nova_FieldPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Field* reference)
{
	return reference->nova_meta_Nova_Field_Nova_name;
}

nova_meta_Nova_Type* nova_meta_Nova_FieldPropertyMap_functionMap_Nova_type(nova_meta_Nova_FieldPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Field* reference)
{
	return reference->nova_meta_Nova_Field_Nova_type;
}

void nova_meta_Nova_FieldPropertyMap_Nova_super(nova_meta_Nova_FieldPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

