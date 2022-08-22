//Muhammad Aqeel Afzal
// Roll.no: i190650-section-D

//program for evaluating the expression.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{int i; float result;
const float p=3.334,u=1.234;
cout<<"enter the value of variable i"<<endl;
cin>>i;
result= sqrt(u*pow(i,3/2)*(i*i-1))/((sqrt(p*i-2))+sqrt(p*i-1));
cout<<"answer = "<<result<<endl;

return 0;
}
