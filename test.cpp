TEST(TestFunction, test1) {
	int n = 2;
	vector<int> c = {4, 1, 8};
	vector<int> s = {6, 3, 10};

	ASSERT_EQ(incrvec(c,n),  s);
	
}
