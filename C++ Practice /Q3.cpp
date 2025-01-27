#include<iostream>
using namespace std;
int main()
{
 int a,b;
 char ch;
 cout<<"Enter number 1:";
 cin>>a;
 cout<<"Enter number 2:";
 cin>>b;
 cout<<"Enter operator:";
 cin>>ch;
 switch(ch)
 {
    case '+':
    cout<<"final:"<<a+b<<endl;
    break;

    case '-':
    cout<<"final:"<<a-b<<endl;
    break;

    case '*':
    cout<<"final:"<<a*b<<endl;
    break;

    case '/':
    cout<<"final:"<<a/b<<endl;
    break;
}
return 0;
}