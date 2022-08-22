#include<iostream>
using namespace std;
int main()
{int mounth,year,day;
cout<<"enter year"<<endl;
cin>>year;
cout<<"enter mounth"<<endl;
cin>>mounth;
cout<<"enter number of day"<<endl;
cin>>day;
switch(mounth) {
case 1:if(day==1||day==8||day==15||day==22||day==29)
cout<<"the number of days in january,"<<year<<"are 31 and day is wednesday"<<endl;
if(day==2||day==9||day==16||day==23||day==30)
cout<<"the number of days in january,"<<year<<"are 31 and day is thirsday"<<endl;
if(day==3||day==10||day==17||day==24||day==31)
cout<<"the number of days in january,"<<year<<"are 31 and day is friday"<<endl;
if(day==4||day==11||day==18||day==25)
cout<<"the number of days in january,"<<year<<"are 31 and day is saturday"<<endl;
if(day==5||day==12||day==19||day==26)
cout<<"the number of days in january,"<<year<<"are 31 and day is sunday"<<endl;
if(day==6||day==13||day==20||day==27)
cout<<"the number of days in january,"<<year<<"are 31 and day is monday"<<endl;
if(day==7||day==14||day==21||day==28)
cout<<"the number of days in january,"<<year<<"are 31 and day is tuesday"<<endl;
break;
case 2:
if(year%4==0)
{if(day==1||day==8||day==15||day==22||day==29)
cout<<"the number of days in febuary,"<<year<<"are 29 and day is saturday"<<endl;
if(day==2||day==9||day==16||day==23)
cout<<"the number of days in febuary,"<<year<<"are 29 and day is sunday"<<endl;
if(day==3||day==10||day==17||day==24)
cout<<"the number of days in febuary,"<<year<<"are 29  and day is monday "<<endl;
if(day==4||day==11||day==18||day==25)
cout<<"the number of days in febuary,"<<year<<"are 29  and day is tuesday"<<endl;
if(day==5||day==12||day==19||day==26)
cout<<"the number of days in febuary,"<<year<<"are 29  and day is wednesday"<<endl;
if(day==6||day==13||day==20||day==27)
cout<<"the number of days in febuary,"<<year<<"are 29  and day is thirsday"<<endl;
if(day==7||day==14||day==21||day==28)
cout<<"the number of days in febuary,"<<year<<"are 29  and day is friday"<<endl;}
if(year%4!=0)
{if(day==1||day==8||day==15||day==22)
cout<<"the number of days in febuary,"<<year<<"are 28 and day is friday"<<endl;
if(day==2||day==9||day==16||day==23)
cout<<"the number of days in febuary,"<<year<<"are 28 and day is saturday"<<endl;
if(day==3||day==10||day==17||day==24)
cout<<"the number of days in febuary,"<<year<<"are 28  and day is sunday "<<endl;
if(day==4||day==11||day==18||day==25)
cout<<"the number of days in febuary,"<<year<<"are 28  and day is monday"<<endl;
if(day==5||day==12||day==19||day==26)
cout<<"the number of days in febuary,"<<year<<"are 28 and day is tuesday"<<endl;
if(day==6||day==13||day==20||day==27)
cout<<"the number of days in febuary,"<<year<<"are 28  and day is wednesday"<<endl;
if(day==7||day==14||day==21||day==28)
cout<<"the number of days in febuary,"<<year<<"are 28 and day is thirsday"<<endl;}
break;
case 3:
if(day==1||day==8||day==15||day==22||day==29)
cout<<"the number of days in march,"<<year<<"are 31 and day is sunday"<<endl;
if(day==2||day==9||day==16||day==23||day==30)
cout<<"the number of days in march,"<<year<<"are 31 and day is monday"<<endl;
if(day==3||day==10||day==17||day==24||day==31)
cout<<"the number of days in march,"<<year<<"are 31 and day is tuesday"<<endl;
if(day==4||day==11||day==18||day==25)
cout<<"the number of days in march,"<<year<<"are 31 and day is wednesday"<<endl;
if(day==5||day==12||day==19||day==26)
cout<<"the number of days in march,"<<year<<"are 31 and day is thirsday"<<endl;
if(day==6||day==13||day==20||day==27)
cout<<"the number of days in march,"<<year<<"are 31 and day is friday"<<endl;
if(day==7||day==14||day==21||day==28)
cout<<"the number of days in march,"<<year<<"are 31 and day is saturday"<<endl;
break;
case 4:
if(day==1||day==8||day==15||day==22||day==29)
cout<<"the number of days in april,"<<year<<"are 30 and day is wednesday"<<endl;
if(day==2||day==9||day==16||day==23||day==30)
cout<<"the number of days in april,"<<year<<"are 30 and day is thirsday"<<endl;
if(day==3||day==10||day==17||day==24)
cout<<"the number of days in april,"<<year<<"are 30 and day is friday"<<endl;
if(day==4||day==11||day==18||day==25)
cout<<"the number of days in april,"<<year<<"are 30 and day is saturday"<<endl;
if(day==5||day==12||day==19||day==26)
cout<<"the number of days in april,"<<year<<"are 30 and day is sunday"<<endl;
if(day==6||day==13||day==20||day==27)
cout<<"the number of days in april,"<<year<<"are 30 and day is monday"<<endl;
if(day==7||day==14||day==21||day==28)
cout<<"the number of days in april,"<<year<<"are 30 and day is tuesday"<<endl;
break;
case 5:
if(day==1||day==8||day==15||day==22||day==29)
cout<<"the number of days in may,"<<year<<"are 31 and day is friday"<<endl;
if(day==2||day==9||day==16||day==23||day==30)
cout<<"the number of days in may,"<<year<<"are 31 and day is saturday"<<endl;
if(day==3||day==10||day==17||day==24||day==31)
cout<<"the number of days in may,"<<year<<"are 31  and day is sunday "<<endl;
if(day==4||day==11||day==18||day==25)
cout<<"the number of days in may,"<<year<<"are 31  and day is monday"<<endl;
if(day==5||day==12||day==19||day==26)
cout<<"the number of days in may,"<<year<<"are 31 and day is tuesday"<<endl;
if(day==6||day==13||day==20||day==27)
cout<<"the number of days in may,"<<year<<"are 31  and day is wednesday"<<endl;
if(day==7||day==14||day==21||day==28)
cout<<"the number of days in may,"<<year<<"are 31 and day is thirsday"<<endl;
break;
case 6:
if(day==1||day==8||day==15||day==22||day==29)
cout<<"the number of days in june,"<<year<<"are 30 and day is monday"<<endl;
if(day==2||day==9||day==16||day==23||day==30)
cout<<"the number of days in june,"<<year<<"are 30 and day is tuesday"<<endl;
if(day==3||day==10||day==17||day==24)
cout<<"the number of days in june,"<<year<<"are 30 and day is wednesday"<<endl;
if(day==4||day==11||day==18||day==25)
cout<<"the number of days in june,"<<year<<"are 30 and day is thirsday"<<endl;
if(day==5||day==12||day==19||day==26)
cout<<"the number of days in june,"<<year<<"are 30 and day is friday"<<endl;
if(day==6||day==13||day==20||day==27)
cout<<"the number of days in june,"<<year<<"are 30 and day is saturday"<<endl;
if(day==7||day==14||day==21||day==28)
cout<<"the number of days in june,"<<year<<"are 30 and day is sunday"<<endl;
break;
case 7:
if(day==1||day==8||day==15||day==22||day==29)
cout<<"the number of days in july,"<<year<<"are 31 and day is wednesday"<<endl;
if(day==2||day==9||day==16||day==23||day==30)
cout<<"the number of days in july,"<<year<<"are 31 and day is thirsday"<<endl;
if(day==3||day==10||day==17||day==24||day==31)
cout<<"the number of days in july,"<<year<<"are 31 and day is friday"<<endl;
if(day==4||day==11||day==18||day==25)
cout<<"the number of days in july,"<<year<<"are 31 and day is saturday"<<endl;
if(day==5||day==12||day==19||day==26)
cout<<"the number of days in july,"<<year<<"are 31 and day is sunday"<<endl;
if(day==6||day==13||day==20||day==27)
cout<<"the number of days in july,"<<year<<"are 31 and day is monday"<<endl;
if(day==7||day==14||day==21||day==28)
cout<<"the number of days in july,"<<year<<"are 31 and day is tuesday"<<endl;
break;
case 8:
if(day==1||day==8||day==15||day==22||day==29)
cout<<"the number of days in august,"<<year<<"are 31 and day is saturday"<<endl;
if(day==2||day==9||day==16||day==23||day==30)
cout<<"the number of days in august,"<<year<<"are 31 and day is sunday"<<endl;
if(day==3||day==10||day==17||day==24||day==31)
cout<<"the number of days in august,"<<year<<"are 31  and day is monday "<<endl;
if(day==4||day==11||day==18||day==25)
cout<<"the number of days in august,"<<year<<"are 31  and day is tuesday"<<endl;
if(day==5||day==12||day==19||day==26)
cout<<"the number of days in august,"<<year<<"are 31  and day is wednesday"<<endl;
if(day==6||day==13||day==20||day==27)
cout<<"the number of days in august,"<<year<<"are 31  and day is thirsday"<<endl;
if(day==7||day==14||day==21||day==28)
cout<<"the number of days in august,"<<year<<"are 31  and day is friday"<<endl;
break;
case 9:
if(day==1||day==8||day==15||day==22||day==29)
cout<<"the number of days in september,"<<year<<"are 30 and day is tuesday"<<endl;
if(day==2||day==9||day==16||day==23||day==30)
cout<<"the number of days in september,"<<year<<"are 30 and day is wednesday"<<endl;
if(day==3||day==10||day==17||day==24)
cout<<"the number of days in september,"<<year<<"are 30 and day is thirsday"<<endl;
if(day==4||day==11||day==18||day==25)
cout<<"the number of days in september,"<<year<<"are 30 and day is friday"<<endl;
if(day==5||day==12||day==19||day==26)
cout<<"the number of days in september,"<<year<<"are 30 and day is saturday"<<endl;
if(day==6||day==13||day==20||day==27)
cout<<"the number of days in september,"<<year<<"are 30 and day is sunday"<<endl;
if(day==7||day==14||day==21||day==28)
cout<<"the number of days in september,"<<year<<"are 30 and day is monday"<<endl;
break;
case 10:
if(day==1||day==8||day==15||day==22||day==29)
cout<<"the number of days in october,"<<year<<"are 31 and day is thirsday"<<endl;
if(day==2||day==9||day==16||day==23||day==30)
cout<<"the number of days in october,"<<year<<"are 31 and day is friday"<<endl;
if(day==3||day==10||day==17||day==24||day==31)
cout<<"the number of days in october,"<<year<<"are 31 and day is saturday"<<endl;
if(day==4||day==11||day==18||day==25)
cout<<"the number of days in october,"<<year<<"are 31 and day is sunday"<<endl;
if(day==5||day==12||day==19||day==26)
cout<<"the number of days in october,"<<year<<"are 31 and day is monday"<<endl;
if(day==6||day==13||day==20||day==27)
cout<<"the number of days in october,"<<year<<"are 31 and day is tuesday"<<endl;
if(day==7||day==14||day==21||day==28)
cout<<"the number of days in october,"<<year<<"are 31 and day is wednesday"<<endl;
break;
case 11:
if(day==1||day==8||day==15||day==22||day==29)
cout<<"the number of days in november,"<<year<<"are 30 and day is saturday"<<endl;
if(day==2||day==9||day==16||day==23||day==30)
cout<<"the number of days in november,"<<year<<"are 30 and day is sunday"<<endl;
if(day==3||day==10||day==17||day==24||day==31)
cout<<"the number of days in november,"<<year<<"are 30  and day is monday "<<endl;
if(day==4||day==11||day==18||day==25)
cout<<"the number of days in november,"<<year<<"are 30  and day is tuesday"<<endl;
if(day==5||day==12||day==19||day==26)
cout<<"the number of days in november,"<<year<<"are 30  and day is wednesday"<<endl;
if(day==6||day==13||day==20||day==27)
cout<<"the number of days in november,"<<year<<"are 30  and day is thirsday"<<endl;
if(day==7||day==14||day==21||day==28)
cout<<"the number of days in november,"<<year<<"are 30  and day is friday"<<endl;
break;
case 12:
if(day==1||day==8||day==15||day==22||day==29)
cout<<"the number of days in december,"<<year<<"are 31 and day is tuesday"<<endl;
if(day==2||day==9||day==16||day==23||day==30)
cout<<"the number of days in december,"<<year<<"are 31 and day is wednesday"<<endl;
if(day==3||day==10||day==17||day==24||day==31)
cout<<"the number of days in december,"<<year<<"are 31 and day is thirsday"<<endl;
if(day==4||day==11||day==18||day==25)
cout<<"the number of days in december,"<<year<<"are 31 and day is friday"<<endl;
if(day==5||day==12||day==19||day==26)
cout<<"the number of days in december,"<<year<<"are 31 and day is saturday"<<endl;
if(day==6||day==13||day==20||day==27)
cout<<"the number of days in december,"<<year<<"are 31 and day is sunday"<<endl;
if(day==7||day==14||day==21||day==28)
cout<<"the number of days in december,"<<year<<"are 31 and day is monday"<<endl;
break;
default:
cout<<"invild no. of mounth"<<endl;
break;}
return 0;
}
