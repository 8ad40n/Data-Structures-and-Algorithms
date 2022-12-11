#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void displayAdjList(list<int> adj_list[], int v) {
   for(int i = 0; i<v; i++) {
      cout << i << "--->";
      list<int> :: iterator it;
      for(it = adj_list[i].begin(); it != adj_list[i].end(); ++it) {
         cout << *it << " ";
      }
      cout << endl;
   }
}
void add_edge(list<int> adj_list[], int u, int v) {    
   adj_list[u].push_back(v);
   adj_list[v].push_back(u);
}
int main() {
   int v = 5;    
   list<int> adj_list[v];
   add_edge(adj_list, 0, 1);
   add_edge(adj_list, 0, 2);
   add_edge(adj_list, 0, 3);
   add_edge(adj_list, 1, 4);
   add_edge(adj_list, 4, 3);
   add_edge(adj_list, 3, 1);
   add_edge(adj_list, 2, 3);


   displayAdjList(adj_list, v);
}



/*

// Adjascency List representation in C++

#include <bits/stdc++.h>
using namespace std;

// Add edge
void addEdge(vector<int> adj[], int s, int d) {
  adj[s].push_back(d);
  adj[d].push_back(s);
}

// Print the graph
void printGraph(vector<int> adj[], int V) {
  for (int d = 0; d < V; ++d) {
    cout << "\n Vertex "
       << d << ":";
    for (auto x : adj[d])
      cout << "-> " << x;
    printf("\n");
  }
}

int main() {
  int V = 5;

  // Create a graph
  vector<int> adj[V];

  // Add edges
  addEdge(adj, 0, 1);
  addEdge(adj, 0, 2);
  addEdge(adj, 0, 3);
  addEdge(adj, 1, 2);
  printGraph(adj, V);
}
*/