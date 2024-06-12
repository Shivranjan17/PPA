class Base 
{
    public int A,B;
   
    public void Fun()
    {System.out.println("Inside Base Fun");}
    public void Gun()
    {System.out.println("Inside Base Gun");}
    public void Sun()
    {System.out.println("Inside Base Sun");}
    public void Run()
    {System.out.println("Inside Base Run");}

}
class Derived extends Base      //class derived : public Base in C++ 
{
    public int X,Y;
   
    public void Gun ()
    {System.out.println ("Inside Derived Gun");}
    public void Run ()
    {System.out.println ("Inside Derived Run");}
    public void Mun ()
    {System.out.println ("Inside Derived Mun");}


}





class RMd 
{
    public static void main (String Arg[])  //Arg is the name of parameter we can write anything 
    {
        Base bobj = new Derived ();
        bobj.Fun();   //calling base class method using
        bobj.Gun();
        bobj.Sun();
        bobj.Run();
        //bobj.Mun();
        


    }
}

