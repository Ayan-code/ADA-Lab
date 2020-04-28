#include <iostream> 

using namespace std;
 
bool isSubsetSum(int set[], int n, int sum) 
{ 
   if (sum == 0) 
     return true; 
   if (n == 0 && sum != 0) 
     return false; 

   if (set[n-1] > sum) 
     return isSubsetSum(set, n-1, sum); 

   return isSubsetSum(set, n-1, sum) ||  
                        isSubsetSum(set, n-1, sum-set[n-1]); 
} 
 
int main() 
{ 
 int *set,n,sum;
 cout<<"Enter the sum:";
 cin>>sum;
 cout<<"Enter the total members of set:";
 cin>>n;
 cout<<"Enter the subset elements:";
 set=new int[n];
 for(int i=0;i<n;i++)
     cin>>set[i];
  if (isSubsetSum(set, n, sum) == true) 
     cout<<"Found a subset with given sum"; 
  else
     cout<<"No subset with given sum"; 
  return 0; 
} 
