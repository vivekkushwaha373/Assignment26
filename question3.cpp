#include<iostream>
using namespace std;
class Cube
{
    int side;
    public:
    Cube(int c)
    {
     side=c;
    }
    public:
    void volume()
    {
        cout<<"volume is: "<<side*side*side;
    }

};
int main()
{
    Cube s1(3);
    s1.volume();

    return 0;
}