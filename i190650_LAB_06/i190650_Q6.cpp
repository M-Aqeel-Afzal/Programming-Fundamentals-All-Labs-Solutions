#include<iostream>
using namespace std;
int main()
{char ch1,ch2;
cout<<"enter grades"<<endl;
cin.get(ch1);
cin.get(ch2);
switch(ch1)
{case 'A':
switch(ch2)
{case ' ' :
cout<<"out-standing"<<endl;
break;
case '-' :
cout<<"Excellent"<<endl;
break;
default:
cout<<"invild"<<endl;}
break;
case 'B':
switch(ch2)
{case '+' :
cout<<"very good"<<endl;
break;
case ' ' :
cout<<"good"<<endl;
break;
case '-' :
cout<<"Satisfactory"<<endl;
break;
default:
cout<<"invild"<<endl;}
break;
case 'C':
switch(ch2)
{case '+' :
cout<<"Average"<<endl;
break;
default:
cout<<"invild"<<endl;}
break;
case 'F':
cout<<"Below Average"<<endl;
break;
default:
cout<<"invild"<<endl;}

return 0;
}
