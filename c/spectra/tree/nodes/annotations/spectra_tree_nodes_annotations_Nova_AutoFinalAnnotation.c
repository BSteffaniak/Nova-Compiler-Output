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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionDeclaration.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_FunctionCall.h>
#include <spectra/tree/nodes/functions/spectra_tree_nodes_functions_Nova_Instantiation.h>
#include <spectra/tree/nodes/functions/closures/spectra_tree_nodes_functions_closures_Nova_LambdaExpression.h>
#include <spectra/tree/nodes/variables/spectra_tree_nodes_variables_Nova_VariableDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NodeList.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_PlaceholderValue.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Scope.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ValidationResult.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <nova/NativeObject.h>



void spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation* spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_Nova_construct(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation, this,);
	this->vtable = &spectra_tree_nodes_annotations_AutoFinalAnnotation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_Annotation_Nova_super((spectra_tree_nodes_annotations_Nova_Annotation*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_Nova_destroy(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_Nova_this(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_annotations_Nova_Annotation_Nova_this((spectra_tree_nodes_annotations_Nova_Annotation*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation* spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_static_Nova_parse(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* type, nova_Nova_String* parameters, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (nova_Nova_String_Nova_equals(type, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("AutoFinal"))) && parameters->nova_Nova_String_Nova_count == 0)
	{
		spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation* l2_Nova_node = (spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_Nova_construct(0, exceptionData, parent, location);
		return l2_Nova_node;
	}
	return (spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation*)(nova_Nova_Object*)nova_null;
}

void spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_Nova_super(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap* spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap_Nova_construct(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_annotations_AutoFinalAnnotation_AutoFinalAnnotationFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_Nova_super((spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap_Nova_destroy(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap_Nova_this(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation* spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap_functionMapAutoFinalAnnotationFunctionMap_Nova_construct(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation* spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* type, nova_Nova_String* parameters, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_static_Nova_parse(0, exceptionData, type, parameters, parent, location, require);
}

void spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap_Nova_super(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationPropertyMap* spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationPropertyMap_Nova_construct(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationPropertyMap, this,);
	this->vtable = &spectra_tree_nodes_annotations_AutoFinalAnnotation_AutoFinalAnnotationPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap_Nova_super((spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationPropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationPropertyMap_Nova_destroy(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationPropertyMap_Nova_this(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationPropertyMap_Nova_super(spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

