vector<int> incrvec(vector<int> c,int n) {
  vector<int> c;
  int n;
  for (int i = 0; i < c.size(); i++) {
    c[i] += n;
  }
  return c;
}
