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



void nova_exception_Nova_Exception_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_exception_Nova_Exception* nova_exception_Nova_Exception_Nova_construct(nova_exception_Nova_Exception* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message)
{
	CCLASS_NEW(nova_exception_Nova_Exception, this,);
	this->vtable = &nova_exception_Exception_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_exception_Nova_Exception_Nova_super(this, exceptionData);
	
	{
		nova_exception_Nova_Exception_Nova_this(this, exceptionData, message);
	}
	
	return this;
}

void nova_exception_Nova_Exception_Nova_destroy(nova_exception_Nova_Exception** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->nova_exception_Nova_Exception_Nova_message, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_exception_Nova_Exception_Nova_this(nova_exception_Nova_Exception* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message)
{
	message = (nova_Nova_String*)(message == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")) : (nova_Nova_Object*)message);
	this->nova_exception_Nova_Exception_Nova_message = message;
}

nova_Nova_String* nova_exception_Nova_Exception_Nova_toString(nova_exception_Nova_Exception* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_meta_Nova_Class_Accessor_Nova_name((nova_meta_Nova_Class*)(this->vtable->classInstance), exceptionData), exceptionData, ((nova_Nova_String*)((this->nova_exception_Nova_Exception_Nova_message) != (nova_Nova_String*)nova_null ? nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(": ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this->nova_exception_Nova_Exception_Nova_message), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
}

void nova_exception_Nova_Exception_Nova_super(nova_exception_Nova_Exception* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_exception_Nova_Exception_Nova_message = (nova_Nova_String*)nova_null;
}

void nova_exception_Nova_ExceptionFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_exception_Nova_ExceptionFunctionMap* nova_exception_Nova_ExceptionFunctionMap_Nova_construct(nova_exception_Nova_ExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_exception_Nova_ExceptionFunctionMap, this,);
	this->vtable = &nova_exception_Exception_ExceptionFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_exception_Nova_ExceptionFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_exception_Nova_ExceptionFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_exception_Nova_ExceptionFunctionMap_Nova_destroy(nova_exception_Nova_ExceptionFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_exception_Nova_ExceptionFunctionMap_Nova_this(nova_exception_Nova_ExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_exception_Nova_Exception* nova_exception_Nova_ExceptionFunctionMap_functionMapExceptionFunctionMap_Nova_construct(nova_exception_Nova_ExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message)
{
	return nova_exception_Nova_Exception_Nova_construct(0, exceptionData, message);
}

nova_Nova_String* nova_exception_Nova_ExceptionFunctionMap_functionMap_Nova_toString(nova_exception_Nova_ExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_Exception* reference)
{
	return nova_exception_Nova_Exception_Nova_toString(reference, exceptionData);
}

void nova_exception_Nova_ExceptionFunctionMap_Nova_super(nova_exception_Nova_ExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_exception_Nova_Exception* nova_exception_Nova_ExceptionFunctionMap_virtualfunctionMapException_Nova_construct(nova_exception_Nova_ExceptionFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* message)
{
	return this->vtable->nova_exception_Nova_ExceptionFunctionMap_virtualfunctionMapException_Nova_construct(this, exceptionData, message);
}

void nova_exception_Nova_ExceptionPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_exception_Nova_ExceptionPropertyMap* nova_exception_Nova_ExceptionPropertyMap_Nova_construct(nova_exception_Nova_ExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_exception_Nova_ExceptionPropertyMap, this,);
	this->vtable = &nova_exception_Exception_ExceptionPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_exception_Nova_ExceptionPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_exception_Nova_ExceptionPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_exception_Nova_ExceptionPropertyMap_Nova_destroy(nova_exception_Nova_ExceptionPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_exception_Nova_ExceptionPropertyMap_Nova_this(nova_exception_Nova_ExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* nova_exception_Nova_ExceptionPropertyMap_functionMap_Nova_message(nova_exception_Nova_ExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_Exception* reference)
{
	return reference->nova_exception_Nova_Exception_Nova_message;
}

void nova_exception_Nova_ExceptionPropertyMap_Nova_super(nova_exception_Nova_ExceptionPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

