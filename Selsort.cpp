#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
   int *arr,n,i,j,small,temp,k;
   cout<<"Enter array element size:";
   cin>>n;
   arr=new int[n];
   cout<<"enter array elements:";
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }  
   for(i=0;i<n-1;i++)
   {
      int pos=i;
      for(j=i+1;j<n;j++)
      {
         if(arr[i]>arr[j])
         {
           temp=arr[j];
           arr[j]=arr[i];
           arr[i]=temp;
         }
      }
    }
    cout<<"Sorted Array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }  
    cout<<"\nEnter the value of k:";
    cin>>k;
    for(int p=n-1;p>=n-k;p--)
    {
      cout<<arr[p]<<" ";
    }       
    return 0;
}    

