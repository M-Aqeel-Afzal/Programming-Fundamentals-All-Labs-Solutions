//Muhammad Aqeel Afzal
// Roll.no: i190650-section-D

//program for printing arrow sign.
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{ string s1,s2;
char c;int num1;
cout<<"Choose any one option:\nA. Draw an arrow pattran\nB. draw an X pattran\nC. draw a pyramid pattran "<<endl;
cin>>c;
setprecision(c);
int t=s1.length();
s2="***";
switch(c)
{case 'A':
cout<<"enter string variable"<<endl;
cin>>s1;

cout<<setw(t+10)<<s1<<endl;
cout<<setw(t+12)<<s1<<endl;
cout<<setw(t+14)<<s1<<endl;
cout<<setw(t+16)<<s1<<endl;
cout<<setw(t+18)<<s1<<endl;
cout<<s2<<s2<<s2<<s2<<s2<<s2<<endl;
cout<<setw(t+18)<<s1<<endl;
cout<<setw(t+16)<<s1<<endl;
cout<<setw(t+14)<<s1<<endl;
cout<<setw(t+12)<<s1<<endl;
cout<<setw(t+10)<<s1<<endl;
break;
case 'B':
cout<<"enter a string"<<endl;
cin>>s1;
cout<<setw(12)<<s1<<setw(14)<<s1<<endl;
cout<<setw(13)<<s1<<setw(12)<<s1<<endl;
cout<<setw(14)<<s1<<setw(10)<<s1<<endl;
cout<<setw(15)<<s1<<setw(8)<<s1<<endl;
cout<<setw(16)<<s1<<setw(6)<<s1<<endl;
cout<<setw(17)<<s1<<setw(4)<<s1<<endl;
cout<<setw(16)<<s1<<setw(6)<<s1<<endl;
cout<<setw(15)<<s1<<setw(8)<<s1<<endl;
cout<<setw(14)<<s1<<setw(10)<<s1<<endl;
cout<<setw(13)<<s1<<setw(12)<<s1<<endl;
cout<<setw(12)<<s1<<setw(14)<<s1<<endl;
break;
case 'C':
cout<<"enter a number"<<endl;
cin>>num1;
cout<<left<<setw(0)<<num1<<right<<setw(23)<<num1<<endl;
cout<<left<<setw(0)<<num1<<".0"<<right<<setw(19)<<num1<<".0"<<endl;
cout<<left<<setw(0)<<num1<<".00"<<right<<setw(17)<<num1<<".00"<<endl;
cout<<left<<setw(0)<<num1<<".000"<<right<<setw(15)<<num1<<".000"<<endl;
cout<<left<<setw(0)<<num1<<".0000"<<right<<setw(13)<<num1<<".0000"<<endl;
cout<<left<<setw(0)<<num1<<".00000"<<right<<setw(11)<<num1<<".00000"<<endl;
cout<<left<<setw(0)<<num1<<".000000"<<right<<setw(9)<<num1<<".000000"<<endl;
cout<<left<<setw(0)<<num1<<".0000000"<<right<<setw(7)<<num1<<".0000000"<<endl;
cout<<left<<setw(0)<<num1<<".00000000"<<right<<setw(5)<<num1<<".00000000"<<endl;
cout<<left<<setw(0)<<num1<<".000000000"<<right<<setw(3)<<num1<<".000000000"<<endl;
cout<<left<<setw(0)<<num1<<".0000000000"<<right<<setw(0)<<num1<<".0000000000"<<endl;
break;
default:
cout<<"invalid"<<endl;}
return 0;
}
