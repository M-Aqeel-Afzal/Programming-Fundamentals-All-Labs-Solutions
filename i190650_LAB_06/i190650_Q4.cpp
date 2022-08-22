#include<iostream>
using namespace std;
int main()
{int num1,num2,result;char op;
cout<<"enter two numbers"<<endl;
cin>>num1>>num2;
cout<<"enter oparater"<<endl;
cin>>op;
if(op=='+')
{ result=num1+num2;
cout<<"result="<<result<<endl;}
else if(op=='*')
{ result=num1*num2;
cout<<"result="<<result<<endl;}
else if(op=='-')
{ result=num1-num2;
cout<<"result="<<result<<endl;}
else if(op=='/')
if(num2==0)
cout<<"divisior is not equal to zero"<<endl;
else 
{result=num1/num2;
cout<<"result="<<result<<endl;}
else
cout<<"invild input"<<endl;

return 0;
}
