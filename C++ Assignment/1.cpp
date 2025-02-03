#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n<=1) return false;  
    for (int i=2; i<=n/2; ++i) {  
        if (n%i==0) {
            return false;  
            }
    }
    return true;  
}
void findFactors(int n) {
    int factors[100];  
    int count=0;  

    for (int i=1; i<=n; ++i) {
        if (n%i==0) {
            factors[count++] = i;  
        }
    }
        std::cout << "factors are:" << n;
    for (int i=0; i<count; ++i) {
        std::cout<<factors[i]<< " ";
    }
    std::cout<<std::endl;
}
int nextPrime(int n) 
{   int next=n+1;
    while (!isPrime(next)) 
    {
        ++next;
    }
    return next;
}

int main() 
{
    int n;
    std::cout<<"enter a positive integer:";
    std::cin>>n;
    if (isPrime(n)) {
        std::cout<<n<<"is a prime number"<<endl;
        int next_prime=nextPrime(n);
        std::cout<<"next prime number greater than "<<n<<"is "<<next_prime<<endl;
    } else {
        std::cout << n << " is not a prime number.\n";
        findFactors(n);
    }

    return 0;
}
