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
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_ImmutableHashMap.h>
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ImmutableArrayIterator.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/util/spectra_util_Nova_Location.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Modifier.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
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

typedef struct
{
} Context135;
typedef struct
{
} Context136;



nova_Nova_String* spectra_tree_nodes_annotations_Nova_Modifier_Nova_lambda136(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context135* context);
char spectra_tree_nodes_annotations_Nova_Modifier_static_Nova_lambda137(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* x, int _2, nova_datastruct_list_Nova_Array* _3, Context136* context);

nova_datastruct_Nova_ImmutableHashMap* spectra_tree_nodes_annotations_Nova_Modifier_Nova_MODIFIERS;
void spectra_tree_nodes_annotations_Nova_Modifier_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
	{
		nova_datastruct_Nova_HashMap* l1_Nova_modifiers = (nova_datastruct_Nova_HashMap*)nova_null;
		Context136* contextArg137 = NOVA_MALLOC(sizeof(Context136));
		nova_datastruct_list_Nova_ImmutableArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ImmutableArrayIterator*)nova_null;
		nova_Nova_Object* l2_Nova_class = (nova_Nova_Object*)nova_null;
		
		l1_Nova_modifiers = nova_datastruct_Nova_HashMap_0_Nova_construct(0, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
		nova_local_0 = (nova_datastruct_list_Nova_ImmutableArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_meta_Nova_Class_Nova_ALL), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&spectra_tree_nodes_annotations_Nova_Modifier_static_Nova_lambda137, nova_null, contextArg137))), exceptionData));
		while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
		{
			nova_meta_Nova_Class* l2_Nova_c = (nova_meta_Nova_Class*)nova_null;
			nova_datastruct_list_Nova_ImmutableArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ImmutableArrayIterator*)nova_null;
			nova_Nova_String* l3_Nova_alias = (nova_Nova_String*)nova_null;
			
			l2_Nova_class = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
			l2_Nova_c = (nova_meta_Nova_Class*)l2_Nova_class;
			nova_local_1 = (nova_datastruct_list_Nova_ImmutableArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_virtualfunctionMap_static_Nova_aliases((spectra_tree_nodes_annotations_Nova_ModifierPropertyMap*)(((spectra_tree_nodes_annotations_Nova_ModifierPropertyMap*)((spectra_tree_nodes_annotations_Nova_ModifierPropertyMap*)((spectra_tree_nodes_annotations_Nova_ModifierPropertyMap*)l2_Nova_c->nova_meta_Nova_Class_Nova_propertyMap)))), exceptionData))), exceptionData));
			while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
			{
				l3_Nova_alias = (nova_Nova_String*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
				if ((nova_meta_Nova_Class*)(nova_datastruct_Nova_HashMap_Nova_get((nova_datastruct_Nova_HashMap*)(l1_Nova_modifiers), exceptionData, (nova_operators_Nova_EqualsOperator*)(l3_Nova_alias))) != (nova_meta_Nova_Class*)(nova_meta_Nova_Class*)nova_null)
				{
					THROW(spectra_Nova_SyntaxErrorException_1_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Redefinition of alias '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l3_Nova_alias), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' in class ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l2_Nova_c)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))))), 0, 0), 0);
				}
				else
				{
					nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)(l1_Nova_modifiers), exceptionData, (nova_operators_Nova_EqualsOperator*)(l3_Nova_alias), (nova_Nova_Object*)(l2_Nova_c));
				}
			}
		}
		spectra_tree_nodes_annotations_Nova_Modifier_Nova_MODIFIERS = nova_datastruct_Nova_HashMap_Nova_toImmutable((nova_datastruct_Nova_HashMap*)(l1_Nova_modifiers), exceptionData);
	}
}

spectra_tree_nodes_annotations_Nova_Modifier* spectra_tree_nodes_annotations_Nova_Modifier_static_Nova_default(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_annotations_Nova_Modifier*)(nova_Nova_Object*)nova_null;
}

char spectra_tree_nodes_annotations_Nova_Modifier_Nova_apply(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* to, nova_Nova_String* alias)
{
	if (!nova_datastruct_list_Nova_List_0_Nova_contains((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_annotations_Nova_Modifier_virtual_Accessor_static_Nova_aliases((spectra_tree_nodes_annotations_Nova_Modifier*)(this), exceptionData)), exceptionData, (nova_Nova_Object*)(alias)))
	{
		Context135* contextArg136 = NOVA_MALLOC(sizeof(Context135));
		
		THROW(spectra_Nova_InvalidParseException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid modifier '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((alias), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' given when expected ")))))), exceptionData, nova_datastruct_list_Nova_List_Nova_toEnglish((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_ImmutableArray_0_Nova_map((nova_datastruct_list_Nova_ImmutableArray*)(spectra_tree_nodes_annotations_Nova_Modifier_virtual_Accessor_static_Nova_aliases((spectra_tree_nodes_annotations_Nova_Modifier*)(this), exceptionData)), exceptionData, (nova_datastruct_list_Nova_ImmutableArray_closure192_Nova_mapFunc)&spectra_tree_nodes_annotations_Nova_Modifier_Nova_lambda136, this, contextArg136)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("or")), (intptr_t)nova_null))), (spectra_tree_nodes_Nova_Node*)(this)), 0);
	}
	if (to != ((spectra_tree_nodes_Nova_Node*)this)->spectra_tree_nodes_Nova_Node_Nova_parent)
	{
		if (spectra_tree_nodes_annotations_Nova_Modifier_Nova_onAppliedAsModifier(this, exceptionData, to, 0))
		{
			spectra_tree_nodes_annotations_Nova_Annotatable_virtual_Nova_addAnnotation((spectra_tree_nodes_annotations_Nova_Annotatable*)(to), exceptionData, (spectra_tree_nodes_annotations_Nova_Annotation*)(this));
			spectra_tree_nodes_annotations_Nova_Modifier_virtual_Mutator_Nova_alias((spectra_tree_nodes_annotations_Nova_Modifier*)(((spectra_tree_nodes_annotations_Nova_Modifier*)this)), exceptionData, alias);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

char spectra_tree_nodes_annotations_Nova_Modifier_Nova_onAppliedAsModifier(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* toNode, int throwError)
{
	throwError = (int)(throwError == (intptr_t)nova_null ? 1 : throwError);
	return spectra_tree_nodes_annotations_Nova_Annotation_Nova_onApplied((spectra_tree_nodes_annotations_Nova_Annotation*)(this), exceptionData, toNode, throwError);
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Modifier_Nova_writeNova(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* nova_local_0 = (nova_Nova_String*)nova_null;
	
	return (nova_Nova_String*)((nova_local_0 = (nova_Nova_String*)(spectra_tree_nodes_annotations_Nova_Modifier_virtual_Accessor_Nova_alias((spectra_tree_nodes_annotations_Nova_Modifier*)(this), exceptionData))) != (nova_Nova_String*)nova_null ? nova_local_0 : spectra_tree_nodes_annotations_Nova_Annotation_Nova_writeNova(((spectra_tree_nodes_annotations_Nova_Annotation*)this), exceptionData));
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Modifier_Nova_lambda136(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context135* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((_1), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))));
}

char spectra_tree_nodes_annotations_Nova_Modifier_static_Nova_lambda137(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, nova_meta_Nova_Class* x, int _2, nova_datastruct_list_Nova_Array* _3, Context136* context)
{
	return nova_meta_Nova_Class_Nova_isOfType(x, exceptionData, (nova_meta_Nova_Class*)(spectra_tree_nodes_annotations_Modifier_Extension_VTable_val.classInstance)) && !x->nova_meta_Nova_Class_Nova_isInterface;
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Modifier_Accessor_Nova_alias(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Modifier_Mutator_Nova_alias(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value)
{
	return value;
}

nova_datastruct_list_Nova_ImmutableArray* spectra_tree_nodes_annotations_Nova_Modifier_Accessor_static_Nova_aliases(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_ImmutableArray*)nova_datastruct_list_Nova_Array_Nova_toImmutable((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 0, (intptr_t)nova_null)), exceptionData);
}


nova_Nova_String* spectra_tree_nodes_annotations_Nova_Modifier_virtual_Accessor_Nova_alias(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.spectra_tree_nodes_annotations_Nova_Modifier_virtual_Accessor_Nova_alias((spectra_tree_nodes_annotations_Nova_Modifier*)(this), exceptionData);
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_Modifier_virtual_Mutator_Nova_alias(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value)
{
	return this->vtable->itable.spectra_tree_nodes_annotations_Nova_Modifier_virtual_Mutator_Nova_alias((spectra_tree_nodes_annotations_Nova_Modifier*)(this), exceptionData, value);
}

nova_datastruct_list_Nova_ImmutableArray* spectra_tree_nodes_annotations_Nova_Modifier_virtual_Accessor_static_Nova_aliases(spectra_tree_nodes_annotations_Nova_Modifier* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.spectra_tree_nodes_annotations_Nova_Modifier_virtual_Accessor_static_Nova_aliases(0, exceptionData);
}

void spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_annotations_Nova_ModifierFunctionMap* spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_construct(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_annotations_Modifier_ModifierFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_Nova_super((spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_destroy(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_this(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_annotations_Nova_Modifier* spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_functionMap_static_Nova_default(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_annotations_Nova_Modifier_static_Nova_default(0, exceptionData);
}

char spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_functionMap_Nova_apply(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Modifier* reference, spectra_tree_nodes_Nova_Node* to, nova_Nova_String* alias)
{
	return spectra_tree_nodes_annotations_Nova_Modifier_Nova_apply(reference, exceptionData, to, alias);
}

char spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_functionMap_Nova_onAppliedAsModifier(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Modifier* reference, spectra_tree_nodes_Nova_Node* toNode, char throwError)
{
	return spectra_tree_nodes_annotations_Nova_Modifier_Nova_onAppliedAsModifier(reference, exceptionData, toNode, throwError);
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Modifier* reference)
{
	return spectra_tree_nodes_annotations_Nova_Modifier_Nova_writeNova(reference, exceptionData);
}

void spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_super(spectra_tree_nodes_annotations_Nova_ModifierFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_annotations_Nova_ModifierPropertyMap* spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_Nova_construct(spectra_tree_nodes_annotations_Nova_ModifierPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_annotations_Nova_ModifierPropertyMap, this,);
	this->vtable = &spectra_tree_nodes_annotations_Modifier_ModifierPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap_Nova_super((spectra_tree_nodes_annotations_Nova_AnnotationPropertyMap*)this, exceptionData);
	spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_Nova_destroy(spectra_tree_nodes_annotations_Nova_ModifierPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_Nova_this(spectra_tree_nodes_annotations_Nova_ModifierPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_functionMap0_Nova_alias(spectra_tree_nodes_annotations_Nova_ModifierPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Modifier* reference)
{
	return spectra_tree_nodes_annotations_Nova_Modifier_Accessor_Nova_alias(reference, exceptionData);
}

nova_datastruct_Nova_ImmutableHashMap* spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_functionMap_static_Nova_MODIFIERS(spectra_tree_nodes_annotations_Nova_ModifierPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_annotations_Nova_Modifier_Nova_MODIFIERS;
}

nova_datastruct_list_Nova_ImmutableArray* spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_functionMap_static_Nova_aliases(spectra_tree_nodes_annotations_Nova_ModifierPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_annotations_Nova_Modifier_Accessor_static_Nova_aliases(0, exceptionData);
}

void spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_Nova_super(spectra_tree_nodes_annotations_Nova_ModifierPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_virtualfunctionMap0_Nova_alias(spectra_tree_nodes_annotations_Nova_ModifierPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Modifier* reference)
{
	return this->vtable->itable.spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_virtualfunctionMap0_Nova_alias(this, exceptionData, reference);
}

nova_datastruct_list_Nova_ImmutableArray* spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_virtualfunctionMap_static_Nova_aliases(spectra_tree_nodes_annotations_Nova_ModifierPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.spectra_tree_nodes_annotations_Nova_ModifierPropertyMap_virtualfunctionMap_static_Nova_aliases(0, exceptionData);
}

