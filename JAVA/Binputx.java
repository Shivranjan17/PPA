import java.io.*;

class Binputx 
{
    public static void main ( String args[] )
    {
        try{
       // InputStreamReader iobj = new InputStreamReader(System.in);
        //BufferedReader bobj = new BufferedReader(iobj);

        BufferedReader bobj = new BufferedReader( new InputStreamReader(System.in));

        System.out.println("Enter your name :");
        String name = bobj.readLine();

        System.out.println("Welcome :"+name);
        }
        catch (IOException obj)//specific exception
{}
    } 
}