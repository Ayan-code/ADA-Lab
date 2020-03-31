#include<iostream>
#include<ctime>

using namespace std;

int part(int ar[],int lb,int ub)
{
	int pivot=ar[lb];
	int start=lb;
	int end=ub;
	while(start<end)
	{
		while(ar[start]<=pivot)
		{ 
		    start++;
		}
		while(ar[end]>pivot)
		{
			end--;
		}
	
		if(start<end)
		{
			int temp=ar[start];
			ar[start]=ar[end];
			ar[end]=temp;
		}
	}
	int temp=ar[lb];
	ar[lb]=ar[end];
	ar[end]=temp;
	return end;
}

void qsort(int ar[],int lb,int ub)
{
	if(lb>=ub)
	   return;
	  
    int loc=part(ar,lb,ub);
	qsort(ar,lb,loc-1);
	qsort(ar,loc+1,ub);
}
	

int main()
{
	int n,*ar,i;
    clock_t t;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    ar = new int[n];
    cout<<"Enter the elements"<<endl;
    for(i=0; i<n; i++){
        cin>>ar[i];
    }
    t = clock();
	qsort(ar,0,n-1);
	t = clock() - t;
	cout<<"Sorted Array:";
	for(i=0;i<n;i++)
	   cout<<ar[i]<<" ";
	cout<<"\nTime taken ="<<(float)t/CLOCKS_PER_SEC<<" sec"<<endl;   
	return 0;	
}

/*
Output:-
Enter the number of elements
6
Enter the elements
3 1 7 4 9 5
Sorted Array:1 3 4 5 7 9
Time taken =0 sec
*/
