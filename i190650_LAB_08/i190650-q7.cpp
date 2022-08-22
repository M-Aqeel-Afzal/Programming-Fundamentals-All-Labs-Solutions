#include<iostream>
using namespace std;
int main()
{
int num1,num2=2,flag=0;
cout<<"enter a number :"<<endl;
cin>>num1;
if(num1>=0)
{
while(num2<num1)
	{
	if(num1%num2==0)
	{
flag=1;
	break;}

num2++;}
if(flag==0)
cout<<"number is prime"<<endl;
if(flag==1)
cout<<"number is not prime"<<endl;}
else
cout<<"please enter a positive number"<<endl;
return 0;
}
