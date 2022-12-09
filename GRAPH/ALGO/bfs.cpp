#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2;
bool vis[N];
vector<int> adj[N];
int main()
{
    for(int i=0;i<N;i++)
    {
        vis[i]=0;
    }
    int node,edge;
    cin>>node;
    cin>>edge;

    int x,y;
    for(int i=0;i<edge;i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);

        }
        queue<int>q;
        q.push(1);
        vis[1]=true;

        while(!q.empty()){
            int NODE=q.front();
            q.pop();
            cout<<NODE<<endl;
            vector<int>::iterator it;
            for(it=adj[NODE].begin();it!=adj[NODE].end();it++){
                if(!vis[*it]){
                  vis[*it]=1;
                q.push(*it);
                }

            }

        }

}