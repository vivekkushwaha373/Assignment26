#include<iostream>
using namespace std;
class complex
{
    private: 
    int a;
    int b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
    complex sum(complex X)
    {
    complex temp;
    temp.a=X.a+a;
    temp.b=X.b+b;
    return temp;
    }

};
// complex  complex:: add(complex X)

int main()
{
   complex s1,s2,s;
   s1.setdata(2,3);
   s2.setdata(4,5);
   s1.showdata();
   s2.showdata();
   s=s1.sum(s2);
   s.showdata();
    return 0;
}
