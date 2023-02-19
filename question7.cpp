#include<iostream>
using namespace std;
class box
{
   int length,breadth,height;   
    public:
    box(int l,int b,int h)
    {
     length=l;
     breadth=b;
     height=h;
    }
    void display()
    {
     cout<<length<<endl<<breadth<<endl<<height<<endl;
    }
    void volume()
    {
     cout<<"volume: "<<length*breadth*height;
    }
};
int main()
{
     box s(2,5,7);
     s.display();
     s.volume();
    return 0;
}