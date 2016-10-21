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
#include <compiler/util/compiler_util_Nova_FileUtils.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_Compiler_Extension_VTable compiler_Compiler_Extension_VTable_val =
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
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};



void compiler_Nova_Compiler__func_Nova_testClasses(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated11(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value4, nova_Nova_String* value7, nova_Nova_String* value16);
char compiler_Nova_Compiler_Nova_DEBUG;
char compiler_Nova_Compiler_Nova_testClasses;
void compiler_Nova_Compiler_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		compiler_Nova_Compiler_Nova_DEBUG = 1;
		compiler_Nova_Compiler_Nova_testClasses = 1;
	}
}

compiler_Nova_Compiler* compiler_Nova_Compiler_Nova_construct(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(compiler_Nova_Compiler, this,);
	this->vtable = &compiler_Compiler_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_Nova_Compiler_Nova_super(this, exceptionData);
	
	{
		compiler_Nova_Compiler_Nova_this(this, exceptionData);
	}
	
	return this;
}

void compiler_Nova_Compiler_Nova_destroy(compiler_Nova_Compiler** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void compiler_Nova_Compiler_static_Nova_main(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	compiler_Nova_Compiler* l1_Nova_c = (compiler_Nova_Compiler*)nova_null;
	
	l1_Nova_c = compiler_Nova_Compiler_Nova_construct(0, exceptionData);
	compiler_Nova_Compiler_Nova_compile(l1_Nova_c, exceptionData, (nova_datastruct_list_Nova_Array*)((nova_Nova_Object*)nova_null));
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void compiler_Nova_Compiler_Nova_this(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void compiler_Nova_Compiler_Nova_compile(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	nova_Nova_String* l1_Nova_directory = (nova_Nova_String*)nova_null;
	
	l1_Nova_directory = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(compiler_util_Nova_FileUtils_static_Nova_getWorkingDirectoryPath(0, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/"))));
	if (compiler_Nova_Compiler_Nova_DEBUG)
	{
		nova_Nova_String* l1_Nova_target = (nova_Nova_String*)nova_null;
		
		compiler_Nova_Compiler__func_Nova_testClasses(this, exceptionData);
		l1_Nova_target = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("c"));
		args = generated11(this, exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../NovaCompilerOutput/")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l1_Nova_target)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../StandardLibrary/")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l1_Nova_target)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), l1_Nova_target);
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Args: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_datastruct_list_Nova_Array_Nova_toString((nova_datastruct_list_Nova_Array*)((args)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
	}
}

void compiler_Nova_Compiler__func_Nova_testClasses(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Array* generated11(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* value4, nova_Nova_String* value7, nova_Nova_String* value16)
{
	nova_Nova_String** l1_Nova_temp = (nova_Nova_String**)nova_null;
	
	l1_Nova_temp = (nova_Nova_String**)NOVA_MALLOC(sizeof(nova_Nova_String) * 17);
	l1_Nova_temp[0] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../Compiler"));
	l1_Nova_temp[1] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../Misc/example"));
	l1_Nova_temp[2] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("../Misc/stabilitytest"));
	l1_Nova_temp[3] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-output-directory"));
	l1_Nova_temp[4] = value4;
	l1_Nova_temp[5] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-package-output-directory"));
	l1_Nova_temp[6] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("nova"));
	l1_Nova_temp[7] = value7;
	l1_Nova_temp[8] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-formatc"));
	l1_Nova_temp[9] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-v"));
	l1_Nova_temp[10] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-single-thread"));
	l1_Nova_temp[11] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-single-file"));
	l1_Nova_temp[12] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-main"));
	l1_Nova_temp[13] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("compiler/Compiler"));
	l1_Nova_temp[14] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-no-optimize"));
	l1_Nova_temp[15] = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-target"));
	l1_Nova_temp[16] = value16;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 17);
}

void compiler_Nova_Compiler_Nova_super(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

