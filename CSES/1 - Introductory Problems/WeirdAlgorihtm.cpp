
#include <iostream>
#include <cmath>
 
using namespace std;
 
const int oo = 1e9;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	long long n; cin >> n;
	while (n > 1) {
		cout << n << " ";
		if (n % 2) n = 3 * n + 1;
		else n = n / 2;
	}
	cout << 1 << endl;
	return 0;
}
