#ifndef FILE_spectra_util_Nova_Location_NOVA
#define FILE_spectra_util_Nova_Location_NOVA

typedef struct spectra_util_Nova_Location spectra_util_Nova_Location;
typedef struct spectra_util_Nova_LocationFunctionMap spectra_util_Nova_LocationFunctionMap;
typedef struct spectra_util_Nova_LocationPropertyMap spectra_util_Nova_LocationPropertyMap;


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
#include <nova/datastruct/nova_datastruct_Nova_Bounds.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	spectra_util_Nova_Location, 
	
	spectra_util_Location_Extension_VTable* vtable;
	int spectra_util_Nova_Location_Nova_lineNumber;
	int spectra_util_Nova_Location_Nova_offset;
	nova_datastruct_Nova_Bounds* spectra_util_Nova_Location_Nova_bounds;
)
extern spectra_util_Nova_Location* spectra_util_Nova_Location_Nova_INVALID;

void spectra_util_Nova_Location_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_Location* spectra_util_Nova_Location_0_Nova_construct(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_Location* spectra_util_Nova_Location_1_Nova_construct(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* loc);
spectra_util_Nova_Location* spectra_util_Nova_Location_2_Nova_construct(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int lineNumber, int offset, int start, int end);
void spectra_util_Nova_Location_Nova_destroy(spectra_util_Nova_Location** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_Location_Nova_this(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_Location_0_Nova_this(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* loc);
void spectra_util_Nova_Location_1_Nova_this(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int lineNumber, int offset, int start, int end);
void spectra_util_Nova_Location_Nova_setLineNumber(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int lineNumber);
int spectra_util_Nova_Location_Nova_getStart(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);
int spectra_util_Nova_Location_Nova_getEnd(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_Location_Nova_setOffset(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int offset);
void spectra_util_Nova_Location_Nova_addOffset(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount);
void spectra_util_Nova_Location_Nova_subtractOffset(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount);
void spectra_util_Nova_Location_0_Nova_setBounds(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* bounds);
void spectra_util_Nova_Location_1_Nova_setBounds(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end);
void spectra_util_Nova_Location_0_Nova_addBounds(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount);
void spectra_util_Nova_Location_Nova_moveBounds(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int startAmount, int endAmount);
void spectra_util_Nova_Location_0_Nova_subtractBounds(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int startAmount, int endAmount);
void spectra_util_Nova_Location_1_Nova_subtractBounds(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int amount);
void spectra_util_Nova_Location_1_Nova_addBounds(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData, int startAmount, int endAmount);
char spectra_util_Nova_Location_Nova_isValid(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_Location* spectra_util_Nova_Location_Nova_asNew(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* spectra_util_Nova_Location_Nova_toString(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_Location_Nova_super(spectra_util_Nova_Location* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_util_Nova_LocationFunctionMap, 
	
	spectra_util_Location_LocationFunctionMap_Extension_VTable* vtable;
)

void spectra_util_Nova_LocationFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_LocationFunctionMap* spectra_util_Nova_LocationFunctionMap_Nova_construct(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_LocationFunctionMap_Nova_destroy(spectra_util_Nova_LocationFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_LocationFunctionMap_Nova_this(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_Location* spectra_util_Nova_LocationFunctionMap_functionMapLocationFunctionMap0_Nova_construct(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_Location* spectra_util_Nova_LocationFunctionMap_functionMapLocationFunctionMap1_Nova_construct(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* loc);
spectra_util_Nova_Location* spectra_util_Nova_LocationFunctionMap_functionMapLocationFunctionMap2_Nova_construct(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, int lineNumber, int offset, int start, int end);
void spectra_util_Nova_LocationFunctionMap_functionMap_Nova_setLineNumber(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int lineNumber);
int spectra_util_Nova_LocationFunctionMap_functionMap_Nova_getStart(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference);
int spectra_util_Nova_LocationFunctionMap_functionMap_Nova_getEnd(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference);
void spectra_util_Nova_LocationFunctionMap_functionMap_Nova_setOffset(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int offset);
void spectra_util_Nova_LocationFunctionMap_functionMap_Nova_addOffset(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int amount);
void spectra_util_Nova_LocationFunctionMap_functionMap_Nova_subtractOffset(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int amount);
void spectra_util_Nova_LocationFunctionMap_functionMap0_Nova_setBounds(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, nova_datastruct_Nova_Bounds* bounds);
void spectra_util_Nova_LocationFunctionMap_functionMap1_Nova_setBounds(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int start, int end);
void spectra_util_Nova_LocationFunctionMap_functionMap0_Nova_addBounds(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int amount);
void spectra_util_Nova_LocationFunctionMap_functionMap_Nova_moveBounds(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int startAmount, int endAmount);
void spectra_util_Nova_LocationFunctionMap_functionMap0_Nova_subtractBounds(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int startAmount, int endAmount);
void spectra_util_Nova_LocationFunctionMap_functionMap1_Nova_subtractBounds(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int amount);
void spectra_util_Nova_LocationFunctionMap_functionMap1_Nova_addBounds(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference, int startAmount, int endAmount);
char spectra_util_Nova_LocationFunctionMap_functionMap_Nova_isValid(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference);
spectra_util_Nova_Location* spectra_util_Nova_LocationFunctionMap_functionMap_Nova_asNew(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference);
nova_Nova_String* spectra_util_Nova_LocationFunctionMap_functionMap_Nova_toString(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference);
void spectra_util_Nova_LocationFunctionMap_Nova_super(spectra_util_Nova_LocationFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	spectra_util_Nova_LocationPropertyMap, 
	
	spectra_util_Location_LocationPropertyMap_Extension_VTable* vtable;
)

void spectra_util_Nova_LocationPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
spectra_util_Nova_LocationPropertyMap* spectra_util_Nova_LocationPropertyMap_Nova_construct(spectra_util_Nova_LocationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_LocationPropertyMap_Nova_destroy(spectra_util_Nova_LocationPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_LocationPropertyMap_Nova_this(spectra_util_Nova_LocationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
int spectra_util_Nova_LocationPropertyMap_functionMap_Nova_lineNumber(spectra_util_Nova_LocationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference);
int spectra_util_Nova_LocationPropertyMap_functionMap_Nova_offset(spectra_util_Nova_LocationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference);
nova_datastruct_Nova_Bounds* spectra_util_Nova_LocationPropertyMap_functionMap_Nova_bounds(spectra_util_Nova_LocationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, spectra_util_Nova_Location* reference);
spectra_util_Nova_Location* spectra_util_Nova_LocationPropertyMap_functionMap_static_Nova_INVALID(spectra_util_Nova_LocationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void spectra_util_Nova_LocationPropertyMap_Nova_super(spectra_util_Nova_LocationPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
