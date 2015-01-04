#include <iostream>
#include <queue>
#include <string>
#include <cstring>
using namespace std;

bool visited[26][26];
int paths[26][26];

vector <string> nodes;
vector <pair<string, string>> edges;

int bfs(string start, string end)
{
    memset(visited, false, sizeof(visited));
    memset(paths, 0, sizeof(paths));
    queue <string> q;
    q.push(start);
    visited[start[0]-'A'][start[1]-'A'] = true;
    paths[start[0]-'A'][start[1]-'A'] = 0;
    while(!q.empty()){
        string top = q.front();
        q.pop();
        for(int i = 0; i < edges.size(); i++){
            if(edges[i].first == top &&
               !visited[edges[i].second[0]-'A'][edges[i].second[1]-'A']){
                string temp = edges[i].second;
                q.push(temp);
                visited[temp[0]-'A'][temp[1]-'A'] = true;
                paths[temp[0]-'A'][temp[1]-'A'] = paths[top[0]-'A'][top[1]-'A']+1;
                if(temp == end){
                    return paths[temp[0]-'A'][temp[1]-'A'];
                }
            }
            else if(edges[i].second == top &&
               !visited[edges[i].first[0]-'A'][edges[i].first[1]-'A']){
                string temp = edges[i].first;
                q.push(temp);
                visited[temp[0]-'A'][temp[1]-'A'] = true;
                paths[temp[0]-'A'][temp[1]-'A'] = paths[top[0]-'A'][top[1]-'A']+1;
                if(temp == end){
                    return paths[temp[0]-'A'][temp[1]-'A'];
                }
            }
        }
    }
    return -1;
}

int main()
{
    int t, m, n, p;
    cin >> t;
    cout << "SHIPPING ROUTES OUTPUT\n";
    for(int i = 0; i < t; i++){
      cin >> m >> n >> p;
      for(int j = 0; j < m; j++){
        string temp;
        cin >> temp;
        nodes.push_back(temp);
      }
      for(int j = 0; j < n; j++){
        string temp1, temp2;
        cin >> temp1 >> temp2;
        edges.push_back(make_pair(temp1, temp2));
      }
      cout << "\nDATA SET  " << i+1 << "\n\n";
      for(int j = 0; j < p; j++){
        int size, ans;
        string start, end;
        cin >> size >> start >> end;
        ans = bfs(start, end);
        if(ans == -1)
          cout << "NO SHIPMENT POSSIBLE\n";
        else
          cout << "$" << bfs(start, end)*100*size << "\n";
      }
      edges.clear();
      nodes.clear();
    }
    cout << "\nEND OF OUTPUT\n";
    return 0;
}
