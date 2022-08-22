//Roll.no: 	i190650		Name: MUHAMMAD AQEEL AFZAL 	SECTION:D
// QUESTION .NO 10.....
#include<iostream>
using namespace std;
int main()
{int v1,v2,v3,v4,v5,n=0,a=0,b=1,c,e,f,g,h,i;
cout<<"enter five values:"<<endl;
cin>>v1>>v2>>v3>>v4>>v5;
if(v1>v2&&v1>v3&&v1>v4&&v1>v5)
n=v1;
if(v2>v1&&v2>v3&&v2>v4&&v2>v5)
n=v2;
if(v3>v2&&v3>v1&&v3>v4&&v3>v5)
n=v3;
if(v4>v2&&v4>v3&&v4>v1&&v4>v5)
n=v4;
if(v5>v2&&v5>v3&&v5>v4&&v5>v1)
n=v5;
a=n;
e=v1;f=v2;g=v3;h=v4;i=v5;
	for(;a>0;a--)
	{	if(a<10)
		cout<<"0"<<a;
		else
		cout<<a;

				for(;v1>0;v1--)
				{ cout<<"";if(v1==a)	
				{cout<<"* ";break;}
				if(v1==1)
				cout<<"  ";
				}
				cout<<"";
				
						
						for(;v2>0;v2--)
						{cout<<"";	if(v2==a)
						{cout<<"* ";break;}
if(v2==1)
				cout<<"  ";
							}
						cout<<"";

						

							for(;v3>0;v3--)
							{cout<<"";	if(v3==a)
							{cout<<"* ";break;}
if(v3==1)
				cout<<"  ";
							}
							cout<<"";
							
							

								for(;v4>0;v4--)
								{cout<<"";	if(v4==a)
								{cout<<"* ";break;}
if(v4==1)
				cout<<"  ";
								}
								cout<<"";
								
								


									for(;v5>=0;v5--)
									{	if(v5==a)
									{cout<<"* ";break;}
if(v5==1)
				cout<<"  ";
									}
										cout<<"";
									
									





		cout<<endl;
v1=e;v2=f;v3=g;v4=h;v5=i;
	}


cout<<" ";
			for(;b<6;b++)
				cout<<" "<<b;
				cout<<endl;

return 0;
}
