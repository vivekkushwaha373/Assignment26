#include<iostream>
using namespace std;
class Date
{
int month,day,year;
public:
Date(int m,int d,int y)
{
month=m;
day=d;
year=y;
}

void Display()
{
    cout<<day<<"/"<<month<<"/"<<year;
}

};
int main()
{
   Date d(3,10,2022);
   
   d.Display();
    return 0;
}