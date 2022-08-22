#include<iostream>
#include<cstring>
using namespace std;
int main()
{int n,m,l=1,z=0;
 cout<<"enter number of strings you want to enter"<<endl;
cin>>n;
cout<<"enter lenght of each string "<<endl;
cin>>m;
const int r=n,c=m;
char a1[r][c]; 
for(int i=0;i<n;i++)
{cout<<"enter string "<<l<<endl;
for(int k=0;k<c;k++)
{
cin>>a1[i][k];}
cout<<" ";
l++;
}
cout<<"your entered strings are:"<<endl;
cout<<"{";
for(int i=0;i<n;i++)
{cout<<"\"";
for(int k=0;k<c;k++)
{
cout<<a1[i][k];
}
if(i==n-1)
cout<<"\"";
else
cout<<"\""<<",";
}
cout<<"}";
cin.ignore();
int b,h=0,d=0,x=0,v=0;
char a2[c];
cout<<endl<<"enter the string you want to search:"<<endl;
cin.getline(a2,c);
b=strlen(a2);
cout<<endl;
//for(int i=1;i<=b;i++)
for(int k=0 ;k<r;k++)
{	for(int j=0;j<c;j++)
		{if(a1[k][j]==a2[h])
			{h++;d++;}
				if(a1[k][j]==a2[h-1]&&d==1)
				{x=k;
				z++;
				v=j;}
		}

if(d==b)
cout<<x<<","<<v<<endl;
d=0;h=0;

}
if(z==0)
{cout<<"substring does't match"<<endl;
}		
return 0;
}













