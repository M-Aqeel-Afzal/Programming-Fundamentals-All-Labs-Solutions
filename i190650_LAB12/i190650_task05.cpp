#include<iostream>
using namespace std;
int max(int[] ,int);
int main()
{int arry[20];
cout<<"enter the elements of array"<<endl;
for(int i=0;i<20;i++)
{ cin>>arry[i];
}
int mode;
mode=max(arry,20);
cout<<"max is"<<mode<<endl;

return 0;
}
int max(int a[] , int s)
{int h=0;
for(int i=0;i<s;i++)
	{if(a[i]>h)
	h=a[i];}
	return h;
}
