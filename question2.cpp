#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:
 void setTime(int hour,int min,int sec)
 {
  h=hour;
  m=min;
  s=sec;
 }
 void showTime()
 {
   cout<<h<<" : "<<m<<" : "<<s<<endl;
 }
 void normalize()
 {
   if(s>=60)
   {
    m=m+(s/60);
    s=s-60*(s/60);
   }
   if(m>=60)
   {
    h=h+(m/60);
    m=m-60*(m/60);   
   }

 }

 Time add(Time x)
 {
     Time temp;
     temp.h=h+x.h;
     temp.m=m+x.m;
     temp.s=s+x.s;
     return temp;   
 }
};
int main()
{
    Time t1,t2,t;
    t1.setTime(2,30,21);
    t2.setTime(3,45,45);
    t1.normalize();
    t2.normalize();
    t1.showTime();
    t2.showTime(); 
    t=t1.add(t2);
    t.normalize();
    t.showTime();



    return 0;
}