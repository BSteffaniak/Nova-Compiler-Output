package compiler.tree.node.annotation;

import java.util.Optional;
import nova.exception.ExceptionData;
import nova.exception.Exception;
import nova.exception.DivideByZeroException;
import nova.io.NovaConsole;
import nova.primitive.number.Number;
import nova.primitive.number.NovaByte;
import nova.primitive.number.NovaShort;
import nova.primitive.number.NovaInt;
import nova.primitive.number.NovaLong;
import nova.primitive.number.NovaFloat;
import nova.primitive.number.NovaDouble;
import nova.primitive.Null;
import nova.primitive.number.Char;
import nova.primitive.Bool;
import nova.datastruct.list.NovaArray;
import nova.datastruct.list.IntArray;
import nova.datastruct.list.CharArray;
import nova.datastruct.list.DoubleArray;
import nova.datastruct.list.IntRange;
import nova.thread.Thread;
import nova.thread.async.Async;
import nova.gc.GC;
import nova.math.NovaMath;
import nova.NovaObject;
import nova.NovaString;
import nova.System;
import nova.Class;
import compiler.tree.node.Node;
import compiler.util.Location;

public class Annotation extends Node
{
	
	
	
	
	
	public Annotation()
	{
		init();
	}
	
	public Annotation clone(Node temporaryParent, Location locationIn, Optional<Bool> cloneChildren_optional)
	{
		boolean cloneChildren = cloneChildren_optional == null ? true : cloneChildren_optional.get();
		return null;
	}
	
	public void init()
	{
	}
	
}
