import java.sql.*;          // 1
class database2
{
    public static void main(String arg[]) 
    {
        try
    {
        Class.forName("com.mysql.jdbc.Driver");

        Connection cobj = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA50X","root","");   // 2
        
        Statement sobj = cobj.createStatement();        // 3

        ResultSet robj = sobj.executeQuery("select * from orderx");      // 4

        while(robj.next())          // 5
        {
            System.out.println("OID : "+robj.getInt("OID"));
            System.out.println("PRODUCT : "+robj.getString("product"));
            System.out.println("CID : "+robj.getString("CID"));
        }
    }

catch(Exception obj)
{}
}
}