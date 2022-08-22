#include<iostream>
using namespace std;
int main()
{int z[5];int k,y;
cout<<"enter values of array"<<endl;
for(int f=0;f<5;f++)
cin>>z[f];
cout<<"enter a number and i will check that this number present in it or not"<<endl;
cin>>k;
for( y=0;y<5;y++)
{if(k==z[y])
break;
if(y==4)
{cout<<"No number "<<k<<" is not present in this array"<<endl;
break;}}
if(k==z[y])
cout<<"yes number "<<k<<" is present in this array"<<endl;
return 0;
}
