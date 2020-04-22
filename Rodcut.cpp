#include<iostream>
#include<limits.h>
 
using namespace std;
 
int max(int a,int b) 
{
   return (a > b)? a : b;
}
 
int cutRod(int price[], int n)
{
   if (n <= 0)
     return 0;
   int max_val = INT_MIN;
   for (int i = 0; i<n; i++)
         max_val = max(max_val, price[i] + cutRod(price, n-i-1));
 
   return max_val;
}

int main()
{
    int *arr,size;
    cout<<"\nEnter the size:";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array:";
    for(int i=0;i<size;i++)
    {
    	cin>>arr[i];
	}
    cout<<"Maximum Obtainable Value is: "<<cutRod(arr,size);
    return 0;
}
