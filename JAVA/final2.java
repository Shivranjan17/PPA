class Base 
{
    public void fun()
    {
        System.out.println("Inside base Fun");

    }
    public final void gun()
    {
        System.out.println ("Inside base Gun");

    }
}

class Derived extends Base 
{
    public void fun()
    {
        System.out.println("Inside  Derived Fun");    
    }
    //public void gun()// error 
    {
        System.out.println("Inside Derived gun");   // Overriding the method of Base Class  
    }
}
class final2
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
