#include<iostream>
#include<math.h>
using namespace std;
int main()
{int num1,num2=0,num3=0,sum=0,num4;
cout<<"enter a number"<<endl;
cin>>num1;
num4=num1;
while(num1>0)
	{num2=num1%10;
 	num1=num1/10;
	num3=pow(num2,3);
	sum=num3+sum;}
if(sum==num4)
cout<<"number is armstrong"<<endl;
else
cout<<"number is not armstrong"<<endl;
return 0;
}
