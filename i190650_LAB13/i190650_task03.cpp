#include<iostream>
using namespace std;

int Adder(int *arr,int size)
{int sum=0;
for(int i=0;i<size;i++)
{sum=arr[i]+sum;}
return sum;}
int main()
{int arry[10];
for(int i=0;i<10;i++)
{arry[i]=rand()%10+1;}

cout<<"filled array is: "<<endl;
for(int i=0;i<10;i++)
{cout<<arry[i]<<" ";}
cout<<endl<<" sum is: "<<endl;
int k=Adder(arry,10);
cout<<k<<endl;

return 0;
}
