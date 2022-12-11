#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define V 5

bool valid(int u, int v, vector<bool> isConnected)
{
    if (u == v)
        return false;
    if (isConnected[u] == false && isConnected[v] == false)
        return false;
    else if (isConnected[u] == true && isConnected[v] == true)
        return false;
    return true;
}

void prim(int M[][V])
{
    vector<bool> isConnected(V, false);

    isConnected[0] = true;

    int countEdge = 0, minM = 0;
    while (countEdge < V - 1)
    {

        int min = INT_MAX, a = -1, b = -1;
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (M[i][j] < min)
                {
                    if (valid(i, j, isConnected))
                    {
                        min = M[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }
        if (a != -1 && b != -1)
        {
            cout<<"Edge "<<countEdge++ << ": "<< "("<<a<<","<<b<<")"<<" w="<<min<<endl;
            minM = minM + min;
            isConnected[b] = isConnected[a] = true;
        }
    }
    cout<<"\nMinimum M= "<<minM<<endl;
}

int main()
{
    int M[][V] =
    {
        { INT_MAX, 2, INT_MAX, 6, INT_MAX },
        { 2, INT_MAX, 3, 8, 5 },
        { INT_MAX, 3, INT_MAX, INT_MAX, 7 },
        { 6, 8, INT_MAX, INT_MAX, 9 },
        { INT_MAX, 5, 7, 9, INT_MAX },
    };

    prim(M);

    return 0;
}
