#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
  int *arr,n,j;
  clock_t time_req;
  cout<<"Enter total elements:";
  cin>>n;
  arr=new int[n];
  for(int i=0;i<n;i++)
  {
       arr[i]=rand()/100000;
  }
  time_req=clock();
  for(int i=1;i<n;i++)
  {
     int key=arr[i];
     j=i-1;
     while(j>=0&&arr[j]>key)
     {
         arr[j+1]=arr[j];
         j=j-1;
     }
     arr[j+1]=key;
  }
  cout<<"time taken:"<< (float)time_req/CLOCKS_PER_SEC<<" sec"<<endl;
  cout<<"Sorted array:";
  for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
  return 0;
}                  
