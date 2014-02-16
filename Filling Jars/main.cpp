#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, m, a, b, k;
    cin >> n >> m;
	unsigned __int128 av = 0;
    for ( int i=0; i<m; ++i ) {
        cin >> a >> b >> k;
        av += (k*(b-a+1));
    }
    cout << (long long)av/n;
    return 0;
}
