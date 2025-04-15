#include <iostream>
#include <queue>
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

void breadth_first_search(int startNode) {
    bool visited[SIZE] = {false};
    queue<int> q;

    visited[startNode] = true;
    q.push(startNode);

    cout << "BFS Visit Order: ";

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        cout << current << " ";

        for (int i = 0; i < SIZE; i++) {
            if (adjacencyMatrix[current][i] && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    cout << endl;
}

int main() {
    connect_nodes(1, 0);
    connect_nodes(1, 2);
    connect_nodes(2, 0);

    cout << "Graph Structure (Adjacency Matrix):" << endl;
    print_graph();

    cout << "\nStarting BFS from node 1:" << endl;
    breadth_first_search(1);

    return 0;
}
