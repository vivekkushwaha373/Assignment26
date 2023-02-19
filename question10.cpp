#include<iostream>
using namespace std;
class StaticCount
{
public:

static int a;
static void f1();
};
int StaticCount::a;
void StaticCount:: f1()
{

a++;

}
int main()
{
  StaticCount::f1();
  StaticCount::f1();
  StaticCount::f1();
  cout<<StaticCount::a;
    return 0;
}