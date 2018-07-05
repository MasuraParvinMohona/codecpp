#include<iostream>
using namespace std;
class complex
{
 int a,b;
public:
 void setData(int x, int y)
 {
  a=x;
  b=y;
 }
 void showData()
 {
  cout<<"a="<<a<<endl<<"b="<<b<<endl;
 }
 complex operator -()
 {
  complex temp;
  temp.a=-a;
  temp.b=-b;
  return(temp);
 }
};
main()
{
 complex c1,c2;
 c1.setData(3,4);
 c2=-c1;
 c2.showData();
}
