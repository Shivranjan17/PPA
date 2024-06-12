#include <stdio.h>

struct student
{
    int RollNo;     //4
    char Division;  //1
    int Age;        //4
    float Marks;    //4
    int Salary;     //4
                    // total =17
};

int main()
{
    struct student Amit;
    struct student Pooja;

    printf("size of object is : %d\n",sizeof(Amit));


    Amit.RollNo = 11;
    Amit.Division = 'A';
    Amit.Age = 19;
    Amit.Marks = 90.89;
    Amit.Salary = 21000;


    Pooja.RollNo = 21;
    Pooja.Division = 'D';
    Pooja.Marks = 93.67;
    Pooja.Age = 17;
    Pooja.Salary = 5000;

    printf("Age of Amit is : %d\n ",Amit.Age);
    printf("Age of Pooja is : %d\n ",Pooja.Age);
    
    printf("Salary of Amit is : %d\n ",Amit.Salary);
    printf("Salary of Pooja is : %d\n ",Pooja.Salary);

    return 0;
}