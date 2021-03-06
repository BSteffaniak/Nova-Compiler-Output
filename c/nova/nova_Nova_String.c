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
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_StringCharArray.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/regex/nova_regex_Nova_Regex.h>
#include <nova/regex/nova_regex_Nova_Match.h>
#include <nova/nova_Nova_Substring.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/operators/nova_operators_Nova_PlusOperator.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/operators/nova_operators_Nova_MultiplyOperator.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context0;
typedef struct
{
	/* var
	String output */ nova_Nova_String** nova_Nova_String_Nova_output;
	/* var
	Int offset */ int* nova_Nova_String_Nova_offset;
	/* let String replace */ nova_Nova_String** nova_Nova_String_Nova_replace;
} Context76;
typedef struct
{
	/* let
	Array<String> strs */ nova_datastruct_list_Nova_Array** nova_Nova_String_Nova_strs;
	/* let
	Int start */ int* nova_Nova_String_Nova_start;
} Context77;



int nova_Nova_String_Nova_calculateSize(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char* chars);
nova_Nova_String* nova_Nova_String_Nova_lambda1(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context0* context);
nova_datastruct_list_Nova_CharArray* generated19(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_Nova_String_Nova_lambda77(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* match, int _2, nova_datastruct_list_Nova_Array* _3, Context76* context);
void nova_Nova_String_Nova_lambda78(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* match, int _2, nova_datastruct_list_Nova_Array* _3, Context77* context);



nova_datastruct_list_Nova_CharArray* nova_Nova_String_Nova_WHITESPACE;
void nova_Nova_String_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		nova_Nova_String_Nova_WHITESPACE = generated19(0, exceptionData);
	}
}

nova_Nova_String* nova_Nova_String_0_Nova_construct(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	CCLASS_NEW(nova_Nova_String, this,);
	this->vtable = &nova_String_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_Nova_String_Nova_super(this, exceptionData);
	
	{
		nova_Nova_String_0_Nova_this(this, exceptionData, c);
	}
	
	return this;
}

nova_Nova_String* nova_Nova_String_1_Nova_construct(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char* chars)
{
	CCLASS_NEW(nova_Nova_String, this,);
	this->vtable = &nova_String_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_Nova_String_Nova_super(this, exceptionData);
	
	{
		nova_Nova_String_1_Nova_this(this, exceptionData, chars);
	}
	
	return this;
}

nova_Nova_String* nova_Nova_String_2_Nova_construct(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char* chars, int count)
{
	CCLASS_NEW(nova_Nova_String, this,);
	this->vtable = &nova_String_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_Nova_String_Nova_super(this, exceptionData);
	
	{
		nova_Nova_String_2_Nova_this(this, exceptionData, chars, count);
	}
	
	return this;
}

nova_Nova_String* nova_Nova_String_3_Nova_construct(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* chars)
{
	CCLASS_NEW(nova_Nova_String, this,);
	this->vtable = &nova_String_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_Nova_String_Nova_super(this, exceptionData);
	
	{
		nova_Nova_String_3_Nova_this(this, exceptionData, chars);
	}
	
	return this;
}

void nova_Nova_String_Nova_destroy(nova_Nova_String** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	nova_datastruct_list_Nova_StringCharArray_Nova_destroy(&(*this)->nova_Nova_String_Nova_chars, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_Nova_String_0_Nova_this(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	char* l1_Nova_chars = (char*)nova_null;
	
	l1_Nova_chars = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 2);
	l1_Nova_chars[0] = c;
	l1_Nova_chars[1] = '\0';
	nova_Nova_String_1_Nova_this(this, exceptionData, l1_Nova_chars);
}

void nova_Nova_String_1_Nova_this(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char* chars)
{
	this->nova_Nova_String_Nova_count = nova_Nova_String_Nova_calculateSize(this, exceptionData, chars);
	if (chars[this->nova_Nova_String_Nova_count] != '\0')
	{
		chars[this->nova_Nova_String_Nova_count] = '\0';
	}
	nova_Nova_String_2_Nova_this(this, exceptionData, chars, this->nova_Nova_String_Nova_count);
}

void nova_Nova_String_2_Nova_this(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char* chars, int count)
{
	this->nova_Nova_String_Nova_count = count;
	this->nova_Nova_String_Nova_chars = nova_datastruct_list_Nova_StringCharArray_1_Nova_construct(0, exceptionData, chars, count);
}

void nova_Nova_String_3_Nova_this(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* chars)
{
	this->nova_Nova_String_Nova_count = (int)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(chars), exceptionData));
	this->nova_Nova_String_Nova_chars = nova_datastruct_list_Nova_StringCharArray_0_Nova_construct(0, exceptionData, chars);
}

int nova_Nova_String_Nova_calculateSize(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char* chars)
{
	return strlen(chars);
	
}

nova_Nova_String* nova_Nova_String_Nova_concat(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str)
{
	int l1_Nova_sz = 0;
	char* l1_Nova_data1 = (char*)nova_null;
	char* l1_Nova_data2 = (char*)nova_null;
	char* l1_Nova_newData = (char*)nova_null;
	
	if (str->nova_Nova_String_Nova_count == 0)
	{
		return this;
	}
	l1_Nova_sz = str->nova_Nova_String_Nova_count + this->nova_Nova_String_Nova_count + 1;
	l1_Nova_data1 = (char*)(this->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data);
	l1_Nova_data2 = (char*)(str->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data);
	if (nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(this->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(nova_Substring_Extension_VTable_val.classInstance)))
	{
		char* c = malloc(this->nova_Nova_String_Nova_count);
		memcpy(c, l1_Nova_data1, this->nova_Nova_String_Nova_count);
		l1_Nova_data1 = c;
	}
	if (nova_meta_Nova_Class_Nova_isOfType((nova_meta_Nova_Class*)(str->vtable->classInstance), exceptionData, (nova_meta_Nova_Class*)(nova_Substring_Extension_VTable_val.classInstance)))
	{
		char* c = malloc(str->nova_Nova_String_Nova_count);
		memcpy(c, l1_Nova_data2, str->nova_Nova_String_Nova_count);
		l1_Nova_data2 = c;
	}
	l1_Nova_newData = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * l1_Nova_sz);
	strncpy(l1_Nova_newData, l1_Nova_data1, this->nova_Nova_String_Nova_count);
	strncat(l1_Nova_newData, l1_Nova_data2, str->nova_Nova_String_Nova_count);
	l1_Nova_newData[l1_Nova_sz - 1] = '\0';
	return nova_Nova_String_2_Nova_construct(0, exceptionData, l1_Nova_newData, l1_Nova_sz - 1);
}

nova_Nova_String* nova_Nova_String_Nova_plus(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* another)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(this), exceptionData, another);
}

nova_Nova_String* nova_Nova_String_Nova_multiply(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int times)
{
	return nova_Nova_String_Nova_repeat(this, exceptionData, times);
}

nova_Nova_String* nova_Nova_String_Nova_repeat(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int times)
{
	Context0* contextArg1 = NOVA_MALLOC(sizeof(Context0));
	
	return nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, times, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_Array_closure104_Nova_mapFunc)&nova_Nova_String_Nova_lambda1, this, contextArg1)), exceptionData, 0);
}

char nova_Nova_String_Nova_equals(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* other)
{
	return (other) != (nova_Nova_String*)nova_null && this->nova_Nova_String_Nova_count == other->nova_Nova_String_Nova_count && nova_Nova_String_Nova_compareTo(this, exceptionData, other) == 0;
}

nova_Nova_String* nova_Nova_String_0_Nova_replace(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* pattern, nova_Nova_String* replace)
{
	nova_Nova_String* l1_Nova_output = (nova_Nova_String*)nova_null;
	int l1_Nova_offset = 0;
	Context76* contextArg77 = NOVA_MALLOC(sizeof(Context76));
	contextArg77->nova_Nova_String_Nova_output = &l1_Nova_output;
	contextArg77->nova_Nova_String_Nova_offset = &l1_Nova_offset;
	contextArg77->nova_Nova_String_Nova_replace = &replace;
	
	l1_Nova_output = this;
	l1_Nova_offset = (int)(0);
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_regex_Nova_Regex_static_Nova_getMatches(0, exceptionData, pattern->nova_regex_Nova_Pattern_Nova_pattern, this)), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&nova_Nova_String_Nova_lambda77, this, contextArg77);
	return l1_Nova_output;
}

nova_Nova_String* nova_Nova_String_1_Nova_replace(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search, nova_Nova_String* replace)
{
	nova_Nova_String* l1_Nova_output = (nova_Nova_String*)nova_null;
	int l1_Nova_index = 0;
	
	l1_Nova_output = this;
	l1_Nova_index = (int)(0);
	while ((l1_Nova_index = nova_Nova_String_2_Nova_indexOf(l1_Nova_output, exceptionData, search, (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null)) >= 0)
	{
		l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l1_Nova_output), exceptionData, 0, l1_Nova_index), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(replace, exceptionData, nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(l1_Nova_output), exceptionData, l1_Nova_index + search->nova_Nova_String_Nova_count, (intptr_t)nova_null)))));
	}
	return l1_Nova_output;
}

char nova_Nova_String_0_Nova_startsWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char search)
{
	return nova_Nova_String_1_Nova_indexOf(this, exceptionData, search, (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null) == 0;
}

char nova_Nova_String_1_Nova_startsWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search)
{
	return nova_Nova_String_2_Nova_indexOf(this, exceptionData, search, (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null) == 0;
}

char nova_Nova_String_2_Nova_startsWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* search)
{
	return nova_Nova_String_0_Nova_indexOf(this, exceptionData, search, (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null) == 0;
}

char nova_Nova_String_0_Nova_contains(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search)
{
	return nova_Nova_String_2_Nova_indexOf(this, exceptionData, search, (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null) >= 0;
}

char nova_Nova_String_1_Nova_contains(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* search)
{
	return nova_Nova_String_0_Nova_indexOf(this, exceptionData, search, (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null) >= 0;
}

char nova_Nova_String_0_Nova_endsWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search)
{
	return this->nova_Nova_String_Nova_count > 0 && nova_Nova_String_2_Nova_indexOf(this, exceptionData, search, (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null) == this->nova_Nova_String_Nova_count - search->nova_Nova_String_Nova_count;
}

char nova_Nova_String_1_Nova_endsWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* search)
{
	return this->nova_Nova_String_Nova_count > 0 && nova_Nova_String_0_Nova_indexOf(this, exceptionData, search, (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null) == this->nova_Nova_String_Nova_count - search->nova_regex_Nova_Pattern_Nova_pattern->nova_Nova_String_Nova_count;
}

char nova_Nova_String_Nova_matches(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* pattern)
{
	nova_datastruct_list_Nova_Array* l1_Nova_matches = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_matches = nova_regex_Nova_Regex_0_static_Nova_getMatches(0, exceptionData, pattern, this);
	return nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_matches), exceptionData) == 1 && (int)(((nova_regex_Nova_Match*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_matches), exceptionData, 0))->nova_regex_Nova_Match_Nova_start) == 0 && (int)(((nova_regex_Nova_Match*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_matches), exceptionData, 0))->nova_regex_Nova_Match_Nova_end) == this->nova_Nova_String_Nova_count;
}

int nova_Nova_String_0_Nova_indexOf(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* search, int start, int direction, int defaultReturnValue)
{
	nova_regex_Nova_Match* l1_Nova_first = (nova_regex_Nova_Match*)nova_null;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	l1_Nova_first = (nova_regex_Nova_Match*)(nova_datastruct_list_Nova_List_virtual_Accessor_Nova_first((nova_datastruct_list_Nova_List*)(nova_regex_Nova_Regex_0_static_Nova_getMatches(0, exceptionData, search, this)), exceptionData));
	if ((l1_Nova_first) != (nova_regex_Nova_Match*)nova_null)
	{
		return l1_Nova_first->nova_regex_Nova_Match_Nova_start;
	}
	return defaultReturnValue;
}

int nova_Nova_String_1_Nova_indexOf(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char search, int start, int direction, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	return nova_Nova_String_2_Nova_indexOf(this, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (search)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), start, direction, defaultReturnValue);
}

int nova_Nova_String_2_Nova_indexOf(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search, int start, int direction, int defaultReturnValue)
{
	int l1_Nova_i = 0;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	direction = (int)(direction == (intptr_t)nova_null ? 1 : direction);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	l1_Nova_i = start;
	while (l1_Nova_i < this->nova_Nova_String_Nova_count && l1_Nova_i >= 0)
	{
		char l2_Nova_found = 0;
		int l2_Nova_j = 0;
		
		l2_Nova_found = 1;
		l2_Nova_j = (int)(0);
		while (l2_Nova_j < search->nova_Nova_String_Nova_count && l1_Nova_i + l2_Nova_j < this->nova_Nova_String_Nova_count && l2_Nova_found)
		{
			if ((char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(search->nova_Nova_String_Nova_chars), exceptionData, l2_Nova_j) != (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_i + l2_Nova_j))
			{
				l2_Nova_found = 0;
			}
			l2_Nova_j++;
		}
		if (l2_Nova_found)
		{
			return l1_Nova_i;
		}
		l1_Nova_i += direction;
	}
	return defaultReturnValue;
}

int nova_Nova_String_0_Nova_lastIndexOf(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char search, int start, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? this->nova_Nova_String_Nova_count - 1 : start);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	return nova_Nova_String_1_Nova_lastIndexOf(this, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, (search)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))), start, defaultReturnValue);
}

int nova_Nova_String_1_Nova_lastIndexOf(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* search, int start, int defaultReturnValue)
{
	start = (int)(start == (intptr_t)nova_null ? this->nova_Nova_String_Nova_count - 1 : start);
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	return nova_Nova_String_2_Nova_indexOf(this, exceptionData, search, start, -1, defaultReturnValue);
}

char nova_Nova_String_Nova_validateSubstringBounds(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end, int throwException)
{
	throwException = (int)(throwException == (intptr_t)nova_null ? 0 : throwException);
	if (end - start <= 0)
	{
		if (end - start < 0)
		{
			if (throwException)
			{
				THROW(nova_exception_Nova_Exception_Nova_construct(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Substring bounds of [")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (start)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (end)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("] are invalid"))))))))))), 0);
			}
			return 0;
		}
	}
	return 1;
}

nova_Nova_String* nova_Nova_String_Nova_substring(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	end = (int)(end == (intptr_t)nova_null ? this->nova_Nova_String_Nova_count : end);
	if (!nova_Nova_String_Nova_validateSubstringBounds(this, exceptionData, start, end, 1))
	{
		return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
	}
	else if (start == end)
	{
		return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	}
	else if (start == 0 && end == this->nova_Nova_String_Nova_count)
	{
		return this;
	}
	return (nova_Nova_String*)nova_Nova_Substring_Nova_construct(0, exceptionData, this, start, end);
}

nova_Nova_String* nova_Nova_String_Nova_trimStart(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int count)
{
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, count, (intptr_t)nova_null);
}

nova_Nova_String* nova_Nova_String_Nova_trimEnd(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int count)
{
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, (intptr_t)nova_null, this->nova_Nova_String_Nova_count - count);
}

nova_Nova_String* nova_Nova_String_Nova_trimEnds(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int count, int trimWhitespace)
{
	trimWhitespace = (int)(trimWhitespace == (intptr_t)nova_null ? 0 : trimWhitespace);
	return (nova_Nova_String*)(trimWhitespace ? nova_Nova_String_Nova_trim(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, count, this->nova_Nova_String_Nova_count - count), exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0) : nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, count, this->nova_Nova_String_Nova_count - count));
}

nova_Nova_String* nova_Nova_String_Nova_trim(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end, nova_datastruct_list_Nova_CharArray* charsToTrim)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	end = (int)(end == (intptr_t)nova_null ? this->nova_Nova_String_Nova_count - 1 : end);
	charsToTrim = (nova_datastruct_list_Nova_CharArray*)(charsToTrim == 0 ? (nova_Nova_Object*)nova_Nova_String_Nova_WHITESPACE : (nova_Nova_Object*)charsToTrim);
	while (start <= end && nova_datastruct_list_Nova_CharArray_Nova_contains(charsToTrim, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, start))))
	{
		start++;
	}
	while (end >= start && nova_datastruct_list_Nova_CharArray_Nova_contains(charsToTrim, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, end))))
	{
		end--;
	}
	return (nova_Nova_String*)(start > end ? nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")) : nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, start, end + 1));
}

nova_Nova_String* nova_Nova_String_Nova_toLowerCase(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_transform(this, exceptionData, (nova_Nova_String_closure3_Nova_transform)&nova_primitive_number_Nova_Char_static_Nova_toLowerCase, nova_primitive_number_Nova_Char_static_Nova_toLowerCase, nova_null);
}

nova_Nova_String* nova_Nova_String_Nova_toUpperCase(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_transform(this, exceptionData, (nova_Nova_String_closure3_Nova_transform)&nova_primitive_number_Nova_Char_static_Nova_toUpperCase, nova_primitive_number_Nova_Char_static_Nova_toUpperCase, nova_null);
}

nova_Nova_String* nova_Nova_String_Nova_capitalize(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(this->nova_Nova_String_Nova_count > 0 ? nova_Nova_String_Nova_plus(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, nova_primitive_number_Nova_Char_static_Nova_toUpperCase(0, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, 0)))), exceptionData, nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, 1, (intptr_t)nova_null)) : this);
}

nova_Nova_String* nova_Nova_String_Nova_transform(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String_closure3_Nova_transform nova_Nova_String_Nova_transform, void* nova_Nova_String_ref_Nova_transform, void* transform_context)
{
	char* l1_Nova_newData = (char*)nova_null;
	int l3_Nova_i = 0;
	
	l1_Nova_newData = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * this->nova_Nova_String_Nova_count);
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)this->nova_Nova_String_Nova_count; l3_Nova_i++)
	{
		l1_Nova_newData[l3_Nova_i] = nova_Nova_String_Nova_transform(nova_Nova_String_ref_Nova_transform, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l3_Nova_i)), l3_Nova_i, transform_context);
	}
	return nova_Nova_String_1_Nova_construct(0, exceptionData, l1_Nova_newData);
}

nova_Nova_String* nova_Nova_String_Nova_getStringBetween(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* before, nova_Nova_String* after, int start)
{
	int l1_Nova_s = 0;
	int l1_Nova_e = 0;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	return (nova_Nova_String*)((l1_Nova_s = nova_Nova_String_2_Nova_indexOf(this, exceptionData, before, start, (intptr_t)nova_null, (intptr_t)nova_null)) >= 0 && (l1_Nova_e = nova_Nova_String_2_Nova_indexOf(this, exceptionData, after, l1_Nova_s + 1, (intptr_t)nova_null, (intptr_t)nova_null)) > 0 ? (nova_Nova_Object*)nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, l1_Nova_s + before->nova_Nova_String_Nova_count, l1_Nova_e) : (nova_Nova_Object*)nova_null);
}

nova_Nova_String* nova_Nova_String_Nova_surroundWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, int symmetrical)
{
	symmetrical = (int)(symmetrical == (intptr_t)nova_null ? 0 : symmetrical);
	return (nova_Nova_String*)nova_Nova_String_Nova_plus((str), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((this), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(((nova_Nova_String*)(symmetrical ? nova_Nova_String_3_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_CharArray*)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_reverse((nova_datastruct_list_Nova_CharArray*)(str->nova_Nova_String_Nova_chars), exceptionData))) : str)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))))));
}

int nova_Nova_String_Nova_compareTo(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* other)
{
	long_long l1_Nova_min = 0;
	int l3_Nova_i = 0;
	
	l1_Nova_min = nova_math_Nova_Math_static_Nova_min(0, exceptionData, this->nova_Nova_String_Nova_count, (long_long)(other->nova_Nova_String_Nova_count));
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)l1_Nova_min; l3_Nova_i++)
	{
		if ((char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l3_Nova_i) - (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(other->nova_Nova_String_Nova_chars), exceptionData, l3_Nova_i) != 0)
		{
			return (int)(char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l3_Nova_i) - (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(other->nova_Nova_String_Nova_chars), exceptionData, l3_Nova_i);
		}
	}
	return this->nova_Nova_String_Nova_count - other->nova_Nova_String_Nova_count;
}

nova_datastruct_list_Nova_Array* nova_Nova_String_Nova_split(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* regex)
{
	nova_datastruct_list_Nova_Array* l1_Nova_strs = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_start = 0;
	Context77* contextArg78 = NOVA_MALLOC(sizeof(Context77));
	contextArg78->nova_Nova_String_Nova_strs = &l1_Nova_strs;
	contextArg78->nova_Nova_String_Nova_start = &l1_Nova_start;
	
	l1_Nova_strs = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_start = (int)(0);
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_regex_Nova_Regex_static_Nova_getMatches(0, exceptionData, regex->nova_regex_Nova_Pattern_Nova_pattern, this)), exceptionData, (nova_datastruct_list_Nova_List_closure288_Nova_func)&nova_Nova_String_Nova_lambda78, this, contextArg78);
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_strs), exceptionData, (nova_Nova_Object*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, l1_Nova_start, (intptr_t)nova_null)));
	return l1_Nova_strs;
}

nova_Nova_String* nova_Nova_String_Nova_getGroupedChars(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* chars, int start, int end, int opposite)
{
	int l1_Nova_i = 0;
	
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	end = (int)(end == (intptr_t)nova_null ? this->nova_Nova_String_Nova_count : end);
	opposite = (int)(opposite == (intptr_t)nova_null ? 0 : opposite);
	l1_Nova_i = start;
	while (start < end && nova_datastruct_list_Nova_CharArray_Nova_contains(chars, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_i))) != opposite)
	{
		l1_Nova_i++;
	}
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, start, l1_Nova_i);
}

nova_Nova_String* nova_Nova_String_Nova_toString(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}

char nova_Nova_String_Nova_get(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index)
{
	return (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData, index);
}

char nova_Nova_String_Nova_set(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int index, char value)
{
}

nova_Nova_String* nova_Nova_String_Nova_lambda1(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context0* context)
{
	return this;
}

nova_datastruct_list_Nova_CharArray* generated19(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	char* l1_Nova_temp = (char*)nova_null;
	
	l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 4);
	l1_Nova_temp[0] = ' ';
	l1_Nova_temp[1] = '\t';
	l1_Nova_temp[2] = '\n';
	l1_Nova_temp[3] = '\r';
	return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 4);
}

void nova_Nova_String_Nova_lambda77(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* match, int _2, nova_datastruct_list_Nova_Array* _3, Context76* context)
{
	(*context->nova_Nova_String_Nova_output) = (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)((*context->nova_Nova_String_Nova_output)), exceptionData, 0, match->nova_regex_Nova_Match_Nova_start + (*context->nova_Nova_String_Nova_offset)), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus((*context->nova_Nova_String_Nova_replace), exceptionData, nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)((*context->nova_Nova_String_Nova_output)), exceptionData, match->nova_regex_Nova_Match_Nova_end + (*context->nova_Nova_String_Nova_offset), (intptr_t)nova_null)))));
	(*context->nova_Nova_String_Nova_offset) += (*context->nova_Nova_String_Nova_replace)->nova_Nova_String_Nova_count - nova_regex_Nova_Match_Accessor_Nova_count(match, exceptionData);
}

void nova_Nova_String_Nova_lambda78(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Match* match, int _2, nova_datastruct_list_Nova_Array* _3, Context77* context)
{
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)((*context->nova_Nova_String_Nova_strs)), exceptionData, (nova_Nova_Object*)(nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, (*context->nova_Nova_String_Nova_start), match->nova_regex_Nova_Match_Nova_start)));
	(*context->nova_Nova_String_Nova_start) = match->nova_regex_Nova_Match_Nova_end;
}

char nova_Nova_String_Accessor_Nova_first(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessor_Nova_first((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData);
}


char nova_Nova_String_Accessor_Nova_last(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessor_Nova_last((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData);
}


long_long nova_Nova_String_Accessor_Nova_hashCodeLong(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_CharArray_Accessor_Nova_hashCodeLong((nova_datastruct_list_Nova_CharArray*)(this->nova_Nova_String_Nova_chars), exceptionData);
}


void nova_Nova_String_Nova_super(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_Nova_String_Nova_count = 0;
	this->nova_Nova_String_Nova_chars = (nova_datastruct_list_Nova_StringCharArray*)nova_null;
}

nova_Nova_String* nova_Nova_String_virtual_Nova_concat(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str)
{
	return this->vtable->nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(this), exceptionData, str);
}

nova_Nova_String* nova_Nova_String_virtual_Nova_substring(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	return this->vtable->nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this), exceptionData, start, end);
}


int nova_Nova_StringFunctionMap_functionMap_Nova_calculateSize(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, char* chars);
void nova_Nova_StringFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_Nova_StringFunctionMap* nova_Nova_StringFunctionMap_Nova_construct(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_Nova_StringFunctionMap, this,);
	this->vtable = &nova_String_StringFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_Nova_StringFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_Nova_StringFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_Nova_StringFunctionMap_Nova_destroy(nova_Nova_StringFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_Nova_StringFunctionMap_Nova_this(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMapStringFunctionMap0_Nova_construct(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	return nova_Nova_String_0_Nova_construct(0, exceptionData, c);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMapStringFunctionMap1_Nova_construct(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char* chars)
{
	return nova_Nova_String_1_Nova_construct(0, exceptionData, chars);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMapStringFunctionMap2_Nova_construct(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char* chars, int count)
{
	return nova_Nova_String_2_Nova_construct(0, exceptionData, chars, count);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMapStringFunctionMap3_Nova_construct(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* chars)
{
	return nova_Nova_String_3_Nova_construct(0, exceptionData, chars);
}

int nova_Nova_StringFunctionMap_functionMap_Nova_calculateSize(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, char* chars)
{
	return nova_Nova_String_Nova_calculateSize(reference, exceptionData, chars);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_concat(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* str)
{
	return nova_Nova_String_Nova_concat(reference, exceptionData, str);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_plus(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* another)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_plus(reference, exceptionData, another);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_multiply(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int times)
{
	return (nova_Nova_String*)nova_Nova_String_Nova_multiply(reference, exceptionData, times);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_repeat(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int times)
{
	return nova_Nova_String_Nova_repeat(reference, exceptionData, times);
}

char nova_Nova_StringFunctionMap_functionMap_Nova_equals(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* other)
{
	return nova_Nova_String_Nova_equals(reference, exceptionData, other);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap0_Nova_replace(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_regex_Nova_Pattern* pattern, nova_Nova_String* replace)
{
	return nova_Nova_String_0_Nova_replace(reference, exceptionData, pattern, replace);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap1_Nova_replace(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* search, nova_Nova_String* replace)
{
	return nova_Nova_String_1_Nova_replace(reference, exceptionData, search, replace);
}

char nova_Nova_StringFunctionMap_functionMap0_Nova_startsWith(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, char search)
{
	return nova_Nova_String_0_Nova_startsWith(reference, exceptionData, search);
}

char nova_Nova_StringFunctionMap_functionMap1_Nova_startsWith(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* search)
{
	return nova_Nova_String_1_Nova_startsWith(reference, exceptionData, search);
}

char nova_Nova_StringFunctionMap_functionMap2_Nova_startsWith(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_regex_Nova_Pattern* search)
{
	return nova_Nova_String_2_Nova_startsWith(reference, exceptionData, search);
}

char nova_Nova_StringFunctionMap_functionMap0_Nova_contains(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* search)
{
	return nova_Nova_String_0_Nova_contains(reference, exceptionData, search);
}

char nova_Nova_StringFunctionMap_functionMap1_Nova_contains(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_regex_Nova_Pattern* search)
{
	return nova_Nova_String_1_Nova_contains(reference, exceptionData, search);
}

char nova_Nova_StringFunctionMap_functionMap0_Nova_endsWith(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* search)
{
	return nova_Nova_String_0_Nova_endsWith(reference, exceptionData, search);
}

char nova_Nova_StringFunctionMap_functionMap1_Nova_endsWith(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_regex_Nova_Pattern* search)
{
	return nova_Nova_String_1_Nova_endsWith(reference, exceptionData, search);
}

char nova_Nova_StringFunctionMap_functionMap_Nova_matches(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_regex_Nova_Pattern* pattern)
{
	return nova_Nova_String_Nova_matches(reference, exceptionData, pattern);
}

int nova_Nova_StringFunctionMap_functionMap0_Nova_indexOf(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_regex_Nova_Pattern* search, int start, int direction, int defaultReturnValue)
{
	return nova_Nova_String_0_Nova_indexOf(reference, exceptionData, search, start, direction, defaultReturnValue);
}

int nova_Nova_StringFunctionMap_functionMap1_Nova_indexOf(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, char search, int start, int direction, int defaultReturnValue)
{
	return nova_Nova_String_1_Nova_indexOf(reference, exceptionData, search, start, direction, defaultReturnValue);
}

int nova_Nova_StringFunctionMap_functionMap2_Nova_indexOf(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* search, int start, int direction, int defaultReturnValue)
{
	return nova_Nova_String_2_Nova_indexOf(reference, exceptionData, search, start, direction, defaultReturnValue);
}

int nova_Nova_StringFunctionMap_functionMap0_Nova_lastIndexOf(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, char search, int start, int defaultReturnValue)
{
	return nova_Nova_String_0_Nova_lastIndexOf(reference, exceptionData, search, start, defaultReturnValue);
}

int nova_Nova_StringFunctionMap_functionMap1_Nova_lastIndexOf(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* search, int start, int defaultReturnValue)
{
	return nova_Nova_String_1_Nova_lastIndexOf(reference, exceptionData, search, start, defaultReturnValue);
}

char nova_Nova_StringFunctionMap_functionMap_Nova_validateSubstringBounds(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int start, int end, char throwException)
{
	return nova_Nova_String_Nova_validateSubstringBounds(reference, exceptionData, start, end, throwException);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_substring(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int start, int end)
{
	return nova_Nova_String_Nova_substring(reference, exceptionData, start, end);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_trimStart(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int count)
{
	return nova_Nova_String_Nova_trimStart(reference, exceptionData, count);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_trimEnd(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int count)
{
	return nova_Nova_String_Nova_trimEnd(reference, exceptionData, count);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_trimEnds(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int count, char trimWhitespace)
{
	return nova_Nova_String_Nova_trimEnds(reference, exceptionData, count, trimWhitespace);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_trim(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int start, int end, nova_datastruct_list_Nova_CharArray* charsToTrim)
{
	return nova_Nova_String_Nova_trim(reference, exceptionData, start, end, charsToTrim);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_toLowerCase(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference)
{
	return nova_Nova_String_Nova_toLowerCase(reference, exceptionData);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_toUpperCase(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference)
{
	return nova_Nova_String_Nova_toUpperCase(reference, exceptionData);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_capitalize(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference)
{
	return nova_Nova_String_Nova_capitalize(reference, exceptionData);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_transform(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_StringFunctionMap_closure392_Nova_transform nova_Nova_StringFunctionMap_Nova_transform, void* nova_Nova_StringFunctionMap_ref_Nova_transform, void* transform_context)
{
	return nova_Nova_String_Nova_transform(reference, exceptionData, (nova_Nova_String_closure3_Nova_transform)nova_Nova_StringFunctionMap_Nova_transform, nova_Nova_StringFunctionMap_ref_Nova_transform, transform_context);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_getStringBetween(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* before, nova_Nova_String* after, int start)
{
	return nova_Nova_String_Nova_getStringBetween(reference, exceptionData, before, after, start);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_surroundWith(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* str, char symmetrical)
{
	return nova_Nova_String_Nova_surroundWith(reference, exceptionData, str, symmetrical);
}

int nova_Nova_StringFunctionMap_functionMap_Nova_compareTo(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* other)
{
	return nova_Nova_String_Nova_compareTo(reference, exceptionData, other);
}

nova_datastruct_list_Nova_Array* nova_Nova_StringFunctionMap_functionMap_Nova_split(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_regex_Nova_Pattern* regex)
{
	return nova_Nova_String_Nova_split(reference, exceptionData, regex);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_getGroupedChars(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_datastruct_list_Nova_CharArray* chars, int start, int end, char opposite)
{
	return nova_Nova_String_Nova_getGroupedChars(reference, exceptionData, chars, start, end, opposite);
}

nova_Nova_String* nova_Nova_StringFunctionMap_functionMap_Nova_toString(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference)
{
	return nova_Nova_String_Nova_toString(reference, exceptionData);
}

char nova_Nova_StringFunctionMap_functionMap_Nova_get(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int index)
{
	return nova_Nova_String_Nova_get(reference, exceptionData, index);
}

char nova_Nova_StringFunctionMap_functionMap_Nova_set(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int index, char value)
{
	return nova_Nova_String_Nova_set(reference, exceptionData, index, value);
}

void nova_Nova_StringFunctionMap_Nova_super(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_Nova_String* nova_Nova_StringFunctionMap_virtualfunctionMap_Nova_concat(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, nova_Nova_String* str)
{
	return this->vtable->nova_Nova_StringFunctionMap_virtualfunctionMap_Nova_concat(this, exceptionData, reference, str);
}

nova_Nova_String* nova_Nova_StringFunctionMap_virtualfunctionMap_Nova_substring(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference, int start, int end)
{
	return this->vtable->nova_Nova_StringFunctionMap_virtualfunctionMap_Nova_substring(this, exceptionData, reference, start, end);
}

nova_Nova_String* nova_Nova_StringFunctionMap_virtualfunctionMap_Nova_toString(nova_Nova_StringFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference)
{
	return this->vtable->nova_Nova_StringFunctionMap_virtualfunctionMap_Nova_toString(this, exceptionData, reference);
}

void nova_Nova_StringPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_Nova_StringPropertyMap* nova_Nova_StringPropertyMap_Nova_construct(nova_Nova_StringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_Nova_StringPropertyMap, this,);
	this->vtable = &nova_String_StringPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_Nova_StringPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_Nova_StringPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_Nova_StringPropertyMap_Nova_destroy(nova_Nova_StringPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_Nova_StringPropertyMap_Nova_this(nova_Nova_StringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

int nova_Nova_StringPropertyMap_functionMap_Nova_count(nova_Nova_StringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference)
{
	return reference->nova_Nova_String_Nova_count;
}

nova_datastruct_list_Nova_StringCharArray* nova_Nova_StringPropertyMap_functionMap_Nova_chars(nova_Nova_StringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference)
{
	return reference->nova_Nova_String_Nova_chars;
}

char nova_Nova_StringPropertyMap_functionMap_Nova_first(nova_Nova_StringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference)
{
	return nova_Nova_String_Accessor_Nova_first(reference, exceptionData);
}

char nova_Nova_StringPropertyMap_functionMap_Nova_last(nova_Nova_StringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference)
{
	return nova_Nova_String_Accessor_Nova_last(reference, exceptionData);
}

long_long nova_Nova_StringPropertyMap_functionMap_Nova_hashCodeLong(nova_Nova_StringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference)
{
	return nova_Nova_String_Accessor_Nova_hashCodeLong(reference, exceptionData);
}

void nova_Nova_StringPropertyMap_Nova_super(nova_Nova_StringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

long_long nova_Nova_StringPropertyMap_virtualfunctionMap_Nova_hashCodeLong(nova_Nova_StringPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* reference)
{
	return this->vtable->nova_Nova_StringPropertyMap_virtualfunctionMap_Nova_hashCodeLong(this, exceptionData, reference);
}

