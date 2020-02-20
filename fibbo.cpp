#include<iostream>

using namespace std;

int fabb(int n)
{
   if(n==0)
      return 0;
   else if(n==1)
      return 1;
   else
      return(fabb(n-1)+fabb(n-2));
}

int main()
{
   int n;
   cout<<"\n Enter the nth value :";
   cin>>n;
   int m=fabb(n);
   cout<<m;
   return 0;
}   
   
              
  
