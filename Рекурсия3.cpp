#include <algorithm>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include <string.h>

using namespace std;

int c = 0;
int F(int n)
{
  if (n > 0)
  {
    printf("*");
    c++;
    F(n - 1);
    F(n / 3);
    
  }
  return c;
}

int main()
{
	int k;
	cin>>k;	
	cout<<endl<<F(k);		//ֲûחמג לועמהא
}
