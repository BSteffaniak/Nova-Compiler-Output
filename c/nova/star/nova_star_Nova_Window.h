#ifndef FILE_nova_star_Nova_Window_NOVA
#define FILE_nova_star_Nova_Window_NOVA

typedef struct nova_star_Nova_Window nova_star_Nova_Window;
typedef struct nova_star_Nova_nova_star_WindowFunctionMap nova_star_Nova_nova_star_WindowFunctionMap;


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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/star/NativeWindow.h>
#include <nova/star/nova_star_Nova_WindowThread.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>

CCLASS_CLASS
(
	nova_star_Nova_Window, 
	
	nova_star_Window_Extension_VTable* vtable;
	int nova_star_Nova_Window_Nova_x;
	int nova_star_Nova_Window_Nova_y;
	int nova_star_Nova_Window_Nova_width;
	int nova_star_Nova_Window_Nova_height;
	nova_Nova_String* nova_star_Nova_Window_Nova_title;
)

void nova_star_Nova_Window_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_star_Nova_Window* nova_star_Nova_Window_Nova_construct(nova_star_Nova_Window* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* title, int x, int y, int width, int height);
void nova_star_Nova_Window_Nova_destroy(nova_star_Nova_Window** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_star_Nova_Window_Nova_this(nova_star_Nova_Window* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* title, int x, int y, int width, int height);
void nova_star_Nova_Window_Nova_create(nova_star_Nova_Window* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_star_Nova_Window_Nova_super(nova_star_Nova_Window* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_star_Nova_nova_star_WindowFunctionMap, 
	
	nova_star_Window_nova_star_WindowFunctionMap_Extension_VTable* vtable;
)

void nova_star_Nova_nova_star_WindowFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_star_Nova_nova_star_WindowFunctionMap* nova_star_Nova_nova_star_WindowFunctionMap_Nova_construct(nova_star_Nova_nova_star_WindowFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_star_Nova_nova_star_WindowFunctionMap_Nova_destroy(nova_star_Nova_nova_star_WindowFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_star_Nova_nova_star_WindowFunctionMap_Nova_this(nova_star_Nova_nova_star_WindowFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_star_Nova_nova_star_WindowFunctionMap_Nova_super(nova_star_Nova_nova_star_WindowFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
