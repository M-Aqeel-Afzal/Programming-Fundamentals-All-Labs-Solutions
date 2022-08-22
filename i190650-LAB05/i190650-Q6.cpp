#include<iostream>
using namespace std;
int main()
{char ch; int a,b,result;
cout<<"Welcome to the World of Control Structures\nPress (A) to add two integers\nPress (S) to subtract two integers\nPress (M) to multiply two integers\nPress (E) to exit the program\n\n\nPlease choose one of the above options:"<<endl;
cin>>ch;
if(ch=='A'||ch=='a')
{cout<<"enter two number"<<endl;
cin>>a>>b;
result=a+b;
cout<<"result="<<result<<endl;}
else if(ch=='s'||ch=='S')
{cout<<"enter two number"<<endl;
cin>>a>>b;
result=a-b;
cout<<"result="<<result<<endl;}
else if(ch=='m'||ch=='M')
{cout<<"enter two number"<<endl;
cin>>a>>b;
result=a*b;
cout<<"result="<<result<<endl;}
else if(ch=='e'||ch=='E')
{
cout<<"exit"<<endl;}
return 0;
}
