#include <iostream>
using namespace std;
float cargo(int weight, float price, int count);
main()
{
  int weight;
  float price;
  int count;
  cout<<"count of cargo:";
  cin>>count;
 cargo( weight, price,count);
}
 float cargo(int weight, float price,int count)
 {
  int sum;
    for(int i=0; i<=count;i++)
    {
      cout<<"enter the weight:";
      cin>>weight;
      weight=sum+weight;
      price=(count/sum)*100;
      cout<<price;
    }
 }