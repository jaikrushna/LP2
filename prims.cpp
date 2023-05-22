
#include <cstring>
#include <iostream>
using namespace std;

#define INF 9999999

#define V 5


int G[V][V] = {
  {0, 9, 75, 0, 0},
  {9, 0, 95, 19, 42},
  {75, 95, 0, 51, 66},
  {0, 19, 51, 0, 31},
  {0, 42, 66, 31, 0}};

int main() {
  int total_cost=0;
  int no_edge;  

  int selected[V];

  for(int i=0;i<V;i++)
  {
      selected[i]=false;
  }
  no_edge = 0;

  selected[0] = true;

  int x;  
  int y;  

  cout << "Edge"
     << " : "
     << "Weight";
  cout << endl;
  while (no_edge < V - 1) {

    int min = INF;
    x = 0;
    y = 0;

    for (int i = 0; i < V; i++) {
      if (selected[i]) {
        for (int j = 0; j < V; j++) {
          if (!selected[j] && G[i][j]) {  
            if (min > G[i][j]) {
              min = G[i][j];
              x = i;
              y = j;
            }
          }
        }
      }
    }
    cout << x << " - " << y << " :  " << G[x][y];
    cout << endl;
    selected[y] = true;
    total_cost += G[x][y];
    no_edge++;
  }
  cout<<"Total Minimum Cost=>"<<total_cost<<endl;
  return 0;
}
