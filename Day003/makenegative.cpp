#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number\t";
    cin>>num;
    if(num<=0.0)
    { if(num==0)
    { cout<<"number is zero\t";}
        num=num;}
    else
    {
        num=-num;
    }
    cout<<num<<endl;
    return 0;
    
}