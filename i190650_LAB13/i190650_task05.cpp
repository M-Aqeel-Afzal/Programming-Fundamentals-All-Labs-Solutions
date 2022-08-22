#include<iostream>
using namespace std;
void MeanMin2(float *arr,int size)
{
float z=0;for(int i=1;i<size;i++)
{
if(*(arr+0)>*(arr+i))
{z=*(arr+0);
*(arr+0)=*(arr+i);
*(arr+i)=z;}
}
for(int i=2;i<size;i++)
{
if(*(arr+1)>*(arr+i))
*(arr+1)=*(arr+i);
//cout<<*(arr+1)<<endl;
}
cout<<endl<<endl;
cout<<*(arr+0)<<endl;
cout<<*(arr+1)<<endl;
float mean=(*(arr+0)+*(arr+1))/2;
cout<<"mean of two smallest numbers is "<<mean<<endl;
}
int main()
{const int s=10;
float arry[s];
for(int a=0;a<s;a++)
{arry[a]=rand()%10+1;
cout<<arry[a]<<" ";}
float a;
MeanMin2(arry,s);

return 0;
}
