//Roll.no: 	i190650		Name: MUHAMMAD AQEEL AFZAL 	SECTION:D
// QUESTION .NO 7.
#include<iostream>
using namespace std;
int main()
{
int n,a=1,b,f=1,g=1,z=1,s;char d,c,e;
cout<<"enter a number :"<<endl;
cin>>n;
d='.',c='_',e='_';
s=n;
for(;n>0;n--)
{for(;a>0;a--)
cout<<"*";
for(b=n-1;b>0;b--)
{
cout<<c;
if(g==n-1)
break;
if(c=='_')
c='.';
else
c='_';
g++;
}
z++;
if(z%2==0)
c='.';
if(z%2!=0)
c='_';
cout<<endl;
f++;
a=f;
}
f=s-1;
a=s-1;
c='_';
for(;a>0;a--)
cout<<"*";
b=1,g=1,z=1;int x=1;
for(;s>0;s--)
{for(;a>0;a--)
cout<<"*";
for(;b>0;b--)
{if(f==0)
break;
cout<<c;
if(g==n-1)
break;
if(c=='_')
c='.';
else
c='_';
g++;
}
f--;
a=f;
x=x+1;
b=x;
z++;
if(z%2==0)
c='.';
if(z%2!=0)
c='_';
cout<<endl;

}












return 0;
}
