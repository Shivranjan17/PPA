//Array List

import java.util.*;
class collections2
{
    public static void main (String A[])
    {
        ArrayList<String> aobj = new ArrayList<String>();
        aobj.add("PPA");
        aobj.add("Python");
        aobj.add("LB");
        aobj.add("LB++");
        for (String str : aobj)
        {
            System.out.println(str);
        }
    }
}