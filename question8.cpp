#include<iostream>
using namespace std;
class Bank
{
    int principal;
    int roi;
    int year;
    public:
     Bank(int p,int r,int y)
     {
        principal=p;
        roi=r;
        year=y;
     }
     void display()
     {
        cout<<principal<<endl<<roi<<endl<<year<<endl;
     }
     void interest()
     {
        cout<<"simple interest: "<<(principal*roi*year)/100;
     }
};
int main()
{
   Bank s(23000,5,3);
    s.display();
    s.interest();
    return 0;
}