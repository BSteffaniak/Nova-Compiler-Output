#ifndef FILE_nova_math_logic_Nova_WFF_NOVA
#define FILE_nova_math_logic_Nova_WFF_NOVA

typedef struct nova_math_logic_Nova_WFF nova_math_logic_Nova_WFF;
typedef struct nova_math_logic_Nova_WFFFunctionMap nova_math_logic_Nova_WFFFunctionMap;
typedef struct nova_math_logic_Nova_WFFPropertyMap nova_math_logic_Nova_WFFPropertyMap;


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
#include <nova/math/logic/nova_math_logic_Nova_Conclusion.h>
#include <nova/math/logic/nova_math_logic_Nova_Hypothesis.h>
#include <nova/math/logic/nova_math_logic_Nova_InvalidFormulaException.h>
#include <nova/math/logic/nova_math_logic_Nova_StatementGroup.h>
#include <nova/math/logic/nova_math_logic_Nova_StatementLetter.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_math_logic_Nova_WFF, 
	
	nova_math_logic_WFF_Extension_VTable* vtable;
	struct Private_nova_math_logic_Nova_WFF* prv;
)

void nova_math_logic_Nova_WFF_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_logic_Nova_WFF* nova_math_logic_Nova_WFF_Nova_construct(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, nova_datastruct_list_Nova_Array* letters);
void nova_math_logic_Nova_WFF_Nova_destroy(nova_math_logic_Nova_WFF** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_logic_Nova_WFF_Nova_this(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, nova_datastruct_list_Nova_Array* letters);
void nova_math_logic_Nova_WFF_Nova_super(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_math_logic_Nova_WFFFunctionMap, 
	
	nova_math_logic_WFF_WFFFunctionMap_Extension_VTable* vtable;
)

void nova_math_logic_Nova_WFFFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_logic_Nova_WFFFunctionMap* nova_math_logic_Nova_WFFFunctionMap_Nova_construct(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_logic_Nova_WFFFunctionMap_Nova_destroy(nova_math_logic_Nova_WFFFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_logic_Nova_WFFFunctionMap_Nova_this(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_math_logic_Nova_WFF* nova_math_logic_Nova_WFFFunctionMap_functionMapWFFFunctionMap_Nova_construct(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, nova_datastruct_list_Nova_Array* letters);
void nova_math_logic_Nova_WFFFunctionMap_Nova_super(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_math_logic_Nova_WFFPropertyMap, 
	
	nova_math_logic_WFF_WFFPropertyMap_Extension_VTable* vtable;
)

void nova_math_logic_Nova_WFFPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_logic_Nova_WFFPropertyMap* nova_math_logic_Nova_WFFPropertyMap_Nova_construct(nova_math_logic_Nova_WFFPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_logic_Nova_WFFPropertyMap_Nova_destroy(nova_math_logic_Nova_WFFPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_logic_Nova_WFFPropertyMap_Nova_this(nova_math_logic_Nova_WFFPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_logic_Nova_WFFPropertyMap_Nova_super(nova_math_logic_Nova_WFFPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
