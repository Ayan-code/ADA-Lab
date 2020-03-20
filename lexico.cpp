#include<iostream>
using namespace std;

void lex_sort(int g[20][20],int n){
    int visited[n]={0},i,j,f,k,p,flag;
    for(p=0;p<n;p++){
        for(i=0;i<n;i++){
            flag=0;
            f=0;
            if(visited[i]==0){
                for(j=0;j<n;j++){
                    if(g[j][i]==1){
                        f=1;
                    }
                }
                if(f==0){
                    flag=1;
                    cout<<i+1<<" ";
                    visited[i]=1;
                    for(k=0;k<n;k++){g[i][k]=0;}
                }
            }
            
        }
        if(flag==0){cout<<"\nCycle is present, cannot remove more edges";break;}
    }
}
int main(){
    int n,i,j;
    int g[20][20];
    cout<<"Enter the number of vertices"<<endl;
    cin>>n;
    cout<<"Enter the values from the adjacency matrix of the graph"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>g[i][j];
        }
    }
    cout<<endl;
    cout<<"Lexigraphically smallest topological ordering"<<endl;
    lex_sort(g,n);
}
