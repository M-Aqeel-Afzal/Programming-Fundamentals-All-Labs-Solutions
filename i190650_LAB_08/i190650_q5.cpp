#include<iostream>
using namespace std;
int main()
{int num1=2,num2=0,num3=0,num4=0,count1=0,count2=0,count3=0;
while(num1>1&&num1<99)
{if(num1%2==0)
num2++;
if(num1%3==0)
num3++;
if(num1%7==0)
num4++;
num1++;
}
cout<<"numbers divisible by 2 "<<num2<<endl;
cout<<"numbers divisible by 3 "<<num3<<endl;
cout<<"numbers divisible by 7 "<<num4<<endl;

return 0;
}
