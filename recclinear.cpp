#include<iostream>

using namespace std;
int reclin(int arr[],int front,int rear,int key){
    if(front>rear){
        return -1;
    }
    if(arr[front]==key)
        return front;
    if(arr[rear]==key)
        return rear;
    return reclin(arr,front+1,rear-1,key);

}
int main(){
    int n,i,*arr,key,index;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    arr=new int[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Key element?"<<endl;
    cin>>key;
    
    index=reclin(arr,0,n-1,key);
    
    if(index==-1){
        cout<<"Element not found"<<endl;
    }
    else 
        cout<<"Element found at position "<<index+1;
    
    return 0;
}
