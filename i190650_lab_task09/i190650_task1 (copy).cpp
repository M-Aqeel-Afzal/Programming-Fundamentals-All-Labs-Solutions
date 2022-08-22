//program for finding value of sin x.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{int angle,t,pwr=1,s=1;
long double sum=0,temp,rad;
cout<<"enter the value of x:"<<endl;
cin>>angle;
cout<<"enter the number of terms:"<<endl;
cin>>t;
rad=(3.14/180)*angle;
int a=1,b=1;
while(a<=t)
{ temp=pow(rad,pwr);
long int factorial=1;
		while(b<=pwr)
		{factorial=factorial*b;
		b++;}
sum=sum+(temp/factorial)*s;
s*=-1;
pwr=pwr+2;
a++;
}
cout<<"sin"<<angle<<"="<<sum<<endl;
return 0;
}
/*
int x=0,n=0,q=1,a,p=1;float fac=1,sum=0,b,c,d;
cout<<"enter the value of x"<<endl;
cin>>x;
cout<<"enter number of terms"<<endl;
cin>>n;
d=n/2;
c=q;
for(int a=1;a<=d;a++)
{	for(;q>0;q--)
	fac=fac*q;
	
a=pow(x,p);		
sum=sum+(a/fac);
p=p+2;
fac=1;
c=c+2;
q=c;
		for(;q>0;q--)
		fac=fac*q;
		
		a=pow(x,p);		
		sum=sum-(a/fac);
		p=p+2;
		fac=1;
		c=c+2;
		q=c;
}
if(n%2!=0)
{for(;q>0;q--)
	{fac=fac*q;
	}
a=pow(x,p);		
sum=sum+(a/fac);
p=p+2;
fac=1;
c=c+2;
q=c;}
cout<<"sin x="<<sum<<endl;*/







