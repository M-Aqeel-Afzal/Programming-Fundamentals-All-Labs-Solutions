//program that displays all the palindromic prime numbers between
//100 and 999.
#include<iostream>
using namespace std;
int main()
{int n=101,a,b,c,j=3;
for(;n<999;n++)
{	for(int i=2;i<n;i++,j++)
	{if(n%i==0)
	break;
	if(j==n)
		{a=n%100;
		c=n/100;
		b=a%10;
			if(c==b)
			cout<<n<<",";
		}
	}
j=3;

}
cout<<endl;
return 0;
}
