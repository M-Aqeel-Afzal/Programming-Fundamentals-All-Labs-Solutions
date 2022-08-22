#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{int s1,s2;
cout<<"enter two numbers and i will swap them"<<endl;
cin>>s1>>s2;
swap(s1,s2);
cout<<s1<<" "<<s2<<endl;

return 0;
}
void swap(int &a,int &b)
{
int i=0;
i=a;
a=b;
b=i;
}
