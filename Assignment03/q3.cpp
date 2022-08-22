//Roll.no: 	i190650		Name: MUHAMMAD AQEEL AFZAL 	SECTION:D
// QUESTION .NO 3.
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{ int y=0,i=1,k=0,f=1000,j=1;float avg ,sum=0,g,n=0;
while(i>0)
	{
	srand(time(0));
	n=(rand()%32767);
	k++;
	sum=sum+n;
 	avg=sum/k;
	if(avg<=16383.5+0.0001&&avg>=16383.5-0.0001)
		break;
	 if(f==k&&avg!=16383.5)
		{
		f=f*10;}
}
cout<<"smallest no. of itration to avarage ="<<avg<<" are "<<k<<endl;
return 0;
}
