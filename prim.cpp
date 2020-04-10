#include <bits/stdc++.h> 
using namespace std;

int g[10][10], visited[10], n, sum = 0, c = 0;
void prims(int v){
    int i, j, indexi = 0, indexj = 0;
    visited[v] = 1;
    int min = 999999;
    
    for(i = 1; i <= n; i++){
        for(j = 1; j<=n; j++){
            if((visited[i] == 1) && (visited[j] == 0)){
                if(g[i][j] < min){
                    min = g[i][j];
                    indexi = i;
                    indexj = j;
                }
            }
        }
    }
    sum+= g[indexi][indexj];
    cout<<indexi <<" to "<<indexj<<", weight: "<<g[indexi][indexj]<<endl;
    c++;
    visited[indexj] = 1;
    if (c == n - 1){
        return;
    }
    prims(indexj);
}

int main(){
    int i, j, ele;
    cout<<"Enter the number of vertices"<<endl;
    cin>>n;
    cout<<"Enter the weighted matrix(Enter -1 if edge does not exist)"<<endl;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cin>>ele;
            if(ele == -1){
                g[i][j] = 10000;
            }
            else g[i][j] = ele;
        }
        visited[i] = 0;
    }
    prims(1);
    cout<<"Minimum value = "<<sum<<endl;
}
