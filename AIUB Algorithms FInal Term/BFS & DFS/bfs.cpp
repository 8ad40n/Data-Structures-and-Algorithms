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

    //for taking edges input
    int x,y;
    for(int i=0;i<edge;i++)
        {
            cin>>x>>y;
            adj[y].push_back(x);
            adj[x].push_back(y);

        }
        queue<int>q;
        //starting from 1
        q.push(1);
        //as we push 1 marked it now visited
        vis[1]=true;

        while(!q.empty()){
            int NODE=q.front();
            //pop front node
            q.pop();
            cout<<NODE<<endl;

            //now we will go edges of nodes to check it visited or not.
            vector<int>::iterator it;
            for(it=adj[NODE].begin();it!=adj[NODE].end();it++){
                if(!vis[*it]){
                  vis[*it]=1;
                q.push(*it);
                }

            }

        }

}
