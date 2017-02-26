#ifndef NOVA_CLASS_DATA
#define NOVA_CLASS_DATA

typedef struct NovaClassData NovaClassData;

typedef struct nova_datastruct_vtable_Comparable nova_datastruct_vtable_Comparable;
typedef struct nova_datastruct_list_vtable_Iterable nova_datastruct_list_vtable_Iterable;
typedef struct nova_datastruct_list_vtable_Iterator nova_datastruct_list_vtable_Iterator;
typedef struct nova_datastruct_list_vtable_List nova_datastruct_list_vtable_List;
typedef struct nova_datastruct_list_vtable_OrderedList nova_datastruct_list_vtable_OrderedList;
typedef struct nova_io_vtable_InputStream nova_io_vtable_InputStream;
typedef struct nova_io_vtable_OutputStream nova_io_vtable_OutputStream;
typedef struct nova_operators_vtable_EqualsOperator nova_operators_vtable_EqualsOperator;
typedef struct nova_operators_vtable_MinusEqualsOperator nova_operators_vtable_MinusEqualsOperator;
typedef struct nova_operators_vtable_MinusOperator nova_operators_vtable_MinusOperator;
typedef struct nova_operators_vtable_MultiplyEqualsOperator nova_operators_vtable_MultiplyEqualsOperator;
typedef struct nova_operators_vtable_MultiplyOperator nova_operators_vtable_MultiplyOperator;
typedef struct nova_operators_vtable_NotEqualToOperator nova_operators_vtable_NotEqualToOperator;
typedef struct nova_operators_vtable_PlusEqualsOperator nova_operators_vtable_PlusEqualsOperator;
typedef struct nova_operators_vtable_PlusOperator nova_operators_vtable_PlusOperator;
typedef struct nova_primitive_number_vtable_Integer nova_primitive_number_vtable_Integer;
typedef struct nova_primitive_number_vtable_RealNumber nova_primitive_number_vtable_RealNumber;
typedef struct example_vtable_Polygon example_vtable_Polygon;
extern nova_datastruct_vtable_Comparable nova_datastruct_vtable_Comparable_value_default;
extern nova_datastruct_list_vtable_Iterable nova_datastruct_list_vtable_Iterable_value_default;
extern nova_datastruct_list_vtable_Iterator nova_datastruct_list_vtable_Iterator_value_default;
extern nova_datastruct_list_vtable_List nova_datastruct_list_vtable_List_value_default;
extern nova_datastruct_list_vtable_OrderedList nova_datastruct_list_vtable_OrderedList_value_default;
extern nova_io_vtable_InputStream nova_io_vtable_InputStream_value_default;
extern nova_io_vtable_OutputStream nova_io_vtable_OutputStream_value_default;
extern nova_operators_vtable_EqualsOperator nova_operators_vtable_EqualsOperator_value_default;
extern nova_operators_vtable_MinusEqualsOperator nova_operators_vtable_MinusEqualsOperator_value_default;
extern nova_operators_vtable_MinusOperator nova_operators_vtable_MinusOperator_value_default;
extern nova_operators_vtable_MultiplyEqualsOperator nova_operators_vtable_MultiplyEqualsOperator_value_default;
extern nova_operators_vtable_MultiplyOperator nova_operators_vtable_MultiplyOperator_value_default;
extern nova_operators_vtable_NotEqualToOperator nova_operators_vtable_NotEqualToOperator_value_default;
extern nova_operators_vtable_PlusEqualsOperator nova_operators_vtable_PlusEqualsOperator_value_default;
extern nova_operators_vtable_PlusOperator nova_operators_vtable_PlusOperator_value_default;
extern nova_primitive_number_vtable_Integer nova_primitive_number_vtable_Integer_value_default;
extern nova_primitive_number_vtable_RealNumber nova_primitive_number_vtable_RealNumber_value_default;
extern example_vtable_Polygon example_vtable_Polygon_value_default;
struct nova_datastruct_vtable_Comparable {
char x;
};

struct nova_datastruct_list_vtable_Iterable {
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Accessorfunc_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*);
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Mutatorfunc_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Iterator*);
};

struct nova_datastruct_list_vtable_Iterator {
char (*nova_datastruct_list_Nova_Iterator_virtual_Accessorfunc_Nova_hasNext)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*);
nova_Nova_Object* (*nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*);
};

struct nova_datastruct_list_vtable_List {
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_List_virtual_Nova_toArray)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
char (*nova_datastruct_list_Nova_List_virtual1_Nova_contains)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual1_Nova_forEach)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure180_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual1_Nova_map)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure184_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context);
char (*nova_datastruct_list_Nova_List_virtual1_Nova_any)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure188_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context);
char (*nova_datastruct_list_Nova_List_virtual1_Nova_all)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure192_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual1_Nova_filter)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure196_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual_Nova_take)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual_Nova_skip)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual1_Nova_firstWhere)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure208_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
nova_Nova_String* (*nova_datastruct_list_Nova_List_virtual_Nova_join)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
int (*nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_count)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
int (*nova_datastruct_list_Nova_List_virtual_Mutatorfunc_Nova_count)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Accessorfunc_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*);
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Mutatorfunc_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_Iterator*);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual_Accessorfunc_Nova_first)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual_Mutatorfunc_Nova_first)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual_Accessor_Nova_last)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual_Mutator_Nova_last)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
};

struct nova_datastruct_list_vtable_OrderedList {
char x;
};

struct nova_io_vtable_InputStream {
char x;
};

struct nova_io_vtable_OutputStream {
nova_io_Nova_OutputStream* (*nova_io_Nova_OutputStream_virtual_Nova_write)(nova_io_Nova_OutputStream*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
};

struct nova_operators_vtable_EqualsOperator {
char x;
};

struct nova_operators_vtable_MinusEqualsOperator {
char x;
};

struct nova_operators_vtable_MinusOperator {
char x;
};

struct nova_operators_vtable_MultiplyEqualsOperator {
char x;
};

struct nova_operators_vtable_MultiplyOperator {
char x;
};

struct nova_operators_vtable_NotEqualToOperator {
char x;
};

struct nova_operators_vtable_PlusEqualsOperator {
char x;
};

struct nova_operators_vtable_PlusOperator {
char x;
};

struct nova_primitive_number_vtable_Integer {
char x;
};

struct nova_primitive_number_vtable_RealNumber {
char x;
};

struct example_vtable_Polygon {
char x;
};



struct NovaClassData {
nova_datastruct_vtable_Comparable* nova_datastruct_vtable_Comparable_value;
nova_datastruct_list_vtable_Iterable* nova_datastruct_list_vtable_Iterable_value;
nova_datastruct_list_vtable_Iterator* nova_datastruct_list_vtable_Iterator_value;
nova_datastruct_list_vtable_List* nova_datastruct_list_vtable_List_value;
nova_datastruct_list_vtable_OrderedList* nova_datastruct_list_vtable_OrderedList_value;
nova_io_vtable_InputStream* nova_io_vtable_InputStream_value;
nova_io_vtable_OutputStream* nova_io_vtable_OutputStream_value;
nova_operators_vtable_EqualsOperator* nova_operators_vtable_EqualsOperator_value;
nova_operators_vtable_MinusEqualsOperator* nova_operators_vtable_MinusEqualsOperator_value;
nova_operators_vtable_MinusOperator* nova_operators_vtable_MinusOperator_value;
nova_operators_vtable_MultiplyEqualsOperator* nova_operators_vtable_MultiplyEqualsOperator_value;
nova_operators_vtable_MultiplyOperator* nova_operators_vtable_MultiplyOperator_value;
nova_operators_vtable_NotEqualToOperator* nova_operators_vtable_NotEqualToOperator_value;
nova_operators_vtable_PlusEqualsOperator* nova_operators_vtable_PlusEqualsOperator_value;
nova_operators_vtable_PlusOperator* nova_operators_vtable_PlusOperator_value;
nova_primitive_number_vtable_Integer* nova_primitive_number_vtable_Integer_value;
nova_primitive_number_vtable_RealNumber* nova_primitive_number_vtable_RealNumber_value;
example_vtable_Polygon* example_vtable_Polygon_value;

nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*nova_Nova_String_virtual_Nova_concat)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
nova_Nova_String* (*nova_Nova_String_virtual_Nova_substring)(nova_Nova_String*, nova_exception_Nova_ExceptionData*, int, int);
nova_Nova_Object* (*nova_datastruct_Nova_HashMap_virtual_Nova_add)(nova_datastruct_Nova_HashMap*, nova_exception_Nova_ExceptionData*, nova_operators_Nova_EqualsOperator*, nova_Nova_Object*);
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_ArrayFunctionMap_virtualfunctionMapArray0_Nova_construct)(nova_datastruct_list_Nova_ArrayFunctionMap*, nova_exception_Nova_ExceptionData*);
nova_exception_Nova_Exception* (*nova_exception_Nova_ExceptionFunctionMap_virtualfunctionMapException_Nova_construct)(nova_exception_Nova_ExceptionFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
nova_math_Nova_NumericOperand* (*nova_math_Nova_NumericOperandFunctionMap_virtualfunctionMapNumericOperand_Nova_construct)(nova_math_Nova_NumericOperandFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
nova_math_logic_Nova_LogicalStatement* (*nova_math_logic_Nova_LogicalStatementFunctionMap_virtualfunctionMapLogicalStatement_Nova_construct)(nova_math_logic_Nova_LogicalStatementFunctionMap*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
nova_math_logic_Nova_StatementComponent* (*nova_math_logic_Nova_StatementComponentFunctionMap_virtualfunctionMapStatementComponent_Nova_construct)(nova_math_logic_Nova_StatementComponentFunctionMap*, nova_exception_Nova_ExceptionData*);
nova_primitive_Nova_Primitive* (*nova_primitive_Nova_PrimitiveFunctionMap_virtualfunctionMapPrimitive_Nova_construct)(nova_primitive_Nova_PrimitiveFunctionMap*, nova_exception_Nova_ExceptionData*);
double (*nova_primitive_number_Nova_Number_virtual_Nova_compareToReal)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, double);
long_long (*nova_primitive_number_Nova_Number_virtual_Nova_compareToInteger)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, long_long);
double (*nova_primitive_number_Nova_Number_virtual_Nova_multiplyReal)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, double);
long_long (*nova_primitive_number_Nova_Number_virtual_Nova_multiplyInteger)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, long_long);
double (*nova_primitive_number_Nova_Number_virtual_Nova_plusReal)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, double);
long_long (*nova_primitive_number_Nova_Number_virtual_Nova_plusInteger)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, long_long);
double (*nova_primitive_number_Nova_Number_virtual_Nova_plusEqualsReal)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, double);
long_long (*nova_primitive_number_Nova_Number_virtual_Nova_plusEqualsInteger)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, long_long);
double (*nova_primitive_number_Nova_Number_virtual_Nova_minusReal)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, double);
long_long (*nova_primitive_number_Nova_Number_virtual_Nova_minusInteger)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, long_long);
double (*nova_primitive_number_Nova_Number_virtual_Nova_minusEqualsReal)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, double);
long_long (*nova_primitive_number_Nova_Number_virtual_Nova_minusEqualsInteger)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, long_long);
double (*nova_primitive_number_Nova_Number_virtual_Nova_multiplyEqualsReal)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, double);
long_long (*nova_primitive_number_Nova_Number_virtual_Nova_multiplyEqualsInteger)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, long_long);
char (*nova_primitive_number_Nova_Number_virtual_Nova_equalsReal)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, double);
char (*nova_primitive_number_Nova_Number_virtual_Nova_equalsInteger)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*, long_long);
double (*nova_primitive_number_Nova_Number_virtual_Accessorfunc_Nova_realValue)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*);
long_long (*nova_primitive_number_Nova_Number_virtual_Accessor_Nova_integerValue)(nova_primitive_number_Nova_Number*, nova_exception_Nova_ExceptionData*);
void (*nova_thread_Nova_Thread_virtual_Nova_run)(nova_thread_Nova_Thread*, nova_exception_Nova_ExceptionData*);
void (*nova_thread_Nova_UncaughtExceptionHandler_virtual_Nova_uncaughtException)(nova_thread_Nova_UncaughtExceptionHandler*, nova_exception_Nova_ExceptionData*, nova_thread_Nova_Thread*, nova_exception_Nova_Exception*);
nova_time_Nova_Timer* (*nova_time_Nova_Timer_virtual_Nova_stop)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*);
long_long (*nova_time_Nova_Timer_virtual_Accessor_Nova_duration)(nova_time_Nova_Timer*, nova_exception_Nova_ExceptionData*);
nova_time_Nova_Timer* (*nova_time_Nova_TimerFunctionMap_virtualfunctionMapTimer_Nova_construct)(nova_time_Nova_TimerFunctionMap*, nova_exception_Nova_ExceptionData*);
void (*nova_web_svg_Nova_SvgComponent_virtual_Nova_generateOutput)(nova_web_svg_Nova_SvgComponent*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
nova_web_svg_Nova_SvgComponent* (*nova_web_svg_Nova_SvgComponentFunctionMap_virtualfunctionMapSvgComponent_Nova_construct)(nova_web_svg_Nova_SvgComponentFunctionMap*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*nova_web_svg_no3_Nova_No3Node_virtual_Nova_toJs)(nova_web_svg_no3_Nova_No3Node*, nova_exception_Nova_ExceptionData*);
int (*example_Nova_Animal_virtual_Nova_getNumLegs)(example_Nova_Animal*, nova_exception_Nova_ExceptionData*);
int (*example_Nova_Animal_virtual_Nova_getNumEyes)(example_Nova_Animal*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*example_Nova_Animal_virtual_Nova_getDescription)(example_Nova_Animal*, nova_exception_Nova_ExceptionData*);
example_Nova_Animal* (*example_Nova_AnimalFunctionMap_virtualfunctionMapAnimal_Nova_construct)(example_Nova_AnimalFunctionMap*, nova_exception_Nova_ExceptionData*);
void (*example_Nova_Person_virtual_Nova_sayHello)(example_Nova_Person*, nova_exception_Nova_ExceptionData*);
int (*example_Nova_T1_virtual_Accessor_static_Nova_ind)(example_Nova_T1*, nova_exception_Nova_ExceptionData*);
example_Nova_T1* (*example_Nova_T1FunctionMap_virtualfunctionMapT1_Nova_construct)(example_Nova_T1FunctionMap*, nova_exception_Nova_ExceptionData*);
int (*example_Nova_T1PropertyMap_virtualfunctionMap_static_Nova_ind)(example_Nova_T1PropertyMap*, nova_exception_Nova_ExceptionData*);
void (*stabilitytest_Nova_StabilityTestCase_virtual_Nova_test)(stabilitytest_Nova_StabilityTestCase*, nova_exception_Nova_ExceptionData*);
stabilitytest_Nova_StabilityTestCase* (*stabilitytest_Nova_StabilityTestCaseFunctionMap_virtualfunctionMapStabilityTestCase_Nova_construct)(stabilitytest_Nova_StabilityTestCaseFunctionMap*, nova_exception_Nova_ExceptionData*, stabilitytest_Nova_StabilityTest*);
int (*stabilitytest_Nova_PolymorphicSuperClass_virtual_Accessor_Nova_myProperty)(stabilitytest_Nova_PolymorphicSuperClass*, nova_exception_Nova_ExceptionData*);
stabilitytest_Nova_PolymorphicSuperClass* (*stabilitytest_Nova_PolymorphicSuperClassFunctionMap_virtualfunctionMapPolymorphicSuperClass_Nova_construct)(stabilitytest_Nova_PolymorphicSuperClassFunctionMap*, nova_exception_Nova_ExceptionData*);
};

#endif