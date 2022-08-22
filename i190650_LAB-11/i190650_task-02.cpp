#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{int a1[5][5];int y;
srand(time(0));
for(int i=0;i<5;i++)
{
	for(int k=0;k<5;k++)
		{ 
		 y=rand()%99 +2;
		a1[i][k]=y;
		}
}
for(int i=0;i<5;i++)
{	for(int k=0;k<5;k++)
		{ if(k<4)
		cout<<a1[i][k]<<",";
		else
		cout<<a1[i][k];}
cout<<endl;
}
cout<<endl<<endl;
cout<<"reverse order:"<<endl<<endl;
for(int i=4;i>=0;i--)
{	for(int k=4;k>=0;k--)
		{ if(k>0)
		cout<<a1[i][k]<<",";
		else
		cout<<a1[i][k];}
cout<<endl;
}cout<<endl<<endl;
cout<<"enter elements of array:"<<endl;
for(int i=0;i<5;i++)
{
	for(int k=0;k<5;k++)
		{ 
		
		cin>>a1[i][k];
		}
}
cout<<endl;
for(int i=0;i<5;i++)
{	for(int k=0;k<5;k++)
		{ if(k<4)
		cout<<a1[i][k]<<",";
		else
		cout<<a1[i][k];}
cout<<endl;
}
cout<<endl<<endl;
cout<<"reverse order:"<<endl<<endl;
for(int i=4;i>=0;i--)
{	for(int k=4;k>=0;k--)
		{ if(k>0)
		cout<<a1[i][k]<<",";
		else
		cout<<a1[i][k];}
cout<<endl;
}cout<<endl<<endl;

return 0;
}
