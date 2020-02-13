#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
   int *arr,n;
   clock_t time_req; 
   cout<<"Enter the array size:"<<endl;
   cin>>n;
   arr=new int[n];
   for(int i=0;i<n;i++)
   {
      arr[i]=rand()/100000;
   }
   time_req=clock();
   for(int i=0;i<n-1;i++)
   {
     for(int j=0;j<n-1-i;j++)
     {
        if(arr[j]>arr[j+1])
        {
             int temp=arr[j+1];
             arr[j+1]=arr[j];
             arr[j]=temp;
        }
     }
    }
    cout<<"time taken:"<< (float)time_req/CLOCKS_PER_SEC<<" sec"<<endl;
    cout<<"Sorted Array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }    
    return 0;
}        
