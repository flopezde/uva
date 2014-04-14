/*
* UVA 441 - Lotto
*/
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
#include <fstream>
#include <iomanip>
#include <map>
#include <stack>
using namespace std;

void solve(vector <int> &v)
{
    for(int i = 0; i < v.size(); i++) {
        for(int j = i+1; j < v.size(); j++) {
            for(int k = j+1; k < v.size(); k++) {
                for(int l = k+1; l < v.size(); l++) {
                    for(int m = l+1; m < v.size(); m++) {
                        for(int n = m+1; n < v.size(); n++) {
                            cout << v[i] << " ";
                            cout << v[j] << " ";
                            cout << v[k] << " ";
                            cout << v[l] << " ";
                            cout << v[m] << " ";
                            cout << v[n] << endl;
                        }
                    }
                }
            }
        }
    }
}
int main()
{
    int n;
    bool first = false;
    while(1) {
        cin >> n;
        if(n == 0)
            break;
        if(first)
            cout << endl;
        first = true;
        vector <int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        solve(v);
    }
    return 0;
}
