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
#include <nova/math/nova_math_Nova_Vector.h>
#include <nova/math/nova_math_Nova_Vector.h>
#include <nova/math/nova_math_Nova_Vector.h>
#include <nova/NativeObject.h>



void nova_math_Nova_Vector3D_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_Vector3D* nova_math_Nova_Vector3D_0_Nova_construct(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_Nova_Vector3D, this,);
	this->vtable = &nova_math_Vector3D_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Vector_Nova_super((nova_math_Nova_Vector*)this, exceptionData);
	nova_math_Nova_Vector3D_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Vector3D_Nova_this(this, exceptionData);
	}
	
	return this;
}

nova_math_Nova_Vector3D* nova_math_Nova_Vector3D_1_Nova_construct(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y, double z)
{
	CCLASS_NEW(nova_math_Nova_Vector3D, this,);
	this->vtable = &nova_math_Vector3D_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Vector_Nova_super((nova_math_Nova_Vector*)this, exceptionData);
	nova_math_Nova_Vector3D_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Vector3D_0_Nova_this(this, exceptionData, x, y, z);
	}
	
	return this;
}

void nova_math_Nova_Vector3D_Nova_destroy(nova_math_Nova_Vector3D** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_Nova_Vector3D_Nova_this(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_math_Nova_Vector_0_Nova_this((nova_math_Nova_Vector*)(this), exceptionData, 3);
}

void nova_math_Nova_Vector3D_0_Nova_this(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y, double z)
{
	nova_math_Nova_Vector3D_Nova_this(this, exceptionData);
	nova_math_Nova_Vector3D_Mutator_Nova_x(this, exceptionData, x);
	nova_math_Nova_Vector3D_Mutator_Nova_y(this, exceptionData, y);
	nova_math_Nova_Vector3D_Mutator_Nova_z(this, exceptionData, z);
}

nova_math_Nova_Vector3D* nova_math_Nova_Vector3D_Nova_crossProduct(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector3D* other)
{
	return nova_math_Nova_Vector3D_1_Nova_construct(0, exceptionData, nova_math_Nova_Vector3D_Accessor_Nova_y(this, exceptionData) * nova_math_Nova_Vector3D_Accessor_Nova_z(other, exceptionData) - nova_math_Nova_Vector3D_Accessor_Nova_z(this, exceptionData) * nova_math_Nova_Vector3D_Accessor_Nova_y(other, exceptionData), nova_math_Nova_Vector3D_Accessor_Nova_z(this, exceptionData) * nova_math_Nova_Vector3D_Accessor_Nova_x(other, exceptionData) - nova_math_Nova_Vector3D_Accessor_Nova_x(this, exceptionData) * nova_math_Nova_Vector3D_Accessor_Nova_z(other, exceptionData), nova_math_Nova_Vector3D_Accessor_Nova_x(this, exceptionData) * nova_math_Nova_Vector3D_Accessor_Nova_y(other, exceptionData) - nova_math_Nova_Vector3D_Accessor_Nova_y(this, exceptionData) * nova_math_Nova_Vector3D_Accessor_Nova_x(other, exceptionData));
}

double nova_math_Nova_Vector3D_Accessor_Nova_x(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(this->nova_math_Nova_Vector_Nova_data, exceptionData, 0);
}

double nova_math_Nova_Vector3D_Mutator_Nova_x(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, double value)
{
	nova_datastruct_list_Nova_DoubleArray_Nova_set(this->nova_math_Nova_Vector_Nova_data, exceptionData, 0, value);
	return value;
}

double nova_math_Nova_Vector3D_Accessor_Nova_y(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(this->nova_math_Nova_Vector_Nova_data, exceptionData, 1);
}

double nova_math_Nova_Vector3D_Mutator_Nova_y(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, double value)
{
	nova_datastruct_list_Nova_DoubleArray_Nova_set(this->nova_math_Nova_Vector_Nova_data, exceptionData, 1, value);
	return value;
}

double nova_math_Nova_Vector3D_Accessor_Nova_z(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(this->nova_math_Nova_Vector_Nova_data, exceptionData, 2);
}

double nova_math_Nova_Vector3D_Mutator_Nova_z(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, double value)
{
	nova_datastruct_list_Nova_DoubleArray_Nova_set(this->nova_math_Nova_Vector_Nova_data, exceptionData, 2, value);
	return value;
}

void nova_math_Nova_Vector3D_Nova_super(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_Nova_Vector3DFunctionMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_Vector3DFunctionMap* nova_math_Nova_Vector3DFunctionMap_Nova_construct(nova_math_Nova_Vector3DFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_Nova_Vector3DFunctionMap, this,);
	this->vtable = &nova_math_Vector3D_Vector3DFunctionMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_FunctionMap_Nova_super((nova_meta_Nova_FunctionMap*)this, exceptionData);
	nova_math_Nova_VectorFunctionMap_Nova_super((nova_math_Nova_VectorFunctionMap*)this, exceptionData);
	nova_math_Nova_Vector3DFunctionMap_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Vector3DFunctionMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_Nova_Vector3DFunctionMap_Nova_destroy(nova_math_Nova_Vector3DFunctionMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_Nova_Vector3DFunctionMap_Nova_this(nova_math_Nova_Vector3DFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_math_Nova_Vector3D* nova_math_Nova_Vector3DFunctionMap_functionMapVector3DFunctionMap0_Nova_construct(nova_math_Nova_Vector3DFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_math_Nova_Vector3D_0_Nova_construct(0, exceptionData);
}

nova_math_Nova_Vector3D* nova_math_Nova_Vector3DFunctionMap_functionMapVector3DFunctionMap1_Nova_construct(nova_math_Nova_Vector3DFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y, double z)
{
	return nova_math_Nova_Vector3D_1_Nova_construct(0, exceptionData, x, y, z);
}

nova_math_Nova_Vector3D* nova_math_Nova_Vector3DFunctionMap_functionMap_Nova_crossProduct(nova_math_Nova_Vector3DFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector3D* reference, nova_math_Nova_Vector3D* other)
{
	return nova_math_Nova_Vector3D_Nova_crossProduct(reference, exceptionData, other);
}

void nova_math_Nova_Vector3DFunctionMap_Nova_super(nova_math_Nova_Vector3DFunctionMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_Nova_Vector3DPropertyMap_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_Vector3DPropertyMap* nova_math_Nova_Vector3DPropertyMap_Nova_construct(nova_math_Nova_Vector3DPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_Nova_Vector3DPropertyMap, this,);
	this->vtable = &nova_math_Vector3D_Vector3DPropertyMap_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_meta_Nova_PropertyMap_Nova_super((nova_meta_Nova_PropertyMap*)this, exceptionData);
	nova_math_Nova_VectorPropertyMap_Nova_super((nova_math_Nova_VectorPropertyMap*)this, exceptionData);
	nova_math_Nova_Vector3DPropertyMap_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Vector3DPropertyMap_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_Nova_Vector3DPropertyMap_Nova_destroy(nova_math_Nova_Vector3DPropertyMap** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_Nova_Vector3DPropertyMap_Nova_this(nova_math_Nova_Vector3DPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

double nova_math_Nova_Vector3DPropertyMap_functionMap_Nova_x(nova_math_Nova_Vector3DPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector3D* reference)
{
	return nova_math_Nova_Vector3D_Accessor_Nova_x(reference, exceptionData);
}

double nova_math_Nova_Vector3DPropertyMap_functionMap_Nova_y(nova_math_Nova_Vector3DPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector3D* reference)
{
	return nova_math_Nova_Vector3D_Accessor_Nova_y(reference, exceptionData);
}

double nova_math_Nova_Vector3DPropertyMap_functionMap_Nova_z(nova_math_Nova_Vector3DPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector3D* reference)
{
	return nova_math_Nova_Vector3D_Accessor_Nova_z(reference, exceptionData);
}

void nova_math_Nova_Vector3DPropertyMap_Nova_super(nova_math_Nova_Vector3DPropertyMap* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

