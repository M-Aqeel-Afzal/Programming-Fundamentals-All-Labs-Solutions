//Roll.no: 	i190650		Name: MUHAMMAD AQEEL AFZAL 	SECTION:D
// QUESTION .NO 11............
#include<iostream>
using namespace std;
int main()
{int num1, num2,k=0,a,b,c=0,l=0,n,h,g;char op;int  m=0,x=0,v=0;c=0;
cout<<"enter two numbers:\n\n\n\n"<<endl;
cin>>num1>>num2;
cout<<"now choose one of the oparator from the list;\n\n(1):addition\n(2):subtraction\n(3):multiplication\n(4);division\n(5):modulus."<<endl;

cin>>op;
n=num1;
h=num2;
switch(op)
{case '1':
for(a=1;a<=num1;a++)
k++;
a=1;
for(;a<=num2;a++)
k++;
cout<<"sum is:"<<k<<endl;
break;
case '2':

k=0;a=1;
for(a=1;a<=num1;a++)
k++;
a=1;
for(;a<=num2;a++)
k--;
cout<<"subtraction is:"<<k<<endl;
break;
case '3':
k=0;a=1;
b=1;
for(;b<=num2;b++)
{
a=1;
for(a=1;a<=num1;a++)
k++;
}
cout<<"multiplication is:"<<k<<endl;
break;
case '4':
k=0;a=1;
b=1;
for(;b<=num1;b++)
{

a=1;
for(a=1;a<=num2;a++)
{k++;
 }
c++;
if(k==num1)
break;
if(k>num1)
c--;
}
if(num2==0)
cout<<"error,its not possible"<<endl;
else
cout<<"division is:"<<c<<endl;
break;
case '5':

 m=0,x=0,v=0;c=0;

for(m=1;m<=n;m++)
{
if(m>h)
++x;
if(m<h)
{v++;}
if(m==n&&x>h)
{n=x;
m=1;
x=0;

continue;}

}
if(num2==0)
cout<<"error,its not possible"<<endl;
else{
if(x==h||n==h)
cout<<"modulus is=0"<<endl;
else
cout<<"modulus is="<<x<<endl;}
break;
default:
cout<<"please re-enter the correct oparator:"<<endl;}
return 0;}







	








