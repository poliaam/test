#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> Vec(vector<int> vec, int n) {
	for (int i = 0; i < vec.size(); i++) {
		vec[i] += n;
	}
	return vec;
}

void test() {
	vector<int> vec = { 1, 2, 3, 4, 5 };
	int n = 10;

	vector<int> result = Vec(vec, n);

	assert(result.size() == vec.size());
	assert(result[0] == 11);
	assert(result[1] == 12);
	assert(result[2] == 13);
	assert(result[3] == 14);
	assert(result[4] == 15);

	cout << "All tests passed successfully!";
}

int main() {
	test();

	return 0;
}