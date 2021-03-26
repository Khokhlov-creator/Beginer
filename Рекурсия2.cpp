#include <algorithm>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include <string.h>

using namespace std;

int s = 0;
int F(int n)
{
	if (n > 0)
  	{
  	  F(n - 4);
  	  F(n / 3);
  	  s+=n;
  	  cout << n << endl;
 	}
  	return s;
}

int main()
{
	int k;
	cin>>k;	
	cout<<endl<<F(k);		//ֲûחמג לועמהא
}
