//Muhammad Aqeel Afzal
// Roll.no: i190650-section-D

//program for the order of pizzas,burgers and sandwitches.
#include<iostream>
using namespace std;
int main()
{char choose1,choose2,size;int price,items;
cout<<"Avaliable items you can choose from these:\nA. burgers.\nB. pizzas.\nC. sandwitches."<<endl;
cin>>choose1;
switch(choose1)
{case 'A':
case 'a':
cout<<"Burger category:\n1. Crispy chicken burger-/RS=300.\n2.Beef burger-/RS=330\n3. Fish burger-/RS=500"<<endl;
cout<<"choose one of these"<<endl;
cin>>choose2;
cout<<"enter number of items"<<endl;
cin>>items;
switch(choose2)
{case '1':
price=items*300;
cout<<"total charges="<<price<<endl;
break;
case '2':
price=items*350;
cout<<"total charges="<<price<<endl;
break;
case '3':
price=items*500;
cout<<"total charges="<<price<<endl;
break;
default:
cout<<"wrong entry"<<endl;}
break;
case 'B':
case 'b':
cout<<"pizzas category:\nsmall(S)\n1. Chicken tikka-/RS=200.\n2. Chicken fajita-/RS=650\n3. Four seasons-/RS=800"<<endl;
cout<<"\nmedium(M)\n1. Chicken tikka-/RS=400.\n2. Chicken fajita-/RS=950\n3. Four seasons-/RS=1200"<<endl;
cout<<"\nlarge(L)\n1. Chicken tikka-/RS=600.\n2. Chicken fajita-/RS=1250\n3. Four seasons-/RS=1600"<<endl;
cout<<"choose one of these"<<endl;
cin>>choose2;
cout<<"enter number of items"<<endl;
cin>>items;
switch(choose2)
{case '1':
cout<<"choose size"<<endl;
cin>>size;
switch(size)
{case 's':
case 'S':
price=items*200;
cout<<"total charges="<<price<<endl;
break;
case 'm':
case 'M':
price=items*400;
cout<<"total charges="<<price<<endl;
break;
case 'L':
case 'l':
price=items*600;
cout<<"total charges="<<price<<endl;
break;
default:
cout<<"wrong entry"<<endl;}
break;
case '2':
cout<<"choose size"<<endl;
cin>>size;
switch(size)
{case 's':
case 'S':
price=items*650;
cout<<"total charges="<<price<<endl;
break;
case 'm':
case 'M':
price=items*950;
cout<<"total charges="<<price<<endl;
break;
case 'L':
case 'l':
price=items*1250;
cout<<"total charges="<<price<<endl;
break;
default:
cout<<"wrong entry"<<endl;}
break;
case '3':
cout<<"choose size"<<endl;
cin>>size;
switch(size)
{case 's':
case 'S':
price=items*800;
cout<<"total charges="<<price<<endl;
break;
case 'm':
case 'M':
price=items*1200;
cout<<"total charges="<<price<<endl;
break;
case 'L':
case 'l':
price=items*1600;
cout<<"total charges="<<price<<endl;
break;
default:
cout<<"wrong entry"<<endl;}
break;
default:
cout<<"wrong entry"<<endl;}
break;
case 'C':
case 'c':
cout<<"sandwitch category:\n1. club-/RS=80.\n2. Chicken-/RS=110\n3. Vegetales-/RS=70"<<endl;
cout<<"choose one of these"<<endl;
cin>>choose2;
cout<<"enter number of items"<<endl;
cin>>items;
switch(choose2)
{case '1':
price=items*80;
cout<<"total charges="<<price<<endl;
break;
case '2':
price=items*110;
cout<<"total charges="<<price<<endl;
break;
case '3':
price=items*70;
cout<<"total charges="<<price<<endl;
default:
cout<<"wrong entry"<<endl;}
break;
default:
cout<<"wrong entry"<<endl;}


return 0;
}
