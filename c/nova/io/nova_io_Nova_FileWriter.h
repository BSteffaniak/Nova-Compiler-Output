#ifndef FILE_nova_io_Nova_FileWriter_NOVA
#define FILE_nova_io_Nova_FileWriter_NOVA

typedef struct nova_io_Nova_FileWriter nova_io_Nova_FileWriter;
typedef struct nova_io_Nova_FileWriterFunctionMap nova_io_Nova_FileWriterFunctionMap;
typedef struct nova_io_Nova_FileWriterPropertyMap nova_io_Nova_FileWriterPropertyMap;


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
#include <nova/io/nova_io_Nova_File.h>
#include <nova/io/nova_io_Nova_FileNotFoundException.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <nova/NativeObject.h>

CCLASS_CLASS
(
	nova_io_Nova_FileWriter, 
	
	nova_io_FileWriter_Extension_VTable* vtable;
	nova_io_Nova_File* nova_io_Nova_FileWriter_Nova_file;
	struct Private_nova_io_Nova_FileWriter* prv;
)

void nova_io_Nova_FileWriter_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_io_Nova_FileWriter* nova_io_Nova_FileWriter_0_Nova_construct(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file);
nova_io_Nova_FileWriter* nova_io_Nova_FileWriter_1_Nova_construct(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location);
void nova_io_Nova_FileWriter_Nova_destroy(nova_io_Nova_FileWriter** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_FileWriter_0_Nova_this(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file);
void nova_io_Nova_FileWriter_1_Nova_this(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location);
char nova_io_Nova_FileWriter_Nova_delete(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_io_Nova_FileWriter_Nova_reopen(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_FileWriter_Nova_rewind(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_io_Nova_FileWriter_Nova_clearContents(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_io_Nova_FileWriter_Nova_create(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_io_Nova_FileWriter_Nova_writeLine(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* line);
char nova_io_Nova_FileWriter_Nova_write(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* data);
char nova_io_Nova_FileWriter_Nova_flush(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_io_Nova_FileWriter_Nova_close(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_io_Nova_FileWriter_Accessor_Nova_isOpen(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_FileWriter_Nova_super(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_io_Nova_FileWriterFunctionMap, 
	
	nova_io_FileWriter_FileWriterFunctionMap_Extension_VTable* vtable;
)

void nova_io_Nova_FileWriterFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_io_Nova_FileWriterFunctionMap* nova_io_Nova_FileWriterFunctionMap_Nova_construct(nova_io_Nova_FileWriterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_FileWriterFunctionMap_Nova_destroy(nova_io_Nova_FileWriterFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_FileWriterFunctionMap_Nova_this(nova_io_Nova_FileWriterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_io_Nova_FileWriter* nova_io_Nova_FileWriterFunctionMap_functionMapFileWriterFunctionMap0_Nova_construct(nova_io_Nova_FileWriterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file);
nova_io_Nova_FileWriter* nova_io_Nova_FileWriterFunctionMap_functionMapFileWriterFunctionMap1_Nova_construct(nova_io_Nova_FileWriterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location);
char nova_io_Nova_FileWriterFunctionMap_functionMap_Nova_delete(nova_io_Nova_FileWriterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* reference);
char nova_io_Nova_FileWriterFunctionMap_functionMap_Nova_reopen(nova_io_Nova_FileWriterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* reference);
void nova_io_Nova_FileWriterFunctionMap_functionMap_Nova_rewind(nova_io_Nova_FileWriterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* reference);
char nova_io_Nova_FileWriterFunctionMap_functionMap_Nova_clearContents(nova_io_Nova_FileWriterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* reference);
char nova_io_Nova_FileWriterFunctionMap_functionMap_Nova_create(nova_io_Nova_FileWriterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* reference);
char nova_io_Nova_FileWriterFunctionMap_functionMap_Nova_writeLine(nova_io_Nova_FileWriterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* reference, nova_Nova_String* line);
char nova_io_Nova_FileWriterFunctionMap_functionMap_Nova_write(nova_io_Nova_FileWriterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* reference, nova_Nova_String* data);
char nova_io_Nova_FileWriterFunctionMap_functionMap_Nova_flush(nova_io_Nova_FileWriterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* reference);
char nova_io_Nova_FileWriterFunctionMap_functionMap_Nova_close(nova_io_Nova_FileWriterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* reference);
void nova_io_Nova_FileWriterFunctionMap_Nova_super(nova_io_Nova_FileWriterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData);

CCLASS_CLASS
(
	nova_io_Nova_FileWriterPropertyMap, 
	
	nova_io_FileWriter_FileWriterPropertyMap_Extension_VTable* vtable;
)

void nova_io_Nova_FileWriterPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_io_Nova_FileWriterPropertyMap* nova_io_Nova_FileWriterPropertyMap_Nova_construct(nova_io_Nova_FileWriterPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_FileWriterPropertyMap_Nova_destroy(nova_io_Nova_FileWriterPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_FileWriterPropertyMap_Nova_this(nova_io_Nova_FileWriterPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_io_Nova_File* nova_io_Nova_FileWriterPropertyMap_functionMap_Nova_file(nova_io_Nova_FileWriterPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* reference);
char nova_io_Nova_FileWriterPropertyMap_functionMap_Nova_isOpen(nova_io_Nova_FileWriterPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* reference);
void nova_io_Nova_FileWriterPropertyMap_Nova_super(nova_io_Nova_FileWriterPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
