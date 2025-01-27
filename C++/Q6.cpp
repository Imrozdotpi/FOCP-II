#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
int l,b,a,p;
cout<<"Enter the length:";
cin>>l;
cout<<"Enter the breadth:";
cin>>b;
a=l*b;
p=2*(l+b);
cout<<"The area is:"<<a<<endl;
cout<<"The perimeter is:"<<p<<endl;
return 0;
}