#pragma once
#ifndef FILE_compiler_util_Nova_FileUtils_NOVA
#define FILE_compiler_util_Nova_FileUtils_NOVA

typedef struct compiler_util_Nova_FileUtils compiler_util_Nova_FileUtils;


#include <Nova.h>
#include <InterfaceVTAble.h>
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
#include <compiler/util/compiler_util_Nova_OS.h>
#include <compiler/util/compiler_util_Nova_StringUtils.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct compiler_util_FileUtils_Extension_VTable compiler_util_FileUtils_Extension_VTable;
struct compiler_util_FileUtils_Extension_VTable
{
	nova_Interface_VTable itable;
	char (*nova_operators_Nova_Equals_virtual_Nova_equals)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
};

extern compiler_util_FileUtils_Extension_VTable compiler_util_FileUtils_Extension_VTable_val;


CCLASS_CLASS
(
	compiler_util_Nova_FileUtils, 
	
	compiler_util_FileUtils_Extension_VTable* vtable;
	nova_Nova_Class* nova_Nova_Object_Nova_class;
)

void compiler_util_Nova_FileUtils_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
compiler_util_Nova_FileUtils* compiler_util_Nova_FileUtils_Nova_construct(compiler_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_util_Nova_FileUtils_Nova_destroy(compiler_util_Nova_FileUtils** this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* compiler_util_Nova_FileUtils_static_Nova_formatPath(compiler_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* path);
nova_Nova_String* compiler_util_Nova_FileUtils_static_Nova_formAbsolutePath(compiler_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* path);
nova_Nova_String* compiler_util_Nova_FileUtils_static_Nova_escapeSpaces(compiler_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input);
nova_Nova_String* compiler_util_Nova_FileUtils_static_Nova_getWorkingDirectoryPath(compiler_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_util_Nova_FileUtils_Nova_this(compiler_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_util_Nova_FileUtils_Nova_super(compiler_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif