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
#include <nova/io/nova_io_Nova_FileWriter.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgComponent.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgComponent.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgComponent.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgComponentList.h>
#include <nova/NativeObject.h>



void nova_web_svg_Nova_SvgCircle_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_svg_Nova_SvgCircle* nova_web_svg_Nova_SvgCircle_Nova_construct(nova_web_svg_Nova_SvgCircle* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y, int r)
{
	CCLASS_NEW(nova_web_svg_Nova_SvgCircle, this,);
	this->vtable = &nova_web_svg_SvgCircle_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_web_svg_Nova_SvgComponent_Nova_super((nova_web_svg_Nova_SvgComponent*)this, exceptionData);
	nova_web_svg_Nova_SvgCircle_Nova_super(this, exceptionData);
	
	{
		nova_web_svg_Nova_SvgCircle_Nova_this(this, exceptionData, x, y, r);
	}
	
	return this;
}

void nova_web_svg_Nova_SvgCircle_Nova_destroy(nova_web_svg_Nova_SvgCircle** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	
	NOVA_FREE(*this);
}

void nova_web_svg_Nova_SvgCircle_Nova_this(nova_web_svg_Nova_SvgCircle* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y, int r)
{
	this->nova_web_svg_Nova_SvgCircle_Nova_x = x;
	this->nova_web_svg_Nova_SvgCircle_Nova_y = y;
	this->nova_web_svg_Nova_SvgCircle_Nova_r = r;
}

char nova_web_svg_Nova_SvgCircle_Nova_generateOutput(nova_web_svg_Nova_SvgCircle* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* writer)
{
	return nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(writer), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<circle cx=\"")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, (this->nova_web_svg_Nova_SvgCircle_Nova_x)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\" cy=\"")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, (this->nova_web_svg_Nova_SvgCircle_Nova_y)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\" r=\"")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (this->nova_web_svg_Nova_SvgCircle_Nova_r)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\" stroke=\"false\" fill=\"black\"/>\n")))))))))))))));
}

nova_Nova_String* nova_web_svg_Nova_SvgCircle_Nova_toString(nova_web_svg_Nova_SvgCircle* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[Circle at (")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, (this->nova_web_svg_Nova_SvgCircle_Nova_x)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, (this->nova_web_svg_Nova_SvgCircle_Nova_y)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(") with a radius of ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (this->nova_web_svg_Nova_SvgCircle_Nova_r)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("]")))))))))))));
}

void nova_web_svg_Nova_SvgCircle_Nova_super(nova_web_svg_Nova_SvgCircle* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_web_svg_Nova_SvgCircle_Nova_x = 0;
	this->nova_web_svg_Nova_SvgCircle_Nova_y = 0;
	this->nova_web_svg_Nova_SvgCircle_Nova_r = 0;
}

void nova_web_svg_Nova_SvgCircleFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_svg_Nova_SvgCircleFunctionMap* nova_web_svg_Nova_SvgCircleFunctionMap_Nova_construct(nova_web_svg_Nova_SvgCircleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_web_svg_Nova_SvgCircleFunctionMap, this,);
	this->vtable = &nova_web_svg_SvgCircle_SvgCircleFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_web_svg_Nova_SvgComponentFunctionMap_Nova_super((nova_web_svg_Nova_SvgComponentFunctionMap*)this, exceptionData);
	nova_web_svg_Nova_SvgCircleFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_web_svg_Nova_SvgCircleFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_web_svg_Nova_SvgCircleFunctionMap_Nova_destroy(nova_web_svg_Nova_SvgCircleFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_web_svg_Nova_SvgCircleFunctionMap_Nova_this(nova_web_svg_Nova_SvgCircleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_web_svg_Nova_SvgCircle* nova_web_svg_Nova_SvgCircleFunctionMap_functionMapSvgCircleFunctionMap_Nova_construct(nova_web_svg_Nova_SvgCircleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y, int r)
{
	return nova_web_svg_Nova_SvgCircle_Nova_construct(0, exceptionData, x, y, r);
}

char nova_web_svg_Nova_SvgCircleFunctionMap_functionMap_Nova_generateOutput(nova_web_svg_Nova_SvgCircleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgCircle* reference, nova_io_Nova_FileWriter* writer)
{
	return nova_web_svg_Nova_SvgCircle_Nova_generateOutput(reference, exceptionData, writer);
}

nova_Nova_String* nova_web_svg_Nova_SvgCircleFunctionMap_functionMap_Nova_toString(nova_web_svg_Nova_SvgCircleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgCircle* reference)
{
	return nova_web_svg_Nova_SvgCircle_Nova_toString(reference, exceptionData);
}

void nova_web_svg_Nova_SvgCircleFunctionMap_Nova_super(nova_web_svg_Nova_SvgCircleFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_web_svg_Nova_SvgCirclePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_svg_Nova_SvgCirclePropertyMap* nova_web_svg_Nova_SvgCirclePropertyMap_Nova_construct(nova_web_svg_Nova_SvgCirclePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_web_svg_Nova_SvgCirclePropertyMap, this,);
	this->vtable = &nova_web_svg_SvgCircle_SvgCirclePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_web_svg_Nova_SvgComponentPropertyMap_Nova_super((nova_web_svg_Nova_SvgComponentPropertyMap*)this, exceptionData);
	nova_web_svg_Nova_SvgCirclePropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_web_svg_Nova_SvgCirclePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_web_svg_Nova_SvgCirclePropertyMap_Nova_destroy(nova_web_svg_Nova_SvgCirclePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_web_svg_Nova_SvgCirclePropertyMap_Nova_this(nova_web_svg_Nova_SvgCirclePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

double nova_web_svg_Nova_SvgCirclePropertyMap_functionMap_Nova_x(nova_web_svg_Nova_SvgCirclePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgCircle* reference)
{
	return reference->nova_web_svg_Nova_SvgCircle_Nova_x;
}

double nova_web_svg_Nova_SvgCirclePropertyMap_functionMap_Nova_y(nova_web_svg_Nova_SvgCirclePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgCircle* reference)
{
	return reference->nova_web_svg_Nova_SvgCircle_Nova_y;
}

int nova_web_svg_Nova_SvgCirclePropertyMap_functionMap_Nova_r(nova_web_svg_Nova_SvgCirclePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgCircle* reference)
{
	return reference->nova_web_svg_Nova_SvgCircle_Nova_r;
}

void nova_web_svg_Nova_SvgCirclePropertyMap_Nova_super(nova_web_svg_Nova_SvgCirclePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

