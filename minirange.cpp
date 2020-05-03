#include<bits/stdc++.h> 
using namespace std; 

void findClosest(int A[], int B[], int C[], int p, int q, int r) 
{ 
  
    int diff = INT_MAX;

    int res_i =0, res_j = 0, res_k = 0; 
  
    int i=0,j=0,k=0; 
    while (i < p && j < q && k < r) 
    { 
        int minimum = min(A[i], min(B[j], C[k])); 
        int maximum = max(A[i], max(B[j], C[k])); 

        if (maximum-minimum < diff) 
        { 
             res_i = i, res_j = j, res_k = k; 
             diff = maximum - minimum; 
        } 
 
        if (diff == 0) break; 

        if (A[i] == minimum) i++; 
        else if (B[j] == minimum) j++; 
        else k++; 
    } 
 
    cout<<"The smallest range is\n[";
    int l = min(min(A[res_i],B[res_j]), C[res_k]);
    int h = max(max(A[res_i],B[res_j]), C[res_k]);
    cout << l << " " << h<<"]"; 
} 
   
int main() 
{   int n, i;
    cout<<"Enter the size of the 3 arrays\n";
    cin>>n;
    int A[n]; 
    int B[n]; 
    int C[n];
    cout<<"Enter the first array\n";
    for(i = 0 ; i < n ; i++){
        cin>>A[i];
    }
    cout<<"Enter the second array\n";
    for(i = 0 ; i < n ; i++){
        cin>>B[i];
    }
    cout<<"Enter the third array\n";
    for(i = 0 ; i < n ; i++){
        cin>>C[i];
    }
  
    findClosest(A, B, C, n, n, n); 
    return 0; 
}
