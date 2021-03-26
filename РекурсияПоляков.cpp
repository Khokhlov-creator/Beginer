#include<bits/stdc++.h>
using namespace std;
int c_main;
int F(int n)
{
	if (n<=5)
			return n + 15;
	else
		if (n>5 && n%2 ==0)
					return F(n/2) + n*n*n - 1;
		else
			if (n>5 && n%2 != 0)
							return F(n-1) + 2*n*n + 1;
}
int eight_finder(int a)
{
	int c;
	while (a>0)
				{
					if (a%10 == 8)
									{
										c++;
										if (c >= 2)
													{
													c_main++;
													c = 0;	
													break;
													}
									}		
					a = a/10;					
				}
	return c_main;
}
	
int main()
{
	int n,i,k;
	/*for (i = 1; i<=1000; i++)
							{
								F(i);
								eight_finder(F(i));
							}							
	*/
	for (i = 1; i<=5; i++)
							{
								cin>>k;
								eight_finder(k);
								cout<<k<<endl;
							}
	cout<<endl<<c_main;						
}
