#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2;
bool vis[N];
vector<int> adj[N];

int main()

{

    for (int i = 0; i < N; i++)

    {

        vis[i] = 0; // Initialised
    }

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < m; i++)

    {

        int x, y;

        cin >> x >> y;

        adj[x].push_back(y);

        adj[y].push_back(x);
    }

    stack<int> st;

    st.push(1); // First element of first vector is pushed

    vis[1] = 1;

    while (!st.empty())

    {

        int node = st.top();

        st.pop();

        cout << node << " " << endl;

        for (int i = (adj[node].size()) - 1; i >= 0; i--)

        {

            if (!vis[adj[node][i]])

            {

                vis[adj[node][i]] = 1;

                st.push(adj[node][i]);
            }
        }
    }
}