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
#include <nova/math/logic/nova_math_logic_Nova_StatementComponent.h>
#include <nova/math/logic/nova_math_logic_Nova_StatementComponent.h>
#include <nova/math/logic/nova_math_logic_Nova_StatementComponent.h>
#include <nova/NativeObject.h>



CCLASS_PRIVATE
(
	nova_math_logic_Nova_StatementLetter,
	nova_Nova_String* nova_math_logic_Nova_StatementLetter_Nova_letter;
	nova_Nova_String* nova_math_logic_Nova_StatementLetter_Nova_representation;
	
)
void nova_math_logic_Nova_StatementLetter_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_logic_Nova_StatementLetter* nova_math_logic_Nova_StatementLetter_Nova_construct(nova_math_logic_Nova_StatementLetter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* letter, nova_Nova_String* representation)
{
	CCLASS_NEW(nova_math_logic_Nova_StatementLetter, this);
	this->vtable = &nova_math_logic_StatementLetter_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_logic_Nova_StatementComponent_Nova_super((nova_math_logic_Nova_StatementComponent*)this, exceptionData);
	nova_math_logic_Nova_StatementLetter_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_StatementLetter_Nova_this(this, exceptionData, letter, representation);
	}
	
	return this;
}

void nova_math_logic_Nova_StatementLetter_Nova_destroy(nova_math_logic_Nova_StatementLetter** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->prv->nova_math_logic_Nova_StatementLetter_Nova_letter, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->prv->nova_math_logic_Nova_StatementLetter_Nova_representation, exceptionData);
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_StatementLetter_Nova_this(nova_math_logic_Nova_StatementLetter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* letter, nova_Nova_String* representation)
{
	this->prv->nova_math_logic_Nova_StatementLetter_Nova_letter = letter;
	this->prv->nova_math_logic_Nova_StatementLetter_Nova_representation = representation;
}

void nova_math_logic_Nova_StatementLetter_Nova_super(nova_math_logic_Nova_StatementLetter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->nova_math_logic_Nova_StatementLetter_Nova_letter = (nova_Nova_String*)nova_null;
	this->prv->nova_math_logic_Nova_StatementLetter_Nova_representation = (nova_Nova_String*)nova_null;
}

void nova_math_logic_Nova_StatementLetterFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_logic_Nova_StatementLetterFunctionMap* nova_math_logic_Nova_StatementLetterFunctionMap_Nova_construct(nova_math_logic_Nova_StatementLetterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_logic_Nova_StatementLetterFunctionMap, this,);
	this->vtable = &nova_math_logic_StatementLetter_StatementLetterFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_math_logic_Nova_StatementComponentFunctionMap_Nova_super((nova_math_logic_Nova_StatementComponentFunctionMap*)this, exceptionData);
	nova_math_logic_Nova_StatementLetterFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_StatementLetterFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_logic_Nova_StatementLetterFunctionMap_Nova_destroy(nova_math_logic_Nova_StatementLetterFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_StatementLetterFunctionMap_Nova_this(nova_math_logic_Nova_StatementLetterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_math_logic_Nova_StatementLetter* nova_math_logic_Nova_StatementLetterFunctionMap_functionMapStatementLetterFunctionMap_Nova_construct(nova_math_logic_Nova_StatementLetterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* letter, nova_Nova_String* representation)
{
	return nova_math_logic_Nova_StatementLetter_Nova_construct(0, exceptionData, letter, representation);
}

void nova_math_logic_Nova_StatementLetterFunctionMap_Nova_super(nova_math_logic_Nova_StatementLetterFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_logic_Nova_StatementLetterPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_logic_Nova_StatementLetterPropertyMap* nova_math_logic_Nova_StatementLetterPropertyMap_Nova_construct(nova_math_logic_Nova_StatementLetterPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_logic_Nova_StatementLetterPropertyMap, this,);
	this->vtable = &nova_math_logic_StatementLetter_StatementLetterPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_math_logic_Nova_StatementComponentPropertyMap_Nova_super((nova_math_logic_Nova_StatementComponentPropertyMap*)this, exceptionData);
	nova_math_logic_Nova_StatementLetterPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_StatementLetterPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_logic_Nova_StatementLetterPropertyMap_Nova_destroy(nova_math_logic_Nova_StatementLetterPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_StatementLetterPropertyMap_Nova_this(nova_math_logic_Nova_StatementLetterPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_logic_Nova_StatementLetterPropertyMap_Nova_super(nova_math_logic_Nova_StatementLetterPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

