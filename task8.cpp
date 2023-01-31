#include <iostream>
using namespace std;
float percentages(int num, float p1, float p2 , float p3 , int  count);
main()
{
 int  num;
 float p1;
 float p2;
 float p3;
 int  count;
 cout<<"enter the count of numbers:";
 cin>>count;
 percentages( num, p1, p2 , p3 , count);
}
float percentages(int num, float p1, float p2 , float p3 ,int count)
{
  for(int i=0; i<=count ; i++)
  {
    cout<<"enter the num:";
    cin>>num;
    if(num%2==0)
    {
        cout<<num;
        p1=(count/10)*100;
        cout<<p1;
    }
    if(num%3==0)
    {
        cout<<num;
        p2=(count/10)*100;
        cout<<p2;
    }
    if(num%4==0)
    {
        cout<<num;
        p3=(count/10)*100;
        cout<<p3;
    }


  }
}