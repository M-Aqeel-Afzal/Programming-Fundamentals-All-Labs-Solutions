#include<iostream>
using namespace std;
int main()
{int num1,num2,s;
cout<<"enter two numbers"<<endl;
cin>>num1>>num2;
s=num1%num2;
if(s==0)
cout<<"The number a is completely divisible by b"<<endl;
else
cout<<"The number is a not completely divisible by b"<<endl;


return 0;
}
