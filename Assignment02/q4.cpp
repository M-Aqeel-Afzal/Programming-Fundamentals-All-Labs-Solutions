//Muhammad Aqeel Afzal
// Roll.no: i190650-section-D

//program for finding the roots of quadratic equestion.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{float a,b,c,x,temp1,root1,root2;
cout<<"enter value of a,b,c"<<endl;
cin>>a>>b>>c;
temp1=b*b-4*a*c;
root1=(-b-sqrt(b*b-4*a*c))/(2*a);
root2=(-b+sqrt(b*b-4*a*c))/(2*a);
temp1>0?cout<<"root1="<<root1<<endl<<"root2="<<root2<<endl:cout<<"imaginary"<<endl;




return 0;
}
