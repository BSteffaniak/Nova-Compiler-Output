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
#include <nova/web/svg/nova_web_svg_Nova_SvgComponentList.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgComponent.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgComponent.h>
#include <nova/NativeObject.h>



void nova_web_svg_Nova_SvgMainComponent_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_svg_Nova_SvgMainComponent* nova_web_svg_Nova_SvgMainComponent_Nova_construct(nova_web_svg_Nova_SvgMainComponent* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_web_svg_Nova_SvgMainComponent, this,);
	this->vtable = &nova_web_svg_SvgMainComponent_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_web_svg_Nova_SvgComponent_Nova_super((nova_web_svg_Nova_SvgComponent*)this, exceptionData);
	nova_web_svg_Nova_SvgMainComponent_Nova_super(this, exceptionData);
	
	{
		nova_web_svg_Nova_SvgMainComponent_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_web_svg_Nova_SvgMainComponent_Nova_destroy(nova_web_svg_Nova_SvgMainComponent** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_web_svg_Nova_SvgMainComponent_Nova_this(nova_web_svg_Nova_SvgMainComponent* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_web_svg_Nova_SvgComponent_Nova_children = nova_web_svg_Nova_SvgComponentList_Nova_construct(0, exceptionData);
}

void nova_web_svg_Nova_SvgMainComponent_Nova_generateOutput(nova_web_svg_Nova_SvgMainComponent* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* writer)
{
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(writer), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<?xml version = '1.0' standalone = 'no'?>\n<!DOCTYPE svg PUBLIC\"-//W3C//DTD Svg1.1//EN\" \"http://www.w3.org/Graphics/Svg/1.1/DTD/svg11.dtd\"><svg width=\"1400px\" height=\"950px\" version=\"1.1\" preserveAspectRatio=\"none\">\n")));
	nova_web_svg_Nova_SvgComponentList_Nova_generateOutput(this->nova_web_svg_Nova_SvgComponent_Nova_children, exceptionData, writer);
	nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(writer), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("</svg>\n")));
}

void nova_web_svg_Nova_SvgMainComponent_Nova_super(nova_web_svg_Nova_SvgMainComponent* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_web_svg_Nova_SvgMainComponentFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_svg_Nova_SvgMainComponentFunctionMap* nova_web_svg_Nova_SvgMainComponentFunctionMap_Nova_construct(nova_web_svg_Nova_SvgMainComponentFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_web_svg_Nova_SvgMainComponentFunctionMap, this,);
	this->vtable = &nova_web_svg_SvgMainComponent_SvgMainComponentFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_web_svg_Nova_SvgComponentFunctionMap_Nova_super((nova_web_svg_Nova_SvgComponentFunctionMap*)this, exceptionData);
	nova_web_svg_Nova_SvgMainComponentFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_web_svg_Nova_SvgMainComponentFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_web_svg_Nova_SvgMainComponentFunctionMap_Nova_destroy(nova_web_svg_Nova_SvgMainComponentFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_web_svg_Nova_SvgMainComponentFunctionMap_Nova_this(nova_web_svg_Nova_SvgMainComponentFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_web_svg_Nova_SvgMainComponent* nova_web_svg_Nova_SvgMainComponentFunctionMap_functionMapSvgMainComponentFunctionMap_Nova_construct(nova_web_svg_Nova_SvgMainComponentFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_web_svg_Nova_SvgMainComponent_Nova_construct(0, exceptionData);
}

void nova_web_svg_Nova_SvgMainComponentFunctionMap_functionMap_Nova_generateOutput(nova_web_svg_Nova_SvgMainComponentFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgMainComponent* reference, nova_io_Nova_FileWriter* writer)
{
	nova_web_svg_Nova_SvgMainComponent_Nova_generateOutput(reference, exceptionData, writer);
}

void nova_web_svg_Nova_SvgMainComponentFunctionMap_Nova_super(nova_web_svg_Nova_SvgMainComponentFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_web_svg_Nova_SvgMainComponentPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_svg_Nova_SvgMainComponentPropertyMap* nova_web_svg_Nova_SvgMainComponentPropertyMap_Nova_construct(nova_web_svg_Nova_SvgMainComponentPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_web_svg_Nova_SvgMainComponentPropertyMap, this,);
	this->vtable = &nova_web_svg_SvgMainComponent_SvgMainComponentPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_web_svg_Nova_SvgComponentPropertyMap_Nova_super((nova_web_svg_Nova_SvgComponentPropertyMap*)this, exceptionData);
	nova_web_svg_Nova_SvgMainComponentPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_web_svg_Nova_SvgMainComponentPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_web_svg_Nova_SvgMainComponentPropertyMap_Nova_destroy(nova_web_svg_Nova_SvgMainComponentPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_web_svg_Nova_SvgMainComponentPropertyMap_Nova_this(nova_web_svg_Nova_SvgMainComponentPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_web_svg_Nova_SvgMainComponentPropertyMap_Nova_super(nova_web_svg_Nova_SvgMainComponentPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

