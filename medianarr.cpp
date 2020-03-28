#include<iostream>
using namespace std; 
  
 
void merge(int ans[], int arr1[], int arr2[], int n) 
{   
   
    int i = 0; // Initial index of first array 
    int j = 0; // Initial index of second array 
    int k = 0; // Initial index of merged array 
    while (i < n && j < n) 
    { 
        if (arr1[i] <= arr2[j]) 
        { 
            ans[k] = arr1[i]; 
            i++; 
        } 
        else
        { 
            ans[k] = arr2[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n) 
    { 
        ans[k] = arr1[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n) 
    { 
        ans[k] = arr2[j]; 
        j++; 
        k++; 
    } 
} 

int main(){
    int *arr1, *arr2,i,*ans,n;
    cout<<"Enter the size\n";
    cin>>n;
    arr1 = new int[n]; arr2= new int[n];
    ans = new int[2*n];
    cout<<"Enter the elements of the first array\n";
    for(i=0; i<n ;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elemetns of the second array\n";
    for(i=0; i<n ;i++){
        cin>>arr2[i];
    }
    merge(ans, arr1, arr2, n);
    cout<<"Merged array is\n";
    for( i = 0; i < 2*n ;i++){
        cout<<ans[i]<<" ";
    }


    cout<<"The median is "<<ans[n-1]<<endl;
    return 0;
}
