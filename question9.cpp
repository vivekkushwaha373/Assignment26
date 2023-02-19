#include<iostream>
#include<string.h>
using namespace std;
class Bill
{
  char name[20];
  int Billinunits;
  public:
   void Get(char *n,int m)
   {
    strcpy(name,n);
    Billinunits=m;
   }
   void showdata()
   {
    cout<<name;
    cout<<endl<<Billinunits<<endl;
   }
   void CalculateBill()
   {
    cout<<"Bill in total: ";
    if(Billinunits<=100)
    cout<<(Billinunits)*1.2;
    if(Billinunits>=100 && Billinunits<=200)
    cout<<100*1.2+(Billinunits-100)*2;
    if(Billinunits>200)
    cout<<100*1.2+100*2+(Billinunits-200)*3;
   }
};
int main()
{
 Bill s;
 s.Get("vivek",340);
 s.showdata();
 s.CalculateBill();
    return 0;
}