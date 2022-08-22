#include<iostream>
using namespace std;
int main()
{int z[10];
int h=0;
cout<<"enter the values of array"<<endl;
for(int s=0;s<10;s++)
cin>>z[s];
for(int k=0;k<10;k++)
{ if(h<z[k])
	h=z[k];}
cout<<"largest number is:"<<h<<endl;
int sml=z[0];
for(int k=0;k<10;k++)
{ if(sml>z[k])
	sml=z[k];}
cout<<"smallest number is:"<<sml<<endl;

return 0;
}
