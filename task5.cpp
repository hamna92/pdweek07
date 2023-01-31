#include <iostream>
using namespace std;
int twotriangles(int rows);
main()
{
    int rows;
  cout<<"enter the number of rows:";
  cin>>rows;
twotriangles( rows);
}
int twotriangles(int rows)
{
 for(int i=0; i<=rows; i++)
   {
   if(i>=rows)
    {
        cout<<"*";
    }
  else
    {
        cout<<" ";
    }
   if(i==rows*2-i)
 {
    cout<<"*";
 }
   else
 {
    cout<<" ";
 }
  }
}  