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
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_VisibilityModifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_VisibilityModifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_VisibilityModifier.h>
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




nova_datastruct_list_Nova_Array* generated13(spectra_tree_nodes_annotations_Nova_PublicAnnotation* this, nova_exception_Nova_ExceptionData* exceptionData);

void spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_annotations_Nova_PublicAnnotation* spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_construct(spectra_tree_nodes_annotations_Nova_PublicAnnotation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_annotations_Nova_PublicAnnotation, this,);
	this->vtable = &spectra_tree_nodes_annotations_PublicAnnotation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_Annotation_Nova_super((spectra_tree_nodes_annotations_Nova_Annotation*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_destroy(spectra_tree_nodes_annotations_Nova_PublicAnnotation** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_alias, exceptionData);
	
	NOVA_FREE(*this);
}

spectra_tree_nodes_annotations_Nova_Modifier* spectra_tree_nodes_annotations_Nova_PublicAnnotation_static_Nova_default(spectra_tree_nodes_annotations_Nova_PublicAnnotation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_annotations_Nova_Modifier*)spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_construct(0, exceptionData, 0, 0);
}

void spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_this(spectra_tree_nodes_annotations_Nova_PublicAnnotation* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_annotations_Nova_Annotation_Nova_this((spectra_tree_nodes_annotations_Nova_Annotation*)(this), exceptionData, parent, location);
}

spectra_tree_nodes_annotations_Nova_PublicAnnotation* spectra_tree_nodes_annotations_Nova_PublicAnnotation_static_Nova_parse(spectra_tree_nodes_annotations_Nova_PublicAnnotation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* type, nova_Nova_String* parameters, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	if (nova_Nova_String_Nova_equals(type, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Public"))) && parameters->nova_Nova_String_Nova_count == 0)
	{
		spectra_tree_nodes_annotations_Nova_PublicAnnotation* l2_Nova_node = (spectra_tree_nodes_annotations_Nova_PublicAnnotation*)nova_null;
		
		l2_Nova_node = spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_construct(0, exceptionData, parent, location);
		return l2_Nova_node;
	}
	return (spectra_tree_nodes_annotations_Nova_PublicAnnotation*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_Array* generated13(spectra_tree_nodes_annotations_Nova_PublicAnnotation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 1);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("public"));
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

nova_datastruct_list_Nova_ImmutableArray* spectra_tree_nodes_annotations_Nova_PublicAnnotation_Accessor_static_Nova_aliases(spectra_tree_nodes_annotations_Nova_PublicAnnotation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_ImmutableArray*)nova_datastruct_list_Nova_Array_Nova_toImmutable((nova_datastruct_list_Nova_Array*)(generated13(0, exceptionData)), exceptionData);
}


nova_Nova_String* spectra_tree_nodes_annotations_Nova_PublicAnnotation_Accessorfunc1_Nova_alias(spectra_tree_nodes_annotations_Nova_PublicAnnotation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_alias;
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_PublicAnnotation_Mutatorfunc0_Nova_alias(spectra_tree_nodes_annotations_Nova_PublicAnnotation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value)
{
	this->spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_alias = value;
	return value;
}

void spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_super(spectra_tree_nodes_annotations_Nova_PublicAnnotation* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_alias = (nova_Nova_String*)nova_null;
}

void spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap* spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap_Nova_construct(spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_annotations_PublicAnnotation_PublicAnnotationFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_Nova_super((spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap_Nova_destroy(spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap_Nova_this(spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_annotations_Nova_PublicAnnotation* spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap_functionMapPublicAnnotationFunctionMap_Nova_construct(spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_annotations_Nova_Modifier* spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap_functionMap_static_Nova_default(spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_annotations_Nova_PublicAnnotation_static_Nova_default(0, exceptionData);
}

spectra_tree_nodes_annotations_Nova_PublicAnnotation* spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap_functionMap_static_Nova_parse(spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* type, nova_Nova_String* parameters, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_annotations_Nova_PublicAnnotation_static_Nova_parse(0, exceptionData, type, parameters, parent, location, require);
}

void spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap_Nova_super(spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap* spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap_Nova_construct(spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap, this,);
	this->vtable = &spectra_tree_nodes_annotations_PublicAnnotation_PublicAnnotationPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap_Nova_super((spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap_Nova_destroy(spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap_Nova_this(spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap_functionMap0_Nova_alias(spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_PublicAnnotation* reference)
{
	return spectra_tree_nodes_annotations_Nova_PublicAnnotation_Accessorfunc1_Nova_alias(reference, exceptionData);
}

nova_datastruct_list_Nova_ImmutableArray* spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap_functionMap_static_Nova_aliases(spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_ImmutableArray*)spectra_tree_nodes_annotations_Nova_PublicAnnotation_Accessor_static_Nova_aliases(0, exceptionData);
}

void spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap_Nova_super(spectra_tree_nodes_annotations_Nova_PublicAnnotationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

