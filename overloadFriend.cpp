#include<iostream>
using namespace std;
class complex
{
private:
 int a,b;
public:
 void setData(int x,int y)
 {
  a = x;
  b = y;
 }
 void showData()
 {
  cout<<"\na="<<a<<"\nb="<<b<<endl;
 }
 friend complex operator -(complex);
};
complex operator -(complex X)
{
 complex temp;
 temp.a=-X.a;
 temp.b=-X.b;
 return(temp);
}
int main()
{
 complex c1,c3;
 c1.setData(3,4);

 c3=-c1;
 c3.showData();
}

