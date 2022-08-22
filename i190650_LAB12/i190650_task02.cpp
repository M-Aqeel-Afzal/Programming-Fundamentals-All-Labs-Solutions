#include<iostream>
#include<math.h>
using namespace std;
int powar(int, int);
int main()
{
	int a1, a2;
cout<<"Enter a number : "<<endl;
cin>>a1;
cout<<"Enter the power of the number"<<endl;
cin>>a2;
cout<<"the answer is: "<<powar(a1,a2)<<endl;
return 0;
}
int powar(int a,int b)
{return pow(a,b);}
