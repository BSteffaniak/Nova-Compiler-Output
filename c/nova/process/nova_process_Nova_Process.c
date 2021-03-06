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
#include <nova/io/nova_io_Nova_FileReader.h>
#include <nova/NativeObject.h>



void nova_process_Nova_Process_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_process_Nova_Process* nova_process_Nova_Process_Nova_construct(nova_process_Nova_Process* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileReader* reader)
{
	CCLASS_NEW(nova_process_Nova_Process, this,);
	this->vtable = &nova_process_Process_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_process_Nova_Process_Nova_super(this, exceptionData);
	
	{
		nova_process_Nova_Process_Nova_this(this, exceptionData, reader);
	}
	
	return this;
}

void nova_process_Nova_Process_Nova_destroy(nova_process_Nova_Process** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_io_Nova_FileReader_Nova_destroy(&(*this)->nova_process_Nova_Process_Nova_reader, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_process_Nova_Process_Nova_this(nova_process_Nova_Process* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileReader* reader)
{
	this->nova_process_Nova_Process_Nova_reader = reader;
}

void nova_process_Nova_Process_Nova_super(nova_process_Nova_Process* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_process_Nova_Process_Nova_reader = (nova_io_Nova_FileReader*)nova_null;
}

void nova_process_Nova_ProcessFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_process_Nova_ProcessFunctionMap* nova_process_Nova_ProcessFunctionMap_Nova_construct(nova_process_Nova_ProcessFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_process_Nova_ProcessFunctionMap, this,);
	this->vtable = &nova_process_Process_ProcessFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_process_Nova_ProcessFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_process_Nova_ProcessFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_process_Nova_ProcessFunctionMap_Nova_destroy(nova_process_Nova_ProcessFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_process_Nova_ProcessFunctionMap_Nova_this(nova_process_Nova_ProcessFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_process_Nova_Process* nova_process_Nova_ProcessFunctionMap_functionMapProcessFunctionMap_Nova_construct(nova_process_Nova_ProcessFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileReader* reader)
{
	return nova_process_Nova_Process_Nova_construct(0, exceptionData, reader);
}

void nova_process_Nova_ProcessFunctionMap_Nova_super(nova_process_Nova_ProcessFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_process_Nova_ProcessPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_process_Nova_ProcessPropertyMap* nova_process_Nova_ProcessPropertyMap_Nova_construct(nova_process_Nova_ProcessPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_process_Nova_ProcessPropertyMap, this,);
	this->vtable = &nova_process_Process_ProcessPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_process_Nova_ProcessPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_process_Nova_ProcessPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_process_Nova_ProcessPropertyMap_Nova_destroy(nova_process_Nova_ProcessPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_process_Nova_ProcessPropertyMap_Nova_this(nova_process_Nova_ProcessPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_io_Nova_FileReader* nova_process_Nova_ProcessPropertyMap_functionMap_Nova_reader(nova_process_Nova_ProcessPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_process_Nova_Process* reference)
{
	return reference->nova_process_Nova_Process_Nova_reader;
}

void nova_process_Nova_ProcessPropertyMap_Nova_super(nova_process_Nova_ProcessPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

