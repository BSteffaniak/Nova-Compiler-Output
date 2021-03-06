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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Stack.h>
#include <spectra/spectra_Nova_SyntaxMessage.h>
#include <spectra/spectra_Nova_Spectra.h>
#include <spectra/spectra_Nova_SyntaxErrorException.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Program.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_NovaFile.h>
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_ClassDeclaration.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <spectra/tree/spectra_tree_Nova_AnnotationSearchResult.h>
#include <spectra/tree/spectra_tree_Nova_StatementIterator.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context113;
typedef struct
{
} Context114;
typedef struct
{
} Context115;
typedef struct
{
} Context116;
typedef struct
{
} Context117;


CCLASS_PRIVATE
(
	spectra_tree_Nova_SyntaxTree,
	nova_datastruct_list_Nova_Stack* spectra_tree_Nova_SyntaxTree_Nova_pendingAnnotations;
	nova_datastruct_list_Nova_Stack* spectra_tree_Nova_SyntaxTree_Nova_parents;
	nova_datastruct_list_Nova_Array* spectra_tree_Nova_SyntaxTree_Nova_fileGroups;
	
)

void spectra_tree_Nova_SyntaxTree_Nova_lambda114(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* file, Context113* context);
void spectra_tree_Nova_SyntaxTree_Nova_lambda115(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context114* context);
char spectra_tree_Nova_SyntaxTree_Nova_lambda116(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context115* context);
void spectra_tree_Nova_SyntaxTree_Nova_lambda117(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context116* context);
char spectra_tree_Nova_SyntaxTree_Nova_lambda118(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context117* context);
void spectra_tree_Nova_SyntaxTree_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_Nova_SyntaxTree* spectra_tree_Nova_SyntaxTree_Nova_construct(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_Nova_Spectra* compiler, spectra_tree_nodes_Nova_Program* root)
{
	CCLASS_NEW(spectra_tree_Nova_SyntaxTree, this);
	this->vtable = &spectra_tree_SyntaxTree_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	spectra_tree_Nova_SyntaxTree_Nova_super(this, exceptionData);
	
	{
		spectra_tree_Nova_SyntaxTree_Nova_this(this, exceptionData, compiler, root);
	}
	
	return this;
}

void spectra_tree_Nova_SyntaxTree_Nova_destroy(spectra_tree_Nova_SyntaxTree** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Stack_Nova_destroy(&(*this)->prv->spectra_tree_Nova_SyntaxTree_Nova_pendingAnnotations, exceptionData);
	nova_datastruct_list_Nova_Stack_Nova_destroy(&(*this)->prv->spectra_tree_Nova_SyntaxTree_Nova_parents, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->prv->spectra_tree_Nova_SyntaxTree_Nova_fileGroups, exceptionData);
	NOVA_FREE((*this)->prv);
	spectra_tree_nodes_Nova_Program_Nova_destroy(&(*this)->spectra_tree_Nova_SyntaxTree_Nova_root, exceptionData);
	
	spectra_Nova_Spectra_Nova_destroy(&(*this)->spectra_tree_Nova_SyntaxTree_Nova_compiler, exceptionData);
	
	NOVA_FREE(*this);
}

void spectra_tree_Nova_SyntaxTree_Nova_this(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_Nova_Spectra* compiler, spectra_tree_nodes_Nova_Program* root)
{
	this->prv->spectra_tree_Nova_SyntaxTree_Nova_pendingAnnotations = nova_datastruct_list_Nova_Stack_0_Nova_construct(0, exceptionData);
	this->prv->spectra_tree_Nova_SyntaxTree_Nova_parents = nova_datastruct_list_Nova_Stack_0_Nova_construct(0, exceptionData);
	this->spectra_tree_Nova_SyntaxTree_Nova_phase = 1;
	this->spectra_tree_Nova_SyntaxTree_Nova_compiler = compiler;
	this->spectra_tree_Nova_SyntaxTree_Nova_root = root;
	this->prv->spectra_tree_Nova_SyntaxTree_Nova_fileGroups = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->prv->spectra_tree_Nova_SyntaxTree_Nova_fileGroups), exceptionData, (nova_Nova_Object*)(spectra_tree_nodes_Nova_Program_Accessor_Nova_files(root, exceptionData)));
	root->spectra_tree_nodes_Nova_Program_Nova_tree = this;
}

void spectra_tree_Nova_SyntaxTree_Nova_processFiles(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_SyntaxTree_closure357_Nova_func spectra_tree_Nova_SyntaxTree_Nova_func, void* spectra_tree_Nova_SyntaxTree_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_Program_Accessor_Nova_files(this->spectra_tree_Nova_SyntaxTree_Nova_root, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)spectra_tree_Nova_SyntaxTree_Nova_func, spectra_tree_Nova_SyntaxTree_ref_Nova_func, func_context);
}

void spectra_tree_Nova_SyntaxTree_Nova_formTree(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context113* contextArg114 = NOVA_MALLOC(sizeof(Context113));
	
	spectra_tree_Nova_SyntaxTree_Nova_processFiles(this, exceptionData, (spectra_tree_Nova_SyntaxTree_closure357_Nova_func)&spectra_tree_Nova_SyntaxTree_Nova_lambda114, this, contextArg114);
	this->spectra_tree_Nova_SyntaxTree_Nova_phase = 2;
}

void spectra_tree_Nova_SyntaxTree_Nova_validateTypes(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context114* contextArg116 = NOVA_MALLOC(sizeof(Context114));
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_Program_Accessor_Nova_files(this->spectra_tree_Nova_SyntaxTree_Nova_root, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&spectra_tree_Nova_SyntaxTree_Nova_lambda115, this, contextArg116);
	this->spectra_tree_Nova_SyntaxTree_Nova_phase = 3;
}

void spectra_tree_Nova_SyntaxTree_Nova_parseStatements(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context116* contextArg118 = NOVA_MALLOC(sizeof(Context116));
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(spectra_tree_nodes_Nova_Program_Accessor_Nova_files(this->spectra_tree_Nova_SyntaxTree_Nova_root, exceptionData)), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&spectra_tree_Nova_SyntaxTree_Nova_lambda117, this, contextArg118);
	this->spectra_tree_Nova_SyntaxTree_Nova_phase = 4;
}

spectra_tree_Nova_AnnotationSearchResult* spectra_tree_Nova_SyntaxTree_static_Nova_searchAnnotations(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement)
{
	spectra_tree_Nova_AnnotationSearchResult* l1_Nova_result = (spectra_tree_Nova_AnnotationSearchResult*)nova_null;
	spectra_tree_nodes_annotations_Nova_Annotation* l1_Nova_annotation = (spectra_tree_nodes_annotations_Nova_Annotation*)nova_null;
	
	l1_Nova_result = spectra_tree_Nova_AnnotationSearchResult_Nova_construct(0, exceptionData, statement);
	l1_Nova_annotation = spectra_tree_nodes_annotations_Nova_Annotation_0_static_Nova_parse(0, exceptionData, statement, 0, 0, 0);
	while ((l1_Nova_annotation) != (spectra_tree_nodes_annotations_Nova_Annotation*)nova_null && statement->nova_Nova_String_Nova_count > 0)
	{
		statement = spectra_tree_nodes_annotations_Nova_Annotation_static_Nova_getRemainingStatement(l1_Nova_annotation, exceptionData, statement);
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_result->spectra_tree_Nova_AnnotationSearchResult_Nova_annotations), exceptionData, (nova_Nova_Object*)(l1_Nova_annotation));
		l1_Nova_result->spectra_tree_Nova_AnnotationSearchResult_Nova_remainingStatement = statement;
		if (statement->nova_Nova_String_Nova_count > 0)
		{
			l1_Nova_annotation = spectra_tree_nodes_annotations_Nova_Annotation_0_static_Nova_parse(0, exceptionData, statement, 0, 0, (intptr_t)nova_null);
		}
	}
	return l1_Nova_result;
}

void spectra_tree_Nova_SyntaxTree_Nova_lambda114(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* file, Context113* context)
{
	spectra_tree_Nova_StatementIterator* l1_Nova_statements = (spectra_tree_Nova_StatementIterator*)nova_null;
	spectra_tree_Nova_StatementIterator* nova_local_0 = (spectra_tree_Nova_StatementIterator*)nova_null;
	nova_Nova_String* l2_Nova_statement = (nova_Nova_String*)nova_null;
	
	nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Forming tree for file '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((file)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))));
	l1_Nova_statements = spectra_util_Nova_CompilerStringFunctions_Nova_getStatements(file->spectra_tree_nodes_Nova_NovaFile_Nova_source, exceptionData, this->prv->spectra_tree_Nova_SyntaxTree_Nova_parents);
	nova_datastruct_list_Nova_Stack_Nova_push((nova_datastruct_list_Nova_Stack*)(this->prv->spectra_tree_Nova_SyntaxTree_Nova_parents), exceptionData, (nova_Nova_Object*)(file));
	nova_local_0 = l1_Nova_statements;
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_Nova_String* l2_Nova_full = (nova_Nova_String*)nova_null;
		volatile spectra_tree_nodes_Nova_Node* l2_Nova_node = (spectra_tree_nodes_Nova_Node*)nova_null;
		spectra_tree_Nova_AnnotationSearchResult* l2_Nova_annotations = (spectra_tree_Nova_AnnotationSearchResult*)nova_null;
		
		l2_Nova_statement = (nova_Nova_String*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (nova_datastruct_list_Nova_Stack_Accessor_Nova_isEmpty((nova_datastruct_list_Nova_Stack*)(this->prv->spectra_tree_Nova_SyntaxTree_Nova_parents), exceptionData))
		{
			break;
		}
		l2_Nova_full = l2_Nova_statement;
		l2_Nova_node = (spectra_tree_nodes_Nova_Node*)((nova_Nova_Object*)nova_null);
		l2_Nova_annotations = spectra_tree_Nova_SyntaxTree_static_Nova_searchAnnotations(this, exceptionData, l2_Nova_statement);
		spectra_tree_Nova_AnnotationSearchResult_1_Nova_addTo(l2_Nova_annotations, exceptionData, this->prv->spectra_tree_Nova_SyntaxTree_Nova_pendingAnnotations);
		l2_Nova_statement = l2_Nova_annotations->spectra_tree_Nova_AnnotationSearchResult_Nova_remainingStatement;
		if (l2_Nova_statement->nova_Nova_String_Nova_count > 0)
		{
			TRY
			{
				novaEnv.nova_exception_ExceptionData.addCaught(exceptionData, exceptionData, spectra_SyntaxErrorException_Extension_VTable_val.classInstance, 0);
				
				{
					l2_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Node_virtual_Nova_parseStatement((spectra_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(this->prv->spectra_tree_Nova_SyntaxTree_Nova_parents), exceptionData)), exceptionData, l2_Nova_statement, 0, 0, 0));
				}
			}
			CATCH (spectra_SyntaxErrorException_Extension_VTable_val.classInstance)
			{
				spectra_Nova_SyntaxErrorException* l6_Nova_e = (spectra_Nova_SyntaxErrorException*)nova_null;
				
				l6_Nova_e = (spectra_Nova_SyntaxErrorException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
				nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(l6_Nova_e));
				l2_Nova_node = (spectra_tree_nodes_Nova_Node*)((nova_Nova_Object*)nova_null);
			}
			FINALLY
			{
			}
			END_TRY;
			if ((l2_Nova_node) == (spectra_tree_nodes_Nova_Node*)nova_null)
			{
				nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l2_Nova_full), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))));
				nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\tbeginsScope: '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_Nova_Bool_static_Nova_toString(0, exceptionData, (l1_Nova_statements->spectra_tree_Nova_StatementIterator_Nova_beginsScope)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'\n\tendsScope: '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_Nova_Bool_static_Nova_toString(0, exceptionData, (l1_Nova_statements->spectra_tree_Nova_StatementIterator_Nova_endsScope)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'\n\tparse: '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((l2_Nova_node)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'\n")))))))))))))));
			}
			if ((l2_Nova_node) != (spectra_tree_nodes_Nova_Node*)nova_null)
			{
				while (!nova_datastruct_list_Nova_Stack_Accessor_Nova_isEmpty((nova_datastruct_list_Nova_Stack*)(this->prv->spectra_tree_Nova_SyntaxTree_Nova_pendingAnnotations), exceptionData))
				{
					spectra_tree_nodes_annotations_Nova_Annotatable_virtual_Nova_addAnnotation((spectra_tree_nodes_annotations_Nova_Annotatable*)((spectra_tree_nodes_Nova_Node*)l2_Nova_node), exceptionData, (spectra_tree_nodes_annotations_Nova_Annotation*)(nova_datastruct_list_Nova_Stack_Nova_pop((nova_datastruct_list_Nova_Stack*)(this->prv->spectra_tree_Nova_SyntaxTree_Nova_pendingAnnotations), exceptionData)));
				}
				spectra_tree_nodes_Nova_Node_virtual_Nova_addChild((spectra_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(this->prv->spectra_tree_Nova_SyntaxTree_Nova_parents), exceptionData)), exceptionData, (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Node*)l2_Nova_node);
			}
		}
		else
		{
		}
		if (l1_Nova_statements->spectra_tree_Nova_StatementIterator_Nova_beginsScope)
		{
			if ((l2_Nova_node) == (spectra_tree_nodes_Nova_Node*)nova_null)
			{
				spectra_tree_nodes_Nova_Node* nova_local_1 = (spectra_tree_nodes_Nova_Node*)nova_null;
				
				spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to parse scope declaration '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l2_Nova_statement), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), (spectra_tree_nodes_Nova_Node*)((nova_local_1 = (spectra_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(this->prv->spectra_tree_Nova_SyntaxTree_Nova_parents), exceptionData))) != (spectra_tree_nodes_Nova_Node*)nova_null ? nova_local_1 : (spectra_tree_nodes_Nova_Node*)this->spectra_tree_Nova_SyntaxTree_Nova_root), 0);
				l2_Nova_node = (spectra_tree_nodes_Nova_Node*)(spectra_tree_nodes_Nova_Node_virtual_Nova_generateTemporaryScopeNode((spectra_tree_nodes_Nova_Node*)(nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(this->prv->spectra_tree_Nova_SyntaxTree_Nova_parents), exceptionData)), exceptionData));
			}
			nova_datastruct_list_Nova_Stack_Nova_push((nova_datastruct_list_Nova_Stack*)(this->prv->spectra_tree_Nova_SyntaxTree_Nova_parents), exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)((spectra_tree_nodes_Nova_Node*)l2_Nova_node));
		}
		if (l1_Nova_statements->spectra_tree_Nova_StatementIterator_Nova_endsScope)
		{
			int l15_Nova_e = 0;
			
			l15_Nova_e = (int)0;
			for (; l15_Nova_e < (int)l1_Nova_statements->spectra_tree_Nova_StatementIterator_Nova_scopesEnded; l15_Nova_e++)
			{
				if (!nova_datastruct_list_Nova_Stack_Accessor_Nova_isEmpty((nova_datastruct_list_Nova_Stack*)(this->prv->spectra_tree_Nova_SyntaxTree_Nova_parents), exceptionData))
				{
					nova_datastruct_list_Nova_Stack_Nova_pop((nova_datastruct_list_Nova_Stack*)(this->prv->spectra_tree_Nova_SyntaxTree_Nova_parents), exceptionData);
				}
			}
		}
	}
	if ((spectra_tree_nodes_Nova_Node*)nova_datastruct_list_Nova_Stack_Nova_peek((nova_datastruct_list_Nova_Stack*)(this->prv->spectra_tree_Nova_SyntaxTree_Nova_parents), exceptionData) != (spectra_tree_nodes_Nova_Node*)file)
	{
		spectra_Nova_SyntaxMessage_static_Nova_error(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Missing ending brace")), (spectra_tree_nodes_Nova_Node*)(file), 0);
	}
}

void spectra_tree_Nova_SyntaxTree_Nova_lambda115(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context114* context)
{
	Context115* contextArg115 = NOVA_MALLOC(sizeof(Context115));
	
	spectra_tree_nodes_Nova_NovaFile_Nova_addAutoImports(file, exceptionData);
	nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Validating types for file '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((file)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))));
	if (!nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(file->spectra_tree_nodes_Nova_NovaFile_Nova_classes), exceptionData, (nova_datastruct_list_Nova_List_closure300_Nova_allFunc)&spectra_tree_Nova_SyntaxTree_Nova_lambda116, this, contextArg115, 0))
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid types in file '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((file)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))));
	}
}

char spectra_tree_Nova_SyntaxTree_Nova_lambda116(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context115* context)
{
	return spectra_tree_nodes_Nova_Node_virtual_Nova_validateTypes((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
}

void spectra_tree_Nova_SyntaxTree_Nova_lambda117(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_NovaFile* file, int _2, nova_datastruct_list_Nova_Array* _3, Context116* context)
{
	Context117* contextArg117 = NOVA_MALLOC(sizeof(Context117));
	
	nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Parsing placeholders for file '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((file)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))));
	if (!nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(file->spectra_tree_nodes_Nova_NovaFile_Nova_classes), exceptionData, (nova_datastruct_list_Nova_List_closure300_Nova_allFunc)&spectra_tree_Nova_SyntaxTree_Nova_lambda118, this, contextArg117, 0))
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("failed to parse placeholders for file '")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((file)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))));
	}
}

char spectra_tree_Nova_SyntaxTree_Nova_lambda118(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_ClassDeclaration* _1, int _2, nova_datastruct_list_Nova_List* _3, Context117* context)
{
	TRY
	{
		novaEnv.nova_exception_ExceptionData.addCaught(exceptionData, exceptionData, spectra_SyntaxErrorException_Extension_VTable_val.classInstance, 0);
		
		{
			return spectra_tree_nodes_Nova_Node_virtual_Nova_parsePlaceholders((spectra_tree_nodes_Nova_Node*)(_1), exceptionData);
		}
	}
	CATCH (spectra_SyntaxErrorException_Extension_VTable_val.classInstance)
	{
		spectra_Nova_SyntaxErrorException* l4_Nova_e = (spectra_Nova_SyntaxErrorException*)nova_null;
		
		l4_Nova_e = (spectra_Nova_SyntaxErrorException*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		nova_io_Nova_Console_static_Nova_log(0, exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Error: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((l4_Nova_e->nova_exception_Nova_Exception_Nova_message), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
		return 0;
	}
	FINALLY
	{
	}
	END_TRY;
}

void spectra_tree_Nova_SyntaxTree_Nova_super(spectra_tree_Nova_SyntaxTree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->spectra_tree_Nova_SyntaxTree_Nova_root = (spectra_tree_nodes_Nova_Program*)nova_null;
	this->spectra_tree_Nova_SyntaxTree_Nova_phase = 0;
	this->spectra_tree_Nova_SyntaxTree_Nova_compiler = (spectra_Nova_Spectra*)nova_null;
	this->prv->spectra_tree_Nova_SyntaxTree_Nova_pendingAnnotations = (nova_datastruct_list_Nova_Stack*)nova_null;
	this->prv->spectra_tree_Nova_SyntaxTree_Nova_parents = (nova_datastruct_list_Nova_Stack*)nova_null;
	this->prv->spectra_tree_Nova_SyntaxTree_Nova_fileGroups = (nova_datastruct_list_Nova_Array*)nova_null;
}

void spectra_tree_Nova_SyntaxTreeFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_Nova_SyntaxTreeFunctionMap* spectra_tree_Nova_SyntaxTreeFunctionMap_Nova_construct(spectra_tree_Nova_SyntaxTreeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_Nova_SyntaxTreeFunctionMap, this,);
	this->vtable = &spectra_tree_SyntaxTree_SyntaxTreeFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	spectra_tree_Nova_SyntaxTreeFunctionMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_Nova_SyntaxTreeFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_Nova_SyntaxTreeFunctionMap_Nova_destroy(spectra_tree_Nova_SyntaxTreeFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_Nova_SyntaxTreeFunctionMap_Nova_this(spectra_tree_Nova_SyntaxTreeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_Nova_SyntaxTree* spectra_tree_Nova_SyntaxTreeFunctionMap_functionMapSyntaxTreeFunctionMap_Nova_construct(spectra_tree_Nova_SyntaxTreeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_Nova_Spectra* compiler, spectra_tree_nodes_Nova_Program* root)
{
	return spectra_tree_Nova_SyntaxTree_Nova_construct(0, exceptionData, compiler, root);
}

void spectra_tree_Nova_SyntaxTreeFunctionMap_functionMap_Nova_processFiles(spectra_tree_Nova_SyntaxTreeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_SyntaxTree* reference, spectra_tree_Nova_SyntaxTreeFunctionMap_closure480_Nova_func spectra_tree_Nova_SyntaxTreeFunctionMap_Nova_func, void* spectra_tree_Nova_SyntaxTreeFunctionMap_ref_Nova_func, void* func_context)
{
	spectra_tree_Nova_SyntaxTree_Nova_processFiles(reference, exceptionData, (spectra_tree_Nova_SyntaxTree_closure357_Nova_func)spectra_tree_Nova_SyntaxTreeFunctionMap_Nova_func, spectra_tree_Nova_SyntaxTreeFunctionMap_ref_Nova_func, func_context);
}

void spectra_tree_Nova_SyntaxTreeFunctionMap_functionMap_Nova_formTree(spectra_tree_Nova_SyntaxTreeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_SyntaxTree* reference)
{
	spectra_tree_Nova_SyntaxTree_Nova_formTree(reference, exceptionData);
}

void spectra_tree_Nova_SyntaxTreeFunctionMap_functionMap_Nova_validateTypes(spectra_tree_Nova_SyntaxTreeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_SyntaxTree* reference)
{
	spectra_tree_Nova_SyntaxTree_Nova_validateTypes(reference, exceptionData);
}

void spectra_tree_Nova_SyntaxTreeFunctionMap_functionMap_Nova_parseStatements(spectra_tree_Nova_SyntaxTreeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_SyntaxTree* reference)
{
	spectra_tree_Nova_SyntaxTree_Nova_parseStatements(reference, exceptionData);
}

spectra_tree_Nova_AnnotationSearchResult* spectra_tree_Nova_SyntaxTreeFunctionMap_functionMap_static_Nova_searchAnnotations(spectra_tree_Nova_SyntaxTreeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* statement)
{
	return spectra_tree_Nova_SyntaxTree_static_Nova_searchAnnotations(0, exceptionData, statement);
}

void spectra_tree_Nova_SyntaxTreeFunctionMap_Nova_super(spectra_tree_Nova_SyntaxTreeFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void spectra_tree_Nova_SyntaxTreePropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

spectra_tree_Nova_SyntaxTreePropertyMap* spectra_tree_Nova_SyntaxTreePropertyMap_Nova_construct(spectra_tree_Nova_SyntaxTreePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(spectra_tree_Nova_SyntaxTreePropertyMap, this,);
	this->vtable = &spectra_tree_SyntaxTree_SyntaxTreePropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	spectra_tree_Nova_SyntaxTreePropertyMap_Nova_super(this, exceptionData);
	
	{
		spectra_tree_Nova_SyntaxTreePropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void spectra_tree_Nova_SyntaxTreePropertyMap_Nova_destroy(spectra_tree_Nova_SyntaxTreePropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void spectra_tree_Nova_SyntaxTreePropertyMap_Nova_this(spectra_tree_Nova_SyntaxTreePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

spectra_tree_nodes_Nova_Program* spectra_tree_Nova_SyntaxTreePropertyMap_functionMap_Nova_root(spectra_tree_Nova_SyntaxTreePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_SyntaxTree* reference)
{
	return reference->spectra_tree_Nova_SyntaxTree_Nova_root;
}

char spectra_tree_Nova_SyntaxTreePropertyMap_functionMap_Nova_phase(spectra_tree_Nova_SyntaxTreePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_SyntaxTree* reference)
{
	return reference->spectra_tree_Nova_SyntaxTree_Nova_phase;
}

spectra_Nova_Spectra* spectra_tree_Nova_SyntaxTreePropertyMap_functionMap_Nova_compiler(spectra_tree_Nova_SyntaxTreePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_SyntaxTree* reference)
{
	return reference->spectra_tree_Nova_SyntaxTree_Nova_compiler;
}

void spectra_tree_Nova_SyntaxTreePropertyMap_Nova_super(spectra_tree_Nova_SyntaxTreePropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

