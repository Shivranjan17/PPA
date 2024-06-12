//Array List

import java.util.*;
class collections3
{
    public static void main (String A[])
    {
        Stack<Float> sobj = new Stack<Float>();//we can use anything character integer float string any class
      sobj.push(10.5f);
      sobj.push(10.5f);
      sobj.push(10.5f);
      sobj.push(10.5f);
      float fret = sobj.pop();
      System.out.println(fret); 

      fret = sobj.pop();
      System.out.println(fret); 
      

    }
}