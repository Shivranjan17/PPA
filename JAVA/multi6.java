class multi6
{
    public static void main (String A[]) throws Exception
    {
        System.out.println("current Thread is :"+Thread.currentThread().getName());
        Demo obj1 = new Demo();//thread1
        Demo obj2 = new Demo (); //thread2 and thread3 main thread

        obj1.setName("PPA");
        

        obj1.start();
        obj1.join();  //waiting for the completion of thread1 solution of multi 5
        System.out.println("end of main thread ");



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
            Thread.sleep(1000);

        }
    }
    catch(Exception obj)
    {}
}
}
      
//program logic is wrong and execution is also