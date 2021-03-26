#include<bits/stdc++.h>
using namespace std;

long int F(int n)
{
	if (n<=1) 
			return 1;
	else  
		return (F(n-1)*F(n-1))-F(n-1)*n+(2 * n); //Íå "ÒÈÐÅ", À "ÌÈÍÓÑ"
}

int main ()
{
    int a;
    cin>>a;
    F(a);
    cout<<F(a);
}

