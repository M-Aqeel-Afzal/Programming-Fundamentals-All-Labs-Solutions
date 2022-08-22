//Roll.no: 	i190650		Name: MUHAMMAD AQEEL AFZAL 	SECTION:D
// QUESTION .NO 5.
#include<iostream>
using namespace std;
int main()
{int num1,num2=0,num3=0,num4=0,i=0;
cout<<"enter a number:"<<endl;
cin>>num1;
if(num1>=0&&num1<10)
	{for(;num1<10;num1=num1+num1)
	{cout<<num1<<",";
	i++;
	if(i>10)
	break;}
}
if(num1>=10&&num1<100)
	{
for(;num1<100;)
	{num2=num1%10;
	num3=num1/10;
	num1=num2*num3+num1;
	cout<<num1<<",";
	i++;
	if(i>10)
	break;}
}
if(num1>=100&&num1<1000)
{	for(;num1<1000;)
	{
	
	num3=num1/100;
	num2=num1%10;
	num1=num1+num2*num3;
	cout<<num1<<",";
	i++;
	if(i>10)
	break;}}
return 0;
}
