#include<iostream>
using namespace std;
int main()
{int a1[5][5],a2[5];int y=0,h=0;
srand(time(0));
for(int i=0;i<5;i++)
{
	for(int k=0;k<5;k++)
		{ 
		 y=rand()%9 +1;
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
for(int i=0;i<5;i++)
{	for(int k=0;k<5;k++)
		h=h+a1[i][k];
}

cout<<endl;
cout<<"sum of all elements of array is = "<<h<<endl;
cout<<endl;
int sum=0;
for(int i=0;i<5;i++)
{	for(int k=0;k<5;k++)
		{ 
sum=sum+a1[i][k];
		}
if(i<4)
cout<<sum<<",";
else
cout<<sum;
sum=0;
}cout<<endl;
h=0;
for(int i=0;i<5;i++)
{	for(int k=0;k<5;k++)
	if(i%2!=0&&k%2!=0)	
h=h+a1[i][k];
}

cout<<endl;
cout<<"sum of all  elements of array having odd row and odd colum is = "<<h<<endl;
cout<<endl;
return 0;
}









