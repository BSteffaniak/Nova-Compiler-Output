#include "NovaNativeInterface.h"

nova_env novaEnv = {
{
0,
&nova_Nova_Object_Nova_construct,
},

{
0,
&nova_Nova_String_Nova_repeat,
&nova_Nova_String_0_Nova_replace,
&nova_Nova_String_1_Nova_replace,
&nova_Nova_String_0_Nova_startsWith,
&nova_Nova_String_1_Nova_startsWith,
&nova_Nova_String_2_Nova_startsWith,
&nova_Nova_String_0_Nova_contains,
&nova_Nova_String_1_Nova_contains,
&nova_Nova_String_0_Nova_endsWith,
&nova_Nova_String_1_Nova_endsWith,
&nova_Nova_String_Nova_matches,
&nova_Nova_String_0_Nova_indexOf,
&nova_Nova_String_1_Nova_indexOf,
&nova_Nova_String_2_Nova_indexOf,
&nova_Nova_String_0_Nova_lastIndexOf,
&nova_Nova_String_1_Nova_lastIndexOf,
&nova_Nova_String_Nova_validateSubstringBounds,
0,
&nova_Nova_String_Nova_trimStart,
&nova_Nova_String_Nova_trimEnd,
&nova_Nova_String_Nova_trimEnds,
&nova_Nova_String_Nova_trim,
&nova_Nova_String_Nova_toLowerCase,
&nova_Nova_String_Nova_toUpperCase,
&nova_Nova_String_Nova_capitalize,
&nova_Nova_String_Nova_transform,
&nova_Nova_String_Nova_getStringBetween,
&nova_Nova_String_Nova_surroundWith,
&nova_Nova_String_Nova_split,
&nova_Nova_String_Nova_getGroupedChars,
&nova_Nova_String_Nova_get,
&nova_Nova_String_Nova_set,
&nova_Nova_String_0_Nova_construct,
&nova_Nova_String_1_Nova_construct,
&nova_Nova_String_2_Nova_construct,
&nova_Nova_String_3_Nova_construct,
},
{
&nova_Nova_StringFunctionMap_Nova_construct,
},

{
&nova_Nova_Substring_Nova_construct,
},
{
&nova_Nova_SubstringFunctionMap_Nova_construct,
},

{
&nova_Nova_System_Nova_construct,
},
{
&nova_Nova_SystemFunctionMap_Nova_construct,
},

{
&nova_ar_Nova_ImageTracker_Nova_construct,
},
{
&nova_ar_Nova_ImageTrackerFunctionMap_Nova_construct,
},

{
&nova_ar_Nova_TrackPoint_Nova_construct,
},
{
&nova_ar_Nova_TrackPointFunctionMap_Nova_construct,
},

{
&nova_database_Nova_DBConnector_0_Nova_connect,
&nova_database_Nova_DBConnector_1_Nova_connect,
&nova_database_Nova_DBConnector_2_Nova_connect,
&nova_database_Nova_DBConnector_Nova_updateError,
&nova_database_Nova_DBConnector_Nova_changeUser,
&nova_database_Nova_DBConnector_Nova_query,
&nova_database_Nova_DBConnector_Nova_close,
&nova_database_Nova_DBConnector_Nova_construct,
},
{
&nova_database_Nova_DBConnectorFunctionMap_Nova_construct,
},

{
&nova_database_Nova_ResultSet_Nova_construct,
},
{
&nova_database_Nova_ResultSetFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_BinaryNode_Nova_addChild,
&nova_datastruct_Nova_BinaryNode_0_Nova_construct,
},
{
&nova_datastruct_Nova_BinaryNodeFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_BinaryTree_Nova_addNode,
&nova_datastruct_Nova_BinaryTree_Nova_addNodes,
&nova_datastruct_Nova_BinaryTree_Nova_construct,
},
{
&nova_datastruct_Nova_BinaryTreeFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_Bounds_Nova_extractString,
&nova_datastruct_Nova_Bounds_Nova_extractPreString,
&nova_datastruct_Nova_Bounds_Nova_extractPostString,
&nova_datastruct_Nova_Bounds_Nova_trimString,
&nova_datastruct_Nova_Bounds_Nova_invalidate,
&nova_datastruct_Nova_Bounds_Nova_cloneTo,
&nova_datastruct_Nova_Bounds_Nova_clone,
&nova_datastruct_Nova_Bounds_Nova_construct,
},
{
&nova_datastruct_Nova_BoundsFunctionMap_Nova_construct,
},

{
0,
},

{
0,
&nova_datastruct_Nova_HashMap_Nova_remove,
&nova_datastruct_Nova_HashMap_Nova_containsKey,
&nova_datastruct_Nova_HashMap_Nova_clone,
&nova_datastruct_Nova_HashMap_Nova_toImmutable,
&nova_datastruct_Nova_HashMap_Nova_get,
&nova_datastruct_Nova_HashMap_Nova_set,
&nova_datastruct_Nova_HashMap_0_Nova_construct,
&nova_datastruct_Nova_HashMap_1_Nova_construct,
},
{
&nova_datastruct_Nova_HashMapFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_HashSet_Nova_add,
&nova_datastruct_Nova_HashSet_Nova_get,
&nova_datastruct_Nova_HashSet_Nova_remove,
&nova_datastruct_Nova_HashSet_Nova_construct,
},
{
&nova_datastruct_Nova_HashSetFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_ImmutableHashMap_Nova_containsKey,
&nova_datastruct_Nova_ImmutableHashMap_Nova_get,
&nova_datastruct_Nova_ImmutableHashMap_Nova_set,
&nova_datastruct_Nova_ImmutableHashMap_0_Nova_construct,
},
{
&nova_datastruct_Nova_ImmutableHashMapFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_Node_0_Nova_preorder,
&nova_datastruct_Nova_Node_0_Nova_inorder,
&nova_datastruct_Nova_Node_0_Nova_postorder,
&nova_datastruct_Nova_Node_0_Nova_levelorder,
&nova_datastruct_Nova_Node_Nova_get,
&nova_datastruct_Nova_Node_Nova_set,
&nova_datastruct_Nova_Node_Nova_construct,
},
{
&nova_datastruct_Nova_NodeFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_Pair_Nova_construct,
},
{
&nova_datastruct_Nova_PairFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_ReversibleHashMap_Nova_getKey,
&nova_datastruct_Nova_ReversibleHashMap_Nova_getValue,
&nova_datastruct_Nova_ReversibleHashMap_Nova_construct,
},
{
&nova_datastruct_Nova_ReversibleHashMapFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_Tree_Nova_preorder,
&nova_datastruct_Nova_Tree_Nova_inorder,
&nova_datastruct_Nova_Tree_Nova_postorder,
&nova_datastruct_Nova_Tree_Nova_levelorder,
&nova_datastruct_Nova_Tree_Nova_construct,
},
{
&nova_datastruct_Nova_TreeFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_Tuple_Nova_construct,
},
{
&nova_datastruct_Nova_TupleFunctionMap_Nova_construct,
},

{
&nova_datastruct_Nova_Tuple2_Nova_construct,
},
{
&nova_datastruct_Nova_Tuple2FunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_Array_Nova_fillRemaining,
&nova_datastruct_list_Nova_Array_Nova_addAll,
0,
&nova_datastruct_list_Nova_Array_0_Nova_add,
&nova_datastruct_list_Nova_Array_1_Nova_add,
&nova_datastruct_list_Nova_Array_0_Nova_remove,
&nova_datastruct_list_Nova_Array_1_Nova_remove,
&nova_datastruct_list_Nova_Array_Nova_indexOf,
&nova_datastruct_list_Nova_Array_Nova_replace,
&nova_datastruct_list_Nova_Array_Nova_swap,
0,
0,
&nova_datastruct_list_Nova_Array_Nova_sumSize,
&nova_datastruct_list_Nova_Array_0_Nova_mergeSort,
&nova_datastruct_list_Nova_Array_0_Nova_quickSort,
&nova_datastruct_list_Nova_Array_1_Nova_mergeSort,
&nova_datastruct_list_Nova_Array_1_Nova_quickSort,
&nova_datastruct_list_Nova_Array_Nova_sort,
&nova_datastruct_list_Nova_Array_Nova_toImmutable,
0,
0,
&nova_datastruct_list_Nova_Array_0_Nova_construct,
&nova_datastruct_list_Nova_Array_1_Nova_construct,
&nova_datastruct_list_Nova_Array_2_Nova_construct,
},
{
&nova_datastruct_list_Nova_ArrayFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_ArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_ArrayIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_ArrayIteratorFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_CharArray_Nova_sum,
&nova_datastruct_list_Nova_CharArray_Nova_reduce,
&nova_datastruct_list_Nova_CharArray_0_Nova_construct,
&nova_datastruct_list_Nova_CharArray_1_Nova_construct,
&nova_datastruct_list_Nova_CharArray_2_Nova_construct,
},
{
&nova_datastruct_list_Nova_CharArrayFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_CharArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_CharArrayIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_CharArrayIteratorFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_CompiledList_Nova_construct,
},
{
&nova_datastruct_list_Nova_CompiledListFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_DoubleArray_Nova_sum,
&nova_datastruct_list_Nova_DoubleArray_0_Nova_construct,
&nova_datastruct_list_Nova_DoubleArray_1_Nova_construct,
&nova_datastruct_list_Nova_DoubleArray_2_Nova_construct,
},
{
&nova_datastruct_list_Nova_DoubleArrayFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_DoubleArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_DoubleArrayIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_DoubleArrayIteratorFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_EmptyStackException_Nova_construct,
},
{
&nova_datastruct_list_Nova_EmptyStackExceptionFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_ImmutableArray_Nova_indexOf,
&nova_datastruct_list_Nova_ImmutableArray_0_Nova_add,
&nova_datastruct_list_Nova_ImmutableArray_1_Nova_add,
&nova_datastruct_list_Nova_ImmutableArray_0_Nova_remove,
&nova_datastruct_list_Nova_ImmutableArray_1_Nova_remove,
&nova_datastruct_list_Nova_ImmutableArray_Nova_toMutable,
&nova_datastruct_list_Nova_ImmutableArray_Nova_get,
&nova_datastruct_list_Nova_ImmutableArray_Nova_set,
&nova_datastruct_list_Nova_ImmutableArray_0_Nova_construct,
&nova_datastruct_list_Nova_ImmutableArray_1_Nova_construct,
&nova_datastruct_list_Nova_ImmutableArray_2_Nova_construct,
},
{
&nova_datastruct_list_Nova_ImmutableArrayFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_ImmutableArrayIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_ImmutableArrayIteratorFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_ImmutableCharArray_Nova_toMutable,
&nova_datastruct_list_Nova_ImmutableCharArray_Nova_get,
&nova_datastruct_list_Nova_ImmutableCharArray_Nova_set,
&nova_datastruct_list_Nova_ImmutableCharArray_0_Nova_construct,
&nova_datastruct_list_Nova_ImmutableCharArray_1_Nova_construct,
},
{
&nova_datastruct_list_Nova_ImmutableCharArrayFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_ImmutableCharArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_ImmutableCharArrayIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_ImmutableCharArrayIteratorFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_IntArray_0_Nova_construct,
&nova_datastruct_list_Nova_IntArray_1_Nova_construct,
&nova_datastruct_list_Nova_IntArray_2_Nova_construct,
},
{
&nova_datastruct_list_Nova_IntArrayFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_IntArrayIterator_Nova_reset,
&nova_datastruct_list_Nova_IntArrayIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_IntArrayIteratorFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_IntRange_Nova_forEach,
&nova_datastruct_list_Nova_IntRange_0_Nova_construct,
&nova_datastruct_list_Nova_IntRange_1_Nova_construct,
},
{
&nova_datastruct_list_Nova_IntRangeFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_IntRangeIterator_Nova_reset,
&nova_datastruct_list_Nova_IntRangeIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_IntRangeIteratorFunctionMap_Nova_construct,
},

{
},

{
},

{
&nova_datastruct_list_Nova_LinkedList_Nova_addAll,
&nova_datastruct_list_Nova_LinkedList_Nova_add,
&nova_datastruct_list_Nova_LinkedList_Nova_remove,
&nova_datastruct_list_Nova_LinkedList_Nova_construct,
},
{
&nova_datastruct_list_Nova_LinkedListFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_LinkedListIterator_Nova_reset,
&nova_datastruct_list_Nova_LinkedListIterator_Nova_construct,
},
{
&nova_datastruct_list_Nova_LinkedListIteratorFunctionMap_Nova_construct,
},

{
0,
0,
0,
0,
0,
0,
0,
&nova_datastruct_list_Nova_List_Nova_filterEmpty,
0,
&nova_datastruct_list_Nova_List_Nova_takeLast,
0,
&nova_datastruct_list_Nova_List_Nova_firstOr,
&nova_datastruct_list_Nova_List_Nova_firstOrThrow,
0,
&nova_datastruct_list_Nova_List_Nova_firstNonNull,
&nova_datastruct_list_Nova_List_Nova_zip,
0,
&nova_datastruct_list_Nova_List_Nova_reduce,
0,
},

{
&nova_datastruct_list_Nova_ListNode_Nova_clone,
&nova_datastruct_list_Nova_ListNode_Nova_construct,
},
{
&nova_datastruct_list_Nova_ListNodeFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_NoSuchElementException_Nova_construct,
},
{
&nova_datastruct_list_Nova_NoSuchElementExceptionFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_OrderedList_Nova_findIndex,
},

{
&nova_datastruct_list_Nova_Queue_Nova_dequeue,
&nova_datastruct_list_Nova_Queue_Nova_enqueue,
&nova_datastruct_list_Nova_Queue_0_Nova_construct,
&nova_datastruct_list_Nova_Queue_1_Nova_construct,
},
{
&nova_datastruct_list_Nova_QueueFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_Stack_Nova_push,
&nova_datastruct_list_Nova_Stack_Nova_pop,
&nova_datastruct_list_Nova_Stack_Nova_peek,
&nova_datastruct_list_Nova_Stack_0_Nova_construct,
&nova_datastruct_list_Nova_Stack_1_Nova_construct,
},
{
&nova_datastruct_list_Nova_StackFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_StringCharArray_0_Nova_construct,
&nova_datastruct_list_Nova_StringCharArray_1_Nova_construct,
},
{
&nova_datastruct_list_Nova_StringCharArrayFunctionMap_Nova_construct,
},

{
&nova_datastruct_list_Nova_SubstringCharArray_Nova_construct,
},
{
&nova_datastruct_list_Nova_SubstringCharArrayFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_Backtraces_Nova_construct,
},
{
&nova_exception_Nova_BacktracesFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_CaughtException_Nova_construct,
},
{
&nova_exception_Nova_CaughtExceptionFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_DivideByZeroException_Nova_construct,
},
{
&nova_exception_Nova_DivideByZeroExceptionFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_Exception_Nova_construct,
},
{
&nova_exception_Nova_ExceptionFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_ExceptionData_Nova_addCaught,
&nova_exception_Nova_ExceptionData_Nova_throwException,
&nova_exception_Nova_ExceptionData_Nova_construct,
},
{
&nova_exception_Nova_ExceptionDataFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_InvalidArgumentException_Nova_construct,
},
{
&nova_exception_Nova_InvalidArgumentExceptionFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_InvalidOperationException_Nova_construct,
},
{
&nova_exception_Nova_InvalidOperationExceptionFunctionMap_Nova_construct,
},

{
&nova_exception_Nova_UnimplementedOperationException_Nova_construct,
},
{
&nova_exception_Nova_UnimplementedOperationExceptionFunctionMap_Nova_construct,
},

{
&nova_gc_Nova_GC_Nova_construct,
},
{
&nova_gc_Nova_GCFunctionMap_Nova_construct,
},

{
&nova_io_Nova_Console_Nova_construct,
},
{
&nova_io_Nova_ConsoleFunctionMap_Nova_construct,
},

{
&nova_io_Nova_File_Nova_getChildFiles,
&nova_io_Nova_File_Nova_directoryContents,
&nova_io_Nova_File_Nova_listFiles,
&nova_io_Nova_File_1_Nova_construct,
},
{
&nova_io_Nova_FileFunctionMap_Nova_construct,
},

{
&nova_io_Nova_FileNotFoundException_Nova_construct,
},
{
&nova_io_Nova_FileNotFoundExceptionFunctionMap_Nova_construct,
},

{
&nova_io_Nova_FileReader_Nova_readBytes,
&nova_io_Nova_FileReader_Nova_open,
&nova_io_Nova_FileReader_Nova_readAllContents,
&nova_io_Nova_FileReader_Nova_readLine,
&nova_io_Nova_FileReader_Nova_close,
&nova_io_Nova_FileReader_0_Nova_construct,
&nova_io_Nova_FileReader_1_Nova_construct,
},
{
&nova_io_Nova_FileReaderFunctionMap_Nova_construct,
},

{
&nova_io_Nova_FileWriter_Nova_delete,
&nova_io_Nova_FileWriter_Nova_reopen,
&nova_io_Nova_FileWriter_Nova_rewind,
&nova_io_Nova_FileWriter_Nova_clearContents,
&nova_io_Nova_FileWriter_Nova_create,
&nova_io_Nova_FileWriter_Nova_writeLine,
&nova_io_Nova_FileWriter_Nova_flush,
&nova_io_Nova_FileWriter_Nova_close,
&nova_io_Nova_FileWriter_0_Nova_construct,
&nova_io_Nova_FileWriter_1_Nova_construct,
},
{
&nova_io_Nova_FileWriterFunctionMap_Nova_construct,
},

{
0,
0,
},

{
0,
&nova_io_Nova_OutputStream_Nova_construct,
},
{
&nova_io_Nova_OutputStreamFunctionMap_Nova_construct,
},

{
&nova_io_Nova_StreamReader_Nova_construct,
},
{
&nova_io_Nova_StreamReaderFunctionMap_Nova_construct,
},

{
&nova_math_Nova_ArithmeticSequence_Nova_construct,
},
{
&nova_math_Nova_ArithmeticSequenceFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Diekstra_Nova_construct,
},
{
&nova_math_Nova_DiekstraFunctionMap_Nova_construct,
},

{
&nova_math_Nova_GeometricSequence_Nova_construct,
},
{
&nova_math_Nova_GeometricSequenceFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Graph_Nova_construct,
},
{
&nova_math_Nova_GraphFunctionMap_Nova_construct,
},

{
&nova_math_Nova_InvalidNumericStatementException_Nova_construct,
},
{
&nova_math_Nova_InvalidNumericStatementExceptionFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Math_Nova_construct,
},
{
&nova_math_Nova_MathFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Matrix_Nova_clone,
&nova_math_Nova_Matrix_Nova_inverse,
&nova_math_Nova_Matrix_Nova_swapRows,
&nova_math_Nova_Matrix_Nova_multiplyRow,
&nova_math_Nova_Matrix_Nova_addRow,
&nova_math_Nova_Matrix_Nova_subtractRow,
&nova_math_Nova_Matrix_Nova_add,
&nova_math_Nova_Matrix_1_Nova_plus,
&nova_math_Nova_Matrix_Nova_subtract,
&nova_math_Nova_Matrix_0_Nova_minus,
&nova_math_Nova_Matrix_1_Nova_minus,
&nova_math_Nova_Matrix_Nova_transpose,
&nova_math_Nova_Matrix_Nova_determinant,
&nova_math_Nova_Matrix_Nova_get,
&nova_math_Nova_Matrix_Nova_set,
&nova_math_Nova_Matrix_0_Nova_construct,
&nova_math_Nova_Matrix_1_Nova_construct,
&nova_math_Nova_Matrix_2_Nova_construct,
},
{
&nova_math_Nova_MatrixFunctionMap_Nova_construct,
},

{
&nova_math_Nova_NumericOperand_Nova_construct,
},
{
&nova_math_Nova_NumericOperandFunctionMap_Nova_construct,
},

{
&nova_math_Nova_NumericOperation_0_Nova_construct,
&nova_math_Nova_NumericOperation_1_Nova_construct,
},
{
&nova_math_Nova_NumericOperationFunctionMap_Nova_construct,
},

{
&nova_math_Nova_NumericStatement_Nova_construct,
},
{
&nova_math_Nova_NumericStatementFunctionMap_Nova_construct,
},

{
&nova_math_Nova_NumericTree_Nova_construct,
},
{
&nova_math_Nova_NumericTreeFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Polynomial_Nova_construct,
},
{
&nova_math_Nova_PolynomialFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Sequence_Nova_construct,
},
{
&nova_math_Nova_SequenceFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Statement_Nova_construct,
},
{
&nova_math_Nova_StatementFunctionMap_Nova_construct,
},

{
&nova_math_Nova_StatementComponent_Nova_construct,
},
{
&nova_math_Nova_StatementComponentFunctionMap_Nova_construct,
},

{
&nova_math_Nova_VariableOperand_Nova_construct,
},
{
&nova_math_Nova_VariableOperandFunctionMap_Nova_construct,
},

{
0,
&nova_math_Nova_Vector_Nova_innerProduct,
&nova_math_Nova_Vector_Nova_scale,
&nova_math_Nova_Vector_Nova_normalize,
&nova_math_Nova_Vector_0_Nova_construct,
&nova_math_Nova_Vector_1_Nova_construct,
},
{
&nova_math_Nova_VectorFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Vector2D_0_Nova_construct,
&nova_math_Nova_Vector2D_1_Nova_construct,
},
{
&nova_math_Nova_Vector2DFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Vector3D_Nova_crossProduct,
&nova_math_Nova_Vector3D_0_Nova_construct,
&nova_math_Nova_Vector3D_1_Nova_construct,
},
{
&nova_math_Nova_Vector3DFunctionMap_Nova_construct,
},

{
&nova_math_Nova_Vector4D_0_Nova_construct,
&nova_math_Nova_Vector4D_1_Nova_construct,
},
{
&nova_math_Nova_Vector4DFunctionMap_Nova_construct,
},

{
&nova_math_calculus_Nova_Calculus_Nova_construct,
},
{
&nova_math_calculus_Nova_CalculusFunctionMap_Nova_construct,
},

{
&nova_math_huffman_Nova_HuffmanTree_Nova_construct,
},
{
&nova_math_huffman_Nova_HuffmanTreeFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_Conclusion_Nova_construct,
},
{
&nova_math_logic_Nova_ConclusionFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_Hypothesis_Nova_construct,
},
{
&nova_math_logic_Nova_HypothesisFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_InvalidFormulaException_Nova_construct,
},
{
&nova_math_logic_Nova_InvalidFormulaExceptionFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_LogicalConnective_Nova_construct,
},
{
&nova_math_logic_Nova_LogicalConnectiveFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_LogicalStatement_Nova_construct,
},
{
&nova_math_logic_Nova_LogicalStatementFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_StatementComponent_Nova_construct,
},
{
&nova_math_logic_Nova_StatementComponentFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_StatementGroup_Nova_construct,
},
{
&nova_math_logic_Nova_StatementGroupFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_StatementLetter_Nova_construct,
},
{
&nova_math_logic_Nova_StatementLetterFunctionMap_Nova_construct,
},

{
&nova_math_logic_Nova_WFF_Nova_construct,
},
{
&nova_math_logic_Nova_WFFFunctionMap_Nova_construct,
},

{
&nova_meta_Nova_Class_Nova_isOfType,
&nova_meta_Nova_Class_Nova_construct,
},
{
&nova_meta_Nova_ClassFunctionMap_Nova_construct,
},

{
&nova_meta_Nova_Field_Nova_construct,
},
{
&nova_meta_Nova_FieldFunctionMap_Nova_construct,
},

{
&nova_meta_Nova_FunctionMap_Nova_construct,
},
{
&nova_meta_Nova_FunctionMapFunctionMap_Nova_construct,
},

{
&nova_meta_Nova_GenericArgument_Nova_construct,
},
{
&nova_meta_Nova_GenericArgumentFunctionMap_Nova_construct,
},

{
&nova_meta_Nova_GenericParameter_Nova_construct,
},
{
&nova_meta_Nova_GenericParameterFunctionMap_Nova_construct,
},

{
&nova_meta_Nova_Type_Nova_construct,
},
{
&nova_meta_Nova_TypeFunctionMap_Nova_construct,
},

{
&nova_network_Nova_ClientSocket_Nova_connect,
&nova_network_Nova_ClientSocket_Nova_close,
&nova_network_Nova_ClientSocket_Nova_construct,
},
{
&nova_network_Nova_ClientSocketFunctionMap_Nova_construct,
},

{
&nova_network_Nova_ConnectionSocket_Nova_close,
&nova_network_Nova_ConnectionSocket_Nova_validateConnection,
&nova_network_Nova_ConnectionSocket_0_Nova_readString,
&nova_network_Nova_ConnectionSocket_Nova_write,
&nova_network_Nova_ConnectionSocket_Nova_construct,
},
{
&nova_network_Nova_ConnectionSocketFunctionMap_Nova_construct,
},

{
&nova_network_Nova_NetworkInputStream_Nova_construct,
},
{
&nova_network_Nova_NetworkInputStreamFunctionMap_Nova_construct,
},

{
&nova_network_Nova_NetworkOutputStream_0_Nova_write,
&nova_network_Nova_NetworkOutputStream_Nova_construct,
},
{
&nova_network_Nova_NetworkOutputStreamFunctionMap_Nova_construct,
},

{
&nova_network_Nova_ServerSocket_Nova_start,
&nova_network_Nova_ServerSocket_Nova_close,
&nova_network_Nova_ServerSocket_Nova_acceptClient,
&nova_network_Nova_ServerSocket_Nova_construct,
},
{
&nova_network_Nova_ServerSocketFunctionMap_Nova_construct,
},

{
&nova_network_Nova_Socket_Nova_construct,
},
{
&nova_network_Nova_SocketFunctionMap_Nova_construct,
},

{
0,
},

{
},

{
0,
},

{
},

{
0,
},

{
0,
},

{
&nova_primitive_Nova_Bool_Nova_compareTo,
&nova_primitive_Nova_Bool_Nova_construct,
},
{
&nova_primitive_Nova_BoolFunctionMap_Nova_construct,
},

{
&nova_primitive_Nova_Null_Nova_construct,
},
{
&nova_primitive_Nova_NullFunctionMap_Nova_construct,
},

{
&nova_primitive_Nova_Primitive_Nova_construct,
},
{
&nova_primitive_Nova_PrimitiveFunctionMap_Nova_construct,
},

{
&nova_primitive_number_Nova_Byte_Nova_construct,
},
{
&nova_primitive_number_Nova_ByteFunctionMap_Nova_construct,
},

{
&nova_primitive_number_Nova_Char_Nova_toLowerCase,
&nova_primitive_number_Nova_Char_Nova_toUpperCase,
&nova_primitive_number_Nova_Char_Nova_construct,
},
{
&nova_primitive_number_Nova_CharFunctionMap_Nova_construct,
},

{
&nova_primitive_number_Nova_Double_Nova_compareTo,
&nova_primitive_number_Nova_Double_Nova_construct,
},
{
&nova_primitive_number_Nova_DoubleFunctionMap_Nova_construct,
},

{
&nova_primitive_number_Nova_Float_Nova_compareTo,
&nova_primitive_number_Nova_Float_Nova_construct,
},
{
&nova_primitive_number_Nova_FloatFunctionMap_Nova_construct,
},

{
&nova_primitive_number_Nova_Int_Nova_construct,
},
{
&nova_primitive_number_Nova_IntFunctionMap_Nova_construct,
},

{
},

{
&nova_primitive_number_Nova_Long_Nova_compareTo,
&nova_primitive_number_Nova_Long_Nova_construct,
},
{
&nova_primitive_number_Nova_LongFunctionMap_Nova_construct,
},

{
&nova_primitive_number_Nova_Number_Nova_construct,
},
{
&nova_primitive_number_Nova_NumberFunctionMap_Nova_construct,
},

{
},

{
&nova_primitive_number_Nova_Short_Nova_construct,
},
{
&nova_primitive_number_Nova_ShortFunctionMap_Nova_construct,
},

{
&nova_process_Nova_Process_Nova_construct,
},
{
&nova_process_Nova_ProcessFunctionMap_Nova_construct,
},

{
&nova_regex_Nova_Match_Nova_construct,
},
{
&nova_regex_Nova_MatchFunctionMap_Nova_construct,
},

{
&nova_regex_Nova_Pattern_Nova_construct,
},
{
&nova_regex_Nova_PatternFunctionMap_Nova_construct,
},

{
&nova_regex_Nova_Regex_Nova_construct,
},
{
&nova_regex_Nova_RegexFunctionMap_Nova_construct,
},

{
&nova_security_Nova_MD5_Nova_construct,
},
{
&nova_security_Nova_MD5FunctionMap_Nova_construct,
},

{
&nova_security_Nova_Sha256_Nova_digest,
&nova_security_Nova_Sha256_Nova_construct,
},
{
&nova_security_Nova_Sha256FunctionMap_Nova_construct,
},

{
&nova_serialization_Nova_JsonSerializer_Nova_serialize,
&nova_serialization_Nova_JsonSerializer_Nova_parse,
&nova_serialization_Nova_JsonSerializer_Nova_construct,
},
{
&nova_serialization_Nova_JsonSerializerFunctionMap_Nova_construct,
},

{
&nova_star_Nova_Frame_Nova_construct,
},
{
&nova_star_Nova_FrameFunctionMap_Nova_construct,
},

{
&nova_star_Nova_Window_Nova_create,
&nova_star_Nova_Window_Nova_construct,
},
{
&nova_star_Nova_WindowFunctionMap_Nova_construct,
},

{
&nova_star_Nova_WindowThread_Nova_construct,
},
{
&nova_star_Nova_WindowThreadFunctionMap_Nova_construct,
},

{
&nova_thread_Nova_Thread_Nova_start,
&nova_thread_Nova_Thread_Nova_join,
&nova_thread_Nova_Thread_Nova_kill,
0,
&nova_thread_Nova_Thread_0_Nova_construct,
&nova_thread_Nova_Thread_1_Nova_construct,
},
{
&nova_thread_Nova_ThreadFunctionMap_Nova_construct,
},

{
&nova_thread_Nova_UncaughtExceptionHandler_Nova_uncaughtException,
&nova_thread_Nova_UncaughtExceptionHandler_Nova_construct,
},
{
&nova_thread_Nova_UncaughtExceptionHandlerFunctionMap_Nova_construct,
},

{
&nova_thread_async_Nova_Async_Nova_construct,
},
{
&nova_thread_async_Nova_AsyncFunctionMap_Nova_construct,
},

{
&nova_thread_async_Nova_Task_Nova_waitForCompletion,
&nova_thread_async_Nova_Task_Nova_waitForResult,
&nova_thread_async_Nova_Task_Nova_construct,
},
{
&nova_thread_async_Nova_TaskFunctionMap_Nova_construct,
},

{
&nova_time_Nova_CumulativeTimer_Nova_construct,
},
{
&nova_time_Nova_CumulativeTimerFunctionMap_Nova_construct,
},

{
&nova_time_Nova_Date_Nova_decodeDate,
&nova_time_Nova_Date_Nova_updateTime,
&nova_time_Nova_Date_Nova_formatDate,
&nova_time_Nova_Date_Nova_construct,
},
{
&nova_time_Nova_DateFunctionMap_Nova_construct,
},

{
&nova_time_Nova_Time_Nova_construct,
},
{
&nova_time_Nova_TimeFunctionMap_Nova_construct,
},

{
&nova_time_Nova_Timer_Nova_start,
0,
&nova_time_Nova_Timer_Nova_reset,
&nova_time_Nova_Timer_Nova_construct,
},
{
&nova_time_Nova_TimerFunctionMap_Nova_construct,
},

{
&nova_web_js_json_Nova_Json_Nova_construct,
},
{
&nova_web_js_json_Nova_JsonFunctionMap_Nova_construct,
},

{
&nova_web_svg_Nova_Svg_Nova_generateOutput,
&nova_web_svg_Nova_Svg_Nova_generateHTMLOutput,
&nova_web_svg_Nova_Svg_Nova_construct,
},
{
&nova_web_svg_Nova_SvgFunctionMap_Nova_construct,
},

{
&nova_web_svg_Nova_SvgCircle_Nova_generateOutput,
&nova_web_svg_Nova_SvgCircle_Nova_construct,
},
{
&nova_web_svg_Nova_SvgCircleFunctionMap_Nova_construct,
},

{
0,
&nova_web_svg_Nova_SvgComponent_Nova_construct,
},
{
&nova_web_svg_Nova_SvgComponentFunctionMap_Nova_construct,
},

{
&nova_web_svg_Nova_SvgComponentList_Nova_generateOutput,
&nova_web_svg_Nova_SvgComponentList_Nova_addChild,
&nova_web_svg_Nova_SvgComponentList_Nova_construct,
},
{
&nova_web_svg_Nova_SvgComponentListFunctionMap_Nova_construct,
},

{
&nova_web_svg_Nova_SvgComponentNode_Nova_construct,
},
{
&nova_web_svg_Nova_SvgComponentNodeFunctionMap_Nova_construct,
},

{
&nova_web_svg_Nova_SvgMainComponent_Nova_construct,
},
{
&nova_web_svg_Nova_SvgMainComponentFunctionMap_Nova_construct,
},

{
&nova_web_svg_no3_Nova_No3_Nova_construct,
},
{
&nova_web_svg_no3_Nova_No3FunctionMap_Nova_construct,
},

{
0,
&nova_web_svg_no3_Nova_No3Node_Nova_construct,
},
{
&nova_web_svg_no3_Nova_No3NodeFunctionMap_Nova_construct,
},

{
&nova_web_svg_no3_Nova_No3Select_Nova_construct,
},
{
&nova_web_svg_no3_Nova_No3SelectFunctionMap_Nova_construct,
},

{
&nova_web_svg_no3_Nova_No3SelectAll_Nova_construct,
},
{
&nova_web_svg_no3_Nova_No3SelectAllFunctionMap_Nova_construct,
},

{
&spectra_Nova_InvalidParseException_Nova_construct,
},
{
&spectra_Nova_InvalidParseExceptionFunctionMap_Nova_construct,
},

{
&spectra_Nova_Spectra_Nova_compile,
&spectra_Nova_Spectra_Nova_construct,
},
{
&spectra_Nova_SpectraFunctionMap_Nova_construct,
},

{
&spectra_Nova_SyntaxErrorException_0_Nova_construct,
&spectra_Nova_SyntaxErrorException_1_Nova_construct,
},
{
&spectra_Nova_SyntaxErrorExceptionFunctionMap_Nova_construct,
},

{
&spectra_Nova_SyntaxMessage_Nova_construct,
},
{
&spectra_Nova_SyntaxMessageFunctionMap_Nova_construct,
},

{
&spectra_engines_Nova_CodeGeneratorEngine_Nova_construct,
},
{
&spectra_engines_Nova_CodeGeneratorEngineFunctionMap_Nova_construct,
},

{
&spectra_error_Nova_UnimplementedOperationException_Nova_construct,
},
{
&spectra_error_Nova_UnimplementedOperationExceptionFunctionMap_Nova_construct,
},

{
&spectra_tree_Nova_AnnotationSearchResult_0_Nova_addTo,
&spectra_tree_Nova_AnnotationSearchResult_1_Nova_addTo,
&spectra_tree_Nova_AnnotationSearchResult_Nova_construct,
},
{
&spectra_tree_Nova_AnnotationSearchResultFunctionMap_Nova_construct,
},

{
&spectra_tree_Nova_StatementIterator_Nova_reset,
&spectra_tree_Nova_StatementIterator_Nova_construct,
},
{
&spectra_tree_Nova_StatementIteratorFunctionMap_Nova_construct,
},

{
&spectra_tree_Nova_SyntaxTree_Nova_processFiles,
&spectra_tree_Nova_SyntaxTree_Nova_formTree,
&spectra_tree_Nova_SyntaxTree_Nova_validateTypes,
&spectra_tree_Nova_SyntaxTree_Nova_parseStatements,
&spectra_tree_Nova_SyntaxTree_Nova_construct,
},
{
&spectra_tree_Nova_SyntaxTreeFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Abstractable_Nova_writeAbstract,
&spectra_tree_nodes_Nova_Abstractable_0_Nova_cloneTo,
},

{
&spectra_tree_nodes_Nova_Accessible_0_Nova_getNextAccessingOfType,
&spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessingOfType,
&spectra_tree_nodes_Nova_Accessible_2_Nova_getNextAccessingOfType,
&spectra_tree_nodes_Nova_Accessible_0_Nova_getLastAccessingOfType,
&spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessingOfType,
&spectra_tree_nodes_Nova_Accessible_0_Nova_getLastAccessedOfType,
&spectra_tree_nodes_Nova_Accessible_1_Nova_getLastAccessedOfType,
&spectra_tree_nodes_Nova_Accessible_Nova_getLastAccessed,
&spectra_tree_nodes_Nova_Accessible_0_Nova_getNextAccessedOfType,
&spectra_tree_nodes_Nova_Accessible_1_Nova_getNextAccessedOfType,
&spectra_tree_nodes_Nova_Accessible_Nova_getRootReferenceNode,
&spectra_tree_nodes_Nova_Accessible_Nova_getReferenceNode,
&spectra_tree_nodes_Nova_Accessible_0_Nova_cloneTo,
&spectra_tree_nodes_Nova_Accessible_Nova_writeAccessedNodes,
},

{
&spectra_tree_nodes_Nova_ArgumentList_Nova_construct,
},
{
&spectra_tree_nodes_Nova_ArgumentListFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Cast_Nova_construct,
},
{
&spectra_tree_nodes_Nova_CastFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_ClassDeclaration_Nova_findCompatibleFunctions,
&spectra_tree_nodes_Nova_ClassDeclaration_0_Nova_findVariableDeclaration,
&spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeHeader,
&spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeExtension,
&spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeImplementedInterfaces,
&spectra_tree_nodes_Nova_ClassDeclaration_Nova_writeArrayBracketOverload,
&spectra_tree_nodes_Nova_ClassDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_Nova_ClassDeclarationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Identifier_Nova_construct,
},
{
&spectra_tree_nodes_Nova_IdentifierFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Import_Nova_getClassLocation,
&spectra_tree_nodes_Nova_Import_Nova_construct,
},
{
&spectra_tree_nodes_Nova_ImportFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_ImportList_Nova_construct,
},
{
&spectra_tree_nodes_Nova_ImportListFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_InterfaceDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_Nova_InterfaceDeclarationFunctionMap_Nova_construct,
},

{
},

{
&spectra_tree_nodes_Nova_Literal_Nova_construct,
},
{
&spectra_tree_nodes_Nova_LiteralFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Node_Nova_getAdjacentNode,
&spectra_tree_nodes_Nova_Node_0_Nova_detach,
0,
&spectra_tree_nodes_Nova_Node_Nova_onAdded,
&spectra_tree_nodes_Nova_Node_Nova_onRemoved,
&spectra_tree_nodes_Nova_Node_Nova_onAfterDecoded,
&spectra_tree_nodes_Nova_Node_Nova_onNextStatementDecoded,
&spectra_tree_nodes_Nova_Node_Nova_onStackPopped,
&spectra_tree_nodes_Nova_Node_Nova_followedByScope,
&spectra_tree_nodes_Nova_Node_Nova_onChildReplaced,
&spectra_tree_nodes_Nova_Node_Nova_onReplaced,
&spectra_tree_nodes_Nova_Node_Nova_onChildDetached,
&spectra_tree_nodes_Nova_Node_Nova_validate,
0,
0,
0,
&spectra_tree_nodes_Nova_Node_Nova_clone,
0,
0,
0,
0,
0,
0,
&spectra_tree_nodes_Nova_Node_Nova_writeAnnotations,
0,
0,
&spectra_tree_nodes_Nova_Node_Nova_construct,
},
{
&spectra_tree_nodes_Nova_NodeFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_NodeList_Nova_replace,
&spectra_tree_nodes_Nova_NodeList_Nova_addChild,
&spectra_tree_nodes_Nova_NodeList_Nova_containsChild,
&spectra_tree_nodes_Nova_NodeList_Nova_inheritChildren,
&spectra_tree_nodes_Nova_NodeList_0_Nova_removeChild,
&spectra_tree_nodes_Nova_NodeList_1_Nova_removeChild,
&spectra_tree_nodes_Nova_NodeList_Nova_slaughterChildren,
&spectra_tree_nodes_Nova_NodeList_Nova_construct,
},
{
&spectra_tree_nodes_Nova_NodeListFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_NovaFile_Nova_getImportedClass,
&spectra_tree_nodes_Nova_NovaFile_Nova_addAutoImports,
&spectra_tree_nodes_Nova_NovaFile_Nova_addImport,
&spectra_tree_nodes_Nova_NovaFile_Nova_containsImport,
&spectra_tree_nodes_Nova_NovaFile_Nova_construct,
},
{
&spectra_tree_nodes_Nova_NovaFileFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_NumericRange_Nova_construct,
},
{
&spectra_tree_nodes_Nova_NumericRangeFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Package_Nova_construct,
},
{
&spectra_tree_nodes_Nova_PackageFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_PlaceholderValue_Nova_writeChildren,
&spectra_tree_nodes_Nova_PlaceholderValue_Nova_construct,
},
{
&spectra_tree_nodes_Nova_PlaceholderValueFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Priority_Nova_construct,
},
{
&spectra_tree_nodes_Nova_PriorityFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Program_Nova_addChild,
&spectra_tree_nodes_Nova_Program_Nova_getClassDeclaration,
&spectra_tree_nodes_Nova_Program_Nova_construct,
},
{
&spectra_tree_nodes_Nova_ProgramFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Return_Nova_writeValue,
&spectra_tree_nodes_Nova_Return_Nova_construct,
},
{
&spectra_tree_nodes_Nova_ReturnFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Scope_Nova_construct,
},
{
&spectra_tree_nodes_Nova_ScopeFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_Skeleton_Nova_construct,
},
{
&spectra_tree_nodes_Nova_SkeletonFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_StaticClassReference_Nova_construct,
},
{
&spectra_tree_nodes_Nova_StaticClassReferenceFunctionMap_Nova_construct,
},

{
0,
&spectra_tree_nodes_Nova_Type_Nova_writeArray,
&spectra_tree_nodes_Nova_Type_Nova_writeGenericParameters,
&spectra_tree_nodes_Nova_Type_Nova_toNova,
&spectra_tree_nodes_Nova_Type_Nova_writeNova,
0,
&spectra_tree_nodes_Nova_Type_Nova_construct,
},
{
&spectra_tree_nodes_Nova_TypeFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_Nova_ValidationResult_Nova_construct,
},
{
&spectra_tree_nodes_Nova_ValidationResultFunctionMap_Nova_construct,
},

{
0,
&spectra_tree_nodes_Nova_Value_Nova_invalidTypeError,
0,
&spectra_tree_nodes_Nova_Value_Nova_writeArrayAccess,
&spectra_tree_nodes_Nova_Value_Nova_construct,
},
{
&spectra_tree_nodes_Nova_ValueFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_AbstractAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_AbstractAnnotationFunctionMap_Nova_construct,
},

{
0,
},

{
&spectra_tree_nodes_annotations_Nova_Annotation_Nova_onApplied,
&spectra_tree_nodes_annotations_Nova_Annotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_AnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_AutoFinalAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_AutoFinalAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_AutoPureAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_AutoPureAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_FinalAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_FinalAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_ImmutableAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_ImmutableAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_ImpureAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_ImpureAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_Modifier_Nova_apply,
&spectra_tree_nodes_annotations_Nova_Modifier_Nova_onAppliedAsModifier,
},
{
&spectra_tree_nodes_annotations_Nova_ModifierFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_NativeAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_NativeAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_OverrideAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_OverrideAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_PrivateAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_PrivateAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_PublicAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_PublicAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_PureAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_PureAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_StaticAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_StaticAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_TargetAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_TargetAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_annotations_Nova_VarAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_VarAnnotationFunctionMap_Nova_construct,
},

{
},

{
&spectra_tree_nodes_annotations_Nova_VisibleAnnotation_Nova_construct,
},
{
&spectra_tree_nodes_annotations_Nova_VisibleAnnotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_parse,
&spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_parseDimension,
&spectra_tree_nodes_arrays_Nova_ArrayAccess_Nova_construct,
},
{
&spectra_tree_nodes_arrays_Nova_ArrayAccessFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_controlstructures_Nova_ControlStructure_Nova_construct,
},
{
&spectra_tree_nodes_controlstructures_Nova_ControlStructureFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_controlstructures_Nova_ElseStatement_Nova_construct,
},
{
&spectra_tree_nodes_controlstructures_Nova_ElseStatementFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_controlstructures_Nova_IfStatement_Nova_construct,
},
{
&spectra_tree_nodes_controlstructures_Nova_IfStatementFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoop_Nova_construct,
},
{
&spectra_tree_nodes_controlstructures_loops_Nova_ForEachLoopFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_controlstructures_loops_Nova_Loop_Nova_construct,
},
{
&spectra_tree_nodes_controlstructures_loops_Nova_LoopFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_controlstructures_loops_Nova_WhileLoop_Nova_construct,
},
{
&spectra_tree_nodes_controlstructures_loops_Nova_WhileLoopFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_writeException,
&spectra_tree_nodes_exceptionhandling_Nova_Catch_Nova_construct,
},
{
&spectra_tree_nodes_exceptionhandling_Nova_CatchFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandler_Nova_construct,
},
{
&spectra_tree_nodes_exceptionhandling_Nova_ExceptionHandlerFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_exceptionhandling_Nova_Throw_Nova_construct,
},
{
&spectra_tree_nodes_exceptionhandling_Nova_ThrowFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_exceptionhandling_Nova_Try_Nova_construct,
},
{
&spectra_tree_nodes_exceptionhandling_Nova_TryFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_AccessorFunction_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_AccessorFunctionFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_writeDimensions,
&spectra_tree_nodes_functions_Nova_ArrayInstantiation_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_ArrayInstantiationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_BodyFunction_Nova_writeBody,
&spectra_tree_nodes_functions_Nova_BodyFunction_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_BodyFunctionFunctionMap_Nova_construct,
},

{
0,
&spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseParameterAndAnnotations,
0,
&spectra_tree_nodes_functions_Nova_CallableFunction_Nova_compatibleArguments,
&spectra_tree_nodes_functions_Nova_CallableFunction_Nova_parseName,
},

{
&spectra_tree_nodes_functions_Nova_Constructor_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_ConstructorFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_FunctionArgumentList_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_FunctionArgumentListFunctionMap_Nova_construct,
},

{
0,
&spectra_tree_nodes_functions_Nova_FunctionCall_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_FunctionCallFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_parseSignature,
0,
&spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_writeHeader,
&spectra_tree_nodes_functions_Nova_FunctionDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_FunctionDeclarationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_InitializationFunction_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_InitializationFunctionFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_Instantiation_Nova_writeObjectNotation,
&spectra_tree_nodes_functions_Nova_Instantiation_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_InstantiationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_MutatorFunction_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_MutatorFunctionFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_ObjectNotation_Nova_writeChildren,
&spectra_tree_nodes_functions_Nova_ObjectNotation_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_ObjectNotationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_ObjectNotationProperty_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_ObjectNotationPropertyFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_Parameter_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_ParameterFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_ParameterList_Nova_get,
&spectra_tree_nodes_functions_Nova_ParameterList_Nova_set,
&spectra_tree_nodes_functions_Nova_ParameterList_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_ParameterListFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_Nova_PropertyFunction_Nova_construct,
},
{
&spectra_tree_nodes_functions_Nova_PropertyFunctionFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_closures_Nova_ClosureContext_Nova_construct,
},
{
&spectra_tree_nodes_functions_closures_Nova_ClosureContextFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_closures_Nova_ClosureDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_functions_closures_Nova_ClosureDeclarationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_closures_Nova_ClosureParameter_Nova_construct,
},
{
&spectra_tree_nodes_functions_closures_Nova_ClosureParameterFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_writeParameters,
&spectra_tree_nodes_functions_closures_Nova_LambdaExpression_Nova_construct,
},
{
&spectra_tree_nodes_functions_closures_Nova_LambdaExpressionFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_functions_closures_Nova_LambdaParameter_Nova_construct,
},
{
&spectra_tree_nodes_functions_closures_Nova_LambdaParameterFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_generics_Nova_GenericArgument_Nova_construct,
},
{
&spectra_tree_nodes_generics_Nova_GenericArgumentFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_parseGenericParameters,
&spectra_tree_nodes_generics_Nova_GenericCompatible_Nova_writeGenericParameters,
&spectra_tree_nodes_generics_Nova_GenericCompatible_1_Nova_cloneTo,
},

{
&spectra_tree_nodes_generics_Nova_GenericParameter_Nova_construct,
},
{
&spectra_tree_nodes_generics_Nova_GenericParameterFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_generics_Nova_GenericType_0_Nova_construct,
&spectra_tree_nodes_generics_Nova_GenericType_1_Nova_construct,
},
{
&spectra_tree_nodes_generics_Nova_GenericTypeFunctionMap_Nova_construct,
},

{
0,
&spectra_tree_nodes_operations_Nova_Assignable_Nova_onAssignedTo,
},

{
&spectra_tree_nodes_operations_Nova_Assignment_Nova_construct,
},
{
&spectra_tree_nodes_operations_Nova_AssignmentFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_operations_Nova_ElvisOperation_Nova_construct,
},
{
&spectra_tree_nodes_operations_Nova_ElvisOperationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_operations_Nova_Operation_Nova_construct,
},
{
&spectra_tree_nodes_operations_Nova_OperationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_operations_Nova_Operator_Nova_construct,
},
{
&spectra_tree_nodes_operations_Nova_OperatorFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_operations_Nova_TernaryOperation_Nova_construct,
},
{
&spectra_tree_nodes_operations_Nova_TernaryOperationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_operations_Nova_UnaryOperation_Nova_construct,
},
{
&spectra_tree_nodes_operations_Nova_UnaryOperationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_variables_Nova_ArrayBracketOverload_Nova_construct,
},
{
&spectra_tree_nodes_variables_Nova_ArrayBracketOverloadFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_writeInitializationValue,
&spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_writeAccessorValue,
&spectra_tree_nodes_variables_Nova_FieldDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_variables_Nova_FieldDeclarationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_variables_Nova_ImplicitDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_variables_Nova_ImplicitDeclarationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeVisibility,
&spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_writeStatic,
&spectra_tree_nodes_variables_Nova_InstanceDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_variables_Nova_InstanceDeclarationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_variables_Nova_LocalDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_variables_Nova_LocalDeclarationFunctionMap_Nova_construct,
},

{
&spectra_tree_nodes_variables_Nova_Variable_Nova_construct,
},
{
&spectra_tree_nodes_variables_Nova_VariableFunctionMap_Nova_construct,
},

{
0,
&spectra_tree_nodes_variables_Nova_VariableDeclaration_0_Nova_parseModifiers,
&spectra_tree_nodes_variables_Nova_VariableDeclaration_1_Nova_parseModifiers,
&spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_getInvalidModifiers,
0,
&spectra_tree_nodes_variables_Nova_VariableDeclaration_Nova_construct,
},
{
&spectra_tree_nodes_variables_Nova_VariableDeclarationFunctionMap_Nova_construct,
},

{
&spectra_util_Nova_Bounds_Nova_extractString,
&spectra_util_Nova_Bounds_Nova_extractPreString,
&spectra_util_Nova_Bounds_Nova_extractPostString,
&spectra_util_Nova_Bounds_Nova_trimString,
&spectra_util_Nova_Bounds_Nova_invalidate,
&spectra_util_Nova_Bounds_Nova_cloneTo,
&spectra_util_Nova_Bounds_Nova_clone,
&spectra_util_Nova_Bounds_Nova_construct,
},
{
&spectra_util_Nova_BoundsFunctionMap_Nova_construct,
},

{
&spectra_util_Nova_CompilerStringFunctions_Nova_getStatements,
&spectra_util_Nova_CompilerStringFunctions_Nova_containsAllWhitespaceAfter,
&spectra_util_Nova_CompilerStringFunctions_Nova_getArrayAccesses,
&spectra_util_Nova_CompilerStringFunctions_Nova_substring,
&spectra_util_Nova_CompilerStringFunctions_0_Nova_nextWordBounds,
&spectra_util_Nova_CompilerStringFunctions_Nova_containsWord,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextWordIndex,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextWord,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceChar,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextNonWhitespaceIndex,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextWhitespaceIndex,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextIndexThatDoesntContain,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextIndexThatContains,
&spectra_util_Nova_CompilerStringFunctions_Nova_nextLetterIndex,
&spectra_util_Nova_CompilerStringFunctions_Nova_isSurroundedByQuotes,
&spectra_util_Nova_CompilerStringFunctions_Nova_removeSurroundingQuotes,
&spectra_util_Nova_CompilerStringFunctions_0_Nova_containsString,
&spectra_util_Nova_CompilerStringFunctions_1_Nova_containsString,
&spectra_util_Nova_CompilerStringFunctions_Nova_findEndingChar,
&spectra_util_Nova_CompilerStringFunctions_Nova_findEndingQuote,
&spectra_util_Nova_CompilerStringFunctions_0_Nova_findEndingMatch,
&spectra_util_Nova_CompilerStringFunctions_1_Nova_findEndingMatch,
&spectra_util_Nova_CompilerStringFunctions_Nova_splitAtDotOperator,
&spectra_util_Nova_CompilerStringFunctions_Nova_splitValues,
&spectra_util_Nova_CompilerStringFunctions_Nova_splitAtCommas,
&spectra_util_Nova_CompilerStringFunctions_Nova_findOperatorIndices,
&spectra_util_Nova_CompilerStringFunctions_0_Nova_isStrictlyOperator,
&spectra_util_Nova_CompilerStringFunctions_1_Nova_isStrictlyOperator,
&spectra_util_Nova_CompilerStringFunctions_0_Nova_findOperatorOnTopLevel,
&spectra_util_Nova_CompilerStringFunctions_1_Nova_findOperatorOnTopLevel,
&spectra_util_Nova_CompilerStringFunctions_0_Nova_findCharOnTopLevel,
&spectra_util_Nova_CompilerStringFunctions_1_Nova_findCharOnTopLevel,
&spectra_util_Nova_CompilerStringFunctions_Nova_findWordOnTopLevel,
&spectra_util_Nova_CompilerStringFunctions_0_Nova_findStringOnTopLevel,
&spectra_util_Nova_CompilerStringFunctions_1_Nova_findStringOnTopLevel,
&spectra_util_Nova_CompilerStringFunctions_Nova_calculateStatementEnd,
&spectra_util_Nova_CompilerStringFunctions_Nova_calculateReturnValue,
&spectra_util_Nova_CompilerStringFunctions_1_Nova_nextWordBounds,
&spectra_util_Nova_CompilerStringFunctions_Nova_findGroupedSymbols,
&spectra_util_Nova_CompilerStringFunctions_Nova_findGroupedChars,
&spectra_util_Nova_CompilerStringFunctions_Nova_checkStatementContinuation,
&spectra_util_Nova_CompilerStringFunctions_Nova_containsUnaryOperator,
&spectra_util_Nova_CompilerStringFunctions_Nova_findStrings,
&spectra_util_Nova_CompilerStringFunctions_Nova_searchGenericType,
&spectra_util_Nova_CompilerStringFunctions_Nova_findDotOperatorIndex,
&spectra_util_Nova_CompilerStringFunctions_Nova_formatIndentation,
},

{
&spectra_util_Nova_FileUtils_Nova_construct,
},
{
&spectra_util_Nova_FileUtilsFunctionMap_Nova_construct,
},

{
&spectra_util_Nova_Location_Nova_setLineNumber,
&spectra_util_Nova_Location_Nova_getStart,
&spectra_util_Nova_Location_Nova_getEnd,
&spectra_util_Nova_Location_Nova_setOffset,
&spectra_util_Nova_Location_Nova_addOffset,
&spectra_util_Nova_Location_Nova_subtractOffset,
&spectra_util_Nova_Location_0_Nova_setBounds,
&spectra_util_Nova_Location_1_Nova_setBounds,
&spectra_util_Nova_Location_0_Nova_addBounds,
&spectra_util_Nova_Location_Nova_moveBounds,
&spectra_util_Nova_Location_0_Nova_subtractBounds,
&spectra_util_Nova_Location_1_Nova_subtractBounds,
&spectra_util_Nova_Location_1_Nova_addBounds,
&spectra_util_Nova_Location_Nova_isValid,
&spectra_util_Nova_Location_Nova_asNew,
&spectra_util_Nova_Location_0_Nova_construct,
&spectra_util_Nova_Location_1_Nova_construct,
&spectra_util_Nova_Location_2_Nova_construct,
},
{
&spectra_util_Nova_LocationFunctionMap_Nova_construct,
},

{
&spectra_util_Nova_OS_func_Nova_construct,
},
{
&spectra_util_Nova_OSFunctionMap_Nova_construct,
},

{
&spectra_util_Nova_SyntaxUtils_Nova_construct,
},
{
&spectra_util_Nova_SyntaxUtilsFunctionMap_Nova_construct,
},

};
