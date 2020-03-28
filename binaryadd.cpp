#include<iostream>
using namespace std;

int sum_of_digits(int ele){
    int sum=0;
    while(ele!=0){
        sum+=ele%10;
        ele=ele/10;
    }
    return sum;
}

int main(){
    int *arr, n, i, ele, count, sum=0, *list, k=0;
    cout<<"Enter the size of the array\n";
    cin>>n;
    arr = new int[n];
    list = new int[n];
    cout<<"Enter the elements\n";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    for(i=0; i<n; i++){
        count = 0;
        ele = arr[i];
        while(ele!=0){
            if(ele%2 == 1){count++;}
            ele = ele/2;
        }
        if(count%2==0){
            sum+=sum_of_digits(arr[i]);
            list[k++]=arr[i];
        }
    }
    cout<<"The numbers with even number of 1s in it's binary representation are:\n";
    for(i=0;i<k;i++){cout<<list[i]<<" ";}
    cout<<"\nSum of their digits is "<<sum<<endl;
    return 0;
}

Output:
Enter the size of the array
5
Enter the elements
2 7 4 3 5
The numbers with even number of 1s in it's binary representation are:
3 5
Sum of their digits is 8
