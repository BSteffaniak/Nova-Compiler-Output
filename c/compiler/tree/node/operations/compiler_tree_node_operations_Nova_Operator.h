#pragma once
#ifndef FILE_compiler_tree_node_operations_Nova_Operator_NOVA
#define FILE_compiler_tree_node_operations_Nova_Operator_NOVA

typedef struct compiler_tree_node_operations_Nova_Operator compiler_tree_node_operations_Nova_Operator;


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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct compiler_tree_node_operations_Operator_Extension_VTable compiler_tree_node_operations_Operator_Extension_VTable;
struct compiler_tree_node_operations_Operator_Extension_VTable
{
	nova_Interface_VTable itable;
	char (*nova_operators_Nova_Equals_virtual_Nova_equals)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
};

extern compiler_tree_node_operations_Operator_Extension_VTable compiler_tree_node_operations_Operator_Extension_VTable_val;


CCLASS_CLASS
(
	compiler_tree_node_operations_Nova_Operator, 
	
	compiler_tree_node_operations_Operator_Extension_VTable* vtable;
	nova_Nova_Class* nova_Nova_Object_Nova_class;
	nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_operator;
)
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_AND;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_OR;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_DIVIDE;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_MULTIPLY;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_MODULO;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_ADD;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_SUBTRACT;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_ASSIGN;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_BANG;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_EQUALS;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_NOT_EQUAL;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_INCREMENT;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_DECREMENT;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_BITWISE_AND;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_BITWISE_OR;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_BITWISE_XOR;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_BITWISE_COMPLEMENT;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_GREATER;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_LESS;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_GREATER_EQ;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_LESS_EQ;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_L_SHIFT;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_R_SHIFT;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_UR_SHIFT;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_SHORTHAND_DIVIDE;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_SHORTHAND_MULTIPLY;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_SHORTHAND_MODULO;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_SHORTHAND_ADD;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_SHORTHAND_SUBTRACT;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_AND;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_OR;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_SHORTHAND_BITWISE_XOR;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_SHORTHAND_L_SHIFT;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_SHORTHAND_R_SHIFT;
extern nova_Nova_String* compiler_tree_node_operations_Nova_Operator_Nova_SHORTHAND_UR_SHIFT;
extern nova_datastruct_list_Nova_Array* compiler_tree_node_operations_Nova_Operator_Nova_OPERATORS;
extern nova_datastruct_list_Nova_Array* compiler_tree_node_operations_Nova_Operator_Nova_UNARY_OPERATORS;
extern nova_datastruct_list_Nova_Array* compiler_tree_node_operations_Nova_Operator_Nova_UNARY_OPERATORS_NO_MINUS;
extern nova_datastruct_list_Nova_Array* compiler_tree_node_operations_Nova_Operator_Nova_MINUS;
extern nova_datastruct_list_Nova_Array* compiler_tree_node_operations_Nova_Operator_Nova_BINARY_OPERATORS;
extern nova_datastruct_list_Nova_Array* compiler_tree_node_operations_Nova_Operator_Nova_LOGICAL_OPERATORS;
extern nova_datastruct_list_Nova_Array* compiler_tree_node_operations_Nova_Operator_Nova_SHORTHAND_OPERATORS;

void compiler_tree_node_operations_Nova_Operator_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
compiler_tree_node_operations_Nova_Operator* compiler_tree_node_operations_Nova_Operator_Nova_construct(compiler_tree_node_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_node_operations_Nova_Operator_Nova_destroy(compiler_tree_node_operations_Nova_Operator** this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_node_operations_Nova_Operator_Nova_this(compiler_tree_node_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData);
void compiler_tree_node_operations_Nova_Operator_Nova_super(compiler_tree_node_operations_Nova_Operator* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
