#include <iostream>
#include <vector>
using namespace std;

vector<int> Vec(vector<int> vec, int n) {
	for (int i = 0; i < vec.size(); i++) {
		vec[i] += n;
	}
	return vec;
}

int main() {
	vector<int> vec = { 1, 2, 3, 4, 5 };
	int n = 10;

	vector<int> result = Vec(vec, n);

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}

	return 0;
}