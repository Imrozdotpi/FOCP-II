#include <iostream>
int main() 
{
char name[100];  
int age;
std::cout << "Enter your name: ";
std::cin >> name;  
std::cout << "Enter your age: ";
std::cin >> age; 
std::cout << "The user name is " << name << std::endl;
return 0;
}