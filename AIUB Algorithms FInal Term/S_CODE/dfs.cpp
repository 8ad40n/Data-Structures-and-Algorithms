#include<iostream>
#include<stack>
using namespace std;

struct adjList
{
    int id;
    adjList *next;
};

adjList **G;
const int nv = 7;
int d[nv+1]= {0};//discovered time
int f[nv+1]= {0};//finishing time
stack <int> st;
int time = 0;


void dfs(int);
void addAdjacent(int vertex, int adj)
{
    adjList* node = new adjList;
    node->id = adj;
    node->next = NULL;

    if(G[vertex] == NULL)G[vertex]=node;
    else
    {
        node->next = G[vertex];
        G[vertex] = node;
    }
}

void showLists()
{
    for(int i=0; i< nv; i++)
    {
        adjList* c=G[i];
        cout<<i+1<<": ";
        while(c)
        {
            cout<<c->id<<" ";
            c= c->next;
        }
        cout<<endl;
    }
}

void showDFS()
{

    cout<<"\nDFS\n";
    for(int i=1; i<=nv; i++)
    {
        cout<< i << ": "<<d[i]<<", "<<f[i]<<endl;
        d[i]=0;
        f[i]=0;
    }
    time = 0;
}

int main()
{
    G = new adjList*[nv]();
    for(int i=0; i< nv; i++)
        G[i] = NULL;

    int a[nv]= {3,2,3,3,3,1,1};
    int b[16]=
    {
        2,3,4,
        1,3,
        1,2,4,
        1,3,5,
        4,6,7,
        5,
        5
    };
    int k=0;
    for(int i=0; i< nv; i++)
    {
        for(int j=0; j< a[i]; j++)
        {
            addAdjacent(i,b[k++]);
        }
    }
    showLists();

    dfs(1);
    showDFS();
    dfs(2);
    showDFS();

    dfs(5);
    showDFS();
}

void dfs(int s)
{
    int v,w;
    st.push(s);
    d[s]= ++time;

    while(!st.empty())
    {
        v = st.top();
        cout<< "["<<time<<"]"<<" Top: "<<v <<endl;
        //Push all the adjacent of v in stack that are not v
        adjList* node=G[v-1];
        bool Discovered = false;
        while(node)
        {
            w = node->id;
            if(d[w] == 0)
            {
                Discovered = true;
                st.push(w);
                d[w]= ++time;
                break;
            }
            node= node->next;
        }
        if(Discovered == false){
            f[v]= ++time;
            cout<< "["<<time<<"]"<<" Pop: "<< st.top() <<endl;
            st.pop();
        }

    }
}
