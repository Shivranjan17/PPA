import java.io.*;

class Binput 
{
    public static void main ( String args[] )
    {
       // InputStreamReader iobj = new InputStreamReader(System.in);
        //BufferedReader bobj = new BufferedReader(iobj);

        BufferedReader bobj = new BufferedReader( new InputStreamReader(System.in));

        System.out.println("Enter your name :");
        String name = bobj.readLine();//checked exception error

        System.out.println("Welcome :"+name);

    } 
}