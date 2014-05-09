/*  Solution to UVA 11805 - Bafana Bafana problem
*/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int t, n, k, p;
    scanf("%i", &t);
    for(int i = 1; i <= t; i++){
        scanf("%i %i %i", &n,&k,&p);
        int ans = (k+p)%n;
        printf("Case %i: %i\n",i,ans == 0 ? n : ans);
    }
    return 0;
}
