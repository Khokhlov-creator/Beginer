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
  if (n <= 2)  
  			  return 3*n-3;  
  else  		
  		return F(n-2)+2*F(n-1)+7;
}

int main()
{
	int k;
	cin>>k;	
	cout<<endl<<F(k);		//ֲûחמג לועמהא
}
