#include<iostream>
using namespace std;
int main()
{int a1[3][3];int sum;
cout<<"enter the elements of the array:"<<endl;
for(int i=0;i<3;i++)
{
	for(int k=0;k<3;k++)
		{ 
		
		cin>>a1[i][k];
		}
}
cout<<endl;
for(int i=0;i<3;i++)
{	for(int k=0;k<3;k++)
		{ if(k<2)
		cout<<a1[i][k]<<",";
		else
		cout<<a1[i][k];}
cout<<endl;
}
sum=a1[1][0]+a1[2][0]+a1[2][1];
cout<<"sum of lower triangular matrix = "<<sum<<endl;
return 0;
}
