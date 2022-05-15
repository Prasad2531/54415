#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
  map<int, vector<int>> gf;
  map<int, int> visited;

  void add_edge(int u, int v)
  {
    gf[u].push_back(v);
  }

  void dfs(int v)
  {
    visited[v] = 1;
    cout << v;
    for (int i : gf[v])
    {
      if (visited[i] == 0)
      {
        dfs(i);
      }
    }
  }

  void bfs(int v)
  {
    queue<int> q;
    map<int, int> visit;
    q.push(v);
    visit[v] = 1;
    while (!q.empty())
    {
      int x = q.front();
      cout << x;
      visit[x] = 1;
      q.pop();
      for (int i : gf[x])
      {
        if (visit[i] == 0)
        {
          visit[i] = 1;
          q.push(i);
        }
      }
    }
  }
};

int main()
{
  Graph g;
  int e;
  cout << "No. of Edges:";
  cin >> e;
  for (int i = 1; i < e; i++)
  {
    int x, y;
    cin >> x >> y;
    g.add_edge(x, y);
  }
  // cout << "DFS: " << endl;
  // g.dfs(0);
  cout << "BFS: " << endl;
  g.bfs(0);
}