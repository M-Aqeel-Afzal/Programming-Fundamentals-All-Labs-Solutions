// This program uses a switch-case statement to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.
#include <iostream>
using namespace std;
int main()
{long int i,fac=1;
cout<<"enter a number"<<endl;
cin>>i;
if(i<0)
cout<<"invalid input"<<endl;
else
{
for(;i>0;i--)
fac=fac*i;
cout<<"factorial is :"<<fac<<endl;}
return 0;
}
