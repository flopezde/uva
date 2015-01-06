#include <iostream>
#include <queue>
#include <string>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int n, test = 1;
    while(cin >> n) {
      if(!n) break;
      vector <int> v(n);
      int total = 0, ans = 0;
      for(int i = 0; i < n; i++){
        cin >> v[i];
        total += v[i];
      }
      total /= n;
      for(int i = 0; i < n; i++){
        if(v[i] > total){
            ans += v[i] - total;
        }
      }
      cout << "Set #" << test++ << "\n";
      cout << "The minimum number of moves is " << ans <<".\n\n";
    }
    return 0;
}

