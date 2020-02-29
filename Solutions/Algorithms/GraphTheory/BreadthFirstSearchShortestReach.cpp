#include <bits/stdc++.h>

struct Edge{
    int src, dest, weight;};

void printArr(int* dist, int& n,int& src){
    for (int i = 1; i <n+1; ++i){
        if(dist[i]!=100001 && i!=src)
            std::cout<<dist[i]<<" ";
        else if(i!=src)
            std::cout<<"-1"<<" ";}
            std::cout<< std::endl;}

void BellmanFord(int& V, int& E, int& src,Edge* edge){
    int dist[V+1];
    for (int i = 1; i <= V; i++)
        dist[i]= 100001;

    dist[src] = 0;
    for (int i = 1; i <= V; i++){
        int flag=0;
        for (int j = 0; j < E; j++){
            if (dist[edge[j].src] != 100001 && dist[edge[j].src] + edge[j].weight < dist[edge[j].dest])
            {
                dist[edge[j].dest] = dist[edge[j].src] + edge[j].weight;
                flag=1;
            }
            else if(dist[edge[j].dest] != 100001 && dist[edge[j].dest] + edge[j].weight < dist[edge[j].src])
            {
                dist[edge[j].src] = dist[edge[j].dest] + edge[j].weight;
                flag=1;
            }
                }
            if(flag==0)
                break;

    }
        delete edge;
    printArr(dist, V,src);
}

int main(){
    std::ios::sync_with_stdio(false);
    int t;
    std::cin>>t;
    int V,E;
    for (int y=0;y<t;y++){
     std::cin>>V>>E;
    Edge* edge =new Edge [E+1];
        for (int i=0;i<E;i++){
    std::cin>>edge[i].src;
    std::cin>>edge[i].dest;
    edge[i].weight=6;
    }
    int sr;
    std::cin>>sr;
    BellmanFord(V,E, sr,edge);
    }
    return 0;}
