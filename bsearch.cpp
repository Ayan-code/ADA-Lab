#include<iostream>
const int s=5;
int main()
{
    int a[s],k,count=0;
    int first,last;
    int b[5];
    std::cout<<"Enter the sorted array elements:";
    for(int i=0;i<s;i++)
    {
        std::cin>>a[i];
    }
    std::cout<<"Enter the element to search:";
    std::cin>>k;
    int f=0;
    int l=s;
    for(int i=0;i<s;i++)
    {
      int m=(l+f)/2;
      if(k>a[m])
      {
          f=m;
      }
      else if(k<a[m])
      {
          l=m;
      }
      else if(k==a[m])
      {
          if(k==a[m])
          {
              first=last=m;
              count++;
          }
          for(int j=m-1;j>=0;j--)
          {
              if(k==a[j])
              {    first=j;
                    count++;
              }
          }
          for(int j=m+1;j<s;j++)
          {
              if(k==a[j])
                 { last=j;
                    count++;
                 }
          }
              std::cout<<"First occurance:"<<first+1<<"\n";
              std::cout<<"Last occurance:"<<last+1<<"\n";
              std::cout<<"total occurances:"<<count<<"\n";
          break;
      }
      else
          std::cout<<"Element not found";
    }

    return 0;
}