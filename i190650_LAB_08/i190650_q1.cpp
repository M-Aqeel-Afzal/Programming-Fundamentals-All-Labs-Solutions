#include<iostream>
using namespace std;
int main()
{int num1,num2=0,num3=0,odd=0,even=0;float avg;
cout<<"enter a number"<<endl;
cin>>num1;
while(num1!=0)

{ 
 num3=num1+num3;

 if(num1%2==0)
 even++;
  if(num1%2!=0)
	odd++;
   
num2++;
 cin>>num1;}
cout<<"sum is :"<<num3<<endl;
avg=num3/(num2);
cout<<"avarage:"<<avg<<endl;
cout<<"even:"<<even<<endl;
cout<<"odd:"<<odd<<endl;

return 0;
}
