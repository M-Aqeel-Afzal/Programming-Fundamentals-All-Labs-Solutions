 //Roll.no: 	i190650		Name: MUHAMMAD AQEEL AFZAL 	SECTION:D
// QUESTION .NO 1.
#include<iostream>
using namespace std;
int main()
 {int r,n,m=1,k;int t=1;
cout<<"Enter no.of rows"<<endl;
cin>>r;
for(;r>0;r--)
{k=r-1;	
for(int n=r-1;n>0;n--)
	cout<<".";
	for(;m>0;m--)
	cout<<"*";
	for( ;k>0;k--)
	cout<<".";
cout<<endl;

m=t+2;
 t=m;}
return 0;
}
