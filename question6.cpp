#include<iostream>
#include<string.h>
using namespace std;

class student
{
    char n[20];
    int roll_no;
    public:
    student(char name[20],int m)
    {
      strcpy(n,name);
      roll_no=m;
    }

    void display()
    {
        cout<<"student name: "<<n<<endl;
        cout<<"rollnumber: "<<roll_no<<endl;
    }
};
int main()
{
       student s1("pyuish",21);
       s1.display();
       return 0;
}