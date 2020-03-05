#include<iostream>

using namespace std;

int main()
{
  int n,*f,*s;
  cout<<"Enter value of n:";
  cin>>n;
  f=new int[n];
  s=new int[n];
  cout<<"Start time:";
  for(int i=0;i<n;i++)
      cin>>s[i];
  cout<<"End time:";
  for(int i=0;i<n;i++)
      cin>>s[i]; 
  for(int i=1;i<n;i++)
  {
     int key=s[i];
     int j=i-1;
     while(j>=0&&s[j]>key)
     {
         s[j+1]=s[j];
         j=j-1;
     }
     s[j+1]=key;
  }  
  for(int i=1;i<n;i++)
  {
     int key=f[i];
     int j=i-1;
     while(j>=0&&f[j]>key)
     {
         f[j+1]=f[j];
         j=j-1;
     }
     f[j+1]=key;
  }   
  int c=0;
  int j=1;
  for(int i=0;i<n&&j<n;)
  {
      if(f[i]<=s[j])
      {
          c++;
          i++;
          j++;
      }
      else 
          j++;
  }
  cout<<"total meetings:"<<c;
  return 0;
}
  
              
