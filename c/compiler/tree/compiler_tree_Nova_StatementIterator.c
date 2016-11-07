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
#include <nova/datastruct/list/nova_datastruct_list_Nova_NoSuchElementException.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



compiler_tree_StatementIterator_Extension_VTable compiler_tree_StatementIterator_Extension_VTable_val =
{
	0,
	{
		0,
		0,
		(nova_datastruct_list_Nova_Iterator*(*)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*))compiler_tree_Nova_StatementIterator_Nova_reset,
		(char(*)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*))compiler_tree_Nova_StatementIterator_Accessor_Nova_hasNext,
		(nova_Nova_Object*(*)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*))compiler_tree_Nova_StatementIterator_Accessor_Nova_next,
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
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};



void compiler_tree_Nova_StatementIterator_Nova_updateScopeProperties(compiler_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_CharArray* generated10(compiler_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData);


nova_datastruct_list_Nova_CharArray* compiler_tree_Nova_StatementIterator_Nova_NON_STATEMENT_CHARS;
void compiler_tree_Nova_StatementIterator_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		compiler_tree_Nova_StatementIterator_Nova_NON_STATEMENT_CHARS = generated10(0, exceptionData);
	}
}

compiler_tree_Nova_StatementIterator* compiler_tree_Nova_StatementIterator_Nova_construct(compiler_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	CCLASS_NEW(compiler_tree_Nova_StatementIterator, this,);
	this->vtable = &compiler_tree_StatementIterator_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	compiler_tree_Nova_StatementIterator_Nova_super(this, exceptionData);
	
	{
		compiler_tree_Nova_StatementIterator_Nova_this(this, exceptionData, source);
	}
	
	return this;
}

void compiler_tree_Nova_StatementIterator_Nova_destroy(compiler_tree_Nova_StatementIterator** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->compiler_tree_Nova_StatementIterator_Nova_source, exceptionData);
	
	
	
	
	
	NOVA_FREE(*this);
}

void compiler_tree_Nova_StatementIterator_Nova_updateScopeProperties(compiler_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_nextIndex = 0;
	char l1_Nova_nextChar = 0;
	int l1_Nova_afterIndex = 0;
	char l1_Nova_charAfter = 0;
	
	l1_Nova_nextIndex = compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this->compiler_tree_Nova_StatementIterator_Nova_source, exceptionData, this->compiler_tree_Nova_StatementIterator_Nova_position, (intptr_t)nova_null, (intptr_t)nova_null);
	l1_Nova_nextChar = nova_Nova_String_Nova_get(this->compiler_tree_Nova_StatementIterator_Nova_source, exceptionData, l1_Nova_nextIndex);
	l1_Nova_afterIndex = compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this->compiler_tree_Nova_StatementIterator_Nova_source, exceptionData, l1_Nova_nextIndex + 1, (intptr_t)nova_null, (intptr_t)nova_null);
	l1_Nova_charAfter = nova_Nova_String_Nova_get(this->compiler_tree_Nova_StatementIterator_Nova_source, exceptionData, l1_Nova_afterIndex);
	this->compiler_tree_Nova_StatementIterator_Nova_beginsScope = this->compiler_tree_Nova_StatementIterator_Nova_position < this->compiler_tree_Nova_StatementIterator_Nova_source->nova_Nova_String_Nova_count && l1_Nova_nextChar == '{';
	this->compiler_tree_Nova_StatementIterator_Nova_endsScope = this->compiler_tree_Nova_StatementIterator_Nova_position < this->compiler_tree_Nova_StatementIterator_Nova_source->nova_Nova_String_Nova_count && l1_Nova_nextChar == '}';
	this->compiler_tree_Nova_StatementIterator_Nova_scopesEnded = (int)(0);
	if (!this->compiler_tree_Nova_StatementIterator_Nova_endsScope && l1_Nova_charAfter == '}')
{
	this->compiler_tree_Nova_StatementIterator_Nova_endsScope = 1;
	this->compiler_tree_Nova_StatementIterator_Nova_position = l1_Nova_afterIndex;
}
if (this->compiler_tree_Nova_StatementIterator_Nova_endsScope)
{
	int l2_Nova_current = 0;
	
	l2_Nova_current = compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this->compiler_tree_Nova_StatementIterator_Nova_source, exceptionData, this->compiler_tree_Nova_StatementIterator_Nova_position, (intptr_t)nova_null, (intptr_t)nova_null);
	while (l2_Nova_current > 0 && nova_Nova_String_Nova_get(this->compiler_tree_Nova_StatementIterator_Nova_source, exceptionData, l2_Nova_current) == '}')
{
	this->compiler_tree_Nova_StatementIterator_Nova_scopesEnded++;
	l2_Nova_current = compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this->compiler_tree_Nova_StatementIterator_Nova_source, exceptionData, l2_Nova_current + 1, (intptr_t)nova_null, (intptr_t)nova_null);
}
this->compiler_tree_Nova_StatementIterator_Nova_position = (int)(l2_Nova_current < 0 ? this->compiler_tree_Nova_StatementIterator_Nova_source->nova_Nova_String_Nova_count : l2_Nova_current);}
else
{
	this->compiler_tree_Nova_StatementIterator_Nova_position++;
}}

void compiler_tree_Nova_StatementIterator_Nova_this(compiler_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	this->compiler_tree_Nova_StatementIterator_Nova_source = nova_Nova_String_Nova_trim(source, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
	compiler_tree_Nova_StatementIterator_Nova_reset(this, exceptionData);
}

compiler_tree_Nova_StatementIterator* compiler_tree_Nova_StatementIterator_Nova_reset(compiler_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_Nova_StatementIterator_Nova_position = (int)(0);
	return this;
}

nova_datastruct_list_Nova_CharArray* generated10(compiler_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	char* l1_Nova_temp = (char*)nova_null;
	
	l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 5);
	l1_Nova_temp[0] = ' ';
	l1_Nova_temp[1] = '\n';
	l1_Nova_temp[2] = '\t';
	l1_Nova_temp[3] = '\r';
l1_Nova_temp[4] = '}';
return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 5);}

char compiler_tree_Nova_StatementIterator_Accessor_Nova_hasNext(compiler_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (this->compiler_tree_Nova_StatementIterator_Nova_source->nova_Nova_String_Nova_count > this->compiler_tree_Nova_StatementIterator_Nova_position)
	{
		int l4_Nova_i = 0;
		
		l4_Nova_i = (int)this->compiler_tree_Nova_StatementIterator_Nova_position;
		for (; l4_Nova_i < (int)this->compiler_tree_Nova_StatementIterator_Nova_source->nova_Nova_String_Nova_count; l4_Nova_i++)
		{
			if (!nova_datastruct_list_Nova_CharArray_Nova_contains(compiler_tree_Nova_StatementIterator_Nova_NON_STATEMENT_CHARS, exceptionData, nova_Nova_String_Nova_get(this->compiler_tree_Nova_StatementIterator_Nova_source, exceptionData, l4_Nova_i)))
			{
				return 1;
			}
		}
	}
	return 0;
}


nova_Nova_String* compiler_tree_Nova_StatementIterator_Accessor_Nova_next(compiler_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (compiler_tree_Nova_StatementIterator_Accessor_Nova_hasNext(this, exceptionData))
	{
		int l2_Nova_prev = 0;
		int l2_Nova_end = 0;
		
		l2_Nova_prev = this->compiler_tree_Nova_StatementIterator_Nova_position;
		this->compiler_tree_Nova_StatementIterator_Nova_position = compiler_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex(this->compiler_tree_Nova_StatementIterator_Nova_source, exceptionData, this->compiler_tree_Nova_StatementIterator_Nova_position, (intptr_t)nova_null, (intptr_t)nova_null);
		this->compiler_tree_Nova_StatementIterator_Nova_position = compiler_util_Nova_CompilerStringFunctions_Nova_calculateStatementEnd(this->compiler_tree_Nova_StatementIterator_Nova_source, exceptionData, this->compiler_tree_Nova_StatementIterator_Nova_position, (intptr_t)nova_null);
		this->compiler_tree_Nova_StatementIterator_Nova_position = (int)(this->compiler_tree_Nova_StatementIterator_Nova_position < 0 ? this->compiler_tree_Nova_StatementIterator_Nova_source->nova_Nova_String_Nova_count : this->compiler_tree_Nova_StatementIterator_Nova_position);
		l2_Nova_end = this->compiler_tree_Nova_StatementIterator_Nova_position;
		compiler_tree_Nova_StatementIterator_Nova_updateScopeProperties(this, exceptionData);
		return nova_Nova_String_Nova_trim(nova_Nova_String_Nova_substring(this->compiler_tree_Nova_StatementIterator_Nova_source, exceptionData, l2_Nova_prev, l2_Nova_end), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
	}
	THROW(3, nova_datastruct_list_Nova_NoSuchElementException_Nova_construct(0, exceptionData, 0));
	return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
}


void compiler_tree_Nova_StatementIterator_Nova_super(compiler_tree_Nova_StatementIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->compiler_tree_Nova_StatementIterator_Nova_source = (nova_Nova_String*)nova_null;
	this->compiler_tree_Nova_StatementIterator_Nova_beginsScope = 0;
	this->compiler_tree_Nova_StatementIterator_Nova_endsScope = 0;
	this->compiler_tree_Nova_StatementIterator_Nova_scopesEnded = 0;
	this->compiler_tree_Nova_StatementIterator_Nova_position = 0;
}

