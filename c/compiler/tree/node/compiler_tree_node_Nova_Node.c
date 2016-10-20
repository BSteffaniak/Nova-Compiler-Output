#include <precompiled.h>
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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_DoubleArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntRange.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/async/nova_thread_async_Nova_Async.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <compiler/error/compiler_error_Nova_UnimplementedOperationException.h>
#include <compiler/tree/node/annotation/compiler_tree_node_annotation_Nova_Annotatable.h>
#include <compiler/tree/node/annotation/compiler_tree_node_annotation_Nova_Annotation.h>
#include <compiler/tree/node/exceptionhandling/compiler_tree_node_exceptionhandling_Nova_Try.h>
#include <compiler/util/compiler_util_Nova_Location.h>
#include <compiler/tree/node/functions/compiler_tree_node_functions_Nova_NovaFunction.h>
#include <compiler/tree/node/compiler_tree_node_Nova_NovaClass.h>
#include <compiler/tree/node/compiler_tree_node_Nova_NovaFile.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Program.h>
#include <compiler/tree/node/compiler_tree_node_Nova_Scope.h>
#include <compiler/tree/node/compiler_tree_node_Nova_ValidationResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* Node child */ compiler_tree_node_Nova_Node** compiler_tree_node_Nova_Node_Nova_child;
} Context1;
typedef struct
{
	/* Bool clone = false */ int* compiler_tree_node_Nova_Node_Nova_clone;
} Context2;
typedef struct
{
} Context3;
typedef struct
{
} Context4;
typedef struct
{
} Context5;
typedef struct
{
	/* Node next */ compiler_tree_node_Nova_Node** compiler_tree_node_Nova_Node_Nova_next;
} Context6;
typedef struct
{
} Context7;
typedef struct
{
	/* Int phase */ int* compiler_tree_node_Nova_Node_Nova_phase;
} Context8;


compiler_tree_node_Node_Extension_VTable compiler_tree_node_Node_Extension_VTable_val =
{
	{
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		(void(*)(compiler_tree_node_annotation_Nova_Annotatable*, nova_exception_Nova_ExceptionData*, compiler_tree_node_annotation_Nova_Annotation*))compiler_tree_node_Nova_Node_Nova_addAnnotation,
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	compiler_tree_node_Nova_Node_Nova_addAnnotation,
	compiler_tree_node_Nova_Node_Nova_clone,
	compiler_tree_node_Nova_Node_Accessor_Nova_program,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentFile,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentFunction,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentTry,
	compiler_tree_node_Nova_Node_Accessor_Nova_parentClass,
};



void compiler_tree_node_Nova_Node_1_Nova_detach(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_fromNode);
char compiler_tree_node_Nova_Node_Nova_testLambda12(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova__1, Context1* context);
void compiler_tree_node_Nova_Node_Nova_testLambda13(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_child, int compiler_tree_node_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* compiler_tree_node_Nova_Node_Nova__3, Context2* context);
void compiler_tree_node_Nova_Node_Nova_testLambda14(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_head, int compiler_tree_node_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* compiler_tree_node_Nova_Node_Nova__3, Context3* context);
char compiler_tree_node_Nova_Node_Nova_testLambda15(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova__1, Context4* context);
void compiler_tree_node_Nova_Node_Nova_testLambda16(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova__1, int compiler_tree_node_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* compiler_tree_node_Nova_Node_Nova__3, Context5* context);
char compiler_tree_node_Nova_Node_Nova_testLambda17(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova__1, Context6* context);
void compiler_tree_node_Nova_Node_Nova_testLambda18(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova__1, int compiler_tree_node_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* compiler_tree_node_Nova_Node_Nova__3, Context7* context);
compiler_tree_node_Nova_ValidationResult* compiler_tree_node_Nova_Node_Nova_testLambda41(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_annotation_Nova_Annotation* compiler_tree_node_Nova_Node_Nova__1, Context8* context);



















void compiler_tree_node_Nova_Node_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_construct(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_parent, compiler_util_Nova_Location* compiler_tree_node_Nova_Node_Nova_location)
{
	CCLASS_NEW(compiler_tree_node_Nova_Node, this,);
	this->vtable = &compiler_tree_node_Node_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_node_Nova_Node_Nova_super(this, exceptionData);
	
	{
		compiler_tree_node_Nova_Node_Nova_this(this, exceptionData, compiler_tree_node_Nova_Node_Nova_parent, compiler_tree_node_Nova_Node_Nova_location);
	}
	
	return this;
}

void compiler_tree_node_Nova_Node_Nova_destroy(compiler_tree_node_Nova_Node** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	compiler_util_Nova_Location_Nova_destroy(&(*this)->compiler_tree_node_Nova_Node_Nova_location, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_node_Nova_Node_Nova_children, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->compiler_tree_node_Nova_Node_Nova_annotations, exceptionData);
	compiler_tree_node_Nova_Node_Nova_destroy(&(*this)->compiler_tree_node_Nova_Node_Nova_parent, exceptionData);
	
	compiler_tree_node_Nova_Program_Nova_destroy(&(*this)->compiler_tree_node_Nova_Node_Nova_program, exceptionData);
	compiler_tree_node_Nova_NovaFile_Nova_destroy(&(*this)->compiler_tree_node_Nova_Node_Nova_parentFile, exceptionData);
	compiler_tree_node_functions_Nova_NovaFunction_Nova_destroy(&(*this)->compiler_tree_node_Nova_Node_Nova_parentFunction, exceptionData);
	compiler_tree_node_exceptionhandling_Nova_Try_Nova_destroy(&(*this)->compiler_tree_node_Nova_Node_Nova_parentTry, exceptionData);
	compiler_tree_node_Nova_NovaClass_Nova_destroy(&(*this)->compiler_tree_node_Nova_Node_Nova_parentClass, exceptionData);
	
	NOVA_FREE(*this);
}

compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_getAdjacentNode(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int compiler_tree_node_Nova_Node_Nova_offset)
{
	if (this->compiler_tree_node_Nova_Node_Nova_parent != (compiler_tree_node_Nova_Node*)nova_null)
	{
		int l1_Nova_index = 0;
		
		l1_Nova_index = compiler_tree_node_Nova_Node_Accessor_Nova_index(this, exceptionData) + compiler_tree_node_Nova_Node_Nova_offset;
		if (l1_Nova_index >= 0 && l1_Nova_index < this->compiler_tree_node_Nova_Node_Nova_parent->compiler_tree_node_Nova_Node_Nova_children->nova_datastruct_list_Nova_Array_Nova_count)
		{
			return (compiler_tree_node_Nova_Node*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->compiler_tree_node_Nova_Node_Nova_parent->compiler_tree_node_Nova_Node_Nova_children), exceptionData, l1_Nova_index);
		}
	}
	return (compiler_tree_node_Nova_Node*)(nova_Nova_Object*)nova_null;
}

void compiler_tree_node_Nova_Node_Nova_this(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_parent, compiler_util_Nova_Location* compiler_tree_node_Nova_Node_Nova_location)
{
	this->compiler_tree_node_Nova_Node_Nova_children = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, 4);
	compiler_tree_node_Nova_Node_Mutator_Nova_parent(this, exceptionData, compiler_tree_node_Nova_Node_Nova_parent);
	this->compiler_tree_node_Nova_Node_Nova_location = compiler_tree_node_Nova_Node_Nova_location;
}

void compiler_tree_node_Nova_Node_Nova_addAnnotation(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_annotation_Nova_Annotation* compiler_tree_node_Nova_Node_Nova_annotation)
{
	nova_datastruct_list_Nova_Array* l1_Nova_nova_local_0 = (nova_datastruct_list_Nova_Array*)nova_null;
	
	this->compiler_tree_node_Nova_Node_Nova_annotations = (nova_datastruct_list_Nova_Array*)((l1_Nova_nova_local_0 = this->compiler_tree_node_Nova_Node_Nova_annotations) != (nova_datastruct_list_Nova_Array*)nova_null ? l1_Nova_nova_local_0 : nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->compiler_tree_node_Nova_Node_Nova_annotations), exceptionData, (nova_Nova_Object*)(compiler_tree_node_Nova_Node_Nova_annotation));
	compiler_tree_node_Nova_Node_Mutator_Nova_parent((compiler_tree_node_Nova_Node*)(compiler_tree_node_Nova_Node_Nova_annotation), exceptionData, this);
}

void compiler_tree_node_Nova_Node_0_Nova_detach(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_node_Nova_Node* l1_Nova_from = (compiler_tree_node_Nova_Node*)nova_null;
	
	if (compiler_tree_node_Nova_Node_Accessor_Nova_isDecoding(this, exceptionData))
	{
		return;
	}
	l1_Nova_from = this->compiler_tree_node_Nova_Node_Nova_parent;
	if (this->compiler_tree_node_Nova_Node_Nova_parent->compiler_tree_node_Nova_Node_Nova_children->nova_datastruct_list_Nova_Array_Nova_count > 0 && !compiler_tree_node_Nova_Node_Nova_containsChild(this->compiler_tree_node_Nova_Node_Nova_parent, exceptionData, this, (intptr_t)nova_null) && compiler_tree_node_Nova_Node_Accessor_Nova_containsScope(this->compiler_tree_node_Nova_Node_Nova_parent, exceptionData))
	{
		l1_Nova_from = (compiler_tree_node_Nova_Node*)(compiler_tree_node_Nova_Node_Accessor_Nova_scope(this->compiler_tree_node_Nova_Node_Nova_parent, exceptionData));
	}
	compiler_tree_node_Nova_Node_1_Nova_detach(this, exceptionData, l1_Nova_from);
}

void compiler_tree_node_Nova_Node_1_Nova_detach(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_fromNode)
{
	compiler_tree_node_Nova_Node* l1_Nova_nova_local_0 = (compiler_tree_node_Nova_Node*)nova_null;
	
	if ((l1_Nova_nova_local_0 = compiler_tree_node_Nova_Node_Nova_fromNode) != (compiler_tree_node_Nova_Node*)nova_null)
	{
		nova_datastruct_list_Nova_Array_1_Nova_remove((nova_datastruct_list_Nova_Array*)(l1_Nova_nova_local_0->compiler_tree_node_Nova_Node_Nova_children), exceptionData, (nova_Nova_Object*)(this));
	}
	compiler_tree_node_Nova_Node_Mutator_Nova_parent(this, exceptionData, (compiler_tree_node_Nova_Node*)((nova_Nova_Object*)nova_null));
	compiler_tree_node_Nova_Node_Nova_onRemoved(this, exceptionData, compiler_tree_node_Nova_Node_Nova_fromNode);
}

char compiler_tree_node_Nova_Node_Nova_containsChild(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_child, int compiler_tree_node_Nova_Node_Nova_recursive)
{
	Context1 contextArg12 = 
	{
		&compiler_tree_node_Nova_Node_Nova_child,
	};
	
	compiler_tree_node_Nova_Node_Nova_recursive = (int)(compiler_tree_node_Nova_Node_Nova_recursive == (intptr_t)nova_null ? 0 : compiler_tree_node_Nova_Node_Nova_recursive);
	return nova_datastruct_list_Nova_List_virtual0_Nova_contains((nova_datastruct_list_Nova_List*)(this->compiler_tree_node_Nova_Node_Nova_children), exceptionData, (nova_Nova_Object*)(compiler_tree_node_Nova_Node_Nova_child)) || (compiler_tree_node_Nova_Node_Nova_recursive && nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this->compiler_tree_node_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&compiler_tree_node_Nova_Node_Nova_testLambda12, this, &contextArg12));
}

void compiler_tree_node_Nova_Node_Nova_onAdded(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_parent)
{
}

void compiler_tree_node_Nova_Node_Nova_onRemoved(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_from)
{
}

compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_addChild(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_node, int compiler_tree_node_Nova_Node_Nova_index, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_toNode, int compiler_tree_node_Nova_Node_Nova_detach)
{
	compiler_tree_node_Nova_Node_Nova_index = (int)(compiler_tree_node_Nova_Node_Nova_index == (intptr_t)nova_null ? (nova_Nova_Object*)this->compiler_tree_node_Nova_Node_Nova_children->nova_datastruct_list_Nova_Array_Nova_count : (nova_Nova_Object*)compiler_tree_node_Nova_Node_Nova_index);
	compiler_tree_node_Nova_Node_Nova_toNode = (compiler_tree_node_Nova_Node*)(compiler_tree_node_Nova_Node_Nova_toNode == 0 ? (nova_Nova_Object*)this : (nova_Nova_Object*)compiler_tree_node_Nova_Node_Nova_toNode);
	compiler_tree_node_Nova_Node_Nova_detach = (int)(compiler_tree_node_Nova_Node_Nova_detach == (intptr_t)nova_null ? 1 : compiler_tree_node_Nova_Node_Nova_detach);
	if (compiler_tree_node_Nova_Node_Nova_detach)
	{
		compiler_tree_node_Nova_Node_0_Nova_detach(compiler_tree_node_Nova_Node_Nova_node, exceptionData);
		compiler_tree_node_Nova_Node_Mutator_Nova_parent(compiler_tree_node_Nova_Node_Nova_node, exceptionData, this);
		nova_datastruct_list_Nova_Array_1_Nova_add((nova_datastruct_list_Nova_Array*)(compiler_tree_node_Nova_Node_Nova_toNode->compiler_tree_node_Nova_Node_Nova_children), exceptionData, compiler_tree_node_Nova_Node_Nova_index, (nova_Nova_Object*)(compiler_tree_node_Nova_Node_Nova_node));
	}
	else
	{
		nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(compiler_tree_node_Nova_Node_Nova_toNode->compiler_tree_node_Nova_Node_Nova_children), exceptionData, compiler_tree_node_Nova_Node_Nova_index, (nova_Nova_Object*)(compiler_tree_node_Nova_Node_Nova_node));
	}
	compiler_tree_node_Nova_Node_Nova_onAdded(compiler_tree_node_Nova_Node_Nova_node, exceptionData, compiler_tree_node_Nova_Node_Nova_toNode);
	return compiler_tree_node_Nova_Node_Nova_node;
}

nova_datastruct_list_Nova_Array* compiler_tree_node_Nova_Node_Nova_inheritChildren(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_oldParent, int compiler_tree_node_Nova_Node_Nova_clone)
{
	Context2 contextArg13 = 
	{
		&compiler_tree_node_Nova_Node_Nova_clone,
	};
	
	compiler_tree_node_Nova_Node_Nova_clone = (int)(compiler_tree_node_Nova_Node_Nova_clone == (intptr_t)nova_null ? 0 : compiler_tree_node_Nova_Node_Nova_clone);
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(compiler_tree_node_Nova_Node_Nova_oldParent->compiler_tree_node_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_node_Nova_Node_Nova_testLambda13, this, &contextArg13);
}

compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_0_Nova_removeChild(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_node)
{
	return compiler_tree_node_Nova_Node_1_Nova_removeChild(this, exceptionData, nova_datastruct_list_Nova_Array_Nova_indexOf((nova_datastruct_list_Nova_Array*)(this->compiler_tree_node_Nova_Node_Nova_children), exceptionData, (nova_Nova_Object*)(compiler_tree_node_Nova_Node_Nova_node)));
}

compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_1_Nova_removeChild(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int compiler_tree_node_Nova_Node_Nova_index)
{
	compiler_tree_node_Nova_Node* l1_Nova_node = (compiler_tree_node_Nova_Node*)nova_null;
	
	if (compiler_tree_node_Nova_Node_Nova_index < 0)
	{
		return (compiler_tree_node_Nova_Node*)(nova_Nova_Object*)nova_null;
	}
	l1_Nova_node = (compiler_tree_node_Nova_Node*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->compiler_tree_node_Nova_Node_Nova_children), exceptionData, compiler_tree_node_Nova_Node_Nova_index));
	compiler_tree_node_Nova_Node_0_Nova_detach(l1_Nova_node, exceptionData);
	return l1_Nova_node;
}

void compiler_tree_node_Nova_Node_Nova_replaceWith(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_replacement)
{
	compiler_tree_node_Nova_Node_Nova_replace(this->compiler_tree_node_Nova_Node_Nova_parent, exceptionData, this, compiler_tree_node_Nova_Node_Nova_replacement, (intptr_t)nova_null);
}

void compiler_tree_node_Nova_Node_Nova_replace(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_old, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_replacement, int compiler_tree_node_Nova_Node_Nova_detach)
{
	int l1_Nova_index = 0;
	
	compiler_tree_node_Nova_Node_Nova_detach = (int)(compiler_tree_node_Nova_Node_Nova_detach == (intptr_t)nova_null ? 1 : compiler_tree_node_Nova_Node_Nova_detach);
	l1_Nova_index = nova_datastruct_list_Nova_Array_Nova_indexOf((nova_datastruct_list_Nova_Array*)(this->compiler_tree_node_Nova_Node_Nova_children), exceptionData, (nova_Nova_Object*)(compiler_tree_node_Nova_Node_Nova_old));
	if (compiler_tree_node_Nova_Node_Nova_detach)
	{
		compiler_tree_node_Nova_Node_0_Nova_detach(compiler_tree_node_Nova_Node_Nova_old, exceptionData);
	}
	if (compiler_tree_node_Nova_Node_Nova_replacement != (compiler_tree_node_Nova_Node*)nova_null)
	{
		compiler_tree_node_Nova_Node_Nova_addChild(this, exceptionData, compiler_tree_node_Nova_Node_Nova_replacement, l1_Nova_index, this, compiler_tree_node_Nova_Node_Nova_detach);
	}
	compiler_tree_node_Nova_Node_Nova_onChildReplaced(this, exceptionData, compiler_tree_node_Nova_Node_Nova_old, compiler_tree_node_Nova_Node_Nova_replacement);
	compiler_tree_node_Nova_Node_Nova_onReplaced(compiler_tree_node_Nova_Node_Nova_old, exceptionData, this, compiler_tree_node_Nova_Node_Nova_replacement);
}

nova_datastruct_list_Nova_Array* compiler_tree_node_Nova_Node_Nova_slaughterChildren(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context3 contextArg14 = 
	{
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_tree_node_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_node_Nova_Node_Nova_testLambda14, this, &contextArg14);
}

char compiler_tree_node_Nova_Node_Nova_onAfterDecoded(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context4 contextArg15 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->compiler_tree_node_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_node_Nova_Node_Nova_testLambda15, this, &contextArg15);
}

nova_datastruct_list_Nova_Array* compiler_tree_node_Nova_Node_Nova_onStackPopped(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context5 contextArg16 = 
	{
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_tree_node_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_node_Nova_Node_Nova_testLambda16, this, &contextArg16);
}

char compiler_tree_node_Nova_Node_Nova_onNextStatementDecoded(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_next)
{
	Context6 contextArg17 = 
	{
		&compiler_tree_node_Nova_Node_Nova_next,
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->compiler_tree_node_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)&compiler_tree_node_Nova_Node_Nova_testLambda17, this, &contextArg17);
}

void compiler_tree_node_Nova_Node_Nova_followedByScope(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, char compiler_tree_node_Nova_Node_Nova_scope)
{
}

void compiler_tree_node_Nova_Node_Nova_onChildReplaced(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_old, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_replacement)
{
}

void compiler_tree_node_Nova_Node_Nova_onReplaced(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_parent, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_replacement)
{
}

compiler_tree_node_Nova_ValidationResult* compiler_tree_node_Nova_Node_Nova_validate(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int compiler_tree_node_Nova_Node_Nova_phase)
{
	Context8 contextArg41 = 
	{
		&compiler_tree_node_Nova_Node_Nova_phase,
	};
	compiler_tree_node_Nova_ValidationResult* l1_Nova_nova_local_0 = (compiler_tree_node_Nova_ValidationResult*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_nova_local_1 = (nova_datastruct_list_Nova_Array*)nova_null;
	
	return (compiler_tree_node_Nova_ValidationResult*)((l1_Nova_nova_local_0 = (compiler_tree_node_Nova_ValidationResult*)((l1_Nova_nova_local_1 = this->compiler_tree_node_Nova_Node_Nova_annotations) != (nova_datastruct_list_Nova_Array*)nova_null ? (nova_Nova_Object*)(nova_datastruct_list_Nova_List_Nova_firstNonNull((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(l1_Nova_nova_local_1), exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure21_Nova_func)&compiler_tree_node_Nova_Node_Nova_testLambda41, this, &contextArg41)) : (nova_Nova_Object*)nova_null)) != (compiler_tree_node_Nova_ValidationResult*)nova_null ? l1_Nova_nova_local_0 : compiler_tree_node_Nova_ValidationResult_Nova_construct(0, exceptionData, this));
}

nova_datastruct_list_Nova_Array* compiler_tree_node_Nova_Node_Nova_rollback(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context7 contextArg18 = 
	{
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->compiler_tree_node_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&compiler_tree_node_Nova_Node_Nova_testLambda18, this, &contextArg18);
}

compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_clone(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_parent, compiler_util_Nova_Location* compiler_tree_node_Nova_Node_Nova_location, int compiler_tree_node_Nova_Node_Nova_cloneChildren)
{
	compiler_tree_node_Nova_Node_Nova_parent = (compiler_tree_node_Nova_Node*)(compiler_tree_node_Nova_Node_Nova_parent == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)compiler_tree_node_Nova_Node_Nova_parent);
	compiler_tree_node_Nova_Node_Nova_location = (compiler_util_Nova_Location*)(compiler_tree_node_Nova_Node_Nova_location == 0 ? (nova_Nova_Object*)compiler_util_Nova_Location_Nova_INVALID : (nova_Nova_Object*)compiler_tree_node_Nova_Node_Nova_location);
	compiler_tree_node_Nova_Node_Nova_cloneChildren = (int)(compiler_tree_node_Nova_Node_Nova_cloneChildren == (intptr_t)nova_null ? 1 : compiler_tree_node_Nova_Node_Nova_cloneChildren);
}

char compiler_tree_node_Nova_Node_Nova_testLambda12(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova__1, Context1* context)
{
	return compiler_tree_node_Nova_Node_Nova_containsChild(compiler_tree_node_Nova_Node_Nova__1, exceptionData, (*context->compiler_tree_node_Nova_Node_Nova_child), 1);
}

void compiler_tree_node_Nova_Node_Nova_testLambda13(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_child, int compiler_tree_node_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* compiler_tree_node_Nova_Node_Nova__3, Context2* context)
{
	compiler_tree_node_Nova_Node_Nova_addChild(this, exceptionData, (compiler_tree_node_Nova_Node*)((*context->compiler_tree_node_Nova_Node_Nova_clone) ? compiler_tree_node_Nova_Node_virtual_Nova_clone((compiler_tree_node_Nova_Node*)(compiler_tree_node_Nova_Node_Nova_child), exceptionData, this, compiler_tree_node_Nova_Node_Nova_child->compiler_tree_node_Nova_Node_Nova_location, 1) : compiler_tree_node_Nova_Node_Nova_child), (intptr_t)nova_null, 0, (intptr_t)nova_null);
	compiler_tree_node_Nova_Node_Nova_addChild(this, exceptionData, (compiler_tree_node_Nova_Node*)((*context->compiler_tree_node_Nova_Node_Nova_clone) ? compiler_tree_node_Nova_Node_virtual_Nova_clone((compiler_tree_node_Nova_Node*)(compiler_tree_node_Nova_Node_Nova_child), exceptionData, this, compiler_tree_node_Nova_Node_Nova_child->compiler_tree_node_Nova_Node_Nova_location, 1) : compiler_tree_node_Nova_Node_Nova_child), (intptr_t)nova_null, 0, (intptr_t)nova_null);
}

void compiler_tree_node_Nova_Node_Nova_testLambda14(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_head, int compiler_tree_node_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* compiler_tree_node_Nova_Node_Nova__3, Context3* context)
{
	compiler_tree_node_Nova_Node_0_Nova_detach(compiler_tree_node_Nova_Node_Nova_head, exceptionData);
}

char compiler_tree_node_Nova_Node_Nova_testLambda15(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova__1, Context4* context)
{
	return compiler_tree_node_Nova_Node_Nova_onAfterDecoded(compiler_tree_node_Nova_Node_Nova__1, exceptionData);
}

void compiler_tree_node_Nova_Node_Nova_testLambda16(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova__1, int compiler_tree_node_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* compiler_tree_node_Nova_Node_Nova__3, Context5* context)
{
	compiler_tree_node_Nova_Node_Nova_onStackPopped(compiler_tree_node_Nova_Node_Nova__1, exceptionData);
}

char compiler_tree_node_Nova_Node_Nova_testLambda17(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova__1, Context6* context)
{
	return compiler_tree_node_Nova_Node_Nova_onNextStatementDecoded(compiler_tree_node_Nova_Node_Nova__1, exceptionData, (*context->compiler_tree_node_Nova_Node_Nova_next));
}

void compiler_tree_node_Nova_Node_Nova_testLambda18(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova__1, int compiler_tree_node_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* compiler_tree_node_Nova_Node_Nova__3, Context7* context)
{
	compiler_tree_node_Nova_Node_Nova_rollback(compiler_tree_node_Nova_Node_Nova__1, exceptionData);
}

compiler_tree_node_Nova_ValidationResult* compiler_tree_node_Nova_Node_Nova_testLambda41(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_annotation_Nova_Annotation* compiler_tree_node_Nova_Node_Nova__1, Context8* context)
{
	compiler_tree_node_Nova_ValidationResult* l1_Nova_result = (compiler_tree_node_Nova_ValidationResult*)nova_null;
	
	l1_Nova_result = compiler_tree_node_Nova_Node_Nova_validate((compiler_tree_node_Nova_Node*)(compiler_tree_node_Nova_Node_Nova__1), exceptionData, (*context->compiler_tree_node_Nova_Node_Nova_phase));
	return (compiler_tree_node_Nova_ValidationResult*)(compiler_tree_node_Nova_ValidationResult_Accessor_Nova_skipValidation(l1_Nova_result, exceptionData) ? (nova_Nova_Object*)l1_Nova_result : (nova_Nova_Object*)nova_null);
}

compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Mutator_Nova_parent(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_value)
{
	if (this->compiler_tree_node_Nova_Node_Nova_parent != compiler_tree_node_Nova_Node_Nova_value)
	{
		compiler_tree_node_Nova_Node_Nova_addChild(compiler_tree_node_Nova_Node_Nova_value, exceptionData, this, (intptr_t)nova_null, 0, (intptr_t)nova_null);
	}
	return compiler_tree_node_Nova_Node_Nova_value;
}

nova_Nova_String* compiler_tree_node_Nova_Node_Accessor_Nova_locationInfo(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_info = (nova_Nova_String*)nova_null;
	
	l1_Nova_info = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	if (compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentFile((compiler_tree_node_Nova_Node*)(this), exceptionData) != (compiler_tree_node_Nova_NovaFile*)nova_null)
	{
		l1_Nova_info = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_info), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" in file ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentFile((compiler_tree_node_Nova_Node*)(this), exceptionData)->compiler_tree_node_Nova_NovaFile_Nova_name)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))));
	}
	if (this->compiler_tree_node_Nova_Node_Nova_location != (compiler_util_Nova_Location*)nova_null)
	{
		l1_Nova_info = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_info), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" on line number ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (this->compiler_tree_node_Nova_Node_Nova_location->compiler_util_Nova_Location_Nova_lineNumber))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" at offset ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (this->compiler_tree_node_Nova_Node_Nova_location->compiler_util_Nova_Location_Nova_offset))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))))));
	}
	return l1_Nova_info;
}


int compiler_tree_node_Nova_Node_Mutator_Nova_index(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, int compiler_tree_node_Nova_Node_Nova_value)
{
	compiler_tree_node_Nova_Node* l1_Nova_nova_local_0 = (compiler_tree_node_Nova_Node*)nova_null;
	
	if ((l1_Nova_nova_local_0 = this->compiler_tree_node_Nova_Node_Nova_parent) != (compiler_tree_node_Nova_Node*)nova_null)
	{
		nova_datastruct_list_Nova_Array_Nova_swap((nova_datastruct_list_Nova_Array*)(l1_Nova_nova_local_0->compiler_tree_node_Nova_Node_Nova_children), exceptionData, compiler_tree_node_Nova_Node_Accessor_Nova_index(this, exceptionData), compiler_tree_node_Nova_Node_Nova_value);
	}
	return compiler_tree_node_Nova_Node_Nova_value;
}

compiler_tree_node_Nova_Scope* compiler_tree_node_Nova_Node_Mutator_Nova_scope(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Scope* compiler_tree_node_Nova_Node_Nova_value)
{
	THROW(11, compiler_error_Nova_UnimplementedOperationException_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("This Node does not support Scopes"))));
	return compiler_tree_node_Nova_Node_Nova_value;
}

char compiler_tree_node_Nova_Node_Accessor_Nova_isDecoding(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_tree_node_Nova_Node_Nova_parent == (compiler_tree_node_Nova_Node*)nova_null || !compiler_tree_node_Nova_Node_Nova_containsChild(this->compiler_tree_node_Nova_Node_Nova_parent, exceptionData, this, (intptr_t)nova_null);
}


char compiler_tree_node_Nova_Node_Accessor_Nova_isValid(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_tree_node_Nova_Node_Nova_parent != (compiler_tree_node_Nova_Node*)nova_null;
}


char compiler_tree_node_Nova_Node_Accessor_Nova_isEmpty(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->compiler_tree_node_Nova_Node_Nova_children->nova_datastruct_list_Nova_Array_Nova_count == 0;
}


char compiler_tree_node_Nova_Node_Accessor_Nova_isUserMade(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 1;
}


char compiler_tree_node_Nova_Node_Accessor_Nova_isWithinStaticContext(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentFunction((compiler_tree_node_Nova_Node*)(this), exceptionData) == (compiler_tree_node_functions_Nova_NovaFunction*)nova_null || !compiler_tree_node_functions_Nova_NovaFunction_Accessor_Nova_isInstance(compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentFunction((compiler_tree_node_Nova_Node*)(this), exceptionData), exceptionData);
}


char compiler_tree_node_Nova_Node_Accessor_Nova_isWithinExternalContext(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_node_Nova_Node* l2_Nova_nova_local_0 = (compiler_tree_node_Nova_Node*)nova_null;
	
	return (char)((l2_Nova_nova_local_0 = this->compiler_tree_node_Nova_Node_Nova_parent) != (compiler_tree_node_Nova_Node*)nova_null ? (l2_Nova_nova_local_0->compiler_tree_node_Nova_Node_Nova_isWithinExternalContext) : 0);
}


compiler_tree_node_Nova_Program* compiler_tree_node_Nova_Node_Accessor_Nova_program(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_node_Nova_Node* l2_Nova_nova_local_0 = (compiler_tree_node_Nova_Node*)nova_null;
	
	return (compiler_tree_node_Nova_Program*)((l2_Nova_nova_local_0 = this->compiler_tree_node_Nova_Node_Nova_parent) != (compiler_tree_node_Nova_Node*)nova_null ? (nova_Nova_Object*)(l2_Nova_nova_local_0->compiler_tree_node_Nova_Node_Nova_program) : (nova_Nova_Object*)nova_null);
}


compiler_tree_node_Nova_NovaFile* compiler_tree_node_Nova_Node_Accessor_Nova_parentFile(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_node_Nova_Node* l2_Nova_nova_local_0 = (compiler_tree_node_Nova_Node*)nova_null;
	
	return (compiler_tree_node_Nova_NovaFile*)((l2_Nova_nova_local_0 = this->compiler_tree_node_Nova_Node_Nova_parent) != (compiler_tree_node_Nova_Node*)nova_null ? (nova_Nova_Object*)(l2_Nova_nova_local_0->compiler_tree_node_Nova_Node_Nova_parentFile) : (nova_Nova_Object*)nova_null);
}


char compiler_tree_node_Nova_Node_Accessor_Nova_isWithinFile(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentFile((compiler_tree_node_Nova_Node*)(this), exceptionData) != (compiler_tree_node_Nova_NovaFile*)nova_null;
}


compiler_tree_node_functions_Nova_NovaFunction* compiler_tree_node_Nova_Node_Accessor_Nova_parentFunction(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_node_Nova_Node* l2_Nova_nova_local_0 = (compiler_tree_node_Nova_Node*)nova_null;
	
	return (compiler_tree_node_functions_Nova_NovaFunction*)((l2_Nova_nova_local_0 = this->compiler_tree_node_Nova_Node_Nova_parent) != (compiler_tree_node_Nova_Node*)nova_null ? (nova_Nova_Object*)(l2_Nova_nova_local_0->compiler_tree_node_Nova_Node_Nova_parentFunction) : (nova_Nova_Object*)nova_null);
}


char compiler_tree_node_Nova_Node_Accessor_Nova_isWithinFunction(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentFunction((compiler_tree_node_Nova_Node*)(this), exceptionData) != (compiler_tree_node_functions_Nova_NovaFunction*)nova_null;
}


compiler_tree_node_exceptionhandling_Nova_Try* compiler_tree_node_Nova_Node_Accessor_Nova_parentTry(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_node_Nova_Node* l2_Nova_nova_local_0 = (compiler_tree_node_Nova_Node*)nova_null;
	
	return (compiler_tree_node_exceptionhandling_Nova_Try*)((l2_Nova_nova_local_0 = this->compiler_tree_node_Nova_Node_Nova_parent) != (compiler_tree_node_Nova_Node*)nova_null ? (nova_Nova_Object*)(l2_Nova_nova_local_0->compiler_tree_node_Nova_Node_Nova_parentTry) : (nova_Nova_Object*)nova_null);
}


char compiler_tree_node_Nova_Node_Accessor_Nova_isWithinTry(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentTry((compiler_tree_node_Nova_Node*)(this), exceptionData) != (compiler_tree_node_exceptionhandling_Nova_Try*)nova_null;
}


compiler_tree_node_Nova_NovaClass* compiler_tree_node_Nova_Node_Accessor_Nova_parentClass(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_node_Nova_Node* l2_Nova_nova_local_0 = (compiler_tree_node_Nova_Node*)nova_null;
	
	return (compiler_tree_node_Nova_NovaClass*)((l2_Nova_nova_local_0 = this->compiler_tree_node_Nova_Node_Nova_parent) != (compiler_tree_node_Nova_Node*)nova_null ? (nova_Nova_Object*)(l2_Nova_nova_local_0->compiler_tree_node_Nova_Node_Nova_parentClass) : (nova_Nova_Object*)nova_null);
}


char compiler_tree_node_Nova_Node_Accessor_Nova_isWithinClass(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentClass((compiler_tree_node_Nova_Node*)(this), exceptionData) != (compiler_tree_node_Nova_NovaClass*)nova_null;
}


compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Accessor_Nova_next(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_node_Nova_Node_Nova_getAdjacentNode(this, exceptionData, 1);
}


compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Accessor_Nova_previous(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_node_Nova_Node_Nova_getAdjacentNode(this, exceptionData, -1);
}


int compiler_tree_node_Nova_Node_Accessor_Nova_index(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	compiler_tree_node_Nova_Node* l2_Nova_nova_local_0 = (compiler_tree_node_Nova_Node*)nova_null;
	
	return (int)((l2_Nova_nova_local_0 = this->compiler_tree_node_Nova_Node_Nova_parent) != (compiler_tree_node_Nova_Node*)nova_null ? (nova_datastruct_list_Nova_Array_Nova_indexOf((nova_datastruct_list_Nova_Array*)(l2_Nova_nova_local_0->compiler_tree_node_Nova_Node_Nova_children), exceptionData, (nova_Nova_Object*)(this))) : 0);
}

compiler_tree_node_Nova_Scope* compiler_tree_node_Nova_Node_Accessor_Nova_scope(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (compiler_tree_node_Nova_Scope*)(nova_Nova_Object*)nova_null;
}

char compiler_tree_node_Nova_Node_Accessor_Nova_containsScope(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return compiler_tree_node_Nova_Node_Accessor_Nova_scope(this, exceptionData) != (compiler_tree_node_Nova_Scope*)nova_null;
}


void compiler_tree_node_Nova_Node_Nova_super(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_node_Nova_Node_Nova_location = (compiler_util_Nova_Location*)nova_null;
	this->compiler_tree_node_Nova_Node_Nova_children = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_node_Nova_Node_Nova_annotations = (nova_datastruct_list_Nova_Array*)nova_null;
	this->compiler_tree_node_Nova_Node_Nova_parent = (compiler_tree_node_Nova_Node*)nova_null;
	this->compiler_tree_node_Nova_Node_Nova_isWithinExternalContext = 0;
	this->compiler_tree_node_Nova_Node_Nova_program = (compiler_tree_node_Nova_Program*)nova_null;
	this->compiler_tree_node_Nova_Node_Nova_parentFile = (compiler_tree_node_Nova_NovaFile*)nova_null;
	this->compiler_tree_node_Nova_Node_Nova_parentFunction = (compiler_tree_node_functions_Nova_NovaFunction*)nova_null;
	this->compiler_tree_node_Nova_Node_Nova_parentTry = (compiler_tree_node_exceptionhandling_Nova_Try*)nova_null;
	this->compiler_tree_node_Nova_Node_Nova_parentClass = (compiler_tree_node_Nova_NovaClass*)nova_null;
}

compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_virtual_Nova_clone(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, compiler_tree_node_Nova_Node* compiler_tree_node_Nova_Node_Nova_parent, compiler_util_Nova_Location* compiler_tree_node_Nova_Node_Nova_location, int compiler_tree_node_Nova_Node_Nova_cloneChildren)
{
	return this->vtable->compiler_tree_node_Nova_Node_virtual_Nova_clone((compiler_tree_node_Nova_Node*)(this), exceptionData, compiler_tree_node_Nova_Node_Nova_parent, compiler_tree_node_Nova_Node_Nova_location, compiler_tree_node_Nova_Node_Nova_cloneChildren);
}

compiler_tree_node_Nova_Program* compiler_tree_node_Nova_Node_virtual_Accessor_Nova_program(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_node_Nova_Node_virtual_Accessor_Nova_program((compiler_tree_node_Nova_Node*)(this), exceptionData);
}

compiler_tree_node_Nova_NovaFile* compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentFile(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentFile((compiler_tree_node_Nova_Node*)(this), exceptionData);
}

compiler_tree_node_functions_Nova_NovaFunction* compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentFunction(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentFunction((compiler_tree_node_Nova_Node*)(this), exceptionData);
}

compiler_tree_node_exceptionhandling_Nova_Try* compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentTry(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentTry((compiler_tree_node_Nova_Node*)(this), exceptionData);
}

compiler_tree_node_Nova_NovaClass* compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentClass(compiler_tree_node_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->compiler_tree_node_Nova_Node_virtual_Accessor_Nova_parentClass((compiler_tree_node_Nova_Node*)(this), exceptionData);
}

