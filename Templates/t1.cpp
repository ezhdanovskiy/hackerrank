// author zhdanovskiy
#include <algorithm>
#include <bitset>
#include <deque>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

#if 1
	#define PREFIX                 cerr << "[" << __LINE__ << "]\t"
	#define PRINT(x)               #x << ": " << (x)
	#define SEPARATOR              "\t| "
	#define LOG(chain)             PREFIX << chain << endl;
	#define LOG1(x)                PREFIX << PRINT(x) << endl;
	#define LOG2(x1, x2)           PREFIX << PRINT(x1) << SEPARATOR << PRINT(x2) << endl;
	#define LOG3(x1, x2, x3)       PREFIX << PRINT(x1) << SEPARATOR << PRINT(x2) << SEPARATOR << PRINT(x3) << endl;
#else
	#define LOG(chain)
	#define LOG1(x)
	#define LOG2(x1, x2)
	#define LOG3(x1, x2, x3)
#endif

#define SZ(x) ((int)(x).size())
#define ALL(a) (a).begin(),(a).end()
#define CLEAR(x) memset((x),0,sizeof(x))

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

int main() {
    int t;
    cin >> t;
    while(t--) {
		bool fl = true;
		
		puts(fl ? "YES" : "NO");
	}
	return 0;
}
