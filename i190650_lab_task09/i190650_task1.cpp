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
		b=1;
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





