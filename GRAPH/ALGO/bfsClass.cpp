#include<iostream>
#include<queue>
using namespace std;

int nodes,edges,src,destination;
int graph[100][100], color[100],d[100];
const int White=0;
const int Gray=1;
const int Black=2;

int main()
{
    cout<<"Please enter the number of nodes and edges"<<endl;
    cin>>nodes>>edges;
    cout<<"Please add all edges of the graph "<<endl;
    for(int i=0;i<edges;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x][y]=1;
    }
    cout<<"please enter the source and destination node"<<endl;
    cin>>src>>destination;
    queue<int>q;
     q.push(src);
     d[src]=0;
     while(!q.empty())
     {
         int u=q.front();
         cout<<u<<endl;
         q.pop();
         for(int i=0;i<nodes;i++)
         {
             if ((graph[u][i]==1)&&(color[i]==White))
             {
                 color[i]=Gray;
                 d[i]=d[u]+1;
                 q.push(i);
             }
         }
         color[u]=Black;


     }
     cout<<d[destination]<<endl;
     return 0;
}