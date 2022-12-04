#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void displayAdjList(list<char> adj_list[], char v) {
   for(char i = 'a'; i<=v; i++) {
      cout << i << "--->";
      list<char> :: iterator it;
      for(it = adj_list[i].begin(); it != adj_list[i].end(); ++it) {
        cout << *it << " ";
      }
      cout << endl;
   }
}
void add_edge(list<char> adj_list[], char u, char v) {    
   adj_list[u].push_back(v);
   adj_list[v].push_back(u);
}
int main() {
   char v = 'f';    
   list<char> adj_list[v];
   add_edge(adj_list, 'a', 'b');
   add_edge(adj_list, 'b', 'c');
   add_edge(adj_list, 'b', 'd');
   add_edge(adj_list, 'c', 'e');
   add_edge(adj_list, 'd', 'a');
   add_edge(adj_list, 'e', 'd');

   displayAdjList(adj_list, v);
}