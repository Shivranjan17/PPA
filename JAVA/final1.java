class final1
{
    public static void main(String A[])
    {
        Demo obj = new Demo();

        obj.No1++; //
       // obj.No2++;  //obj.No2 = obj.No2 +1; error  because of final keyword
                   // we can't change the value of a variable which is declared as final
         
        // i++   i = i +1 
        
    }
}

class Demo 
{
    public int No1;
    public final int No2 = 21;
    public Demo ()
    {
        No1 = 11;
    }
}

