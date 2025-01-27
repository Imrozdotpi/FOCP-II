#include<iostream>
using namespace std;
int main()
{ 
int x,y,temp;
cout<<"Enter first number:";
cin>>x;
cout<<"Enter second number:";
cin>>y;
temp=x;
x=y;
y=temp;
cout<<"after swapping num 1:"<<x<<endl;
cout<<"after swapping num 2:"<<y<<endl;
return 0;
}