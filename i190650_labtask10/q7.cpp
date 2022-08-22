#include<iostream>
using namespace std;
int main()
{int z[10];
int h=0;
cout<<"enter the values of array"<<endl;
for(int s=0;s<10;s++)
cin>>z[s];
int r=0;
for(int k=0;k<10;k++)
{ if(h<z[k])
{r=h;
	h=z[k];}
else if(z[k]<h&&z[k]>r)
r=z[k];
else;}
cout<<"second largest number is:"<<r<<endl;
int sml=z[0];int o=z[0];
for(int k=0;k<10;k++)
{ if(sml>z[k])
{o=sml;
sml=z[k];}
else if(z[k]>sml&&z[k]<o)
o=z[k];
else;}
cout<<"second smallest number is:"<<o<<endl;

return 0;
}
