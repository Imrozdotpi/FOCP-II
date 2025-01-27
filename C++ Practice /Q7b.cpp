#include<iostream>
using namespace std;
int main()
{ 
int a,b;
cout<<"enter number 1:";
cin>>a;
cout<<"enter number 2:";
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"numbers after swap without temp variable:"<<a<<endl;
cout<<"numbers after swap without temp variable:"<<b<<endl;
return 0;
}