#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float a,b;
cout<<"enter 1st:";
cin>>a;
cout<<"enter 2nd:";
cin>>b;
cout<<setprecision(2)<<a/b<<endl;
return 0;
}