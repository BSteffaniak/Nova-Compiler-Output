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
#include <spectra/spectra_Nova_InvalidParseException.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/error/spectra_error_Nova_UnimplementedOperationException.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotatable.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/nodes/exceptionhandling/spectra_tree_nodes_exceptionhandling_Nova_Try.h>
#include <spectra/util/spectra_util_Nova_Location.h>
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
} Context46;
typedef struct
{
} Context47;
typedef struct
{
} Context48;
typedef struct
{
} Context49;
typedef struct
{
} Context50;
typedef struct
{
	/* let Int phase */ int* spectra_tree_nodes_Nova_Node_Nova_phase;
} Context125;
typedef struct
{
	/* let String name */ nova_Nova_String** spectra_tree_nodes_Nova_Node_Nova_name;
} Context126;



spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_Node_Nova_setScope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* s);
void spectra_tree_nodes_Nova_Node_1_Nova_detach(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* fromNode);
char spectra_tree_nodes_Nova_Node_Nova_lambda47(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* child, int _2, nova_datastruct_list_Nova_List* _3, Context46* context);
char spectra_tree_nodes_Nova_Node_Nova_lambda48(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context47* context);
nova_Nova_String* spectra_tree_nodes_Nova_Node_Nova_lambda49(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context48* context);
char spectra_tree_nodes_Nova_Node_Nova_lambda50(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context49* context);
nova_Nova_String* spectra_tree_nodes_Nova_Node_Nova_lambda51(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context50* context);
spectra_tree_nodes_Nova_ValidationResult* spectra_tree_nodes_Nova_Node_Nova_lambda126(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* _1, Context125* context);
char spectra_tree_nodes_Nova_Node_Nova_lambda127(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* _1, Context126* context);



























void spectra_tree_nodes_Nova_Node_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_construct(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_Node, this,);
	this->vtable = &spectra_tree_nodes_Node_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_Node_Nova_this(this, exceptionData, parent, location);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_Node_Nova_destroy(spectra_tree_nodes_Nova_Node** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	spectra_util_Nova_Location_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Node_Nova_location, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Node_Nova_annotations, exceptionData);
	spectra_tree_nodes_Nova_Node_Nova_destroy(&(*this)->spectra_tree_nodes_Nova_Node_Nova_parent, exceptionData);
	
	NOVA_FREE(*this);
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_Node_Nova_setScope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* s)
{
	return spectra_tree_nodes_Nova_Node_virtual_Mutator_Nova_scope((spectra_tree_nodes_Nova_Node*)(this), exceptionData, s);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_getAdjacentNode(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int offset)
{
	if ((this->spectra_tree_nodes_Nova_Node_Nova_parent) != (spectra_tree_nodes_Nova_Node*)nova_null)
	{
		int l2_Nova_index = 0;
		
		l2_Nova_index = spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_index((spectra_tree_nodes_Nova_Node*)(this), exceptionData) + offset;
		if (l2_Nova_index >= 0 && l2_Nova_index < nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_Node_Accessor_Nova_parentScope(this, exceptionData)->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData))
		{
			return (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Node*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_Nova_Node_Accessor_Nova_parentScope(this, exceptionData)->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, l2_Nova_index);
		}
	}
	return (spectra_tree_nodes_Nova_Node*)(nova_Nova_Object*)nova_null;
}

void spectra_tree_nodes_Nova_Node_Nova_this(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	this->spectra_tree_nodes_Nova_Node_Nova_parent = parent;
	this->spectra_tree_nodes_Nova_Node_Nova_location = location;
}

void spectra_tree_nodes_Nova_Node_Nova_addAnnotation(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* annotation)
{
	nova_datastruct_list_Nova_Array* nova_local_0 = (nova_datastruct_list_Nova_Array*)nova_null;
	
	this->spectra_tree_nodes_Nova_Node_Nova_annotations = (nova_datastruct_list_Nova_Array*)((nova_local_0 = this->spectra_tree_nodes_Nova_Node_Nova_annotations) != (nova_datastruct_list_Nova_Array*)nova_null ? nova_local_0 : nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->spectra_tree_nodes_Nova_Node_Nova_annotations), exceptionData, (nova_Nova_Object*)(annotation));
	annotation->spectra_tree_nodes_Nova_Node_Nova_parent = this;
}

void spectra_tree_nodes_Nova_Node_0_Nova_detach(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (spectra_tree_nodes_Nova_Node_Accessor_Nova_isDecoding(this, exceptionData))
	{
		return;
	}
	spectra_tree_nodes_Nova_Node_1_Nova_detach(this, exceptionData, this->spectra_tree_nodes_Nova_Node_Nova_parent);
}

void spectra_tree_nodes_Nova_Node_1_Nova_detach(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* fromNode)
{
	spectra_tree_nodes_Nova_Node* l1_Nova_p = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	l1_Nova_p = this->spectra_tree_nodes_Nova_Node_Nova_parent;
	this->spectra_tree_nodes_Nova_Node_Nova_parent = (spectra_tree_nodes_Nova_Node*)((nova_Nova_Object*)nova_null);
	spectra_tree_nodes_Nova_Node_Nova_onChildDetached(l1_Nova_p, exceptionData, this);
	spectra_tree_nodes_Nova_Node_Nova_onRemoved(this, exceptionData, fromNode);
}

void spectra_tree_nodes_Nova_Node_Nova_addChild(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child)
{
	spectra_tree_nodes_Nova_Node* nova_local_0 = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	child->spectra_tree_nodes_Nova_Node_Nova_parent = this;
	if ((nova_local_0 = child) != (spectra_tree_nodes_Nova_Node*)nova_null)
	{
		spectra_tree_nodes_Nova_Node_virtual_Nova_onAdded((spectra_tree_nodes_Nova_Node*)(nova_local_0), exceptionData, this);
	}
}

void spectra_tree_nodes_Nova_Node_Nova_onAdded(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent)
{
}

void spectra_tree_nodes_Nova_Node_Nova_onRemoved(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* from)
{
}

char spectra_tree_nodes_Nova_Node_Nova_onAfterDecoded(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 1;
}

char spectra_tree_nodes_Nova_Node_Nova_onNextStatementDecoded(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* next)
{
	return 1;
}

void spectra_tree_nodes_Nova_Node_Nova_onStackPopped(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_nodes_Nova_Node_Nova_followedByScope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, char scope)
{
}

void spectra_tree_nodes_Nova_Node_Nova_onChildReplaced(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* old, spectra_tree_nodes_Nova_Node* replacement)
{
}

void spectra_tree_nodes_Nova_Node_Nova_onReplaced(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_tree_nodes_Nova_Node* replacement)
{
}

void spectra_tree_nodes_Nova_Node_Nova_onChildDetached(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child)
{
}

spectra_tree_nodes_Nova_ValidationResult* spectra_tree_nodes_Nova_Node_Nova_validate(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int phase)
{
	Context125* contextArg126 = NOVA_MALLOC(sizeof(Context125));
	contextArg126->spectra_tree_nodes_Nova_Node_Nova_phase = &phase;
	spectra_tree_nodes_Nova_ValidationResult* nova_local_0 = (spectra_tree_nodes_Nova_ValidationResult*)nova_null;
	nova_datastruct_list_Nova_Array* nova_local_1 = (nova_datastruct_list_Nova_Array*)nova_null;
	
	return (spectra_tree_nodes_Nova_ValidationResult*)((nova_local_0 = (spectra_tree_nodes_Nova_ValidationResult*)((nova_local_1 = this->spectra_tree_nodes_Nova_Node_Nova_annotations) != (nova_datastruct_list_Nova_Array*)nova_null ? (nova_Nova_Object*)(nova_datastruct_list_Nova_List_Nova_firstNonNull((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(nova_local_1), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure320_Nova_func)&spectra_tree_nodes_Nova_Node_Nova_lambda126, this, contextArg126)) : (nova_Nova_Object*)nova_null)) != (spectra_tree_nodes_Nova_ValidationResult*)nova_null ? nova_local_0 : spectra_tree_nodes_Nova_ValidationResult_Nova_construct(0, exceptionData, this));
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors)
{
	searchAncestors = (int)(searchAncestors == (intptr_t)nova_null ? 1 : searchAncestors);
	if (spectra_tree_nodes_Nova_Node_Accessor_Nova_containsScope(this, exceptionData))
	{
		spectra_tree_nodes_Nova_Scope* l2_Nova_declaration = (spectra_tree_nodes_Nova_Scope*)nova_null;
		Context126* contextArg127 = NOVA_MALLOC(sizeof(Context126));
		contextArg127->spectra_tree_nodes_Nova_Node_Nova_name = &name;
		
		l2_Nova_declaration = (spectra_tree_nodes_Nova_Scope*)(nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((spectra_tree_nodes_Nova_Node*)(this), exceptionData)->spectra_tree_nodes_Nova_Scope_Nova_declarations), exceptionData, (nova_datastruct_list_Nova_List_closure316_Nova_func)&spectra_tree_nodes_Nova_Node_Nova_lambda127, this, contextArg127));
		if ((l2_Nova_declaration) != (spectra_tree_nodes_Nova_Scope*)nova_null)
		{
			return (spectra_tree_nodes_variables_Nova_VariableDeclaration*)l2_Nova_declaration;
		}
	}
	if (searchAncestors && (this->spectra_tree_nodes_Nova_Node_Nova_parent) != (spectra_tree_nodes_Nova_Node*)nova_null)
	{
		return spectra_tree_nodes_Nova_Node_virtual_Nova_findVariableDeclaration((spectra_tree_nodes_Nova_Node*)(this->spectra_tree_nodes_Nova_Node_Nova_parent), exceptionData, name, searchAncestors);
	}
	return (spectra_tree_nodes_variables_Nova_VariableDeclaration*)(nova_Nova_Object*)nova_null;
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_parseStatement(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	spectra_tree_nodes_Nova_Node* nova_local_0 = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)spectra_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)location);
	require = (int)(require == (intptr_t)nova_null ? 1 : require);
	return (spectra_tree_nodes_Nova_Node*)((nova_local_0 = spectra_tree_nodes_Nova_Node_Accessor_Nova_parentWithScope(this, exceptionData)) != (spectra_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_Node_virtual_Nova_parseStatement((spectra_tree_nodes_Nova_Node*)(nova_local_0), exceptionData, input, parent, location, require)) : (nova_Nova_Object*)nova_null);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	THROW(spectra_error_Nova_UnimplementedOperationException_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->vtable->classInstance)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" does not implement generateTemporaryScopeNode"))))), 0);
}

void spectra_tree_nodes_Nova_Node_static_Nova_strictParse(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node_closure361_Nova_action spectra_tree_nodes_Nova_Node_Nova_action, void* spectra_tree_nodes_Nova_Node_ref_Nova_action, void* action_context)
{
	TRY
	{
		novaEnv.nova_exception_ExceptionData.addCaught(exceptionData, exceptionData, spectra_InvalidParseException_Extension_VTable_val.classInstance, 1);
		
		{
			spectra_tree_nodes_Nova_Node_Nova_action(spectra_tree_nodes_Nova_Node_ref_Nova_action, exceptionData, action_context);
		}
	}
	CATCH (spectra_InvalidParseException_Extension_VTable_val.classInstance)
	{
		spectra_Nova_InvalidParseException* l3_Nova_e = (spectra_Nova_InvalidParseException*)nova_null;
		
		l3_Nova_e = (spectra_Nova_InvalidParseException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(l3_Nova_e));
	}
	FINALLY
	{
	}
	END_TRY;
}

void spectra_tree_nodes_Nova_Node_static_Nova_catchSyntaxErrors(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node_closure365_Nova_action spectra_tree_nodes_Nova_Node_Nova_action, void* spectra_tree_nodes_Nova_Node_ref_Nova_action, void* action_context)
{
	TRY
	{
		novaEnv.nova_exception_ExceptionData.addCaught(exceptionData, exceptionData, spectra_SyntaxErrorException_Extension_VTable_val.classInstance, 0);
		
		{
			spectra_tree_nodes_Nova_Node_Nova_action(spectra_tree_nodes_Nova_Node_ref_Nova_action, exceptionData, action_context);
		}
	}
	CATCH (spectra_SyntaxErrorException_Extension_VTable_val.classInstance)
	{
		spectra_Nova_SyntaxErrorException* l3_Nova_e = (spectra_Nova_SyntaxErrorException*)nova_null;
		
		l3_Nova_e = (spectra_Nova_SyntaxErrorException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(l3_Nova_e));
	}
	FINALLY
	{
	}
	END_TRY;
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_clone(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int cloneChildren)
{
	parent = (spectra_tree_nodes_Nova_Node*)(parent == 0 ? (nova_Nova_Object*)this->spectra_tree_nodes_Nova_Node_Nova_parent : (nova_Nova_Object*)parent);
	location = (spectra_util_Nova_Location*)(location == 0 ? (nova_Nova_Object*)this->spectra_tree_nodes_Nova_Node_Nova_location : (nova_Nova_Object*)location);
	cloneChildren = (int)(cloneChildren == (intptr_t)nova_null ? 1 : cloneChildren);
	return spectra_tree_nodes_Nova_Node_virtual_Nova_cloneTo((spectra_tree_nodes_Nova_Node*)(this), exceptionData, spectra_tree_nodes_Nova_Node_Nova_construct(0, exceptionData, parent, location));
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Nova_cloneTo(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* other)
{
	other->spectra_tree_nodes_Nova_Node_Nova_parent = this->spectra_tree_nodes_Nova_Node_Nova_parent;
	other->spectra_tree_nodes_Nova_Node_Nova_location = this->spectra_tree_nodes_Nova_Node_Nova_location;
	other->spectra_tree_nodes_Nova_Node_Nova_annotations = this->spectra_tree_nodes_Nova_Node_Nova_annotations;
	return other;
}

char spectra_tree_nodes_Nova_Node_Nova_replace(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* toReplace, spectra_tree_nodes_Nova_Node* replacement)
{
	return 0;
}

char spectra_tree_nodes_Nova_Node_Nova_validateTypes(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 1;
}

char spectra_tree_nodes_Nova_Node_Nova_parsePlaceholders(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (char)((spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((spectra_tree_nodes_Nova_Node*)(this), exceptionData)) != (spectra_tree_nodes_Nova_Scope*)nova_null ? spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders((spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((spectra_tree_nodes_Nova_Node*)(this), exceptionData)), exceptionData) : 1);
}

char spectra_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* nodes)
{
	Context46* contextArg47 = NOVA_MALLOC(sizeof(Context46));
	
	return (char)(char)((spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scopeConsumer((spectra_tree_nodes_Nova_Node*)(this), exceptionData)) != (spectra_tree_nodes_Nova_Node*)nova_null && spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scopeConsumer((spectra_tree_nodes_Nova_Node*)(this), exceptionData) != this ? spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholderChildren((spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scopeConsumer((spectra_tree_nodes_Nova_Node*)(this), exceptionData)), exceptionData, nodes) : nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(nodes->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure300_Nova_allFunc)&spectra_tree_nodes_Nova_Node_Nova_lambda47, this, contextArg47, 0));
}

nova_Nova_String* spectra_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" "));
}

nova_Nova_String* spectra_tree_nodes_Nova_Node_Nova_writeAnnotations(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context47* contextArg48 = NOVA_MALLOC(sizeof(Context47));
	Context48* contextArg49 = NOVA_MALLOC(sizeof(Context48));
	Context49* contextArg50 = NOVA_MALLOC(sizeof(Context49));
	Context50* contextArg51 = NOVA_MALLOC(sizeof(Context50));
	
	return (nova_Nova_String*)((this->spectra_tree_nodes_Nova_Node_Nova_annotations) != (nova_datastruct_list_Nova_Array*)nova_null && nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_Node_Nova_annotations), exceptionData) > 0 ? nova_Nova_String_Nova_plus(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_Node_Nova_annotations), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&spectra_tree_nodes_Nova_Node_Nova_lambda48, this, contextArg48)), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&spectra_tree_nodes_Nova_Node_Nova_lambda49, this, contextArg49)), exceptionData, 0), exceptionData, nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->spectra_tree_nodes_Nova_Node_Nova_annotations), exceptionData, (nova_datastruct_list_Nova_List_closure304_Nova_filterFunc)&spectra_tree_nodes_Nova_Node_Nova_lambda50, this, contextArg50)), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&spectra_tree_nodes_Nova_Node_Nova_lambda51, this, contextArg51)), exceptionData, 0)) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

nova_Nova_String* spectra_tree_nodes_Nova_Node_Nova_toNova(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Node_Nova_writeAnnotations(this, exceptionData), exceptionData, spectra_tree_nodes_Nova_Node_virtual_Nova_writeNova((spectra_tree_nodes_Nova_Node*)(this), exceptionData));
}

nova_Nova_String* spectra_tree_nodes_Nova_Node_Nova_writeNova(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("{{")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->vtable->classInstance)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("}}")))));
}

nova_Nova_String* spectra_tree_nodes_Nova_Node_Nova_toString(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

char spectra_tree_nodes_Nova_Node_Nova_lambda47(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_PlaceholderValue* child, int _2, nova_datastruct_list_Nova_List* _3, Context46* context)
{
	if ((spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((spectra_tree_nodes_Nova_Node*)(this), exceptionData)) != (spectra_tree_nodes_Nova_Scope*)nova_null)
	{
		spectra_tree_nodes_Nova_NodeList_Nova_addChild((spectra_tree_nodes_Nova_NodeList*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((spectra_tree_nodes_Nova_Node*)(this), exceptionData)), exceptionData, (spectra_tree_nodes_Nova_Node*)(child), (intptr_t)nova_null, (intptr_t)nova_null);
		return spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders((spectra_tree_nodes_Nova_Node*)(child), exceptionData);
	}
	return 0;
}

char spectra_tree_nodes_Nova_Node_Nova_lambda48(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context47* context)
{
	return !spectra_tree_nodes_annotations_Nova_Annotation_Accessor_Nova_isModifier(_1, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_Node_Nova_lambda49(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context48* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(_1), exceptionData), exceptionData, spectra_tree_nodes_Nova_Node_virtual_Nova_writeAnnotationSeparator((spectra_tree_nodes_Nova_Node*)(this), exceptionData));
}

char spectra_tree_nodes_Nova_Node_Nova_lambda50(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context49* context)
{
	return spectra_tree_nodes_annotations_Nova_Annotation_Accessor_Nova_isModifier(_1, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_Node_Nova_lambda51(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context50* context)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(_1), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ")));
}

spectra_tree_nodes_Nova_ValidationResult* spectra_tree_nodes_Nova_Node_Nova_lambda126(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_annotations_Nova_Annotation* _1, Context125* context)
{
	spectra_tree_nodes_Nova_ValidationResult* l1_Nova_result = (spectra_tree_nodes_Nova_ValidationResult*)nova_null;
	
	l1_Nova_result = spectra_tree_nodes_Nova_Node_Nova_validate((spectra_tree_nodes_Nova_Node*)(_1), exceptionData, (*context->spectra_tree_nodes_Nova_Node_Nova_phase));
	return (spectra_tree_nodes_Nova_ValidationResult*)(spectra_tree_nodes_Nova_ValidationResult_Accessor_Nova_skipValidation(l1_Nova_result, exceptionData) ? (nova_Nova_Object*)l1_Nova_result : (nova_Nova_Object*)nova_null);
}

char spectra_tree_nodes_Nova_Node_Nova_lambda127(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_variables_Nova_VariableDeclaration* _1, Context126* context)
{
	return nova_Nova_String_Nova_equals(_1->spectra_tree_nodes_Nova_Identifier_Nova_name, exceptionData, (*context->spectra_tree_nodes_Nova_Node_Nova_name));
}

nova_Nova_String* spectra_tree_nodes_Nova_Node_Accessor_Nova_locationInfo(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_info = (nova_Nova_String*)nova_null;
	
	l1_Nova_info = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	if ((spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(this), exceptionData)) != (spectra_tree_nodes_Nova_NovaFile*)nova_null)
	{
		l1_Nova_info = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_info), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((spectra_tree_nodes_Nova_NovaFile_Accessor_Nova_fileLocation(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(this), exceptionData), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))));
	}
	if ((this->spectra_tree_nodes_Nova_Node_Nova_location) != (spectra_util_Nova_Location*)nova_null)
	{
		l1_Nova_info = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_info), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)(l1_Nova_info->nova_Nova_String_Nova_count > 0 ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(":")) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("at location ")))), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (this->spectra_tree_nodes_Nova_Node_Nova_location->spectra_util_Nova_Location_Nova_lineNumber)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(":")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (this->spectra_tree_nodes_Nova_Node_Nova_location->spectra_util_Nova_Location_Nova_offset)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))))))))));
	}
	return l1_Nova_info;
}


nova_Nova_String* spectra_tree_nodes_Nova_Node_Accessor_Nova_nodeType(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_name = (nova_Nova_String*)nova_null;
	
	l1_Nova_name = nova_meta_Nova_Class_Accessor_Nova_name((nova_meta_Nova_Class*)(this->vtable->classInstance), exceptionData);
	return l1_Nova_name;
}


spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentWithScope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if ((this->spectra_tree_nodes_Nova_Node_Nova_parent) == (spectra_tree_nodes_Nova_Node*)nova_null)
	{
		return (spectra_tree_nodes_Nova_Node*)(nova_Nova_Object*)nova_null;
	}
	return (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Node_Accessor_Nova_containsScope(this->spectra_tree_nodes_Nova_Node_Nova_parent, exceptionData) ? this->spectra_tree_nodes_Nova_Node_Nova_parent : spectra_tree_nodes_Nova_Node_Accessor_Nova_parentWithScope(this->spectra_tree_nodes_Nova_Node_Nova_parent, exceptionData));
}


spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_Node_Accessor_Nova_scope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Node* l1_Nova_consumer = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	l1_Nova_consumer = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scopeConsumer((spectra_tree_nodes_Nova_Node*)(this), exceptionData));
	return (spectra_tree_nodes_Nova_Scope*)((l1_Nova_consumer) != (spectra_tree_nodes_Nova_Node*)nova_null && l1_Nova_consumer != this ? (nova_Nova_Object*)spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((spectra_tree_nodes_Nova_Node*)(l1_Nova_consumer), exceptionData) : (nova_Nova_Object*)nova_null);
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_Node_Mutator_Nova_scope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* value)
{
	spectra_tree_nodes_Nova_Node* l1_Nova_consumer = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	l1_Nova_consumer = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scopeConsumer((spectra_tree_nodes_Nova_Node*)(this), exceptionData));
	if ((l1_Nova_consumer) != (spectra_tree_nodes_Nova_Node*)nova_null && l1_Nova_consumer != this)
	{
		spectra_tree_nodes_Nova_Node_Nova_setScope(l1_Nova_consumer, exceptionData, value);
	}
	return value;
}

int spectra_tree_nodes_Nova_Node_Accessor_Nova_index(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array_Nova_indexOf((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_Nova_Node_Accessor_Nova_parentScope(this, exceptionData)->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, (nova_Nova_Object*)(this), (intptr_t)nova_null);
}

int spectra_tree_nodes_Nova_Node_Mutator_Nova_index(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	nova_datastruct_list_Nova_Array_Nova_swap((nova_datastruct_list_Nova_Array*)(spectra_tree_nodes_Nova_Node_Accessor_Nova_parentScope(this, exceptionData)->spectra_tree_nodes_Nova_NodeList_Nova_children), exceptionData, spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_index((spectra_tree_nodes_Nova_Node*)(this), exceptionData), value);
	return value;
}

char spectra_tree_nodes_Nova_Node_Accessor_Nova_isDecoding(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}


char spectra_tree_nodes_Nova_Node_Accessor_Nova_isValid(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->spectra_tree_nodes_Nova_Node_Nova_parent != (spectra_tree_nodes_Nova_Node*)nova_null;
}


char spectra_tree_nodes_Nova_Node_Accessor_Nova_isUserMade(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 1;
}


char spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinStaticContext(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction((spectra_tree_nodes_Nova_Node*)(this), exceptionData)) == (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null || !spectra_tree_nodes_variables_Nova_InstanceDeclaration_Accessor_Nova_isInstance((spectra_tree_nodes_variables_Nova_InstanceDeclaration*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction((spectra_tree_nodes_Nova_Node*)(this), exceptionData)), exceptionData);
}


char spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinExternalContext(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Node* nova_local_0 = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	return (char)((nova_local_0 = this->spectra_tree_nodes_Nova_Node_Nova_parent) != (spectra_tree_nodes_Nova_Node*)nova_null ? (spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinExternalContext(nova_local_0, exceptionData)) : 0);
}


spectra_tree_nodes_Nova_Program* spectra_tree_nodes_Nova_Node_Accessor_Nova_program(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Node* nova_local_0 = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	return (spectra_tree_nodes_Nova_Program*)((nova_local_0 = this->spectra_tree_nodes_Nova_Node_Nova_parent) != (spectra_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_program((spectra_tree_nodes_Nova_Node*)(nova_local_0), exceptionData)) : (nova_Nova_Object*)nova_null);
}


char spectra_tree_nodes_Nova_Node_Accessor_Nova_phase(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_program((spectra_tree_nodes_Nova_Node*)(this), exceptionData)->spectra_tree_nodes_Nova_Program_Nova_tree->spectra_tree_Nova_SyntaxTree_Nova_phase;
}


spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Node* nova_local_0 = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	return (spectra_tree_nodes_functions_Nova_Instantiation*)((nova_local_0 = this->spectra_tree_nodes_Nova_Node_Nova_parent) != (spectra_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentInstantiation((spectra_tree_nodes_Nova_Node*)(nova_local_0), exceptionData)) : (nova_Nova_Object*)nova_null);
}


spectra_tree_nodes_functions_closures_Nova_LambdaExpression* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentLambda(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Node* nova_local_0 = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	return (spectra_tree_nodes_functions_closures_Nova_LambdaExpression*)((nova_local_0 = this->spectra_tree_nodes_Nova_Node_Nova_parent) != (spectra_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentLambda((spectra_tree_nodes_Nova_Node*)(nova_local_0), exceptionData)) : (nova_Nova_Object*)nova_null);
}


spectra_tree_nodes_Nova_NovaFile* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFile(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Node* nova_local_0 = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	return (spectra_tree_nodes_Nova_NovaFile*)((nova_local_0 = this->spectra_tree_nodes_Nova_Node_Nova_parent) != (spectra_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(nova_local_0), exceptionData)) : (nova_Nova_Object*)nova_null);
}


char spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinFile(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(this), exceptionData) != (spectra_tree_nodes_Nova_NovaFile*)nova_null;
}


spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunctionCall(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Node* nova_local_0 = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	return (spectra_tree_nodes_functions_Nova_FunctionCall*)((nova_local_0 = this->spectra_tree_nodes_Nova_Node_Nova_parent) != (spectra_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall((spectra_tree_nodes_Nova_Node*)(nova_local_0), exceptionData)) : (nova_Nova_Object*)nova_null);
}


spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunction(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Node* nova_local_0 = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	return (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)((nova_local_0 = this->spectra_tree_nodes_Nova_Node_Nova_parent) != (spectra_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction((spectra_tree_nodes_Nova_Node*)(nova_local_0), exceptionData)) : (nova_Nova_Object*)nova_null);
}


char spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinFunction(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction((spectra_tree_nodes_Nova_Node*)(this), exceptionData) != (spectra_tree_nodes_functions_Nova_FunctionDeclaration*)nova_null;
}


spectra_tree_nodes_exceptionhandling_Nova_Try* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentTry(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Node* nova_local_0 = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	return (spectra_tree_nodes_exceptionhandling_Nova_Try*)((nova_local_0 = this->spectra_tree_nodes_Nova_Node_Nova_parent) != (spectra_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry((spectra_tree_nodes_Nova_Node*)(nova_local_0), exceptionData)) : (nova_Nova_Object*)nova_null);
}


char spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinTry(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry((spectra_tree_nodes_Nova_Node*)(this), exceptionData) != (spectra_tree_nodes_exceptionhandling_Nova_Try*)nova_null;
}


spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentClass(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	spectra_tree_nodes_Nova_Node* nova_local_0 = (spectra_tree_nodes_Nova_Node*)nova_null;
	
	return (spectra_tree_nodes_Nova_ClassDeclaration*)((nova_local_0 = this->spectra_tree_nodes_Nova_Node_Nova_parent) != (spectra_tree_nodes_Nova_Node*)nova_null ? (nova_Nova_Object*)(spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(nova_local_0), exceptionData)) : (nova_Nova_Object*)nova_null);
}


char spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinClass(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(this), exceptionData) != (spectra_tree_nodes_Nova_ClassDeclaration*)nova_null;
}


spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_Node_Accessor_Nova_parentScope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Node_Accessor_Nova_parentWithScope(this, exceptionData)), exceptionData);
}


char spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinScope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_parentScope(this, exceptionData) != (spectra_tree_nodes_Nova_Scope*)nova_null;
}


spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}


char spectra_tree_nodes_Nova_Node_Accessor_Nova_containsScope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((spectra_tree_nodes_Nova_Node*)(this), exceptionData) != (spectra_tree_nodes_Nova_Scope*)nova_null;
}


spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Accessor_Nova_next(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Node_Nova_getAdjacentNode(this, exceptionData, 1);
}


spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_Accessor_Nova_previous(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return spectra_tree_nodes_Nova_Node_Nova_getAdjacentNode(this, exceptionData, -1);
}


void spectra_tree_nodes_Nova_Node_Nova_super(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_nodes_Nova_Node_Nova_location = (spectra_util_Nova_Location*)nova_null;
	this->spectra_tree_nodes_Nova_Node_Nova_annotations = (nova_datastruct_list_Nova_Array*)nova_null;
	this->spectra_tree_nodes_Nova_Node_Nova_parent = (spectra_tree_nodes_Nova_Node*)nova_null;
}

void spectra_tree_nodes_Nova_Node_virtual_Nova_addChild(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* child)
{
	this->vtable->spectra_tree_nodes_Nova_Node_virtual_Nova_addChild((spectra_tree_nodes_Nova_Node*)(this), exceptionData, child);
}

void spectra_tree_nodes_Nova_Node_virtual_Nova_onAdded(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent)
{
	this->vtable->spectra_tree_nodes_Nova_Node_virtual_Nova_onAdded((spectra_tree_nodes_Nova_Node*)(this), exceptionData, parent);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_Nova_Node_virtual_Nova_findVariableDeclaration(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* name, int searchAncestors)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Nova_findVariableDeclaration((spectra_tree_nodes_Nova_Node*)(this), exceptionData, name, searchAncestors);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_virtual_Nova_parseStatement(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, int require)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Nova_parseStatement((spectra_tree_nodes_Nova_Node*)(this), exceptionData, input, parent, location, require);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_virtual_Nova_generateTemporaryScopeNode(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Nova_generateTemporaryScopeNode((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_virtual_Nova_cloneTo(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* other)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Nova_cloneTo((spectra_tree_nodes_Nova_Node*)(this), exceptionData, other);
}

char spectra_tree_nodes_Nova_Node_virtual_Nova_replace(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* toReplace, spectra_tree_nodes_Nova_Node* replacement)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Nova_replace((spectra_tree_nodes_Nova_Node*)(this), exceptionData, toReplace, replacement);
}

char spectra_tree_nodes_Nova_Node_virtual_Nova_validateTypes(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Nova_validateTypes((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

char spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

char spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholderChildren(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeList* nodes)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholderChildren((spectra_tree_nodes_Nova_Node*)(this), exceptionData, nodes);
}

nova_Nova_String* spectra_tree_nodes_Nova_Node_virtual_Nova_writeAnnotationSeparator(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Nova_writeAnnotationSeparator((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_Node_virtual_Nova_toNova(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Nova_toNova((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_Node_virtual_Nova_writeNova(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Nova_writeNova((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scope((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_Node_virtual_Mutator_Nova_scope(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Scope* value)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Mutator_Nova_scope((spectra_tree_nodes_Nova_Node*)(this), exceptionData, value);
}

int spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_index(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_index((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

spectra_tree_nodes_Nova_Program* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_program(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_program((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentInstantiation(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentInstantiation((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

spectra_tree_nodes_functions_closures_Nova_LambdaExpression* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentLambda(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentLambda((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

spectra_tree_nodes_Nova_NovaFile* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFile((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunctionCall((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentFunction((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

spectra_tree_nodes_exceptionhandling_Nova_Try* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentTry((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_parentClass((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scopeConsumer(spectra_tree_nodes_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->spectra_tree_nodes_Nova_Node_virtual_Accessor_Nova_scopeConsumer((spectra_tree_nodes_Nova_Node*)(this), exceptionData);
}


spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_setScope(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Scope* s);
void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap1_Nova_detach(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* fromNode);
void spectra_tree_nodes_Nova_NodeFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_NodeFunctionMap* spectra_tree_nodes_Nova_NodeFunctionMap_Nova_construct(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_NodeFunctionMap, this,);
	this->vtable = &spectra_tree_nodes_Node_NodeFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_NodeFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_NodeFunctionMap_Nova_destroy(spectra_tree_nodes_Nova_NodeFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_Nova_this(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_functionMapNodeFunctionMap_Nova_construct(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return spectra_tree_nodes_Nova_Node_Nova_construct(0, exceptionData, parent, location);
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_setScope(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Scope* s)
{
	return spectra_tree_nodes_Nova_Node_Nova_setScope(reference, exceptionData, s);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_getAdjacentNode(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, int offset)
{
	return spectra_tree_nodes_Nova_Node_Nova_getAdjacentNode(reference, exceptionData, offset);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_addAnnotation(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_annotations_Nova_Annotation* annotation)
{
	spectra_tree_nodes_Nova_Node_Nova_addAnnotation(reference, exceptionData, annotation);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap0_Nova_detach(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	spectra_tree_nodes_Nova_Node_0_Nova_detach(reference, exceptionData);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap1_Nova_detach(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* fromNode)
{
	spectra_tree_nodes_Nova_Node_1_Nova_detach(reference, exceptionData, fromNode);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_addChild(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* child)
{
	spectra_tree_nodes_Nova_Node_Nova_addChild(reference, exceptionData, child);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onAdded(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* parent)
{
	spectra_tree_nodes_Nova_Node_Nova_onAdded(reference, exceptionData, parent);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onRemoved(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* from)
{
	spectra_tree_nodes_Nova_Node_Nova_onRemoved(reference, exceptionData, from);
}

char spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onAfterDecoded(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Nova_onAfterDecoded(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onNextStatementDecoded(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* next)
{
	return spectra_tree_nodes_Nova_Node_Nova_onNextStatementDecoded(reference, exceptionData, next);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onStackPopped(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	spectra_tree_nodes_Nova_Node_Nova_onStackPopped(reference, exceptionData);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_followedByScope(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, char scope)
{
	spectra_tree_nodes_Nova_Node_Nova_followedByScope(reference, exceptionData, scope);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onChildReplaced(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* old, spectra_tree_nodes_Nova_Node* replacement)
{
	spectra_tree_nodes_Nova_Node_Nova_onChildReplaced(reference, exceptionData, old, replacement);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onReplaced(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* parent, spectra_tree_nodes_Nova_Node* replacement)
{
	spectra_tree_nodes_Nova_Node_Nova_onReplaced(reference, exceptionData, parent, replacement);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_onChildDetached(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* child)
{
	spectra_tree_nodes_Nova_Node_Nova_onChildDetached(reference, exceptionData, child);
}

spectra_tree_nodes_Nova_ValidationResult* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_validate(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, int phase)
{
	return spectra_tree_nodes_Nova_Node_Nova_validate(reference, exceptionData, phase);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_findVariableDeclaration(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, nova_Nova_String* name, char searchAncestors)
{
	return spectra_tree_nodes_Nova_Node_Nova_findVariableDeclaration(reference, exceptionData, name, searchAncestors);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_parseStatement(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return spectra_tree_nodes_Nova_Node_Nova_parseStatement(reference, exceptionData, input, parent, location, require);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_generateTemporaryScopeNode(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Nova_generateTemporaryScopeNode(reference, exceptionData);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_static_Nova_strictParse(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeFunctionMap_closure481_Nova_action spectra_tree_nodes_Nova_NodeFunctionMap_Nova_action, void* spectra_tree_nodes_Nova_NodeFunctionMap_ref_Nova_action, void* action_context)
{
	spectra_tree_nodes_Nova_Node_static_Nova_strictParse(0, exceptionData, (spectra_tree_nodes_Nova_Node_closure361_Nova_action)spectra_tree_nodes_Nova_NodeFunctionMap_Nova_action, spectra_tree_nodes_Nova_NodeFunctionMap_ref_Nova_action, action_context);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_static_Nova_catchSyntaxErrors(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NodeFunctionMap_closure482_Nova_action spectra_tree_nodes_Nova_NodeFunctionMap_Nova_action, void* spectra_tree_nodes_Nova_NodeFunctionMap_ref_Nova_action, void* action_context)
{
	spectra_tree_nodes_Nova_Node_static_Nova_catchSyntaxErrors(0, exceptionData, (spectra_tree_nodes_Nova_Node_closure365_Nova_action)spectra_tree_nodes_Nova_NodeFunctionMap_Nova_action, spectra_tree_nodes_Nova_NodeFunctionMap_ref_Nova_action, action_context);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_clone(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char cloneChildren)
{
	return spectra_tree_nodes_Nova_Node_Nova_clone(reference, exceptionData, parent, location, cloneChildren);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_cloneTo(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* other)
{
	return spectra_tree_nodes_Nova_Node_Nova_cloneTo(reference, exceptionData, other);
}

char spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_replace(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* toReplace, spectra_tree_nodes_Nova_Node* replacement)
{
	return spectra_tree_nodes_Nova_Node_Nova_replace(reference, exceptionData, toReplace, replacement);
}

char spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_validateTypes(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Nova_validateTypes(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_parsePlaceholders(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Nova_parsePlaceholders(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_parsePlaceholderChildren(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_NodeList* nodes)
{
	return spectra_tree_nodes_Nova_Node_Nova_parsePlaceholderChildren(reference, exceptionData, nodes);
}

nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_writeAnnotationSeparator(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Nova_writeAnnotationSeparator(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_writeAnnotations(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Nova_writeAnnotations(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_toNova(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Nova_toNova(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_writeNova(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Nova_writeNova(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_functionMap_Nova_toString(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Nova_toString(reference, exceptionData);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_Nova_super(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMapNode_Nova_construct(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location)
{
	return this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMapNode_Nova_construct(this, exceptionData, parent, location);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_addChild(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* child)
{
	this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_addChild(this, exceptionData, reference, child);
}

void spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_onAdded(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* parent)
{
	this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_onAdded(this, exceptionData, reference, parent);
}

spectra_tree_nodes_variables_Nova_VariableDeclaration* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_findVariableDeclaration(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, nova_Nova_String* name, char searchAncestors)
{
	return this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_findVariableDeclaration(this, exceptionData, reference, name, searchAncestors);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_parseStatement(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, nova_Nova_String* input, spectra_tree_nodes_Nova_Node* parent, spectra_util_Nova_Location* location, char require)
{
	return this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_parseStatement(this, exceptionData, reference, input, parent, location, require);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_generateTemporaryScopeNode(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_generateTemporaryScopeNode(this, exceptionData, reference);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_cloneTo(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* other)
{
	return this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_cloneTo(this, exceptionData, reference, other);
}

char spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_replace(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_Node* toReplace, spectra_tree_nodes_Nova_Node* replacement)
{
	return this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_replace(this, exceptionData, reference, toReplace, replacement);
}

char spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_validateTypes(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_validateTypes(this, exceptionData, reference);
}

char spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_parsePlaceholders(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_parsePlaceholders(this, exceptionData, reference);
}

char spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_parsePlaceholderChildren(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference, spectra_tree_nodes_Nova_NodeList* nodes)
{
	return this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_parsePlaceholderChildren(this, exceptionData, reference, nodes);
}

nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_writeAnnotationSeparator(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_writeAnnotationSeparator(this, exceptionData, reference);
}

nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_toNova(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_toNova(this, exceptionData, reference);
}

nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_writeNova(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_writeNova(this, exceptionData, reference);
}

nova_Nova_String* spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_toString(spectra_tree_nodes_Nova_NodeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodeFunctionMap_virtualfunctionMap_Nova_toString(this, exceptionData, reference);
}

void spectra_tree_nodes_Nova_NodePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_nodes_Nova_NodePropertyMap* spectra_tree_nodes_Nova_NodePropertyMap_Nova_construct(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_nodes_Nova_NodePropertyMap, this,);
	this->vtable = &spectra_tree_nodes_Node_NodePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_nodes_Nova_NodePropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_nodes_Nova_NodePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_nodes_Nova_NodePropertyMap_Nova_destroy(spectra_tree_nodes_Nova_NodePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_nodes_Nova_NodePropertyMap_Nova_this(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_util_Nova_Location* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_location(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return reference->spectra_tree_nodes_Nova_Node_Nova_location;
}

nova_datastruct_list_Nova_Array* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_annotations(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return reference->spectra_tree_nodes_Nova_Node_Nova_annotations;
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_parent(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return reference->spectra_tree_nodes_Nova_Node_Nova_parent;
}

nova_Nova_String* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_locationInfo(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_locationInfo(reference, exceptionData);
}

nova_Nova_String* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_nodeType(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_nodeType(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_isDecoding(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_isDecoding(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_isValid(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_isValid(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_isUserMade(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_isUserMade(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_isWithinStaticContext(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinStaticContext(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_isWithinExternalContext(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinExternalContext(reference, exceptionData);
}

spectra_tree_nodes_Nova_Program* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_program(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_program(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_phase(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_phase(reference, exceptionData);
}

spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_parentInstantiation(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_parentInstantiation(reference, exceptionData);
}

spectra_tree_nodes_functions_closures_Nova_LambdaExpression* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_parentLambda(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_parentLambda(reference, exceptionData);
}

spectra_tree_nodes_Nova_NovaFile* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_parentFile(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFile(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_isWithinFile(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinFile(reference, exceptionData);
}

spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_parentFunctionCall(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunctionCall(reference, exceptionData);
}

spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_parentFunction(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_parentFunction(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_isWithinFunction(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinFunction(reference, exceptionData);
}

spectra_tree_nodes_exceptionhandling_Nova_Try* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_parentTry(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_parentTry(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_isWithinTry(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinTry(reference, exceptionData);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_parentClass(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_parentClass(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_isWithinClass(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinClass(reference, exceptionData);
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_parentScope(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_parentScope(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_isWithinScope(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_isWithinScope(reference, exceptionData);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_parentWithScope(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_parentWithScope(reference, exceptionData);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_scopeConsumer(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_scopeConsumer(reference, exceptionData);
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_scope(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_scope(reference, exceptionData);
}

char spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_containsScope(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_containsScope(reference, exceptionData);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_next(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_next(reference, exceptionData);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_previous(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_previous(reference, exceptionData);
}

int spectra_tree_nodes_Nova_NodePropertyMap_functionMap_Nova_index(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return spectra_tree_nodes_Nova_Node_Accessor_Nova_index(reference, exceptionData);
}

void spectra_tree_nodes_Nova_NodePropertyMap_Nova_super(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_Program* spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_program(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_program(this, exceptionData, reference);
}

spectra_tree_nodes_functions_Nova_Instantiation* spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_parentInstantiation(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_parentInstantiation(this, exceptionData, reference);
}

spectra_tree_nodes_functions_closures_Nova_LambdaExpression* spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_parentLambda(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_parentLambda(this, exceptionData, reference);
}

spectra_tree_nodes_Nova_NovaFile* spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_parentFile(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_parentFile(this, exceptionData, reference);
}

spectra_tree_nodes_functions_Nova_FunctionCall* spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_parentFunctionCall(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_parentFunctionCall(this, exceptionData, reference);
}

spectra_tree_nodes_functions_Nova_FunctionDeclaration* spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_parentFunction(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_parentFunction(this, exceptionData, reference);
}

spectra_tree_nodes_exceptionhandling_Nova_Try* spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_parentTry(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_parentTry(this, exceptionData, reference);
}

spectra_tree_nodes_Nova_ClassDeclaration* spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_parentClass(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_parentClass(this, exceptionData, reference);
}

spectra_tree_nodes_Nova_Node* spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_scopeConsumer(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_scopeConsumer(this, exceptionData, reference);
}

spectra_tree_nodes_Nova_Scope* spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_scope(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_scope(this, exceptionData, reference);
}

int spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_index(spectra_tree_nodes_Nova_NodePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* reference)
{
	return this->vtable->spectra_tree_nodes_Nova_NodePropertyMap_virtualfunctionMap_Nova_index(this, exceptionData, reference);
}

