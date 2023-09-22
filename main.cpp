#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, mean, i, temp, sum = 0;
	vector <int> values;

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> temp;
		values.push_back(temp);
	}
	cin >> mean;

	for (i = 0; i < n; i++) {
		sum += values[i];
	}
	values.push_back(mean * (n + 1) - sum);

	sort(values.begin(), values.end());
	cout << values[(n + 1) / 2];
	return 0;
}