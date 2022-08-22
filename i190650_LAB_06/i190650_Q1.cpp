#include<iostream>
using namespace std;
int main()
{int num1;
cout<<"enter a number"<<endl;
cin>>num1;
 if (num1>50 && num1%5==0)
  cout<<"number is greater then 50 and multiple of 5"<<endl;
 if (num1>50 && num1%5!=0)
  cout<<"number is greater then 50 but not multiple of 5"<<endl;
  if (num1<=50 && num1%5==0)
   cout<<"number is less  or equal to 50 but multiple of 5"<<endl;
   if (num1<=50 && num1%5!=0)
   cout<<"number is less oe equal to 50 but not multiple of 5"<<endl;
return 0;
}
