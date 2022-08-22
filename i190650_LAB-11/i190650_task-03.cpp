#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter number of rows of arrays"<<endl;
cin>>a;
cout<<"enter number of colums of arrays"<<endl;
cin>>b;
const int r=a,c=b;
int a1[r][c];
int a2[r][c];
int a3[r][c];
cout<<"enter elements of array one"<<endl;
for(int i=0;i<r;i++)
{
	for(int k=0;k<c;k++)
		{ 
		
		cin>>a1[i][k];
		}
}
cout<<endl;
cout<<"enter elements of array two"<<endl;
for(int i=0;i<r;i++)
{
	for(int k=0;k<c;k++)
		{ 
		
		cin>>a2[i][k];
		}
}
cout<<endl;
for(int i=0;i<r;i++)
{	for(int k=0;k<c;k++)
		{ if(k<c-1)
		cout<<a1[i][k]<<",";
		else
		cout<<a1[i][k];}
cout<<endl;
}
cout<<endl<<"+"<<endl;
cout<<endl;
for(int i=0;i<r;i++)
{	for(int k=0;k<c;k++)
		{ if(k<c-1)
		cout<<a2[i][k]<<",";
		else
		cout<<a2[i][k];}
cout<<endl;
}
cout<<endl;
for(int i=0;i<r;i++)
{	for(int k=0;k<c;k++)
		{ 
a3[i][k]=a1[i][k]+a2[i][k];
		}
}cout<<endl;
for(int i=0;i<r;i++)
{	for(int k=0;k<c;k++)
		{ if(k<c-1)
		cout<<a3[i][k]<<",";
		else
		cout<<a3[i][k];}
cout<<endl;
}
return 0;
}














