/* UVA 11547 - Automatic Answer */
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << abs((((n * 567 / 9) + 7492)*235/47-498)%100/10) << endl;
    }
    return 0;
}
