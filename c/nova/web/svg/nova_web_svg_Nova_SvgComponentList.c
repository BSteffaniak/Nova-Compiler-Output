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
#include <nova/web/svg/nova_web_svg_Nova_SvgComponentNode.h>
#include <nova/NativeObject.h>



void nova_web_svg_Nova_SvgComponentList_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_svg_Nova_SvgComponentList* nova_web_svg_Nova_SvgComponentList_Nova_construct(nova_web_svg_Nova_SvgComponentList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_web_svg_Nova_SvgComponentList, this,);
	this->vtable = &nova_web_svg_SvgComponentList_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_web_svg_Nova_SvgComponentList_Nova_super(this, exceptionData);
	
	{
		nova_web_svg_Nova_SvgComponentList_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_web_svg_Nova_SvgComponentList_Nova_destroy(nova_web_svg_Nova_SvgComponentList** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_web_svg_Nova_SvgComponentNode_Nova_destroy(&(*this)->nova_web_svg_Nova_SvgComponentList_Nova_start, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_web_svg_Nova_SvgComponentList_Nova_generateOutput(nova_web_svg_Nova_SvgComponentList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* writer)
{
	nova_web_svg_Nova_SvgComponentNode* l1_Nova_current = (nova_web_svg_Nova_SvgComponentNode*)nova_null;
	
	l1_Nova_current = this->nova_web_svg_Nova_SvgComponentList_Nova_start;
	while ((l1_Nova_current) != (nova_web_svg_Nova_SvgComponentNode*)nova_null)
	{
		nova_web_svg_Nova_SvgComponent_virtual_Nova_generateOutput((nova_web_svg_Nova_SvgComponent*)(l1_Nova_current->nova_web_svg_Nova_SvgComponentNode_Nova_component), exceptionData, writer);
		l1_Nova_current = l1_Nova_current->nova_web_svg_Nova_SvgComponentNode_Nova_next;
	}
}

void nova_web_svg_Nova_SvgComponentList_Nova_addChild(nova_web_svg_Nova_SvgComponentList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgComponent* component)
{
	nova_web_svg_Nova_SvgComponentNode* l1_Nova_node = (nova_web_svg_Nova_SvgComponentNode*)nova_null;
	
	l1_Nova_node = nova_web_svg_Nova_SvgComponentNode_Nova_construct(0, exceptionData, component, 0);
	if ((this->nova_web_svg_Nova_SvgComponentList_Nova_start) == (nova_web_svg_Nova_SvgComponentNode*)nova_null)
	{
		this->nova_web_svg_Nova_SvgComponentList_Nova_start = l1_Nova_node;
	}
	else
	{
		nova_web_svg_Nova_SvgComponentNode* l3_Nova_current = (nova_web_svg_Nova_SvgComponentNode*)nova_null;
		
		l3_Nova_current = this->nova_web_svg_Nova_SvgComponentList_Nova_start;
		while ((l3_Nova_current->nova_web_svg_Nova_SvgComponentNode_Nova_next) != (nova_web_svg_Nova_SvgComponentNode*)nova_null)
		{
			l3_Nova_current = l3_Nova_current->nova_web_svg_Nova_SvgComponentNode_Nova_next;
		}
		l3_Nova_current->nova_web_svg_Nova_SvgComponentNode_Nova_next = l1_Nova_node;
	}
}

void nova_web_svg_Nova_SvgComponentList_Nova_this(nova_web_svg_Nova_SvgComponentList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_web_svg_Nova_SvgComponentList_Nova_super(nova_web_svg_Nova_SvgComponentList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_web_svg_Nova_SvgComponentList_Nova_start = (nova_web_svg_Nova_SvgComponentNode*)nova_null;
}

void nova_web_svg_Nova_SvgComponentListFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_svg_Nova_SvgComponentListFunctionMap* nova_web_svg_Nova_SvgComponentListFunctionMap_Nova_construct(nova_web_svg_Nova_SvgComponentListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_web_svg_Nova_SvgComponentListFunctionMap, this,);
	this->vtable = &nova_web_svg_SvgComponentList_SvgComponentListFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_web_svg_Nova_SvgComponentListFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_web_svg_Nova_SvgComponentListFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_web_svg_Nova_SvgComponentListFunctionMap_Nova_destroy(nova_web_svg_Nova_SvgComponentListFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_web_svg_Nova_SvgComponentListFunctionMap_Nova_this(nova_web_svg_Nova_SvgComponentListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_web_svg_Nova_SvgComponentList* nova_web_svg_Nova_SvgComponentListFunctionMap_functionMapSvgComponentListFunctionMap_Nova_construct(nova_web_svg_Nova_SvgComponentListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_web_svg_Nova_SvgComponentList_Nova_construct(0, exceptionData);
}

void nova_web_svg_Nova_SvgComponentListFunctionMap_functionMap_Nova_generateOutput(nova_web_svg_Nova_SvgComponentListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgComponentList* reference, nova_io_Nova_FileWriter* writer)
{
	nova_web_svg_Nova_SvgComponentList_Nova_generateOutput(reference, exceptionData, writer);
}

void nova_web_svg_Nova_SvgComponentListFunctionMap_functionMap_Nova_addChild(nova_web_svg_Nova_SvgComponentListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgComponentList* reference, nova_web_svg_Nova_SvgComponent* component)
{
	nova_web_svg_Nova_SvgComponentList_Nova_addChild(reference, exceptionData, component);
}

void nova_web_svg_Nova_SvgComponentListFunctionMap_Nova_super(nova_web_svg_Nova_SvgComponentListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_web_svg_Nova_SvgComponentListPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_web_svg_Nova_SvgComponentListPropertyMap* nova_web_svg_Nova_SvgComponentListPropertyMap_Nova_construct(nova_web_svg_Nova_SvgComponentListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_web_svg_Nova_SvgComponentListPropertyMap, this,);
	this->vtable = &nova_web_svg_SvgComponentList_SvgComponentListPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_web_svg_Nova_SvgComponentListPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_web_svg_Nova_SvgComponentListPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_web_svg_Nova_SvgComponentListPropertyMap_Nova_destroy(nova_web_svg_Nova_SvgComponentListPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_web_svg_Nova_SvgComponentListPropertyMap_Nova_this(nova_web_svg_Nova_SvgComponentListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_web_svg_Nova_SvgComponentNode* nova_web_svg_Nova_SvgComponentListPropertyMap_functionMap_Nova_start(nova_web_svg_Nova_SvgComponentListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_web_svg_Nova_SvgComponentList* reference)
{
	return reference->nova_web_svg_Nova_SvgComponentList_Nova_start;
}

void nova_web_svg_Nova_SvgComponentListPropertyMap_Nova_super(nova_web_svg_Nova_SvgComponentListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

