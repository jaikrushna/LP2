#include <iostream>
#include <vector>
#include <string>

using namespace std;


bool isSafe(int v, const vector<vector<int>>& graph, const vector<int>& color, int c) {
    for (int i = 0; i < graph[v].size(); ++i) {
        int u = graph[v][i];
        if (color[u] == c)
            return false;
    }
    return true;
}


bool graphColoring(const vector<vector<int>>& graph, vector<int>& color, int v, const vector<string>& colors) {
 
    if (v == graph.size())
        return true;

    for (int i = 0; i < colors.size(); ++i) {
        if (isSafe(v, graph, color, i)) {
            
            color[v] = i;

            if (graphColoring(graph, color, v + 1, colors))
                return true;

            
            color[v] = -1;
        }
    }
    return false;
}

void printSolution(const vector<int>& color, const vector<string>& colors) {
    cout << "Vertex\tColor\n";
    for (int i = 0; i < color.size(); ++i) {
        cout << i << "\t" << colors[color[i]] << endl;
    }
}

vector<vector<int>> inputGraph() {
    int n, m;
    cout << "Enter the number of vertices and edges: ";
    cin >> n >> m;

    vector<vector<int>> graph(n);
    cout << "Enter the edges: \n";
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    return graph;
}

vector<string> inputColors() {
    int k;
    cout << "Enter the number of colors: ";
    cin >> k;

    vector<string> colors(k);
    cout << "Enter the color names: ";
    for (int i = 0; i < k; ++i) {
        cin >> colors[i];
    }
    return colors;
}

int main() {
    
    vector<vector<int>> graph = inputGraph();

    vector<string> colors = inputColors();

    vector<int> color(graph.size(), -1);

    if (graphColoring(graph, color, 0, colors)) 
    {
        printSolution(color, colors);
    }
    else 
    {
        cout << "No solution exists.\n";
    }

    return 0;
}
