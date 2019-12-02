#include <string>
#include<iostream>
using namespace std; 
void reverse(string str) 
{ 
   for (int i=str.length()-1; i>=0; i--) 
      cout << str[i]<<endl;  
} 
int main() 
{     string s = "Abhishek"; 
    reverse(s); 
    return (0); 
} 