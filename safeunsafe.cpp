#include<iostream>
#include<algorithm>
using namespace std;
int fib(int n){
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2); 
} 

int main(){
    int *arr, n, i, *fibo, k=0, p=-1,f, x, count=0, flag;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    arr = new int[n];
    fibo = new int[n];
    cout<<"Enter the elements\n";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int a = fib(k);
    while(a <= n){
        fibo[k] = a; k++;
        a = fib(k);
    }
    
    int s = k;
    while(p != n-1){
        k = s;
        f = 0;
        while(f == 0){
            x = fibo[k-1];
            if(k == 1){
                cout<<"Final position not possible\n";
                flag=1;
                break;
            }
            if(arr[p+x] == 1 && p+x<n){
                
                p = p + x;
                f = 1;
                cout<<"Jumped to position: "<<p+1<<endl;
                count++;
            }
            else {k=k-1;}
            
        }
        if(flag==1){break;}
    }
    cout<<"Total number of jumps = "<<count;
    return 0;
}
