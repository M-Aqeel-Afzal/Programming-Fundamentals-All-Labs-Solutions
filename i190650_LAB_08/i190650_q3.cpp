#include<iostream>
using namespace std;
int main()
{
int num1,num2=0,num3=0;
cout<<"enter a number"<<endl;
cin>>num1;
while(num1>0)
{num2=num1%10;
num1=num1/10;
num3=num3+num2;}
cout<<"sum is :"<<num3<<endl;

return 0;
}
