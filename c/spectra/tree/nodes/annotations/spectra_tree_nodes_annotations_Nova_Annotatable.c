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
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <nova/NativeObject.h>



void spectra_tree_nodes_annotations_Nova_Annotatable_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}


nova_datastruct_list_Nova_Array* spectra_tree_nodes_annotations_Nova_Annotatable_Accessor_Nova_annotations(spectra_tree_nodes_annotations_Nova_Annotatable* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_annotations_Nova_Annotatable_Mutator_Nova_annotations(spectra_tree_nodes_annotations_Nova_Annotatable* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* value)
{
	return value;
}

void spectra_tree_nodes_annotations_Nova_Annotatable_virtual_Nova_addAnnotation(spectra_tree_nodes_annotations_Nova_Annotatable* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* annotation)
{
	this->vtable->itable.spectra_tree_nodes_annotations_Nova_Annotatable_virtual_Nova_addAnnotation((spectra_tree_nodes_annotations_Nova_Annotatable*)(this), exceptionData, annotation);
}

void spectra_tree_nodes_annotations_Nova_AnnotatableFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_annotations_Nova_AnnotatableFunctionMap* spectra_tree_nodes_annotations_Nova_AnnotatableFunctionMap_Nova_construct(spectra_tree_nodes_annotations_Nova_AnnotatableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_annotations_Nova_AnnotatableFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_annotations_Annotatable_AnnotatableFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_AnnotatableFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_annotations_Nova_AnnotatableFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_annotations_Nova_AnnotatableFunctionMap_Nova_destroy(spectra_tree_nodes_annotations_Nova_AnnotatableFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_annotations_Nova_AnnotatableFunctionMap_Nova_this(spectra_tree_nodes_annotations_Nova_AnnotatableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_annotations_Nova_AnnotatableFunctionMap_Nova_super(spectra_tree_nodes_annotations_Nova_AnnotatableFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap* spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap_Nova_construct(spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap, this,);
	this->vtable = &spectra_tree_nodes_annotations_Annotatable_AnnotatablePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap_Nova_destroy(spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap_Nova_this(spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap_functionMap0_Nova_annotations(spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotatable* reference)
{
	return spectra_tree_nodes_annotations_Nova_Annotatable_Accessor_Nova_annotations(reference, exceptionData);
}

void spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap_Nova_super(spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap_virtualfunctionMap0_Nova_annotations(spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotatable* reference)
{
	return this->vtable->itable.spectra_tree_nodes_annotations_Nova_AnnotatablePropertyMap_virtualfunctionMap0_Nova_annotations(this, exceptionData, reference);
}

