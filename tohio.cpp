#include<iostream>

void toi(int n,char src,char temp,char dest);
int main()
{
    int n;
    char c1,c2,c3;
    std::cout<<"Enter total number of discs:";
    std::cin>>n;
    c1='a';
    c2='b';
    c3='c';
    toi(n,c1,c2,c3);
    return 0;
}

void toi(int n,char src,char temp,char dest)
{
    if(n==1)
    {
        std::cout<<"Move "<<n<<" disc from "<<src<<" to "<<dest<<"\n";
        return;
    }
    toi(n-1,src,dest,temp);
    std::cout<<"Move "<<n<<" disc from "<<src<<" to "<<dest<<"\n";   
    toi(n-1,temp,src,dest);
}
