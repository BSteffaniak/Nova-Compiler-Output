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
#include <nova/gc/NativeGC.h>
#include <nova/NativeObject.h>








void nova_gc_Nova_GC_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_gc_Nova_GC* nova_gc_Nova_GC_Nova_construct(nova_gc_Nova_GC* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_gc_Nova_GC, this,);
	this->vtable = &nova_gc_GC_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_gc_Nova_GC_Nova_super(this, exceptionData);
	
	{
		nova_gc_Nova_GC_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_gc_Nova_GC_Nova_destroy(nova_gc_Nova_GC** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_gc_Nova_GC_static_Nova_init(nova_gc_Nova_GC* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_gc_init();
}

void nova_gc_Nova_GC_static_Nova_collect(nova_gc_Nova_GC* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_gc_collect();
}

void nova_gc_Nova_GC_static_Nova_enableIncremental(nova_gc_Nova_GC* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_gc_enableIncremental();
}

void nova_gc_Nova_GC_static_Nova_dump(nova_gc_Nova_GC* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_gc_dump();
}

void nova_gc_Nova_GC_Nova_this(nova_gc_Nova_GC* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

int nova_gc_Nova_GC_Accessor_Nova_freeBytes(nova_gc_Nova_GC* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)nova_gc_getFreeBytes();
}


int nova_gc_Nova_GC_Accessor_Nova_totalBytes(nova_gc_Nova_GC* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)nova_gc_getTotalBytes();
}


int nova_gc_Nova_GC_Accessor_Nova_heapSize(nova_gc_Nova_GC* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)nova_gc_getHeapSize();
}


int nova_gc_Nova_GC_Accessor_Nova_bytesSinceGC(nova_gc_Nova_GC* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)nova_gc_getBytesSinceGC();
}


void nova_gc_Nova_GC_Nova_super(nova_gc_Nova_GC* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_gc_Nova_GCFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_gc_Nova_GCFunctionMap* nova_gc_Nova_GCFunctionMap_Nova_construct(nova_gc_Nova_GCFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_gc_Nova_GCFunctionMap, this,);
	this->vtable = &nova_gc_GC_GCFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_gc_Nova_GCFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_gc_Nova_GCFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_gc_Nova_GCFunctionMap_Nova_destroy(nova_gc_Nova_GCFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_gc_Nova_GCFunctionMap_Nova_this(nova_gc_Nova_GCFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_gc_Nova_GC* nova_gc_Nova_GCFunctionMap_functionMapGCFunctionMap_Nova_construct(nova_gc_Nova_GCFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_gc_Nova_GC_Nova_construct(0, exceptionData);
}

void nova_gc_Nova_GCFunctionMap_functionMap_static_Nova_init(nova_gc_Nova_GCFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_gc_Nova_GC_static_Nova_init(0, exceptionData);
}

void nova_gc_Nova_GCFunctionMap_functionMap_static_Nova_collect(nova_gc_Nova_GCFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_gc_Nova_GC_static_Nova_collect(0, exceptionData);
}

void nova_gc_Nova_GCFunctionMap_functionMap_static_Nova_enableIncremental(nova_gc_Nova_GCFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_gc_Nova_GC_static_Nova_enableIncremental(0, exceptionData);
}

void nova_gc_Nova_GCFunctionMap_functionMap_static_Nova_dump(nova_gc_Nova_GCFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_gc_Nova_GC_static_Nova_dump(0, exceptionData);
}

void nova_gc_Nova_GCFunctionMap_Nova_super(nova_gc_Nova_GCFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_gc_Nova_GCPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_gc_Nova_GCPropertyMap* nova_gc_Nova_GCPropertyMap_Nova_construct(nova_gc_Nova_GCPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_gc_Nova_GCPropertyMap, this,);
	this->vtable = &nova_gc_GC_GCPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_gc_Nova_GCPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_gc_Nova_GCPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_gc_Nova_GCPropertyMap_Nova_destroy(nova_gc_Nova_GCPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_gc_Nova_GCPropertyMap_Nova_this(nova_gc_Nova_GCPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

int nova_gc_Nova_GCPropertyMap_functionMap_Nova_freeBytes(nova_gc_Nova_GCPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_gc_Nova_GC* reference)
{
	return nova_gc_Nova_GC_Accessor_Nova_freeBytes(reference, exceptionData);
}

int nova_gc_Nova_GCPropertyMap_functionMap_Nova_totalBytes(nova_gc_Nova_GCPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_gc_Nova_GC* reference)
{
	return nova_gc_Nova_GC_Accessor_Nova_totalBytes(reference, exceptionData);
}

int nova_gc_Nova_GCPropertyMap_functionMap_Nova_heapSize(nova_gc_Nova_GCPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_gc_Nova_GC* reference)
{
	return nova_gc_Nova_GC_Accessor_Nova_heapSize(reference, exceptionData);
}

int nova_gc_Nova_GCPropertyMap_functionMap_Nova_bytesSinceGC(nova_gc_Nova_GCPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_gc_Nova_GC* reference)
{
	return nova_gc_Nova_GC_Accessor_Nova_bytesSinceGC(reference, exceptionData);
}

void nova_gc_Nova_GCPropertyMap_Nova_super(nova_gc_Nova_GCPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

