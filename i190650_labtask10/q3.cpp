#include<iostream>
using namespace std;
int main()
{const int s=11;int r;
float z[s];double sum,avg;
cout<<"enter values of array"<<endl;
for(r=0; r<s;r++)
cin>>z[r];
int a=(r-1)/2,b=s-1;
cout<<"first number = "<<z[0]<<"\tmiddle number = "<<z[a]<<"\tlast number = "<<z[b]<<endl;
sum=z[0]+z[a]+z[b];
avg =sum/3;
cout<<"avarge is = "<<avg<<endl;
return 0;
}
