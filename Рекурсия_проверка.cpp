#include <iostream>

using namespace std;



long int F(int n)
{
	int a,b;
	if(n<=2)
   			return F(3*n - 3);
    else 
    	return (F(n-2)+7)+2*F(n-1);
}

int main()
{
    cout<<F(20);
}
