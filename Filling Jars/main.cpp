#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, m, a, b, k;
    cin >> n >> m;
    vector<double> v(n);
    for ( int i=0; i<m; ++i ) {
        cin >> a >> b >> k;
        for ( int j=a-1; j<b; ++j ){
           v[j] += k/n;
        }
    }
    
    double s;
    for( int j=0; j<n; ++j) s += v[j];
    
    cout << s;
    return 0;
}
