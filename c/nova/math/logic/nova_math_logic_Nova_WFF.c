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



CCLASS_PRIVATE
(
	nova_math_logic_Nova_WFF,
	nova_datastruct_list_Nova_Array* nova_math_logic_Nova_WFF_Nova_hypotheses;
	nova_math_logic_Nova_Conclusion* nova_math_logic_Nova_WFF_Nova_conclusion;
	nova_Nova_String* nova_math_logic_Nova_WFF_Nova_wff;
	nova_datastruct_list_Nova_Array* nova_math_logic_Nova_WFF_Nova_letters;
	
)

void nova_math_logic_Nova_WFF_Nova_decodeFormula(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_math_logic_Nova_StatementGroup* nova_math_logic_Nova_WFF_Nova_searchForConclusion(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff);
nova_datastruct_list_Nova_Array* nova_math_logic_Nova_WFF_Nova_decodeHypotheses(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff);
nova_math_logic_Nova_StatementGroup* nova_math_logic_Nova_WFF_Nova_generateHypothesis(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, int start, int end);
nova_math_logic_Nova_StatementGroup* nova_math_logic_Nova_WFF_Nova_searchForStatement(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff);
int nova_math_logic_Nova_WFF_static_Nova_nextNonWhitespaceIndex(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, int index, int direction);
int nova_math_logic_Nova_WFF_0_static_Nova_nextWhitespaceIndex(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, int index, int direction);
int nova_math_logic_Nova_WFF_1_static_Nova_nextWhitespaceIndex(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, int index, int direction, char opposite, int defaultReturnValue);
char nova_math_logic_Nova_WFF_static_Nova_containsChar(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, char needle, nova_datastruct_list_Nova_CharArray* chars);
int nova_math_logic_Nova_WFF_static_Nova_findEndingMatch(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, char start, char end, int index, int direction, int defaultReturnValue);
nova_datastruct_list_Nova_CharArray* generated26(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_CharArray* nova_math_logic_Nova_WFF_Nova_whitespace;
void nova_math_logic_Nova_WFF_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		nova_math_logic_Nova_WFF_Nova_whitespace = generated26(0, exceptionData);
	}
}

nova_math_logic_Nova_WFF* nova_math_logic_Nova_WFF_Nova_construct(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, nova_datastruct_list_Nova_Array* letters)
{
	CCLASS_NEW(nova_math_logic_Nova_WFF, this);
	this->vtable = &nova_math_logic_WFF_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_logic_Nova_WFF_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_WFF_Nova_this(this, exceptionData, wff, letters);
	}
	
	return this;
}

void nova_math_logic_Nova_WFF_Nova_destroy(nova_math_logic_Nova_WFF** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->prv->nova_math_logic_Nova_WFF_Nova_hypotheses, exceptionData);
	nova_math_logic_Nova_Conclusion_Nova_destroy(&(*this)->prv->nova_math_logic_Nova_WFF_Nova_conclusion, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->prv->nova_math_logic_Nova_WFF_Nova_wff, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->prv->nova_math_logic_Nova_WFF_Nova_letters, exceptionData);
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_WFF_Nova_this(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, nova_datastruct_list_Nova_Array* letters)
{
	this->prv->nova_math_logic_Nova_WFF_Nova_wff = wff;
	this->prv->nova_math_logic_Nova_WFF_Nova_letters = letters;
	wff = nova_Nova_String_Nova_trim(wff, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null, 0);
	this->prv->nova_math_logic_Nova_WFF_Nova_hypotheses = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	nova_math_logic_Nova_WFF_Nova_decodeFormula(this, exceptionData);
}

void nova_math_logic_Nova_WFF_Nova_decodeFormula(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_math_logic_Nova_StatementGroup* l1_Nova_conclusionGroup = (nova_math_logic_Nova_StatementGroup*)nova_null;
	nova_math_logic_Nova_Conclusion* l1_Nova_conclusion = (nova_math_logic_Nova_Conclusion*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_statements = (nova_datastruct_list_Nova_Array*)nova_null;
	int l5_Nova_i = 0;
	int l7_Nova_n = 0;
	
	l1_Nova_conclusionGroup = nova_math_logic_Nova_WFF_Nova_searchForConclusion(this, exceptionData, this->prv->nova_math_logic_Nova_WFF_Nova_wff);
	if ((l1_Nova_conclusionGroup) == (nova_math_logic_Nova_StatementGroup*)nova_null)
	{
		THROW(nova_math_logic_Nova_InvalidFormulaException_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("No valid conclusion found"))), 0);
	}
	l1_Nova_conclusion = (nova_math_logic_Nova_Conclusion*)(l1_Nova_conclusionGroup->nova_math_logic_Nova_StatementGroup_Nova_statement);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Conclusion: ")), exceptionData, nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(l1_Nova_conclusion), exceptionData))));
	this->prv->nova_math_logic_Nova_WFF_Nova_wff = nova_datastruct_Nova_Bounds_Nova_extractPreString(l1_Nova_conclusionGroup->nova_math_logic_Nova_StatementGroup_Nova_bounds, exceptionData, this->prv->nova_math_logic_Nova_WFF_Nova_wff);
	l1_Nova_statements = nova_math_logic_Nova_WFF_Nova_decodeHypotheses(this, exceptionData, this->prv->nova_math_logic_Nova_WFF_Nova_wff);
	l5_Nova_i = (int)0;
	for (; l5_Nova_i < (int)nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(l1_Nova_statements), exceptionData); l5_Nova_i++)
	{
		nova_math_logic_Nova_StatementGroup* l5_Nova_group = (nova_math_logic_Nova_StatementGroup*)nova_null;
		
		l5_Nova_group = (nova_math_logic_Nova_StatementGroup*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_statements), exceptionData, l5_Nova_i));
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_logic_Nova_WFF_Nova_hypotheses), exceptionData, (nova_Nova_Object*)(l5_Nova_group->nova_math_logic_Nova_StatementGroup_Nova_statement));
	}
	l7_Nova_n = (int)0;
	for (; l7_Nova_n < (int)nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this->prv->nova_math_logic_Nova_WFF_Nova_hypotheses), exceptionData); l7_Nova_n++)
	{
		nova_io_Nova_Console_2_static_Nova_writeLine(0, exceptionData, (nova_Nova_Object*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_math_logic_Nova_WFF_Nova_hypotheses), exceptionData, l7_Nova_n)));
	}
}

nova_math_logic_Nova_StatementGroup* nova_math_logic_Nova_WFF_Nova_searchForConclusion(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff)
{
	int l1_Nova_index = 0;
	int l1_Nova_conclusionStart = 0;
	nova_datastruct_Nova_Bounds* l1_Nova_bounds = (nova_datastruct_Nova_Bounds*)nova_null;
	nova_math_logic_Nova_Conclusion* l1_Nova_conclusion = (nova_math_logic_Nova_Conclusion*)nova_null;
	
	l1_Nova_index = nova_Nova_String_1_Nova_lastIndexOf(wff, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("->")), (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_index < 0)
	{
		return (nova_math_logic_Nova_StatementGroup*)(nova_Nova_Object*)nova_null;
	}
	if ((char)(intptr_t)nova_datastruct_list_Nova_CharArray_Accessor_Nova_last((nova_datastruct_list_Nova_CharArray*)(wff->nova_Nova_String_Nova_chars), exceptionData) == ')')
{
	int l3_Nova_first = 0;
	
	l3_Nova_first = nova_math_logic_Nova_WFF_static_Nova_findEndingMatch(this, exceptionData, wff, '(', ')', wff->nova_Nova_String_Nova_count - 1, -1, (intptr_t)nova_null);}
l1_Nova_conclusionStart = nova_math_logic_Nova_WFF_static_Nova_nextNonWhitespaceIndex(this, exceptionData, wff, l1_Nova_index + 2, 1);
l1_Nova_bounds = nova_datastruct_Nova_Bounds_Nova_construct(0, exceptionData, l1_Nova_conclusionStart, wff->nova_Nova_String_Nova_count);
l1_Nova_conclusion = nova_math_logic_Nova_Conclusion_Nova_construct(0, exceptionData, nova_datastruct_Nova_Bounds_Nova_extractString(l1_Nova_bounds, exceptionData, wff));
l1_Nova_bounds->nova_datastruct_Nova_Bounds_Nova_start = nova_math_logic_Nova_WFF_static_Nova_nextNonWhitespaceIndex(this, exceptionData, wff, l1_Nova_index - 1, -1) + 1;
return nova_math_logic_Nova_StatementGroup_Nova_construct(0, exceptionData, (nova_Nova_Object*)(l1_Nova_conclusion), l1_Nova_bounds);}

nova_datastruct_list_Nova_Array* nova_math_logic_Nova_WFF_Nova_decodeHypotheses(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_next = 0;
	int l1_Nova_prev = 0;
	int l1_Nova_index = 0;
	
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_next = (int)(0);
	l1_Nova_prev = (int)(0);
	l1_Nova_index = nova_Nova_String_2_Nova_indexOf(wff, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("&")), (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null);
	while (l1_Nova_index >= 0)
	{
		l1_Nova_next = nova_math_logic_Nova_WFF_static_Nova_nextNonWhitespaceIndex(this, exceptionData, wff, l1_Nova_index - 1, -1);
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(nova_math_logic_Nova_WFF_Nova_generateHypothesis(this, exceptionData, wff, l1_Nova_prev, l1_Nova_next + 1)));
		l1_Nova_prev = nova_math_logic_Nova_WFF_static_Nova_nextNonWhitespaceIndex(this, exceptionData, wff, l1_Nova_index + 1, 1);
		l1_Nova_index = nova_Nova_String_2_Nova_indexOf(wff, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("&")), l1_Nova_prev + 1, (intptr_t)nova_null, (intptr_t)nova_null);
	}
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(nova_math_logic_Nova_WFF_Nova_generateHypothesis(this, exceptionData, wff, l1_Nova_prev, wff->nova_Nova_String_Nova_count)));
	return (nova_datastruct_list_Nova_Array*)l1_Nova_list;
}

nova_math_logic_Nova_StatementGroup* nova_math_logic_Nova_WFF_Nova_generateHypothesis(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, int start, int end)
{
	nova_datastruct_Nova_Bounds* l1_Nova_bounds = (nova_datastruct_Nova_Bounds*)nova_null;
	nova_math_logic_Nova_Hypothesis* l1_Nova_h = (nova_math_logic_Nova_Hypothesis*)nova_null;
	
	l1_Nova_bounds = nova_datastruct_Nova_Bounds_Nova_construct(0, exceptionData, start, end);
	l1_Nova_h = nova_math_logic_Nova_Hypothesis_Nova_construct(0, exceptionData, nova_datastruct_Nova_Bounds_Nova_extractString(l1_Nova_bounds, exceptionData, wff));
	return nova_math_logic_Nova_StatementGroup_Nova_construct(0, exceptionData, (nova_Nova_Object*)(l1_Nova_h), l1_Nova_bounds);
}

nova_math_logic_Nova_StatementGroup* nova_math_logic_Nova_WFF_Nova_searchForStatement(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff)
{
	return (nova_math_logic_Nova_StatementGroup*)(nova_Nova_Object*)nova_null;
}

int nova_math_logic_Nova_WFF_static_Nova_nextNonWhitespaceIndex(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, int index, int direction)
{
	return nova_math_logic_Nova_WFF_1_static_Nova_nextWhitespaceIndex(0, exceptionData, wff, index, direction, 1, (intptr_t)nova_null);
}

int nova_math_logic_Nova_WFF_0_static_Nova_nextWhitespaceIndex(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, int index, int direction)
{
	return nova_math_logic_Nova_WFF_1_static_Nova_nextWhitespaceIndex(0, exceptionData, wff, index, direction, 0, (intptr_t)nova_null);
}

int nova_math_logic_Nova_WFF_1_static_Nova_nextWhitespaceIndex(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, int index, int direction, char opposite, int defaultReturnValue)
{
	int l1_Nova_i = 0;
	
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	l1_Nova_i = index;
	while (l1_Nova_i < wff->nova_Nova_String_Nova_count && l1_Nova_i >= 0)
	{
		char l2_Nova_c = 0;
		
		l2_Nova_c = (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(wff->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_i));
		if (nova_datastruct_list_Nova_CharArray_Nova_contains(nova_math_logic_Nova_WFF_Nova_whitespace, exceptionData, l2_Nova_c) != opposite)
		{
			return l1_Nova_i;
		}
		l1_Nova_i += direction;
	}
	return defaultReturnValue;
}

char nova_math_logic_Nova_WFF_static_Nova_containsChar(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, char needle, nova_datastruct_list_Nova_CharArray* chars)
{
	int l3_Nova_i = 0;
	
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(chars), exceptionData); l3_Nova_i++)
	{
		if (needle == (char)(intptr_t)chars->nova_datastruct_list_Nova_Array_Nova_data[l3_Nova_i])
		{
			return 1;
		}
	}
	return 0;
}

int nova_math_logic_Nova_WFF_static_Nova_findEndingMatch(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, char start, char end, int index, int direction, int defaultReturnValue)
{
	int l1_Nova_scope = 0;
	int l1_Nova_i = 0;
	
	defaultReturnValue = (int)(defaultReturnValue == (intptr_t)nova_null ? -1 : defaultReturnValue);
	if (direction < 0)
	{
		char l2_Nova_temp = 0;
		
		l2_Nova_temp = start;
		start = end;
		end = l2_Nova_temp;
	}
	l1_Nova_scope = (int)(0);
	l1_Nova_i = index;
	while (l1_Nova_i < wff->nova_Nova_String_Nova_count && l1_Nova_i >= 0)
	{
		char l3_Nova_c = 0;
		
		l3_Nova_c = (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(wff->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_i));
		if ((l3_Nova_c) == start)
		{
			l1_Nova_scope++;
		}
		else if ((l3_Nova_c) == end)
		{
			l1_Nova_scope--;
		}
		if (l1_Nova_scope == 0)
		{
			return l1_Nova_i;
		}
		l1_Nova_i += direction;
	}
	return defaultReturnValue;
}

nova_datastruct_list_Nova_CharArray* generated26(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	char* l1_Nova_temp = (char*)nova_null;
	
	l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 4);
	l1_Nova_temp[0] = ' ';
	l1_Nova_temp[1] = '\t';
	l1_Nova_temp[2] = '\n';
	l1_Nova_temp[3] = '\r';
	return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 4);
}

void nova_math_logic_Nova_WFF_Nova_super(nova_math_logic_Nova_WFF* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->nova_math_logic_Nova_WFF_Nova_hypotheses = (nova_datastruct_list_Nova_Array*)nova_null;
	this->prv->nova_math_logic_Nova_WFF_Nova_conclusion = (nova_math_logic_Nova_Conclusion*)nova_null;
	this->prv->nova_math_logic_Nova_WFF_Nova_wff = (nova_Nova_String*)nova_null;
	this->prv->nova_math_logic_Nova_WFF_Nova_letters = (nova_datastruct_list_Nova_Array*)nova_null;
}


void nova_math_logic_Nova_WFFFunctionMap_functionMap_Nova_decodeFormula(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_logic_Nova_WFF* reference);
nova_math_logic_Nova_StatementGroup* nova_math_logic_Nova_WFFFunctionMap_functionMap_Nova_searchForConclusion(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_logic_Nova_WFF* reference, nova_Nova_String* wff);
nova_datastruct_list_Nova_Array* nova_math_logic_Nova_WFFFunctionMap_functionMap_Nova_decodeHypotheses(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_logic_Nova_WFF* reference, nova_Nova_String* wff);
nova_math_logic_Nova_StatementGroup* nova_math_logic_Nova_WFFFunctionMap_functionMap_Nova_generateHypothesis(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_logic_Nova_WFF* reference, nova_Nova_String* wff, int start, int end);
nova_math_logic_Nova_StatementGroup* nova_math_logic_Nova_WFFFunctionMap_functionMap_Nova_searchForStatement(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_logic_Nova_WFF* reference, nova_Nova_String* wff);
int nova_math_logic_Nova_WFFFunctionMap_functionMap_static_Nova_nextNonWhitespaceIndex(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, int index, int direction);
int nova_math_logic_Nova_WFFFunctionMap_functionMap0_static_Nova_nextWhitespaceIndex(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, int index, int direction);
int nova_math_logic_Nova_WFFFunctionMap_functionMap1_static_Nova_nextWhitespaceIndex(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, int index, int direction, char opposite, int defaultReturnValue);
char nova_math_logic_Nova_WFFFunctionMap_functionMap_static_Nova_containsChar(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char needle, nova_datastruct_list_Nova_CharArray* chars);
int nova_math_logic_Nova_WFFFunctionMap_functionMap_static_Nova_findEndingMatch(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, char start, char end, int index, int direction, int defaultReturnValue);
void nova_math_logic_Nova_WFFFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_logic_Nova_WFFFunctionMap* nova_math_logic_Nova_WFFFunctionMap_Nova_construct(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_logic_Nova_WFFFunctionMap, this,);
	this->vtable = &nova_math_logic_WFF_WFFFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_math_logic_Nova_WFFFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_WFFFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_logic_Nova_WFFFunctionMap_Nova_destroy(nova_math_logic_Nova_WFFFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_WFFFunctionMap_Nova_this(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_math_logic_Nova_WFF* nova_math_logic_Nova_WFFFunctionMap_functionMapWFFFunctionMap_Nova_construct(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, nova_datastruct_list_Nova_Array* letters)
{
	return nova_math_logic_Nova_WFF_Nova_construct(0, exceptionData, wff, letters);
}

void nova_math_logic_Nova_WFFFunctionMap_functionMap_Nova_decodeFormula(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_logic_Nova_WFF* reference)
{
	nova_math_logic_Nova_WFF_Nova_decodeFormula(reference, exceptionData);
}

nova_math_logic_Nova_StatementGroup* nova_math_logic_Nova_WFFFunctionMap_functionMap_Nova_searchForConclusion(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_logic_Nova_WFF* reference, nova_Nova_String* wff)
{
	return nova_math_logic_Nova_WFF_Nova_searchForConclusion(reference, exceptionData, wff);
}

nova_datastruct_list_Nova_Array* nova_math_logic_Nova_WFFFunctionMap_functionMap_Nova_decodeHypotheses(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_logic_Nova_WFF* reference, nova_Nova_String* wff)
{
	return nova_math_logic_Nova_WFF_Nova_decodeHypotheses(reference, exceptionData, wff);
}

nova_math_logic_Nova_StatementGroup* nova_math_logic_Nova_WFFFunctionMap_functionMap_Nova_generateHypothesis(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_logic_Nova_WFF* reference, nova_Nova_String* wff, int start, int end)
{
	return nova_math_logic_Nova_WFF_Nova_generateHypothesis(reference, exceptionData, wff, start, end);
}

nova_math_logic_Nova_StatementGroup* nova_math_logic_Nova_WFFFunctionMap_functionMap_Nova_searchForStatement(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_logic_Nova_WFF* reference, nova_Nova_String* wff)
{
	return nova_math_logic_Nova_WFF_Nova_searchForStatement(reference, exceptionData, wff);
}

int nova_math_logic_Nova_WFFFunctionMap_functionMap_static_Nova_nextNonWhitespaceIndex(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, int index, int direction)
{
	return nova_math_logic_Nova_WFF_static_Nova_nextNonWhitespaceIndex(0, exceptionData, wff, index, direction);
}

int nova_math_logic_Nova_WFFFunctionMap_functionMap0_static_Nova_nextWhitespaceIndex(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, int index, int direction)
{
	return nova_math_logic_Nova_WFF_0_static_Nova_nextWhitespaceIndex(0, exceptionData, wff, index, direction);
}

int nova_math_logic_Nova_WFFFunctionMap_functionMap1_static_Nova_nextWhitespaceIndex(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, int index, int direction, char opposite, int defaultReturnValue)
{
	return nova_math_logic_Nova_WFF_1_static_Nova_nextWhitespaceIndex(0, exceptionData, wff, index, direction, opposite, defaultReturnValue);
}

char nova_math_logic_Nova_WFFFunctionMap_functionMap_static_Nova_containsChar(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, char needle, nova_datastruct_list_Nova_CharArray* chars)
{
	return nova_math_logic_Nova_WFF_static_Nova_containsChar(0, exceptionData, needle, chars);
}

int nova_math_logic_Nova_WFFFunctionMap_functionMap_static_Nova_findEndingMatch(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* wff, char start, char end, int index, int direction, int defaultReturnValue)
{
	return nova_math_logic_Nova_WFF_static_Nova_findEndingMatch(0, exceptionData, wff, start, end, index, direction, defaultReturnValue);
}

void nova_math_logic_Nova_WFFFunctionMap_Nova_super(nova_math_logic_Nova_WFFFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_logic_Nova_WFFPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_logic_Nova_WFFPropertyMap* nova_math_logic_Nova_WFFPropertyMap_Nova_construct(nova_math_logic_Nova_WFFPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_logic_Nova_WFFPropertyMap, this,);
	this->vtable = &nova_math_logic_WFF_WFFPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_math_logic_Nova_WFFPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_WFFPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_logic_Nova_WFFPropertyMap_Nova_destroy(nova_math_logic_Nova_WFFPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_WFFPropertyMap_Nova_this(nova_math_logic_Nova_WFFPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_logic_Nova_WFFPropertyMap_Nova_super(nova_math_logic_Nova_WFFPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

