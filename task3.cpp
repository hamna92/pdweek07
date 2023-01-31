#include <iostream>
using namespace std;
void printupper(int rows);
void printlower(int rows);
main()
{
     int rows;
     cout<<"enter the desired number of rows:";
     cin>>rows; 
      printupper( rows);
      printlower( rows);
}
 printupper( rows)
 for(int i=1; i<=rows; i++)
    {
     for(int j=rows; j>=i;j--)
        {
            cout<<" ";
        }
      
    }
    for(int i=1; i<=rows; i--)
    {
        for(int j=1; j<=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
  for(int i=1; i<=rows; i--)
    {
        for(int j=rows; j>=i;j--)
        {
            cout<<" ";
        }
      cout<<endl;
    }