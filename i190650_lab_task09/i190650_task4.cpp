//program for displaying pattren.
#include<iostream>
using namespace std;
int main()
{int r=0,i=0,a,f;
cout<<"enter number of rows"<<endl;
cin>>r;
a=r/2;
f=a;
for(int b=1;b<=a+1;b++)
{	for(int c=f;c>=0;c--)
	cout<<" ";
		for(int d=i;d>=0;d--)
		cout<<d;
			for(int e=f;e>=0;e--)
			cout<<" ";
i=i+2;
f--;
cout<<endl;
}
i=i-4;
f=1;
for(int b=1;b<=a+1;b++)
{	for(int c=f;c>=0;c--)
	cout<<" ";
		for(int d=i;d>=0;d--)
		cout<<d;
			for(int e=f;e>=0;e--)
			cout<<" ";
i=i-2;
f++;
cout<<endl;
}

return 0;
}
