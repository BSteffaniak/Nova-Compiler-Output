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
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Value.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>





void spectra_tree_nodes_Nova_ArgumentList_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_ArgumentList* spectra_tree_nodes_Nova_ArgumentList_Nova_construct(spectra_tree_nodes_Nova_ArgumentList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_ArgumentList, this,);
	this->vtable = &spectra_tree_nodes_ArgumentList_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeList_Nova_super((spectra_tree_nodes_Nova_NodeList*)this, exceptionData);
	spectra_tree_nodes_Nova_ArgumentList_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_ArgumentList_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_ArgumentList_Nova_destroy(spectra_tree_nodes_Nova_ArgumentList** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ArgumentList_Nova_this(spectra_tree_nodes_Nova_ArgumentList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_NodeList_Nova_this((spectra_tree_nodes_Nova_NodeList*)(this), exceptionData, parent, location);
}

nova_Nova_String* spectra_tree_nodes_Nova_ArgumentList_Nova_toString(spectra_tree_nodes_Nova_ArgumentList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("(")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_ArgumentList_Accessor_Nova_arguments(this, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(")")))));
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_ArgumentList_Accessor_Nova_arguments(spectra_tree_nodes_Nova_ArgumentList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_Nova_Value**)this->spectra_tree_nodes_Nova_NodeList_Nova_children;
}


void spectra_tree_nodes_Nova_ArgumentList_Nova_super(spectra_tree_nodes_Nova_ArgumentList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_Nova_ArgumentListFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_ArgumentListFunctionMap* spectra_tree_nodes_Nova_ArgumentListFunctionMap_Nova_construct(spectra_tree_nodes_Nova_ArgumentListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_ArgumentListFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_ArgumentList_ArgumentListFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeListFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeListFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ArgumentListFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_ArgumentListFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_ArgumentListFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_ArgumentListFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ArgumentListFunctionMap_Nova_this(spectra_tree_nodes_Nova_ArgumentListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_ArgumentList* spectra_tree_nodes_Nova_ArgumentListFunctionMap_functionMapArgumentListFunctionMap_Nova_construct(spectra_tree_nodes_Nova_ArgumentListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_Nova_ArgumentList_Nova_construct(0, exceptionData, parent, location);
}

nova_Nova_String* spectra_tree_nodes_Nova_ArgumentListFunctionMap_functionMap_Nova_toString(spectra_tree_nodes_Nova_ArgumentListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ArgumentList* reference)
{
	return spectra_tree_nodes_Nova_ArgumentList_Nova_toString(reference, exceptionData);
}

void spectra_tree_nodes_Nova_ArgumentListFunctionMap_Nova_super(spectra_tree_nodes_Nova_ArgumentListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_Nova_ArgumentListPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_ArgumentListPropertyMap* spectra_tree_nodes_Nova_ArgumentListPropertyMap_Nova_construct(spectra_tree_nodes_Nova_ArgumentListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_ArgumentListPropertyMap, this,);
	this->vtable = &spectra_tree_nodes_ArgumentList_ArgumentListPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeListPropertyMap_Nova_super((spectra_tree_nodes_Nova_NodeListPropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_ArgumentListPropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_ArgumentListPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_ArgumentListPropertyMap_Nova_destroy(spectra_tree_nodes_Nova_ArgumentListPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_ArgumentListPropertyMap_Nova_this(spectra_tree_nodes_Nova_ArgumentListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_ArgumentListPropertyMap_functionMap_Nova_arguments(spectra_tree_nodes_Nova_ArgumentListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ArgumentList* reference)
{
	return spectra_tree_nodes_Nova_ArgumentList_Accessor_Nova_arguments(reference, exceptionData);
}

void spectra_tree_nodes_Nova_ArgumentListPropertyMap_Nova_super(spectra_tree_nodes_Nova_ArgumentListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

