#include<iostream>
using namespace std;
int main()
{int n;
cout<<"enter a number between 1 to 99999"<<endl;
cin>>n;
if(n>=1&&n<=9)
cout<<" 1 digit number"<<endl;
else if(n>=10&&n<=99)
cout<<" 2 digit number"<<endl;
else if(n>=100&&n<=999)
cout<<" 3 digit number"<<endl;
else if(n>=1000&&n<=9999)
cout<<" 4 digit number"<<endl;
else if(n>=10000&&n<=99999)
cout<<" 5 digit number"<<endl;
else
cout<<"invild number"<<endl;
return 0;
}
