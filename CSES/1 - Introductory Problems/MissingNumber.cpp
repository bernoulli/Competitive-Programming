
#include <iostream>
#include <cmath>
 
using namespace std;
 
const int oo = 1e9;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	long long n; cin >> n;
	long long sum = 0;
	for(int i = 1,temp; i < n; i++){
		cin >> temp;
		sum += temp;

	}
		
	cout << n * (n + 1) / 2 - sum  << '\n';
	return 0;
}
