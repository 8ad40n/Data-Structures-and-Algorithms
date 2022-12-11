#include<iostream>
#include<queue>
#include<climits>

using namespace std;

#define SIZE 100
#define DISCONNECTED -1

struct Node
{
	int name;
	int pred;
	int key;
};

struct CompareNode
{
	bool operator()(Node& n1, Node& n2)
	{
		return n1.key > n2.key;
	}
};

vector<Node> A;
priority_queue<Node, vector<Node>, CompareNode> Q;

int graph[SIZE+1][SIZE+1], cost[SIZE+1];
int no_of_nodes, no_of_edges, source;

void read_graph()
{
	int x, y, c;

	cin >> no_of_nodes;
	cin >> no_of_edges;

	for(int i=1; i<=no_of_nodes; i++)
		for(int j=1; j<=no_of_nodes; j++)
			graph[i][j] = DISCONNECTED;

	for(int i=1; i<=no_of_edges; i++)
	{
		cin >> x >> y >> c;
		graph[x][y] = graph[y][x] = c;
	}

	cin >> source;
}

void prims()
{
	for(int i=0; i<no_of_nodes; i++)
	{
		Node n;
		n.name = i+1;
		n.pred = INT_MAX;
		n.key = (source == n.name) ? 0 : INT_MAX;

		Q.push(n);
		cost[n.name] = n.key;
	}

	while(!Q.empty())
	{
		Node u = Q.top();
		Q.pop();
		A.push_back(u);

		struct Node NodeRec[SIZE];
		for(int v=1; v<=no_of_nodes; v++)
		{
			if(graph[u.name][v] != DISCONNECTED && cost[v] > graph[u.name][v])
			{
				int n=Q.size();
				for(int i=0; i<n; i++)
				{
					NodeRec[i] = Q.top();
					Q.pop();
				}

				for(int i=0; i<n; i++)
				{
					if(NodeRec[i].name == v)
					{
						NodeRec[i].pred = u.name;
						NodeRec[i].key = graph[u.name][v];
						cost[v] = graph[u.name][v];
					}
					Q.push(NodeRec[i]);
				}
			}
		}
	}
}

int main()
{
	read_graph();
	prims();

	for(int i=0; i<A.size(); i++)
	{
	    cout << A.at(i).name << " " << A.at(i).pred << " " << A.at(i).key << endl;
	}

	return 0;
}
