#include<iostream>
using namespace std;
int main()
{int age;
cout<<"enter age"<<endl;
cin>>age;
if(age>=0&&age<=2)
cout<<"Baby"<<endl;
else if(age>=3&&age<=12)
cout<<"child"<<endl;
else if(age>=13&&age<=17)
cout<<"teenager"<<endl;
else if(age>=18&&age<=35)
cout<<"young adult"<<endl;
else if(age>=36&&age<=45)
cout<<"adult"<<endl;
else if(age>=46&&age<=65)
cout<<"middle age"<<endl;
else if(age>=66&&age<=90)
cout<<"senior"<<endl;
else
cout<<"Elderly"<<endl; 
return 0;
}
