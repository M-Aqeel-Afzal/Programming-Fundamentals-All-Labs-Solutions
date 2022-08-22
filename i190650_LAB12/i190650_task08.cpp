#include<iostream>
#include<cstdlib>
using namespace std;
int fun(int r,int c)//function defination.
{
int y;
int arry[r][c],arry2[32],arry3[r][c];
time(0);
for(int i=0;i<r;i++)/* loops for filling the array.*/
{for(int j=0;j<c;j++)
{y=rand()%9+1;
arry[i][j]=y;}}


for(int i=0;i<r;i++)/* loops for displaying the array elements.*/
{for(int j=0;j<c;j++)
{cout<<arry[i][j]<<" ";}
cout<<endl;}






for(int i=0;i<r;i++)							/*loops for finding the binary of each element of the array.*/
{for(int j=0;j<c;j++)
{int n=0;
				while(n>=0)
				{arry2[n]=(arry[i][j])%2;
				arry[i][j]=(arry[i][j])/2;
				n++;
				if(arry[i][j]==0)
				break;
				}
				
				
				for(int k=n-1;k>=0;k--)			//loop to displaying binary of each element of the array.
{cout<<arry2[k];
if(k==0)
break;}
				
				cout<<" ";}
				cout<<endl;
}}
int main()
{int a,b;
cout<<"enter number of rows"<<endl;
cin>>a;
cout<<"enter number of columes"<<endl;
cin>>b;
fun(a,b);//function calling.

return 0;
}
