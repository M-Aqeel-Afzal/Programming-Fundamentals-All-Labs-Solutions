#include<iostream>
#include<cstring>
using namespace std;
int main()
{char z[20];
string s;
int n=0,g=0,m=0,b=0,x=0,l=0,f=0;
cout<<"enter a sentence having lenght less then 21"<<endl;
cin.getline(z,20);
cout<<z<<endl;
int w=strlen(z);
for(int k=0;k<20;k++)
{if(z[k]>64 && z[k]<91)
{n++;}
if(z[k]>96 && z[k]<123)
{g++;}
if(z[k]=='a'||z[k]=='A')
{m++;}
if(z[k]=='e'||z[k]=='E')
{b++;}
if(z[k]=='o'||z[k]=='O')
{x++;}
if(z[k]=='i'||z[k]=='I')
{l++;}
if(z[k]=='u'||z[k]=='U')
{f++;}
}
cout<<"number of upper case lettes are "<<n<<endl;
cout<<"number of lower  case lettes are "<<g<<endl;
cout<<"number of vowel \"a\" is "<<m<<endl;
cout<<"number of vowel \"e\" is "<<b<<endl;
cout<<"number of vowel \"o\" is "<<x<<endl;
cout<<"number of vowel \"i\" is "<<l<<endl;
cout<<"number of vowel \"u\" is "<<f<<endl;
for(int p=0;p<w;p++)
{if(z[0]>96&&z[0]<123)
	{
	z[0]=z[0]-32;
	}
if(z[p-1]==32)
	{if(z[p]>96&&z[p]<123)
		{z[p]=z[p]-32;}}
cout<<z[p];}


//cout<<z<<endl;
return 0;
}




