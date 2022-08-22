#include<iostream>
using namespace std;
int main()
{int num1,r;
cout<<"enter a number"<<endl;
cin>>num1;
num1>0&&num1<=9?r=1:num1>=10&&num1<=99?r=2:num1>=100&&num1<=999?r=3:num1>=1000&&num1<=9999?r=4:num1>=10000&&num1<=99999?r=5:r=6;
switch(r)
{case 1:
cout<<"one digit number"<<endl;break;
case 2:
cout<<"two digit number"<<endl;break;
case 3:
cout<<"three digit number"<<endl;break;
case 4:
cout<<"four digit number"<<endl;break;
case 5:
cout<<"five digit number"<<endl;break;
default: cout<<"invild input"<<endl;}
return 0;
}
