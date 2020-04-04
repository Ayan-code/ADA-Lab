#include<iostream>
 
using namespace std; 

int max(int a,int b)
{
   return(a>b)?a:b;
} 

int knap(int W,int wt[],int val[],int n) 
{  
   if (n==0||W==0) 
	   return 0; 
	    
   if (wt[n-1]>W) 
	   return knap(W,wt,val,n-1); 

   else
       return max(val[n-1]+knap(W-wt[n-1],wt,val,n-1), 
					knap(W,wt,val,n-1) ); 
} 

int main() 
{ 
	int *val,*wt,n,W;
	cout<<"Enter the value of n:";
	cin>>n;
	cout<<"Enter bag weight:";
	cin>>W;
	val=new int[n];
	wt=new int[n];
	cout<<"Enter value of each item ";
	for(int i=0;i<n;i++)
	    cin>>val[i];
	cout<<"Enter weight of each item ";
	for(int i=0;i<n;i++)
	    cin>>wt[i]; 	   
	cout<<"Solution is:"<<knap(W,wt,val,n);    
	return 0; 
} 


