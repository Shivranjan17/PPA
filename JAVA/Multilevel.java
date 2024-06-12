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
class DerivedX extends Derived 
{
    public int P,Q;
    public DerivedX ()
    {
        System.out.println("DerivedX constructor");

    }
    public void Sun()
    {
        System.out.println("Inside DerivedX sun");
    }

}

class Multilevel
{
    public static void main (String Arg[])  //Arg is the name of parameter we can write anything 
    {
        DerivedX dobj = new DerivedX();
        dobj.Fun();
        dobj.Gun();
        dobj.Sun();
    }
}

