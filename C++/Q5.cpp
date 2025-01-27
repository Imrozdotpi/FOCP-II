#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{ 
int a,r,t,p,n,CI;
cout<<"enter amount:";
cin>>a;

cout<<"enter rate:";
cin>>r;

cout << "enter time period:";
cin>>t;

cout<<"enter principle:";
cin>>p;

cout<<"enter multiplier:";
cin>>n;

a = p * pow(1+r/n,n*t);
CI=a-p;
cout<<"CI is:"<<CI<<endl;

return 0;
}