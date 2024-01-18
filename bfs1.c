#include<stdio.h>
void bfs(int [20][20],int ,int [20],int );
void main(){
    int a[20][20],visited[20],n,source;
    printf("Enter the number of nodes\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix \n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        visited[i]=0;
    }
    printf("Enter the source node\n");
    scanf("%d",&source);
    visited[source]=1;
    bfs(a,source,visited,n);
    for(int i=1;i<=n;i++){
        if(visited[i]!=0){
            printf("Node %d is reachable",i);
        }
        else{
            printf("Node %d is not reachable",i);
        }
    }
}
void bfs(int a[20][20],int source,int visited[20],int n){
    int queue[20],f,r,u,v;
    f=0;
    r=-1;
    queue[++r]=source;
    while(f<=r){
        u=queue[f++];
        for(v=1;v<=n;v++){
            if(a[u][v]==1 && visited[v]==0){
                queue[++r]=v;
                visited[v]=1;
            }
        }
    }
}