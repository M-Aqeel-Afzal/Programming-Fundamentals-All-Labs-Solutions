#include<iostream>
using namespace std;
int fun(int);
int main()
{int s1;
cout<<"enter a number and i will count the sum of its digit"<<endl;
cin>>s1;
int s= fun(s1);
cout<<s<<endl;

return 0;
}
int fun(int a)
{int sum=0;
int i=0;
int b=0;
while(a>0)
{i=a%10;
b=a/10;
a=b;
sum=sum+i;}
return sum;}
