//Hash Table 


import java.util.*;
class collections4
{
    public static void main (String A[])
    {
        Hashtable <String,Integer> hobj = new Hashtable <String,Integer>();
        hobj.put("PPA",20000);
        hobj.put("LB",19500);
        hobj.put("Python",21000);
        hobj.put("Angular",22000);
      System.out.println(hobj.get("Python"));
    }
}