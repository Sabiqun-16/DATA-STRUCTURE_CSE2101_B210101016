#include <iostream>
using namespace std;

const int SIZE = 3;

int adjacencyMatrix[SIZE][SIZE] = {0};

void connect_nodes(int from, int to) {
    adjacencyMatrix[from][to] = 1;
}

void print_graph() {
    for (int i = 0; i < SIZE; i++) {
        cout << "Node " << i << " connects to: ";
        for (int j = 0; j < SIZE; j++) {
            if (adjacencyMatrix[i][j]) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}

void dfs_util(int node, bool visited[]) {
    visited[node] = true;
    cout << node << " ";

    for (int i = 0; i < SIZE; i++) {
        if (adjacencyMatrix[node][i] && !visited[i]) {
            dfs_util(i, visited);
        }
    }
}

void depth_first_search(int startNode) {
    bool visited[SIZE] = {false};
    cout << "DFS Visit Order: ";
    dfs_util(startNode, visited);
    cout << endl;
}

int main() {
    connect_nodes(1, 0);
    connect_nodes(1, 2);
    connect_nodes(2, 0);

    cout << "Graph Structure (Adjacency Matrix):" << endl;
    print_graph();

    cout << "\nStarting DFS from node 1:" << endl;
    depth_first_search(1);

    return 0;
}

