#include <vector>
#include <iostream>
#define N 1000000000

using namespace std;
int main() {
	int i;
	vector<int> v1;
	v1.reserve(N); // speed up
	for (i = 0; i < N; ++i)
		v1.push_back(i);

	cout << v1.size() << endl;
	cout << v1.back() << endl;
	v1.pop_back();
	cout << v1.size() << endl;
	cin >> i;
	return 0;
}

