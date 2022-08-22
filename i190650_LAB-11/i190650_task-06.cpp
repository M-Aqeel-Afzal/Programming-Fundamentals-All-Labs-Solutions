#include<iostream>
using namespace std;
int main()
{int a1[3][2],a2[2][2],a3[3][1];int sum=0,mul=0;
cout<<"enter the values of array one"<<endl;
for(int i=0;i<3;i++)
{for(int k=0;k<2;k++)
cin>>a1[i][k];
}
cout<<"enter the values of array two"<<endl;
for(int i=0;i<2;i++)
{for(int k=0;k<2;k++)
cin>>a2[i][k];
}cout<<"Matrix one"<<endl;
for(int i=0;i<3;i++)
{for(int k=0;k<2;k++)
cout<<a1[i][k]<<" ";
cout<<endl;
}
cout<<endl;
cout<<"Matrix two"<<endl;
for(int i=0;i<2;i++)
{for(int k=0;k<2;k++)
cout<<a2[i][k]<<" ";
cout<<endl;
}
cout<<endl;
cout<<"final Matrix which contains answer of multiplication is; "<<endl;
for(int i=0;i<3;i++)			//loop for rows of array one.
{for(int k=0;k<2;k++)			//loop for colum of array two.
	{for(int j=0;j<2;j++)		//loop for colum of array two and colum of array two.	
	{mul=a2[j][k]*a1[i][j];
	sum=mul+sum;
		}}
a3[i][0]=sum;
sum=0;


}
for(int s=0;s<3;s++)//loop for final matrix.
{cout<<a3[s][0];
cout<<endl;}

return 0;
}
