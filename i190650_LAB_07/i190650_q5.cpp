#include<iostream>
using namespace std;
int main()
{float total_amount,temp1,new_amount;
cout<<"enter totall amount"<<endl;
cin>>total_amount;
total_amount<100?temp1=total_amount*0.1:total_amount>=100&&total_amount<=249.99?temp1=total_amount*0.2:total_amount>=250&&total_amount<=499.99?temp1=total_amount*0.3:total_amount>=500&&total_amount<=999.99?temp1=total_amount*0.4:total_amount>=1000?temp1=total_amount*0.5:0;
new_amount=total_amount-temp1;
cout<<"totall purchase\t\t\t$"<<total_amount<<endl;
cout<<"discount\t\t\t$"<<temp1<<endl;
cout<<"--------------------------------------"<<endl;
cout<<"new price\t\t\t$"<<new_amount<<endl;


return 0;
}
