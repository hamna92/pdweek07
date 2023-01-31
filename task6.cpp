#include <iostream>
using namespace std;
void amplify(int num);
main()
{
 int num;
 cout<<"enter the num:";
 cin>>num;
 amplify( num);
}
void amplify(int num)
{
    for(int i=0; i<=num;i+4)
    {
        if(num%4==0)
        {
            cout<<num<<endl;
            cout<<num*10;
        }
        
    }
}