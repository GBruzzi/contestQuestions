// https://vjudge.net/problem/UVA-12279


#include <iostream>
using namespace std;

int main() {
	int n, count = 0;

	while (cin >> n, n) {
		count++;
		int sum = 0, t;
		for (int i = 0; i < n; i++) {
			cin >> t;
			if (t > 0)
				sum++;
			else
				sum--;
		}
		cout << "Case " << count << ": " << sum << "\n";
	}

	return 0;
}
