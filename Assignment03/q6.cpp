//Roll.no: 	i190650		Name: MUHAMMAD AQEEL AFZAL 	SECTION:D
// QUESTION .NO 6.
#include<iostream>
using namespace std;
int main()
{int a,b,z,i=3,c=0,e=0,f,g,j=0;double r,d,k;
cout<<"enter diameter"<<endl;
cin>>d;
r=d/2;
b=d-3;
b=b/2;
f=i;
k=d+2;
c=b;
e=b;
for(a=d;a>0;a--)
{	for(;c>0;c--)
	cout<<".";
		for(;i>0;i--)
		cout<<"*";
			for(;e>0;e--)
			cout<<".";
cout<<endl;
j++;
c=b-j;
e=b-j;
i=f+2;
f=f+2;
if(i==k)
break;
}
i=i-2;
f=i;
for(;i>0;i--)
	cout<<"*";
	cout<<endl;
i=f;j=1;
for(z=d;z>0;z--)
	{for(;c>0;c--)
	cout<<".";
		for(;i>0;i--)
		cout<<"*";
			for(;e>0;e--)
			cout<<".";
cout<<endl;
c=j;
f=f-2;
e=j;
j++;
i=f;
if(i==1)
break;}
return 0;
}

















