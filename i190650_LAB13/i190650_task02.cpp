#include<iostream>
using namespace std;
void Display(int &a,char &b,float &c )
{ 
int *p1= &a;
char *p2= &b;
float *p3= &c;
cout<<"value of 'a': "<<*p1<<endl;
cout<<"value of 'b': "<<*p2<<endl;
cout<<"value of 'c': "<<*p3<<endl<<endl<<endl;



cout<<"value of 'p1': "<<p1<<endl;
cout<<"value of 'p2': "<<p2<<endl;
cout<<"value of 'p3': "<<p3<<endl<<endl<<endl<<endl;



cout<<"address of 'a': "<<&a<<endl;
cout<<"address of 'b': "<<&b<<endl;
cout<<"address of 'c': "<<&c<<endl<<endl<<endl;



cout<<"address of 'p1': "<<&p1<<endl;
cout<<"address of 'p2': "<<&p2<<endl;
cout<<"address of 'p3': "<<&p3<<endl<<endl<<endl;


cout<<"size of 'p1': "<<sizeof(p1)<<endl;
cout<<"size of'p2': "<<sizeof(p2)<<endl;
cout<<"size of 'p3': "<<sizeof(p3)<<endl<<endl<<endl;

cout<<"size of 'a': "<<sizeof(a)<<endl;
cout<<"size of'b': "<<sizeof(b)<<endl;
cout<<"size of 'c': "<<sizeof(c)<<endl<<endl<<endl;



}
int main()
{int v1=10;
char v2='z';
float v3=0.1212;
Display(v1,v2,v3);
return 0;}




