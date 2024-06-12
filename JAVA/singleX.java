class singleX
{
    public static void main (String Arg[])  //Arg is the name of parameter we can write anything 
    {
      
      Base bobj1 = new Base();              //nocasting
      Derived dobj1 = new Derived ();       //Nocasting
      Base bobj2 = new Derived ();          //Upcasting (A)
      //Derived dobj2 = new Base ();          //Downcasting(NA)


    }
}
class Base 
{
    public int A,B;
    public Base ()
    {
        System.out.println("Base constructor");

    }
    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }

}
class Derived extends Base      //class derived : public Base in C++ 
{
    public int X,Y;
    public Derived ()
    {
        System.out.println("Derived constructor");
    }
    public void Gun ()
    {
        System.out.println ("Inside Derived Gun");
    }


}






