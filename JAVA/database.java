import java.sql.*;          // 1
class database
{
    public static void main(String arg[]) throws Exception
    {
        Class.forName("com.mysql.jdbc.Driver");

        Connection cobj = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA50","root","");   // 2
        
        Statement sobj = cobj.createStatement();        // 3

        ResultSet robj = sobj.executeQuery("select * from student");      // 4

        while(robj.next())          // 5
        {
            System.out.println("RNO : "+robj.getInt("rollno"));
            System.out.println("Name : "+robj.getString("name"));
            System.out.println("City : "+robj.getString("City"));
        }
    }
}