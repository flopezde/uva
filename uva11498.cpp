/* UVA 11498 - Division of Nlogonia solution*/
#include <iostream>

using namespace std;

int main()
{
    int t, n, m, ans;
    while(1) {
      cin >> t;
      if(t == 0)
        break;
      cin >> n >> m;
      while(t--) {
          int x, y;
          cin >> x >> y;
          if(x == n || y == m)
            cout << "divisa\n";
          else if(x > n && y > m)
            cout << "NE\n";
          else if(x < n && y < m)
            cout << "SO\n";
          else if(x < n && y > m)
            cout << "NO\n";
          else
            cout << "SE\n";
      }
    }
    return 0;
}
