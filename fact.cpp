#include<iostream>

using namespace std;

int fact(int m);
int main()
{
	 int n,i;
	 cout<<"Enter the number:";
	 cin>>n;
	 i=fact(n);
	 cout<<"The factorial is:"<<i;
	 return 0;
}
int fact(int m)
{
	if(m==0)
	   return 1;
	else 
	   return(m*fact(m-1));
}

