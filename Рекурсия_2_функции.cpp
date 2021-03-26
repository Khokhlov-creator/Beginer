#include<bits/stdc++.h>

using namespace std;
int c=0;
void F(int n);
void G(int n);
void F(int n) {
  cout << n % 2 << endl;
  if (n % 2 == 0) {
    F(n / 2);
  }
  else {
    G((n - 1) / 2) ;
  }
}
void G(int n) {
  cout << n << endl;
  if (n > 0)
    F(n);
}

int main()
{
	F(19);
	cout<<c;
}
