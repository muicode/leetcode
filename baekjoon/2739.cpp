#include <bits/stdc++.h> 
using namespace std;
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int a; cin >> a;

  for(int i=1; i<10; ++i) 
    printf("%d * %d = %d\n", a, i, a*i);
  return 0;
}
