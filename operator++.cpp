#include<iostream>
using namespace std;
class integer
{
private:
 int x;
public:
 void setData(int a)
 {

  x=a;
 }
 void showData()
 {
  cout<<"x="<<x<<endl;
 }
 integer operator ++()
 {
  integer i;
  i.x=++x;
  return(i);
 }
};
 main()
 {
  integer c1,c2;
  c1.setData( 8);
  c2=++c1;
  c2.showData();
 }
