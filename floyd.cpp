#include<iostream>
using namespace std;

void floyd(int g[10][10], int n){
    int i,k,j;
    for(k=1;k<=n; k++){
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                g[i][j] = min(g[i][j], (g[i][k]+g[k][j]));
            }
        }
    }
    cout<<"All pair shortest path:\n";
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n,i,j;
    cout<<"Enter the number of vertices"<<endl;
    cin>>n;
    int graph[10][10];
    cout<<"Enter the values of the weighted matrix(enter -1 if no direct edge is present)"<<endl;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cin>>graph[i][j];
        }
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(graph[i][j] == -1){
                graph[i][j]=99999;
            }
        }
    }

    floyd(graph,n);

}
