#include<iostream>

int gcd(int m,int n)
{
    if(n==0)
    {
        return m;
    }
    else
    {
        gcd(n,m%n);
    }
}

int main()
{
    int a,b;
    std::cout<<"Enter two numbers:";
    std::cin>>a>>b;
    int gc=gcd(a,b);
    std::cout<<"GCD:"<<gc;
    return 0;
}    