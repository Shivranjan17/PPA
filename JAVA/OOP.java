class OOP
{
    public static void main (String Arg[])
    {
        Arithematic obj1 = new Arithematic(21, 11);
        Arithematic obj2 = new Arithematic(21,11);

        int Ret = 0;

        Ret = obj1.Addition();
        System.out.println(Ret); // 

        Ret = obj2.Substraction();
        System.out.println(Ret); // 10


    }
}


class Arithematic 
{

    public int no1 ;
    public int no2;

    public Arithematic()//constructor
    {
        System.out.println("Inside Default Constructor");
        this.no1 = 0;
        this.no2 = 0;
    }
    public Arithematic(int A , int B)//constructor
    {
        System.out.println("Inside Parametrized Constructor");
        this.no1 = A;
        this.no2 = B;
    }
    public int Addition ()//function
    {
        int Ans = 0;
        Ans = no1+no2;
        return Ans ;
    }
    public int Substraction()//function
    {
        int Ans = 0;
        Ans = no1-no2;
        return Ans ;
    }
}