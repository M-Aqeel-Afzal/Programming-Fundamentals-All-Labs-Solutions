#include<iostream>
using namespace std;
int main()
{int mounth,year;
cout<<"enter year"<<endl;
cin>>year;
cout<<"enter mounth"<<endl;
cin>>mounth;
switch(mounth) {
case 1:
cout<<"the number of days in january,"<<year<<"are 31"<<endl;
break;
case 2:
if(year%4==0)
cout<<"the number of days in February,"<<year<<"are 29"<<endl;
else
cout<<"the number of days in February,"<<year<<"are 28"<<endl;
break;
case 3:
cout<<"the number of days in March,"<<year<<"are 31"<<endl;
break;
case 4:
cout<<"the number of days in April,"<<year<<"are 30"<<endl;
break;
case 5:
cout<<"the number of days in May,"<<year<<"are 31"<<endl;
break;
case 6:
cout<<"the number of days in june,"<<year<<"are 30"<<endl;
break;
case 7:
cout<<"the number of days in july,"<<year<<"are 31"<<endl;
break;
case 8:
cout<<"the number of days in August,"<<year<<"are 31"<<endl;
break;
case 9:
cout<<"the number of days in September,"<<year<<"are 30"<<endl;
break;
case 10:
cout<<"the number of days in October,"<<year<<"are 31"<<endl;
break;
case 11:
cout<<"the number of days in November,"<<year<<"are 30"<<endl;
break;
case 12:
cout<<"the number of days in December,"<<year<<"are 31"<<endl;
default:
cout<<"invild no. of mounth"<<endl;
break;}
return 0;
}
