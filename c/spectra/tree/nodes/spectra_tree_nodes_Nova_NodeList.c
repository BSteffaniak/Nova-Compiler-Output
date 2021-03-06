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
	/* Bool clone = false */ int* spectra_tree_nodes_Nova_NodeList_Nova_clone;
} Context51;
typedef struct
{
} Context52;



void spectra_tree_nodes_Nova_NodeList_Nova_lambda52(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child, int _2, nova_datastruct_list_Nova_Array* _3, Context51* context);
void spectra_tree_nodes_Nova_NodeList_Nova_lambda53(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* head, int _2, nova_datastruct_list_Nova_Array* _3, Context52* context);


void spectra_tree_nodes_Nova_NodeList_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_NodeList* spectra_tree_nodes_Nova_NodeList_Nova_construct(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_NodeList, this,);
	this->vtable = &spectra_tree_nodes_NodeList_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super((spectra_tree_nodes_Nova_Node*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeList_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_NodeList_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_NodeList_Nova_destroy(spectra_tree_nodes_Nova_NodeList** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_NodeList_Nova_children, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_NodeList_Nova_this(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	spectra_tree_nodes_Nova_Node_Nova_this((spectra_tree_nodes_Nova_Node*)(this), exceptionData, parent, location);
	this->spectra_tree_nodes_Nova_NodeList_Nova_children = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

void spectra_tree_nodes_Nova_NodeList_Nova_replace(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* old, spectra_tree_nodes_Nova_Node* replacement, int detach)
{
	int l1_Nova_index = 0;
	
	detach = (int)(detach == (intptr_t)nova_null ? 1 : detach);
	l1_Nova_index = nova_datastruct_list_Nova_Array_Nova_indexOf((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_Nova_Object*)(old), (intptr_t)nova_null);
	if (detach)
	{
		spectra_tree_nodes_Nova_Node_0_Nova_detach(old, exceptionData);
	}
	if ((replacement) != (spectra_tree_nodes_Nova_Node*)nova_null)
	{
		spectra_tree_nodes_Nova_NodeList_Nova_addChild(this, exceptionData, replacement, l1_Nova_index, detach);
	}
	spectra_tree_nodes_Nova_Node_Nova_onChildReplaced((spectra_tree_nodes_Nova_Node*)(this), exceptionData, old, replacement);
	spectra_tree_nodes_Nova_Node_Nova_onReplaced(old, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), replacement);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeList_Nova_addChild(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* node, int index, int detach)
{
	index = (int)(index == (intptr_t)nova_null ? (nova_Nova_Object*)nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData) : (nova_Nova_Object*)index);
	detach = (int)(detach == (intptr_t)nova_null ? 1 : detach);
	if (detach)
	{
		spectra_tree_nodes_Nova_Node_0_Nova_detach(node, exceptionData);
		node->spectra_tree_nodes_Nova_Node_Nova_parent = (spectra_tree_nodes_Nova_Node*)(this);
	}
	if (index >= nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData))
	{
		nova_datastruct_list_Nova_Array_1_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, index, (nova_Nova_Object*)(node));
	}
	else
	{
		nova_datastruct_list_Nova_Array_Nova_set((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, index, (nova_Nova_Object*)(node));
	}
	spectra_tree_nodes_Nova_Node_virtual_Nova_onAdded((spectra_tree_nodes_Nova_Node*)(node), exceptionData, (spectra_tree_nodes_Nova_Node*)(this));
	spectra_tree_nodes_Nova_Node_Nova_addChild((spectra_tree_nodes_Nova_Node*)(((spectra_tree_nodes_Nova_Node*)this)), exceptionData, node);
	return node;
}

char spectra_tree_nodes_Nova_NodeList_Nova_containsChild(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child, int recursive)
{
	recursive = (int)(recursive == (intptr_t)nova_null ? 0 : recursive);
	return nova_datastruct_list_Nova_List_0_Nova_contains((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_Nova_Object*)(child));
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NodeList_Nova_inheritChildren(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* oldParent, int clone)
{
	Context51* contextArg52 = NOVA_MALLOC(sizeof(Context51));
	contextArg52->spectra_tree_nodes_Nova_NodeList_Nova_clone = &clone;
	
	clone = (int)(clone == (intptr_t)nova_null ? 0 : clone);
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(oldParent->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&spectra_tree_nodes_Nova_NodeList_Nova_lambda52, this, contextArg52);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeList_0_Nova_removeChild(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* node)
{
	return spectra_tree_nodes_Nova_NodeList_1_Nova_removeChild(this, exceptionData, nova_datastruct_list_Nova_Array_Nova_indexOf((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_Nova_Object*)(node), (intptr_t)nova_null));
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeList_1_Nova_removeChild(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, int index)
{
	spectra_tree_nodes_Nova_Node* l1_Nova_node = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	if (index < 0)
	{
		return (spectra_tree_nodes_Nova_Node*)(nova_Nova_Object*)nova_null;
	}
	l1_Nova_node = (spectra_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, index));
	spectra_tree_nodes_Nova_Node_0_Nova_detach(l1_Nova_node, exceptionData);
	return l1_Nova_node;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NodeList_Nova_slaughterChildren(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context52* contextArg53 = NOVA_MALLOC(sizeof(Context52));
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&spectra_tree_nodes_Nova_NodeList_Nova_lambda53, this, contextArg53);
}

void spectra_tree_nodes_Nova_NodeList_Nova_lambda52(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child, int _2, nova_datastruct_list_Nova_Array* _3, Context51* context)
{
	spectra_tree_nodes_Nova_NodeList_Nova_addChild(this, exceptionData, (spectra_tree_nodes_Nova_Node*)((*context->spectra_tree_nodes_Nova_NodeList_Nova_clone) ? spectra_tree_nodes_Nova_Node_Nova_clone(child, exceptionData, (spectra_tree_nodes_Nova_Node*)(this), child->spectra_tree_nodes_Nova_Node_Nova_location, 1) : child), (intptr_t)nova_null, (intptr_t)nova_null);
}

void spectra_tree_nodes_Nova_NodeList_Nova_lambda53(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* head, int _2, nova_datastruct_list_Nova_Array* _3, Context52* context)
{
	spectra_tree_nodes_Nova_Node_0_Nova_detach(head, exceptionData);
}

char spectra_tree_nodes_Nova_NodeList_Accessor_Nova_isEmpty(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_NodeList_Accessor_Nova_count(this, exceptionData) == 0;
}


int spectra_tree_nodes_Nova_NodeList_Accessor_Nova_count(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData);
}


void spectra_tree_nodes_Nova_NodeList_Nova_super(spectra_tree_nodes_Nova_NodeList* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_NodeList_Nova_children = (nova_datastruct_list_Nova_Array*)nova_null;
}

void spectra_tree_nodes_Nova_NodeListFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_NodeListFunctionMap* spectra_tree_nodes_Nova_NodeListFunctionMap_Nova_construct(spectra_tree_nodes_Nova_NodeListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_NodeListFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_NodeList_NodeListFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super((spectra_tree_nodes_Nova_NodeFunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeListFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_NodeListFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_NodeListFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_NodeListFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_NodeListFunctionMap_Nova_this(spectra_tree_nodes_Nova_NodeListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_NodeList* spectra_tree_nodes_Nova_NodeListFunctionMap_functionMapNodeListFunctionMap_Nova_construct(spectra_tree_nodes_Nova_NodeListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return (spectra_tree_nodes_Nova_NodeList*)spectra_tree_nodes_Nova_NodeList_Nova_construct(0, exceptionData, parent, location);
}

void spectra_tree_nodes_Nova_NodeListFunctionMap_functionMap_Nova_replace(spectra_tree_nodes_Nova_NodeListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* reference, spectra_tree_nodes_Nova_Node* old, spectra_tree_nodes_Nova_Node* replacement, char detach)
{
	spectra_tree_nodes_Nova_NodeList_Nova_replace(reference, exceptionData, old, replacement, detach);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeListFunctionMap_functionMap_Nova_addChild(spectra_tree_nodes_Nova_NodeListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* reference, spectra_tree_nodes_Nova_Node* node, int index, char detach)
{
	return spectra_tree_nodes_Nova_NodeList_Nova_addChild(reference, exceptionData, node, index, detach);
}

char spectra_tree_nodes_Nova_NodeListFunctionMap_functionMap_Nova_containsChild(spectra_tree_nodes_Nova_NodeListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* reference, spectra_tree_nodes_Nova_Node* child, char recursive)
{
	return spectra_tree_nodes_Nova_NodeList_Nova_containsChild(reference, exceptionData, child, recursive);
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NodeListFunctionMap_functionMap_Nova_inheritChildren(spectra_tree_nodes_Nova_NodeListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* reference, spectra_tree_nodes_Nova_NodeList* oldParent, char clone)
{
	return (nova_datastruct_list_Nova_Array*)spectra_tree_nodes_Nova_NodeList_Nova_inheritChildren(reference, exceptionData, oldParent, clone);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeListFunctionMap_functionMap0_Nova_removeChild(spectra_tree_nodes_Nova_NodeListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* reference, spectra_tree_nodes_Nova_Node* node)
{
	return spectra_tree_nodes_Nova_NodeList_0_Nova_removeChild(reference, exceptionData, node);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeListFunctionMap_functionMap1_Nova_removeChild(spectra_tree_nodes_Nova_NodeListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* reference, int index)
{
	return spectra_tree_nodes_Nova_NodeList_1_Nova_removeChild(reference, exceptionData, index);
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NodeListFunctionMap_functionMap_Nova_slaughterChildren(spectra_tree_nodes_Nova_NodeListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* reference)
{
	return (nova_datastruct_list_Nova_Array*)spectra_tree_nodes_Nova_NodeList_Nova_slaughterChildren(reference, exceptionData);
}

void spectra_tree_nodes_Nova_NodeListFunctionMap_Nova_super(spectra_tree_nodes_Nova_NodeListFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_Nova_NodeListPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_NodeListPropertyMap* spectra_tree_nodes_Nova_NodeListPropertyMap_Nova_construct(spectra_tree_nodes_Nova_NodeListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_NodeListPropertyMap, this,);
	this->vtable = &spectra_tree_nodes_NodeList_NodeListPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super((spectra_tree_nodes_Nova_NodePropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeListPropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_NodeListPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_NodeListPropertyMap_Nova_destroy(spectra_tree_nodes_Nova_NodeListPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_NodeListPropertyMap_Nova_this(spectra_tree_nodes_Nova_NodeListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NodeListPropertyMap_functionMap_Nova_children(spectra_tree_nodes_Nova_NodeListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* reference)
{
	return (nova_datastruct_list_Nova_Array*)reference->spectra_tree_nodes_Nova_NodeList_Nova_children;
}

char spectra_tree_nodes_Nova_NodeListPropertyMap_functionMap_Nova_isEmpty(spectra_tree_nodes_Nova_NodeListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* reference)
{
	return spectra_tree_nodes_Nova_NodeList_Accessor_Nova_isEmpty(reference, exceptionData);
}

int spectra_tree_nodes_Nova_NodeListPropertyMap_functionMap_Nova_count(spectra_tree_nodes_Nova_NodeListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* reference)
{
	return spectra_tree_nodes_Nova_NodeList_Accessor_Nova_count(reference, exceptionData);
}

void spectra_tree_nodes_Nova_NodeListPropertyMap_Nova_super(spectra_tree_nodes_Nova_NodeListPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

