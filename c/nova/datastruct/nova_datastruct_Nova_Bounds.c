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








void nova_datastruct_Nova_Bounds_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_Bounds* nova_datastruct_Nova_Bounds_Nova_construct(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	CCLASS_NEW(nova_datastruct_Nova_Bounds, this,);
	this->vtable = &nova_datastruct_Bounds_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Bounds_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_Bounds_Nova_this(this, exceptionData, start, end);
	}
	
	return this;
}

void nova_datastruct_Nova_Bounds_Nova_destroy(nova_datastruct_Nova_Bounds** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_Bounds_Nova_this(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	end = (int)(end == (intptr_t)nova_null ? 0 : end);
	this->nova_datastruct_Nova_Bounds_Nova_start = start;
	this->nova_datastruct_Nova_Bounds_Nova_end = end;
}

nova_Nova_String* nova_datastruct_Nova_Bounds_Nova_extractString(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	return (nova_Nova_String*)(nova_datastruct_Nova_Bounds_Accessor_Nova_valid(this, exceptionData) ? (nova_Nova_Object*)nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(source), exceptionData, this->nova_datastruct_Nova_Bounds_Nova_start, this->nova_datastruct_Nova_Bounds_Nova_end) : (nova_Nova_Object*)nova_null);
}

nova_Nova_String* nova_datastruct_Nova_Bounds_Nova_extractPreString(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	return (nova_Nova_String*)(nova_datastruct_Nova_Bounds_Accessor_Nova_valid(this, exceptionData) ? (nova_Nova_Object*)nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(source), exceptionData, 0, this->nova_datastruct_Nova_Bounds_Nova_start) : (nova_Nova_Object*)nova_null);
}

nova_Nova_String* nova_datastruct_Nova_Bounds_Nova_extractPostString(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	return (nova_Nova_String*)(nova_datastruct_Nova_Bounds_Accessor_Nova_valid(this, exceptionData) ? (nova_Nova_Object*)nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(source), exceptionData, this->nova_datastruct_Nova_Bounds_Nova_end, (intptr_t)nova_null) : (nova_Nova_Object*)nova_null);
}

nova_Nova_String* nova_datastruct_Nova_Bounds_Nova_trimString(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	return (nova_Nova_String*)(nova_datastruct_Nova_Bounds_Accessor_Nova_valid(this, exceptionData) ? (nova_Nova_Object*)nova_Nova_String_Nova_plus(nova_datastruct_Nova_Bounds_Nova_extractPreString(this, exceptionData, source), exceptionData, nova_datastruct_Nova_Bounds_Nova_extractPostString(this, exceptionData, source)) : (nova_Nova_Object*)nova_null);
}

char nova_datastruct_Nova_Bounds_Nova_invalidate(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_Bounds_Nova_start = (int)(this->nova_datastruct_Nova_Bounds_Nova_end = (int)(-1));
}

char nova_datastruct_Nova_Bounds_Nova_equals(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* bounds)
{
	return (bounds) != (nova_datastruct_Nova_Bounds*)nova_null && bounds->nova_datastruct_Nova_Bounds_Nova_start == this->nova_datastruct_Nova_Bounds_Nova_start && bounds->nova_datastruct_Nova_Bounds_Nova_end == this->nova_datastruct_Nova_Bounds_Nova_end;
}

nova_Nova_String* nova_datastruct_Nova_Bounds_Nova_toString(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, this->nova_datastruct_Nova_Bounds_Nova_start), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, this->nova_datastruct_Nova_Bounds_Nova_end), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("]")))))))));
}

nova_datastruct_Nova_Bounds* nova_datastruct_Nova_Bounds_Nova_cloneTo(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* bounds)
{
	bounds->nova_datastruct_Nova_Bounds_Nova_start = this->nova_datastruct_Nova_Bounds_Nova_start;
	bounds->nova_datastruct_Nova_Bounds_Nova_end = this->nova_datastruct_Nova_Bounds_Nova_end;
	return bounds;
}

nova_datastruct_Nova_Bounds* nova_datastruct_Nova_Bounds_Nova_clone(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_Nova_Bounds_Nova_construct(0, exceptionData, this->nova_datastruct_Nova_Bounds_Nova_start, this->nova_datastruct_Nova_Bounds_Nova_end);
}

int nova_datastruct_Nova_Bounds_Accessor_Nova_size(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_Bounds_Nova_end - this->nova_datastruct_Nova_Bounds_Nova_start;
}


char nova_datastruct_Nova_Bounds_Accessor_Nova_valid(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_Bounds_Nova_start >= 0 && this->nova_datastruct_Nova_Bounds_Nova_end > 0;
}


char nova_datastruct_Nova_Bounds_Accessor_Nova_endless(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_Bounds_Nova_end < 0;
}


char nova_datastruct_Nova_Bounds_Accessor_Nova_optional(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_Bounds_Nova_start == 0;
}


void nova_datastruct_Nova_Bounds_Nova_super(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_Nova_Bounds_Nova_start = 0;
	this->nova_datastruct_Nova_Bounds_Nova_end = 0;
}

void nova_datastruct_Nova_BoundsFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_BoundsFunctionMap* nova_datastruct_Nova_BoundsFunctionMap_Nova_construct(nova_datastruct_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_BoundsFunctionMap, this,);
	this->vtable = &nova_datastruct_Bounds_BoundsFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_datastruct_Nova_BoundsFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_BoundsFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_BoundsFunctionMap_Nova_destroy(nova_datastruct_Nova_BoundsFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_BoundsFunctionMap_Nova_this(nova_datastruct_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_Nova_Bounds* nova_datastruct_Nova_BoundsFunctionMap_functionMapBoundsFunctionMap_Nova_construct(nova_datastruct_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	return nova_datastruct_Nova_Bounds_Nova_construct(0, exceptionData, start, end);
}

nova_Nova_String* nova_datastruct_Nova_BoundsFunctionMap_functionMap_Nova_extractString(nova_datastruct_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference, nova_Nova_String* source)
{
	return nova_datastruct_Nova_Bounds_Nova_extractString(reference, exceptionData, source);
}

nova_Nova_String* nova_datastruct_Nova_BoundsFunctionMap_functionMap_Nova_extractPreString(nova_datastruct_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference, nova_Nova_String* source)
{
	return nova_datastruct_Nova_Bounds_Nova_extractPreString(reference, exceptionData, source);
}

nova_Nova_String* nova_datastruct_Nova_BoundsFunctionMap_functionMap_Nova_extractPostString(nova_datastruct_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference, nova_Nova_String* source)
{
	return nova_datastruct_Nova_Bounds_Nova_extractPostString(reference, exceptionData, source);
}

nova_Nova_String* nova_datastruct_Nova_BoundsFunctionMap_functionMap_Nova_trimString(nova_datastruct_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference, nova_Nova_String* source)
{
	return nova_datastruct_Nova_Bounds_Nova_trimString(reference, exceptionData, source);
}

char nova_datastruct_Nova_BoundsFunctionMap_functionMap_Nova_invalidate(nova_datastruct_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference)
{
	return nova_datastruct_Nova_Bounds_Nova_invalidate(reference, exceptionData);
}

char nova_datastruct_Nova_BoundsFunctionMap_functionMap_Nova_equals(nova_datastruct_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference, nova_datastruct_Nova_Bounds* bounds)
{
	return nova_datastruct_Nova_Bounds_Nova_equals(reference, exceptionData, bounds);
}

nova_Nova_String* nova_datastruct_Nova_BoundsFunctionMap_functionMap_Nova_toString(nova_datastruct_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference)
{
	return nova_datastruct_Nova_Bounds_Nova_toString(reference, exceptionData);
}

nova_datastruct_Nova_Bounds* nova_datastruct_Nova_BoundsFunctionMap_functionMap_Nova_cloneTo(nova_datastruct_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference, nova_datastruct_Nova_Bounds* bounds)
{
	return nova_datastruct_Nova_Bounds_Nova_cloneTo(reference, exceptionData, bounds);
}

nova_datastruct_Nova_Bounds* nova_datastruct_Nova_BoundsFunctionMap_functionMap_Nova_clone(nova_datastruct_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference)
{
	return nova_datastruct_Nova_Bounds_Nova_clone(reference, exceptionData);
}

void nova_datastruct_Nova_BoundsFunctionMap_Nova_super(nova_datastruct_Nova_BoundsFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_Nova_BoundsPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_BoundsPropertyMap* nova_datastruct_Nova_BoundsPropertyMap_Nova_construct(nova_datastruct_Nova_BoundsPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_BoundsPropertyMap, this,);
	this->vtable = &nova_datastruct_Bounds_BoundsPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_datastruct_Nova_BoundsPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_BoundsPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_BoundsPropertyMap_Nova_destroy(nova_datastruct_Nova_BoundsPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_BoundsPropertyMap_Nova_this(nova_datastruct_Nova_BoundsPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

int nova_datastruct_Nova_BoundsPropertyMap_functionMap_Nova_size(nova_datastruct_Nova_BoundsPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference)
{
	return nova_datastruct_Nova_Bounds_Accessor_Nova_size(reference, exceptionData);
}

char nova_datastruct_Nova_BoundsPropertyMap_functionMap_Nova_valid(nova_datastruct_Nova_BoundsPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference)
{
	return nova_datastruct_Nova_Bounds_Accessor_Nova_valid(reference, exceptionData);
}

char nova_datastruct_Nova_BoundsPropertyMap_functionMap_Nova_endless(nova_datastruct_Nova_BoundsPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference)
{
	return nova_datastruct_Nova_Bounds_Accessor_Nova_endless(reference, exceptionData);
}

char nova_datastruct_Nova_BoundsPropertyMap_functionMap_Nova_optional(nova_datastruct_Nova_BoundsPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference)
{
	return nova_datastruct_Nova_Bounds_Accessor_Nova_optional(reference, exceptionData);
}

int nova_datastruct_Nova_BoundsPropertyMap_functionMap_Nova_start(nova_datastruct_Nova_BoundsPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference)
{
	return reference->nova_datastruct_Nova_Bounds_Nova_start;
}

int nova_datastruct_Nova_BoundsPropertyMap_functionMap_Nova_end(nova_datastruct_Nova_BoundsPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* reference)
{
	return reference->nova_datastruct_Nova_Bounds_Nova_end;
}

void nova_datastruct_Nova_BoundsPropertyMap_Nova_super(nova_datastruct_Nova_BoundsPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

