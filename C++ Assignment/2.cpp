#include <iostream>
using namespace std;
#include <climits> // For INT_MAX and INT_MIN
int main() 
{int r, c, i, j;
 cout<<"number of rows:";
 cin>>r;
 cout<<"number of columns:";
 cin>>c;
    
int**arr=new int*[r];
for(i=0;i<r;i++) 
    {
    arr[i]=new int[c];
    }
cout<<"enter array elements:"<<endl;
for(i=0;i<r;i++) 
    {
    for(j=0;j<c;j++) 
    {
    cout<<"("<<i<<","<<j<<"):";
    cin>>arr[i][j];
    }
    }
cout<<"array:"<<endl;
for(i=0;i<r;i++) 
    {
    for(j=0;j<c;j++) 
    {
    cout<<arr[i][j]<<" ";
    }
    cout << endl;
    }
int*start,*end,temp;
    for (i=0;i<r;i++) 
{
    start=&arr[i][0];
    end=&arr[i][c - 1];
    while(start < end) 
    {
    temp=*start;
    *start=*end;
    *end=temp;
    start++;
    end--;
    }
}
cout<<"reversed array:"<<endl;
    for(i=0;i<r;i++) 
{
    for(j=0;j<c;j++) 
    {
    cout << arr[i][j]<<" ";
    }
cout<<endl;
}

int smallest=INT_MAX,largest=INT_MIN;
int secondSmallest=INT_MAX, secondLargest=INT_MIN;
for(i=0;i<r;i++) 
{
for(j=0;j<c;j++) 
{
if(arr[i][j]<smallest) 
{
secondSmallest=smallest;
smallest=arr[i][j];
} 
else if(arr[i][j]<secondSmallest&&arr[i][j]!=smallest) 
{
secondSmallest = arr[i][j];
}
if(arr[i][j]>largest) 
{
secondLargest = largest;
largest = arr[i][j];
}
else if(arr[i][j]>secondLargest&&arr[i][j]!=largest) 
{
secondLargest = arr[i][j];
}
}
}
if(secondSmallest==INT_MAX) 
{
cout<<"2nd smallest value does not exist"<<endl;
}else
{
cout<<"2nd smallest value:"<<secondSmallest<<endl;
}
if(secondLargest==INT_MIN) 
{
cout<<"2nd largest value does not exist"<<endl;
} else {
cout << "2nd largest value: " <<secondLargest<<endl;
}
return 0;
}

