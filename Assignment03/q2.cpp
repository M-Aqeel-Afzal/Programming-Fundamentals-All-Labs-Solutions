//Roll.no: 	i190650		Name: MUHAMMAD AQEEL AFZAL 	SECTION:D
// QUESTION .NO 2.
#include<iostream>
using namespace std;
int main()
{int r,n,m=1,k;int t=1,c,z,x,y,f,g,i=0;
cout<<"Enter no.of rows"<<endl;
cin>>r;
z=r;f=r;
g=r-2;
int b=r+g;c=r+g;
k=r+g;
y=k;	
n=r+g;
x=n;
for(;r>0;r--)
{
for( ;n>0;n--)
	cout<<".";
	for(;m>0;m--)
	{cout<<"*";
	i++;}
	for( ;k>0;k--)
	cout<<".";
cout<<endl;
if(i==z)
break;
m=t+4;
 t=m;
n=c-2;
c=n;
k=b-2;
b=k;}
r=z;
int d=r+g,e=r+g;
m=t,c=0,b=0,n=0,k=0;
m=m-4;
t=m;
for(;r>0;r--)
{for(;n>0;n--)
cout<<".";
for(;m>0;m--)
cout<<"*";
for(;k>0;k--)
cout<<".";
cout<<endl;
m=t-4;
t=m;
n=c+2;
c=n;
k=b+2;
b=n;}
return 0;}














