#include<iostream>

using namespace std;
   
int minDistance(int dist[], bool sptSet[], int V) 
{ 
    int min = INT_MAX, min_index; 
  
    for (int v = 0; v < V; v++) 
        if (sptSet[v] == false && dist[v] <= min) 
            min = dist[v], min_index = v; 
  
    return min_index; 
} 
  

int printSolution(int dist[], int prevVertex[], int V) 
{   int s, k = 0;
    int path[V];
    for(int k = 0; k<V;k++){
        printf("%d ",prevVertex[k]);
    }
    printf("\n");
    printf("Vertex \t\t Distance from Source \t\t\t Path\n"); 
    for (int i = 0; i < V; i++){
        k = 0;
        path[k++] = i;
        s = i;
        while(s != 0){
            path[k++] = prevVertex[s];
            s = prevVertex[s];
        }
        printf("\n%d \t\t %d\t\t\t\t\t", i, dist[i]);
        for(int j = k-1; j>=0; j--){
            if(j == k-1){
                printf("%d",path[j]);
            }
            else
                printf(" - >%d", path[j]);
        }
    }
} 

void dijk(int graph[][], int src, int V) 
{ 
    int dist[V]; 

    int prevVertex[V]; 
  
    bool sptSet[V];
   
    for (int i = 0; i < V; i++) 
        dist[i] = INT_MAX, sptSet[i] = false; 
  

    dist[src] = 0; 
  
    
    for (int count = 0; count < V - 1; count++) { 
      
        int u = minDistance(dist, sptSet, V); 
  
       
        sptSet[u] = true; 
        prevVertex[0] = 0;
        
        for (int v = 0; v < V; v++)  
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v]; 
                prevVertex[v] = u;
            }
    } 
   
    printSolution(dist, prevVertex, V); 
} 
  
int main() 
{   int V, i ,j;
    cout<<"Enter the number of vertices"<<endl;
    cin>>V;
    int graph[V][20];
    cout<<"Enter the weighted adjecency matrix values\n";
    for(i = 0; i < V; i++){
        for(j = 0; j < V; j++){
            cin>>graph[i][j];
        }
    }
    dijk(graph, 0, V); 
  
    return 0; 
} 
