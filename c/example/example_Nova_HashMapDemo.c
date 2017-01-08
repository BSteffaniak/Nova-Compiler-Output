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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/datastruct/nova_datastruct_Nova_HashMap.h>
#include <nova/datastruct/nova_datastruct_Nova_Pair.h>
#include <nova/operators/nova_operators_Nova_EqualsOperator.h>
#include <nova/NativeObject.h>

typedef struct
{
} Context142;
typedef struct
{
} Context143;
typedef struct
{
} Context144;
typedef struct
{
} Context145;
typedef struct
{
} Context146;



void example_Nova_HashMapDemo_static_Nova_lambda143(example_Nova_HashMapDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context142* context);
void example_Nova_HashMapDemo_static_Nova_lambda144(example_Nova_HashMapDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context143* context);
char example_Nova_HashMapDemo_static_Nova_lambda145(example_Nova_HashMapDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context144* context);
nova_Nova_Object* example_Nova_HashMapDemo_static_Nova_lambda146(example_Nova_HashMapDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context145* context);
void example_Nova_HashMapDemo_static_Nova_lambda147(example_Nova_HashMapDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context146* context);
void example_Nova_HashMapDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_HashMapDemo* example_Nova_HashMapDemo_Nova_construct(example_Nova_HashMapDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_HashMapDemo, this,);
	this->vtable = &example_HashMapDemo_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_HashMapDemo_Nova_super(this, exceptionData);
	
	{
		example_Nova_HashMapDemo_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_HashMapDemo_Nova_destroy(example_Nova_HashMapDemo** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_HashMapDemo_static_Nova_main(example_Nova_HashMapDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	nova_datastruct_Nova_HashMap* l1_Nova_words = (nova_datastruct_Nova_HashMap*)nova_null;
	Context142* contextArg143 = NOVA_MALLOC(sizeof(Context142));
	Context143* contextArg144 = NOVA_MALLOC(sizeof(Context143));
	Context144* contextArg145 = NOVA_MALLOC(sizeof(Context144));
	Context145* contextArg146 = NOVA_MALLOC(sizeof(Context145));
	Context146* contextArg147 = NOVA_MALLOC(sizeof(Context146));
	
	l1_Nova_words = nova_datastruct_Nova_HashMap_0_Nova_construct(0, exceptionData, (intptr_t)nova_null, (intptr_t)nova_null);
	nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)(l1_Nova_words), exceptionData, (nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test"))), (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("is test"))));
	nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)(l1_Nova_words), exceptionData, (nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test2"))), (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("is test2"))));
	nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)(l1_Nova_words), exceptionData, (nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test3hey"))), (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("is test3hey"))));
	nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)(l1_Nova_words), exceptionData, (nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test4hey"))), (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("is test4hey"))));
	nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)(l1_Nova_words), exceptionData, (nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test5"))), (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("is test5"))));
	nova_datastruct_Nova_HashMap_Nova_set((nova_datastruct_Nova_HashMap*)(l1_Nova_words), exceptionData, (nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Whoah"))), (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("it works"))));
	nova_datastruct_Nova_HashMap_Nova_forEach((nova_datastruct_Nova_HashMap*)(l1_Nova_words), exceptionData, (nova_datastruct_Nova_HashMap_closure28_Nova_func)&example_Nova_HashMapDemo_static_Nova_lambda143, nova_null, contextArg143);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\nRemoving test2: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((nova_datastruct_Nova_HashMap_Nova_remove((nova_datastruct_Nova_HashMap*)(l1_Nova_words), exceptionData, (nova_operators_Nova_EqualsOperator*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("test2")))))), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")))))));
	nova_datastruct_Nova_HashMap_Nova_forEach((nova_datastruct_Nova_HashMap*)(l1_Nova_words), exceptionData, (nova_datastruct_Nova_HashMap_closure28_Nova_func)&example_Nova_HashMapDemo_static_Nova_lambda144, nova_null, contextArg144);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_HashMap_Nova_filter((nova_datastruct_Nova_HashMap*)(l1_Nova_words), exceptionData, (nova_datastruct_Nova_HashMap_closure20_Nova_func)&example_Nova_HashMapDemo_static_Nova_lambda145, nova_null, contextArg145)), exceptionData, (nova_datastruct_list_Nova_List_closure292_Nova_mapFunc)&example_Nova_HashMapDemo_static_Nova_lambda146, nova_null, contextArg146)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")))))));
	nova_datastruct_Nova_HashMap_Nova_forEach((nova_datastruct_Nova_HashMap*)(l1_Nova_words), exceptionData, (nova_datastruct_Nova_HashMap_closure28_Nova_func)&example_Nova_HashMapDemo_static_Nova_lambda147, nova_null, contextArg147);
	nova_io_Nova_Console_static_Nova_waitForEnter(0, exceptionData);
}

void example_Nova_HashMapDemo_Nova_this(example_Nova_HashMapDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_HashMapDemo_static_Nova_lambda143(example_Nova_HashMapDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context142* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Contains: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
}

void example_Nova_HashMapDemo_static_Nova_lambda144(example_Nova_HashMapDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context143* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Contains: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
}

char example_Nova_HashMapDemo_static_Nova_lambda145(example_Nova_HashMapDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context144* context)
{
	return nova_Nova_String_0_Nova_contains((nova_Nova_String*)(_1->nova_datastruct_Nova_Pair_Nova_key), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("hey")));
}

nova_Nova_Object* example_Nova_HashMapDemo_static_Nova_lambda146(example_Nova_HashMapDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context145* context)
{
	return (nova_Nova_Object*)_1->nova_datastruct_Nova_Pair_Nova_value;
}

void example_Nova_HashMapDemo_static_Nova_lambda147(example_Nova_HashMapDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Pair* _1, int _2, nova_datastruct_Nova_HashMap* _3, Context146* context)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Contains: ")), exceptionData, (nova_Nova_String*)(nova_Nova_String_Nova_plus(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((_1)), exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
}

void example_Nova_HashMapDemo_Nova_super(example_Nova_HashMapDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_HashMapDemoFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_HashMapDemoFunctionMap* example_Nova_HashMapDemoFunctionMap_Nova_construct(example_Nova_HashMapDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_HashMapDemoFunctionMap, this,);
	this->vtable = &example_HashMapDemo_HashMapDemoFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	example_Nova_HashMapDemoFunctionMap_Nova_super(this, exceptionData);
	
	{
		example_Nova_HashMapDemoFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_HashMapDemoFunctionMap_Nova_destroy(example_Nova_HashMapDemoFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_HashMapDemoFunctionMap_Nova_this(example_Nova_HashMapDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

example_Nova_HashMapDemo* example_Nova_HashMapDemoFunctionMap_functionMapHashMapDemoFunctionMap_Nova_construct(example_Nova_HashMapDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return example_Nova_HashMapDemo_Nova_construct(0, exceptionData);
}

void example_Nova_HashMapDemoFunctionMap_functionMap_static_Nova_main(example_Nova_HashMapDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* args)
{
	example_Nova_HashMapDemo_static_Nova_main(0, exceptionData, args);
}

void example_Nova_HashMapDemoFunctionMap_Nova_super(example_Nova_HashMapDemoFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

