#ifndef FILE_spectra_tree_Nova_AnnotationSearchResult_NOVA
#define FILE_spectra_tree_Nova_AnnotationSearchResult_NOVA

typedef struct spectra_tree_Nova_AnnotationSearchResult spectra_tree_Nova_AnnotationSearchResult;
typedef struct spectra_tree_Nova_AnnotationSearchResultFunctionMap spectra_tree_Nova_AnnotationSearchResultFunctionMap;
typedef struct spectra_tree_Nova_AnnotationSearchResultPropertyMap spectra_tree_Nova_AnnotationSearchResultPropertyMap;


#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
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
#include <spectra/tree/nodes/spectra_tree_nodes_Nova_Node.h>
#include <spectra/tree/nodes/annotations/spectra_tree_nodes_annotations_Nova_Annotation.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	spectra_tree_Nova_AnnotationSearchResult, 
	
	spectra_tree_AnnotationSearchResult_Extension_VTable* vtable;
	nova_datastruct_list_Nova_Array* spectra_tree_Nova_AnnotationSearchResult_Nova_annotations;
	nova_Nova_String* spectra_tree_Nova_AnnotationSearchResult_Nova_remainingStatement;
)

void spectra_tree_Nova_AnnotationSearchResult_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_Nova_AnnotationSearchResult* spectra_tree_Nova_AnnotationSearchResult_Nova_construct(spectra_tree_Nova_AnnotationSearchResult* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* remainingStatement);
void spectra_tree_Nova_AnnotationSearchResult_Nova_destroy(spectra_tree_Nova_AnnotationSearchResult** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_Nova_AnnotationSearchResult_Nova_this(spectra_tree_Nova_AnnotationSearchResult* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* remainingStatement);
nova_datastruct_list_Nova_Array* spectra_tree_Nova_AnnotationSearchResult_0_Nova_addTo(spectra_tree_Nova_AnnotationSearchResult* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_nodes_Nova_Node* node);
nova_datastruct_list_Nova_Array* spectra_tree_Nova_AnnotationSearchResult_1_Nova_addTo(spectra_tree_Nova_AnnotationSearchResult* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Stack* stack);
void spectra_tree_Nova_AnnotationSearchResult_Nova_super(spectra_tree_Nova_AnnotationSearchResult* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_tree_Nova_AnnotationSearchResultFunctionMap, 
	
	spectra_tree_AnnotationSearchResult_AnnotationSearchResultFunctionMap_Extension_VTable* vtable;
)

void spectra_tree_Nova_AnnotationSearchResultFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_Nova_AnnotationSearchResultFunctionMap* spectra_tree_Nova_AnnotationSearchResultFunctionMap_Nova_construct(spectra_tree_Nova_AnnotationSearchResultFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_Nova_AnnotationSearchResultFunctionMap_Nova_destroy(spectra_tree_Nova_AnnotationSearchResultFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_Nova_AnnotationSearchResultFunctionMap_Nova_this(spectra_tree_Nova_AnnotationSearchResultFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_Nova_AnnotationSearchResult* spectra_tree_Nova_AnnotationSearchResultFunctionMap_functionMapAnnotationSearchResultFunctionMap_Nova_construct(spectra_tree_Nova_AnnotationSearchResultFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* remainingStatement);
nova_datastruct_list_Nova_Array* spectra_tree_Nova_AnnotationSearchResultFunctionMap_functionMap0_Nova_addTo(spectra_tree_Nova_AnnotationSearchResultFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_AnnotationSearchResult* reference, spectra_tree_nodes_Nova_Node* node);
nova_datastruct_list_Nova_Array* spectra_tree_Nova_AnnotationSearchResultFunctionMap_functionMap1_Nova_addTo(spectra_tree_Nova_AnnotationSearchResultFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_AnnotationSearchResult* reference, nova_datastruct_list_Nova_Stack* stack);
void spectra_tree_Nova_AnnotationSearchResultFunctionMap_Nova_super(spectra_tree_Nova_AnnotationSearchResultFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_tree_Nova_AnnotationSearchResultPropertyMap, 
	
	spectra_tree_AnnotationSearchResult_AnnotationSearchResultPropertyMap_Extension_VTable* vtable;
)

void spectra_tree_Nova_AnnotationSearchResultPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_tree_Nova_AnnotationSearchResultPropertyMap* spectra_tree_Nova_AnnotationSearchResultPropertyMap_Nova_construct(spectra_tree_Nova_AnnotationSearchResultPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_Nova_AnnotationSearchResultPropertyMap_Nova_destroy(spectra_tree_Nova_AnnotationSearchResultPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_tree_Nova_AnnotationSearchResultPropertyMap_Nova_this(spectra_tree_Nova_AnnotationSearchResultPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* spectra_tree_Nova_AnnotationSearchResultPropertyMap_functionMap_Nova_annotations(spectra_tree_Nova_AnnotationSearchResultPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_AnnotationSearchResult* reference);
nova_Nova_String* spectra_tree_Nova_AnnotationSearchResultPropertyMap_functionMap_Nova_remainingStatement(spectra_tree_Nova_AnnotationSearchResultPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_tree_Nova_AnnotationSearchResult* reference);
void spectra_tree_Nova_AnnotationSearchResultPropertyMap_Nova_super(spectra_tree_Nova_AnnotationSearchResultPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
