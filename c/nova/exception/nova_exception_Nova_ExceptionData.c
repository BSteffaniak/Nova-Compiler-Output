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
#include <signal.h>
#include <NovaExceptionHandling.h>
#include <nova/exception/nova_exception_Nova_CaughtException.h>
#include <nova/NativeObject.h>

typedef struct
{
	/* Bool soft = false */ int* nova_exception_Nova_ExceptionData_Nova_soft;
	/* Exception exception */ nova_exception_Nova_Exception** nova_exception_Nova_ExceptionData_Nova_exception;
} Context93;



nova_exception_Nova_ExceptionData* nova_exception_Nova_ExceptionData_Nova_getDataByException(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_Exception* exception, int soft);
char nova_exception_Nova_ExceptionData_Nova_lambda94(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_CaughtException* c, Context93* context);
void nova_exception_Nova_ExceptionData_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_exception_Nova_ExceptionData* nova_exception_Nova_ExceptionData_Nova_construct(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, buffer* buf)
{
	CCLASS_NEW(nova_exception_Nova_ExceptionData, this,);
	this->vtable = &nova_exception_ExceptionData_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_exception_Nova_ExceptionData_Nova_super(this, exceptionData);
	
	{
		nova_exception_Nova_ExceptionData_Nova_this(this, exceptionData, buf);
	}
	
	return this;
}

void nova_exception_Nova_ExceptionData_Nova_destroy(nova_exception_Nova_ExceptionData** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_exception_Nova_ExceptionData_Nova_destroy(&(*this)->nova_exception_Nova_ExceptionData_Nova_parent, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->nova_exception_Nova_ExceptionData_Nova_caught, exceptionData);
	nova_exception_Nova_Exception_Nova_destroy(&(*this)->nova_exception_Nova_ExceptionData_Nova_thrownException, exceptionData);
	
	
	NOVA_FREE(*this);
}

void nova_exception_Nova_ExceptionData_Nova_this(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, buffer* buf)
{
	this->nova_exception_Nova_ExceptionData_Nova_buf = buf;
	this->nova_exception_Nova_ExceptionData_Nova_caught = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

void nova_exception_Nova_ExceptionData_Nova_addCaught(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* type, int soft)
{
	soft = (int)(soft == (intptr_t)nova_null ? 0 : soft);
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->nova_exception_Nova_ExceptionData_Nova_caught), exceptionData, (nova_Nova_Object*)(nova_exception_Nova_CaughtException_Nova_construct(0, exceptionData, type, soft)));
}

nova_exception_Nova_ExceptionData* nova_exception_Nova_ExceptionData_Nova_getDataByException(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_Exception* exception, int soft)
{
	nova_exception_Nova_ExceptionData* l1_Nova_data = (nova_exception_Nova_ExceptionData*)nova_null;
	
	soft = (int)(soft == (intptr_t)nova_null ? 0 : soft);
	l1_Nova_data = this;
	while (1)
	{
		Context93* contextArg94 = NOVA_MALLOC(sizeof(Context93));
		contextArg94->nova_exception_Nova_ExceptionData_Nova_soft = &soft;
		contextArg94->nova_exception_Nova_ExceptionData_Nova_exception = &exception;
		
		if (nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(l1_Nova_data->nova_exception_Nova_ExceptionData_Nova_caught), exceptionData, (nova_datastruct_list_Nova_List_closure296_Nova_anyFunc)&nova_exception_Nova_ExceptionData_Nova_lambda94, this, contextArg94))
		{
			return l1_Nova_data;
		}
		else if ((l1_Nova_data->nova_exception_Nova_ExceptionData_Nova_parent) == (nova_exception_Nova_ExceptionData*)nova_null)
		{
			return (nova_exception_Nova_ExceptionData*)(soft ? (nova_Nova_Object*)nova_null : (nova_Nova_Object*)l1_Nova_data);
		}
		l1_Nova_data = l1_Nova_data->nova_exception_Nova_ExceptionData_Nova_parent;
	}
}

char nova_exception_Nova_ExceptionData_Nova_throwException(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData** context, nova_exception_Nova_Exception* exception, char soft)
{
	nova_exception_Nova_ExceptionData* l1_Nova_catchExceptionData = (nova_exception_Nova_ExceptionData*)nova_null;
	
	l1_Nova_catchExceptionData = nova_exception_Nova_ExceptionData_Nova_getDataByException(this, exceptionData, exception, soft);
	if ((l1_Nova_catchExceptionData) != (nova_exception_Nova_ExceptionData*)nova_null)
	{
		*context = l1_Nova_catchExceptionData;
		l1_Nova_catchExceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException = exception;
		jump(*l1_Nova_catchExceptionData->nova_exception_Nova_ExceptionData_Nova_buf, (intptr_t)exception);
	}
	return 0;
}

char nova_exception_Nova_ExceptionData_Nova_lambda94(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_CaughtException* c, Context93* context)
{
	return (!(*context->nova_exception_Nova_ExceptionData_Nova_soft) || c->nova_exception_Nova_CaughtException_Nova_soft) && nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)((*context->nova_exception_Nova_ExceptionData_Nova_exception)->vtable->classInstance), exceptionData, c->nova_exception_Nova_CaughtException_Nova_type);
}

void nova_exception_Nova_ExceptionData_Nova_super(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_exception_Nova_ExceptionData_Nova_parent = (nova_exception_Nova_ExceptionData*)nova_null;
	this->nova_exception_Nova_ExceptionData_Nova_caught = (nova_datastruct_list_Nova_Array*)nova_null;
	this->nova_exception_Nova_ExceptionData_Nova_thrownException = (nova_exception_Nova_Exception*)nova_null;
}


nova_exception_Nova_ExceptionData* nova_exception_Nova_ExceptionDataFunctionMap_functionMap_Nova_getDataByException(nova_exception_Nova_ExceptionDataFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData* reference, nova_exception_Nova_Exception* exception, char soft);
void nova_exception_Nova_ExceptionDataFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_exception_Nova_ExceptionDataFunctionMap* nova_exception_Nova_ExceptionDataFunctionMap_Nova_construct(nova_exception_Nova_ExceptionDataFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_exception_Nova_ExceptionDataFunctionMap, this,);
	this->vtable = &nova_exception_ExceptionData_ExceptionDataFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_exception_Nova_ExceptionDataFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_exception_Nova_ExceptionDataFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_exception_Nova_ExceptionDataFunctionMap_Nova_destroy(nova_exception_Nova_ExceptionDataFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_exception_Nova_ExceptionDataFunctionMap_Nova_this(nova_exception_Nova_ExceptionDataFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_exception_Nova_ExceptionDataFunctionMap_functionMap_Nova_addCaught(nova_exception_Nova_ExceptionDataFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData* reference, nova_meta_Nova_Class* type, char soft)
{
	nova_exception_Nova_ExceptionData_Nova_addCaught(reference, exceptionData, type, soft);
}

nova_exception_Nova_ExceptionData* nova_exception_Nova_ExceptionDataFunctionMap_functionMap_Nova_getDataByException(nova_exception_Nova_ExceptionDataFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData* reference, nova_exception_Nova_Exception* exception, char soft)
{
	return nova_exception_Nova_ExceptionData_Nova_getDataByException(reference, exceptionData, exception, soft);
}

char nova_exception_Nova_ExceptionDataFunctionMap_functionMap_Nova_throwException(nova_exception_Nova_ExceptionDataFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData* reference, nova_exception_Nova_ExceptionData* context, nova_exception_Nova_Exception* exception, char soft)
{
	return nova_exception_Nova_ExceptionData_Nova_throwException(reference, exceptionData, &context, exception, soft);
}

void nova_exception_Nova_ExceptionDataFunctionMap_Nova_super(nova_exception_Nova_ExceptionDataFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_exception_Nova_ExceptionDataPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_exception_Nova_ExceptionDataPropertyMap* nova_exception_Nova_ExceptionDataPropertyMap_Nova_construct(nova_exception_Nova_ExceptionDataPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_exception_Nova_ExceptionDataPropertyMap, this,);
	this->vtable = &nova_exception_ExceptionData_ExceptionDataPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_exception_Nova_ExceptionDataPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_exception_Nova_ExceptionDataPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_exception_Nova_ExceptionDataPropertyMap_Nova_destroy(nova_exception_Nova_ExceptionDataPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_exception_Nova_ExceptionDataPropertyMap_Nova_this(nova_exception_Nova_ExceptionDataPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_exception_Nova_ExceptionData* nova_exception_Nova_ExceptionDataPropertyMap_functionMap_Nova_parent(nova_exception_Nova_ExceptionDataPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData* reference)
{
	return reference->nova_exception_Nova_ExceptionData_Nova_parent;
}

nova_datastruct_list_Nova_Array* nova_exception_Nova_ExceptionDataPropertyMap_functionMap_Nova_caught(nova_exception_Nova_ExceptionDataPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData* reference)
{
	return reference->nova_exception_Nova_ExceptionData_Nova_caught;
}

nova_exception_Nova_Exception* nova_exception_Nova_ExceptionDataPropertyMap_functionMap_Nova_thrownException(nova_exception_Nova_ExceptionDataPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData* reference)
{
	return reference->nova_exception_Nova_ExceptionData_Nova_thrownException;
}

buffer* nova_exception_Nova_ExceptionDataPropertyMap_functionMap_Nova_buf(nova_exception_Nova_ExceptionDataPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_ExceptionData* reference)
{
	return reference->nova_exception_Nova_ExceptionData_Nova_buf;
}

void nova_exception_Nova_ExceptionDataPropertyMap_Nova_super(nova_exception_Nova_ExceptionDataPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

