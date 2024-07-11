#include <iostream>
#include <unordered_map>
#include <map>
#include <list>
using namespace std;

class graph {
public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction) {
        adj[u].push_back(v);

        // direction
        /*
        direction = 0 => undirected graph
        direction = 1 => directed graph
        */
        if (direction == 0) {
            adj[v].push_back(u);
        }
    }

    void printAdjList() {
        for (auto i : adj) {
            cout << i.first << "->";
            for (auto j : i.second) {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main() {
    int m;
    cout << "Enter the number of nodes" << endl;
    cin >> m;
    int n;
    cout << "Enter the number of edges" << endl;
    cin >> n;
    graph g;
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        // create an undirected graph
        g.addEdge(u, v, 0);
    }
    // print adjacency list
    g.printAdjList();
    return 0;
}
