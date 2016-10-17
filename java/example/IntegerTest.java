package example;

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
import nova.time.Timer;

public class IntegerTest extends NovaObject
{
	
	
	
	
	
	public IntegerTest()
	{
		init();
	}
	
	public static void main(NovaArray args)
	{
		char c;
		c = 'y';
		while (c == 'y' || c == 'Y')
		{
			Timer timer;
			int i;
			timer = new Timer().start();
			i = (int)0;
			for (; i < (int)999999; i++)
			{
				NovaLong.toString(i);
			}
			timer.stop();
			NovaConsole.writeLine(new NovaString("Time taken: ").concat(NovaLong.toString(timer.accessor_duration()).concat(new NovaString("ms"))));
			NovaConsole.write(new NovaString("Run again? (Y/N) "));
			c = NovaConsole.readChar();
		}
		NovaConsole.writeLine(new NovaString("\nFinished"));
		NovaConsole.waitForEnter();
	}
	
	public void init()
	{
	}
	
}
