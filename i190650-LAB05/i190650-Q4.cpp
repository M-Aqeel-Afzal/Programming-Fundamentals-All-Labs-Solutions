#include<iostream>
using namespace std;
int main()
{char ch;
cout<<"enter any charater"<<endl;
cin>>ch;
if(ch>=97&&ch<=121)
cout<<" an lowercase character"<<endl;
else if(ch>=65&&ch<=90)
cout<<" an uppercase character"<<endl;
else if(ch>=48&&ch<=58)
cout<<" a digit"<<endl;
else
cout<<" a special character"<<endl;

return 0;
}
