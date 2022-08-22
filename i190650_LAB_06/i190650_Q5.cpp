#include<iostream>
using namespace std;
int main()
{int num1,num2,result;char op;
cout<<"enter two numbers"<<endl;
cin>>num1>>num2;
cout<<"enter oparater"<<endl;
cin>>op;
switch(op)
{
case '+':
result=num1+num2;
cout<<"result="<<result<<endl;
break;
case '-':
result=num1-num2;
cout<<"result="<<result<<endl;
break;
case '*':
result=num1*num2;
cout<<"result="<<result<<endl;
break;
case '/':
if(num2==0)
cout<<"divisior is  not equal to zero"<<endl;
if(num2!=0)
{result=num1/num2;
cout<<"result="<<result<<endl;}
break;
default:
cout<<"invild input"<<endl;}
return 0;
}
