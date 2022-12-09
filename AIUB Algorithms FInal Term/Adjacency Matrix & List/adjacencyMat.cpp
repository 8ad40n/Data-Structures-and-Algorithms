#include<iostream>
using namespace std;

int adj[100][100];
//declare it globally ,that by default zero

int main()
{
    
    int node,edge;
    cout<<"Enter the value of node:";
    cin>>node;
    cout<<"Enter the value of edge:";
    cin>>edge;

    int n1,n2;
    for(int i=1;i<=edge;i++)
    {
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;

    }
    for(int i=1;i<=node;i++)
    {
        for(int j=1;j<=node;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    
}