class multi7
{
    public static void main (String A[])
    {
        System.out.println("current Thread is :"+Thread.currentThread().getName());
        Demo obj1 = new Demo();//thread1
        Demo obj2 = new Demo (); //thread2 and thread3 main thread

        obj1.setName("PPA");
        obj2.setName("LB");
        System.out.println("Priority of obj1 is :"+obj1.getPriority());
        
        System.out.println("Priority of obj2 is :"+obj2.getPriority());

        obj1.setPriority(10);
        obj2.setPriority(10);
        System.out.println("Priority of obj1 is :"+obj1.getPriority());
        
        System.out.println("Priority of obj2 is :"+obj2.getPriority());




        obj1.start();
        obj2.start();



    }
}
class Demo extends Thread 
{
    public void run()
    {
        try
        {
        int i = 0;
        String name = Thread.currentThread().getName();
        for (i = 0 ;i<=10;i++)
        {
            System.out.println("Running Thread : "+name+"with value :" +i);
           

        }
    }
    catch(Exception obj)
    {}
}
}
      
