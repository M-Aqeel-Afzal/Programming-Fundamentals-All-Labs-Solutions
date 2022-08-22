//program for displaying pattren.
#include<iostream>
using namespace std;
int main()
{int r,i,a,s,j=0;
cout<<"enter number of rows"<<endl;
cin>>r;
i=r;
s=r-1;
for(;i>=0;i--)
{a=i;
	for(;a<=r;a++)
	cout<<a;
		for(;s>=j;s--)
		cout<<s;

j++;
s=r-1;
cout<<endl;
}
return 0;
}
