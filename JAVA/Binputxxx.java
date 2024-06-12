import java.io.*;

class Binputxxx
{
    public static void main ( String args[] ) throws IOException
    {
        
       // InputStreamReader iobj = new InputStreamReader(System.in);
        //BufferedReader bobj = new BufferedReader(iobj);

        BufferedReader bobj = new BufferedReader( new InputStreamReader(System.in));

        System.out.println("Enter First number :");
        int No1 = Integer.parseInt(bobj.readLine());
       
        
        System.out.println("Enter second number :");
        int No2 = Integer.parseInt(bobj.readLine());
        
        int Ans = No1 + No2;
        System.out.println(Ans);
        
        }
        
    } 
