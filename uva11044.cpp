/* UVA 11044 - Searching for Nessy solution */
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    int t, n, m, ans;
    cin >> t;
    while(t--) {
        ans = 0;
        cin >> n >> m;
        for(int j = 0; j < m-2; j += 3)
          for(int i = 0; i < n-2; i += 3)
              ans++;
        cout << ans << endl;
    }
    return 0;
}
