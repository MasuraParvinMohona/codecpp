#include<iostream>
using namespace std;
const int m=50;
class items
{
 int itemCode [m];
 float itemPrice[m];
 int count;
public:
 void cnt(void)
 {
  count = 0;
 }
 void getItem(void);
 void displaySum(void);
 void remove(void);
 void displayItems(void);
};
 void items::getItem(void)
 {
  cout<<"enter item code:";
  cin>>itemCode[count];
  cout<<"enter item cost:";
  cin>>itemPrice[count];
  count++;
 }
 void items::displaySum(void)
 {
  float sum=0;
  for(int i=0;i<count;i++)
    sum=sum+itemPrice[i];
  cout<<"\ntotal value:"<<sum<<endl;
 }
 void items::remove(void)
 {
  int a;
  cout<<"enter item code:";
  cin>>a;
  for(int i=0;i<count;i++)
   if(itemCode[i]==a)
   itemPrice[i]=0;
 }
 void items::displayItems(void)
 {
  cout<<"\ncode price\n";
  for(int i=0;i<count;i++)
   {
   cout<<"\n"<<itemCode[i];
  cout<<""<<itemPrice[i];
 }
 cout<<"\n";
 }
 int main()
 {
  items order;
  order.cnt();
  int x;
  do
  {
   cout<<"\nyou can do the following";
     cout<<"enter appropriate number\n";
   cout<<"\n1:Add an item:";
   cout<<"\n2:Display total value";
   cout<<"\n3:Delete an item:";
   cout<<"\n4:Display all items";
   cout<<"\n5:Quit";
   cout<<"\n\nwhat is your option?";
   cin>>x;
   switch (x)
   {
    case 1:order.getItem();
    break;
    case 2:order.displaySum();
    break;
    case 3:order.remove();
    break;
    case 4:order.displayItems();
    break;
    case 5:break;
    default:cout<<"error in input,try again\n";
   }
  }while(x != 5);
  return 0;
 }
