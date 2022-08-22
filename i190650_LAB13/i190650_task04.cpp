#include<iostream>
using namespace std;

void Swaply(int &num1,int *num2,int product)
{product=num1;
num1=*num2;
*num2=product;
cout<<"value of num1 after swaping in swaply method"<<num1<<endl;
cout<<"value of num2 after swaping in swaply method"<<*num2<<endl;
while(num1>=10)
num1=num1/10;
while(*num2>=10)
*num2=*num2/10;



product=num1*(*num2);
cout<<" product in swaply method "<<product<<endl;}

int main()
{
int a,b,p,pd;
cout<<"enter two numbers: "<<endl;
cin>>a>>b;
Swaply(a,&b,p);
cout<<"value of num1 after swaping in main function"<<a<<endl;
cout<<"value of num2 after swaping in main function"<<b<<endl;
return 0;
}
