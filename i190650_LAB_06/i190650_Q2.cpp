#include<iostream>
using namespace std;
int main()
{
float balance=0;int num_of_checks=0;
cout<<"enter bank balance"<<endl;
cin>>balance;
cout<<"enter number of checks"<<endl;
cin>>num_of_checks;
if(balance<0 || num_of_checks<0)
cout<<"account is overdrawn"<<endl;
else
{if(num_of_checks>=0 && num_of_checks<20)
  balance= 10+(.10*num_of_checks);
if(20<=num_of_checks && num_of_checks<=39)
  balance= 10+(.08*num_of_checks);
if(40<=num_of_checks && num_of_checks<=59)
 balance= 10+(.06*num_of_checks);
if( num_of_checks>=60)
 balance= 10+(.04*num_of_checks);
if ( balance>0 && balance< 400)
  balance= 15+balance;cout<<"totall="<<balance<<endl;
}
return 0;
}
