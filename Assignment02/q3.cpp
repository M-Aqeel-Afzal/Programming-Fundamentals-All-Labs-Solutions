//Muhammad Aqeel Afzal
// Roll.no: i190650-section-D

//program for checking vowel or consocant.
#include<iostream>
using namespace std;
int main()
{char c;
cout<<"enter alphabet"<<endl;
cin>>c;
switch(c)
{ case 'a':
case 'A':
case 'i':
case 'I':
case 'e':
case 'E':
case 'u':
case 'U':
case 'o':
case 'O':
cout<<"vowel"<<endl;
break;
default:
cout<<"consonant"<<endl;}

return 0;
}
