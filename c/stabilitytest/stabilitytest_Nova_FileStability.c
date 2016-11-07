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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/io/nova_io_Nova_File.h>
#include <nova/io/nova_io_Nova_FileReader.h>
#include <nova/io/nova_io_Nova_FileWriter.h>
#include <nova/time/nova_time_Nova_Time.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



stabilitytest_FileStability_Extension_VTable stabilitytest_FileStability_Extension_VTable_val =
{
	0,
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
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	stabilitytest_Nova_FileStability_Nova_test,
};



void stabilitytest_Nova_FileStability_Nova_createFile(stabilitytest_Nova_FileStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* writer);
void stabilitytest_Nova_FileStability_Nova_writeToFile(stabilitytest_Nova_FileStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* writer);
void stabilitytest_Nova_FileStability_Nova_readFromFile(stabilitytest_Nova_FileStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileReader* reader);
void stabilitytest_Nova_FileStability_Nova_deleteFile(stabilitytest_Nova_FileStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* writer);
nova_Nova_String* stabilitytest_Nova_FileStability_Nova_inputString;
int stabilitytest_Nova_FileStability_Nova_lines;
void stabilitytest_Nova_FileStability_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_FileStability* stabilitytest_Nova_FileStability_Nova_construct(stabilitytest_Nova_FileStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	CCLASS_NEW(stabilitytest_Nova_FileStability, this,);
	this->vtable = &stabilitytest_FileStability_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
	stabilitytest_Nova_FileStability_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_FileStability_Nova_this(this, exceptionData, program);
	}
	
	return this;
}

void stabilitytest_Nova_FileStability_Nova_destroy(stabilitytest_Nova_FileStability** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_FileStability_Nova_this(stabilitytest_Nova_FileStability* this, nova_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* program)
{
	stabilitytest_Nova_StabilityTestCase_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, program);
}

void stabilitytest_Nova_FileStability_Nova_test(stabilitytest_Nova_FileStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Checking File IO...")));
	stabilitytest_Nova_FileStability_Nova_inputString = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("This is test input..."));
	stabilitytest_Nova_FileStability_Nova_lines = (int)(100);
	TRY
	{
		novaEnv.nova_exception_ExceptionData.addCode(exceptionData, exceptionData, 1);
		
		{
			nova_io_Nova_File* l1_Nova_f = (nova_io_Nova_File*)nova_null;
			nova_io_Nova_FileWriter* l1_Nova_writer = (nova_io_Nova_FileWriter*)nova_null;
			nova_io_Nova_FileReader* l1_Nova_reader = (nova_io_Nova_FileReader*)nova_null;
			
			l1_Nova_f = nova_io_Nova_File_1_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("temp"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_Time_Accessor_static_Nova_currentTimeMillis(0, exceptionData)))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
			l1_Nova_writer = nova_io_Nova_FileWriter_0_Nova_construct(0, exceptionData, l1_Nova_f);
			l1_Nova_reader = nova_io_Nova_FileReader_0_Nova_construct(0, exceptionData, l1_Nova_f);
			stabilitytest_Nova_FileStability_Nova_createFile(this, exceptionData, l1_Nova_writer);
			stabilitytest_Nova_FileStability_Nova_writeToFile(this, exceptionData, l1_Nova_writer);
			stabilitytest_Nova_FileStability_Nova_readFromFile(this, exceptionData, l1_Nova_reader);
			stabilitytest_Nova_FileStability_Nova_deleteFile(this, exceptionData, l1_Nova_writer);
		}
	}
	CATCH (1)
	{
		nova_exception_Nova_Exception* l2_Nova_e = (nova_exception_Nova_Exception*)nova_null;
		
		l2_Nova_e = (nova_exception_Nova_Exception*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed; Exception thrown")), (intptr_t)nova_null);
	}
	FINALLY
	{
	}
	END_TRY;
}

void stabilitytest_Nova_FileStability_Nova_createFile(stabilitytest_Nova_FileStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* writer)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Creating file... ")));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to create file")), !nova_io_Nova_FileWriter_Nova_create(writer, exceptionData));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_FileStability_Nova_writeToFile(stabilitytest_Nova_FileStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* writer)
{
	int l2_Nova_i = 0;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Writing "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (stabilitytest_Nova_FileStability_Nova_lines))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" lines of data to file... ")))));
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)stabilitytest_Nova_FileStability_Nova_lines; l2_Nova_i++)
	{
		nova_io_Nova_FileWriter_Nova_writeLine(writer, exceptionData, stabilitytest_Nova_FileStability_Nova_inputString);
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_FileStability_Nova_readFromFile(stabilitytest_Nova_FileStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileReader* reader)
{
	int l1_Nova_times = 0;
	nova_Nova_String* l1_Nova_line = (nova_Nova_String*)nova_null;
	
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Reading lines from file... ")));
	if (!nova_io_Nova_FileReader_Accessor_Nova_open(reader, exceptionData))
	{
		nova_io_Nova_FileReader_Nova_open(reader, exceptionData);
	}
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("File reader failed to open")), !nova_io_Nova_FileReader_Accessor_Nova_open(reader, exceptionData));
	l1_Nova_times = (int)(0);
	l1_Nova_line = nova_io_Nova_FileReader_Nova_readLine(reader, exceptionData);
	while (l1_Nova_line != (nova_Nova_String*)nova_null)
	{
		stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Reading from file failed: '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((l1_Nova_line)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' != '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((stabilitytest_Nova_FileStability_Nova_inputString)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'")))))), !nova_Nova_String_Nova_equals(l1_Nova_line, exceptionData, stabilitytest_Nova_FileStability_Nova_inputString));
		l1_Nova_line = nova_io_Nova_FileReader_Nova_readLine(reader, exceptionData);
		l1_Nova_times++;
	}
	nova_io_Nova_FileReader_Nova_close(reader, exceptionData);
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed; only read "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (l1_Nova_times))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/100 lines")))), l1_Nova_times != stabilitytest_Nova_FileStability_Nova_lines);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_FileStability_Nova_deleteFile(stabilitytest_Nova_FileStability* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* writer)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Deleting file... ")));
	stabilitytest_Nova_StabilityTest_Nova_fail(this->stabilitytest_Nova_StabilityTestCase_Nova_program, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to delete file")), !nova_io_Nova_FileWriter_Nova_delete(writer, exceptionData));
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("OK")));
}

void stabilitytest_Nova_FileStability_Nova_super(stabilitytest_Nova_FileStability* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

