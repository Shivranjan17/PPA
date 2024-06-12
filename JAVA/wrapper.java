class wrapper 
{
    public static void main (String Arg[])
    {
        Integer iobj = new Integer(11);
        int no = 11;
        Integer i = no;//autoboxing
        int j = iobj.intValue();
        System.out.println(j);//unboxing

    }
}