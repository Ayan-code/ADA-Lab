#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
   int *arr,n,i,j,small,temp;
   clock_t time_req;
   cout<<"Enter array element size:";
   cin>>n;
   arr=new int[n];
   for(int i=0;i<n;i++)
   {
      arr[i]=rand()/100000;
   }  
   time_req=clock();
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
    cout<<"time taken:"<< (float)time_req/CLOCKS_PER_SEC<<" sec"<<endl;
    cout<<"Sorted Array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }        
    return 0;
}    

