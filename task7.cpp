#include <iostream>
using namespace std;
int triangle(int dots,int num);
main()
{
  int dots=0;
  int num;
  cout<<"enter the num:";
  cin>>num;
  triangle( dots, num);
}
int triangle(int dots,int num)
{
     num=dots;
    for(int i=0; i<=num ;i++)
    {
        if(num==1)
        cout<<".";
    }
}
