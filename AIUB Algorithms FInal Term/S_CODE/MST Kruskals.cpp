#include<iostream>
using namespace std;

#define V 5
int parent[V];

int find(int i)
{
    while (parent[i] != i)
        i = parent[i];
    return i;
}

void combine(int i, int j)
{
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

void kruskal(int M[][V])
{
    int minCost = 0;

    for (int i = 0; i < V; i++)
        parent[i] = i;

    int countEdge = 0;
    while (countEdge < V - 1)
    {
        int min = INT_MAX, a = -1, b = -1;
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (find(i) != find(j) && M[i][j] < min)
                {
                    min = M[i][j];
                    a = i;
                    b = j;
                }
            }
        }

        combine(a, b);
        cout<<"Edge "<<countEdge++ << ": "<< "("<<a<<","<<b<<")"<<" w="<<min<<endl;
        minCost += min;
    }
    cout<<"\nMinimum Cost= "<<minCost<<endl;
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

    kruskal(M);

    return 0;
}
