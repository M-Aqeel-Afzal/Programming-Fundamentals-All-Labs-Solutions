#include<iostream>
#include<cstring>
using namespace std;
int main()
{char a1[20],a3[20];int s;char c='A',f='a',l='A',j='a';int n=0;
cout<<"enter a sentence"<<endl;
cin.getline(a1,20);
s=strlen(a1);
cout<<a1;
char a2[20];
for(int i=0;i<s;i++)
{a2[i]=a1[i];
a3[i]=a1[i];}
int k=0;
cout<<endl;
for(int i=0;i<s;i++)
{if(a1[i]>=65&&a1[i]<=90)
	{++k;}}
cout<<"number of uppercase latters are = "<<k<<endl;
int m=0;
for(int i=0;i<s;i++)
{if(a1[i]>=97&&a1[i]<=122)
{++m;}}
cout<<"number of lowercase latters are = "<<m<<endl;
for(int i=0;i<26;i++)
{
for(int k=0;k<s;k++)
{if(a1[k]==c)
n++;
if(a1[k]==f)
n++;}
cout<<"frequency of "<<c<<"= "<<n<<endl;
c++;
f++;
n=0;}
cout<<"converting uppercase to lowercase"<<endl;
n=0;
for(int i=0;i<26;i++)
{
for(int k=0;k<s;k++)
{if(a1[k]==l)
a1[k]=j;
//if(a1[k]==f)
//n++;}
}
//cout<<"frequency of "<<c<<"= "<<n<<endl;
l++;
j++;
n=0;}
for(int i=0;i<s;i++)
{cout<<a1[i];}
n=0;cout<<endl;
l='A',j='a';
cout<<"converting lowercase to upercase"<<endl;
for(int i=0;i<26;i++)
{
for(int k=0;k<s;k++)
{if(a2[k]==j)
a2[k]=l;
//if(a1[k]==f)
//n++;}
}
//cout<<"frequency of "<<c<<"= "<<n<<endl;
l++;
j++;
n=0;}
for(int i=0;i<s;i++)
{cout<<a2[i];}
n=0;cout<<endl;
l='A',j='a';
cout<<"converting first charater to upercase of each word"<<endl;
for(int i=0;i<26;i++)
{
for(int k=0;k<s;k++)
{if(a3[k-1]==32)
{if(a3[k]==j)
a3[k]=l;
//if(a1[k]==f)
//n++;}
}}
//cout<<"frequency of "<<c<<"= "<<n<<endl;
l++;
j++;
n=0;}
for(int i=0;i<s;i++)
{cout<<a3[i];}
return 0;

}






