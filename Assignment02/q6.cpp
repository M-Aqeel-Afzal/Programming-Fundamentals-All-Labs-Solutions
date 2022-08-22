//Muhammad Aqeel Afzal
// Roll.no: i190650-section-D

//program for UZong cellular company.
#include<iostream>
using namespace std;
int main()
{float data;char pakage;
int temp1,temp2,temp3,temp4,temp5,temp6,totall;
cout<<" enter data in GBs"<<endl;
cin>>data;
cout<<"enter pakage"<<endl;
cin>>pakage;
switch(pakage)
{case 'A':  //pakage which give 1GB in RS=100,over 20 rupes per 100MB per month
temp1=data*1024;//GBs in mbs
temp2=temp1/1024;//GBs
temp3=temp2*100;//price of gbs
temp4=temp1%1024;//remaning mbs
temp5=temp4/100;//mbs in 100
temp6=temp5*20;//price
totall=temp6+temp3;
cout<<"charges="<<totall<<endl; break;
case 'B':  //pakage which give 2.5GB in RS=200,over 10 rupes per 100MB per month
temp1=data*1024;//GBs in mbs
temp2=temp1/1024;//GBs
temp3=temp2*200;//price of gbs
temp4=temp1%1024;//remaning mbs
temp5=temp4/100;//mbs in 100
temp6=temp5*10;//price
totall=temp6+temp3;
cout<<"charges="<<totall<<endl; break;
case 'C':  //pakage which is unlimited over 1000 rupes per month
cout<<"charges= 1000"<<endl; break;}
return 0;
}
