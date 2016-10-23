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
#include <compiler/util/compiler_util_Nova_OS.h>
#include <compiler/util/compiler_util_Nova_StringUtils.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_util_FileUtils_Extension_VTable compiler_util_FileUtils_Extension_VTable_val =
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
		0,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


void compiler_util_Nova_FileUtils_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

compiler_util_Nova_FileUtils* compiler_util_Nova_FileUtils_Nova_construct(compiler_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(compiler_util_Nova_FileUtils, this,);
	this->vtable = &compiler_util_FileUtils_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_util_Nova_FileUtils_Nova_super(this, exceptionData);
	
	{
		compiler_util_Nova_FileUtils_Nova_this(this, exceptionData);
	}
	
	return this;
}

void compiler_util_Nova_FileUtils_Nova_destroy(compiler_util_Nova_FileUtils** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

nova_Nova_String* compiler_util_Nova_FileUtils_static_Nova_formatPath(compiler_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* path)
{
	path = nova_Nova_String_1_Nova_replace(path, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\\")), nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/")));
	path = compiler_util_Nova_FileUtils_static_Nova_formAbsolutePath(0, exceptionData, path);
	if (compiler_util_Nova_OS_Accessor_static_Nova_isWindows(0, exceptionData))
	{
		path = compiler_util_Nova_StringUtils_static_Nova_removeSurroundingQuotes(0, exceptionData, path);
		return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, '"')), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(path), exceptionData, nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, '"')));
	}
	else
	{
		return compiler_util_Nova_FileUtils_static_Nova_escapeSpaces(0, exceptionData, path);
	}
}

nova_Nova_String* compiler_util_Nova_FileUtils_static_Nova_formAbsolutePath(compiler_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* path)
{
	return path;
}

nova_Nova_String* compiler_util_Nova_FileUtils_static_Nova_escapeSpaces(compiler_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* input)
{
	return input;
}

nova_Nova_String* compiler_util_Nova_FileUtils_static_Nova_getWorkingDirectoryPath(compiler_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
}

void compiler_util_Nova_FileUtils_Nova_this(compiler_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void compiler_util_Nova_FileUtils_Nova_super(compiler_util_Nova_FileUtils* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}
