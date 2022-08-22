#include<iostream>
#include<cstdlib>
using namespace std;
void SortTheEvens(int *b,int size)
{
cout<<"sorted array by left:"<<endl;
int arr2[5];
int k=0,l=5,h=5;
for(int j=0;j<10;j++)
{
if(*(b+j)%2==0)
{*(b+k)=*(b+j);
k++;}
else{arr2[l]=*(b+j);
l--;
}}
for(int i=9;i>4;i--)
{*(b+i)=arr2[h];
h--;}
for(int i=0;i<10;i++)
{cout<<*(b+i)<<endl;}
}
int main()
{srand(time(0));
int arry[10];
for(int i=0 ;i<10;i++)
{
arry[i]=rand()%10;}
cout<<"array filled by randomly:"<<endl;
for(int i=0;i<10;i++)
{cout<<arry[i]<<endl;}
cout<<endl<<endl<<endl;
SortTheEvens(arry,10);

return 0;
}
