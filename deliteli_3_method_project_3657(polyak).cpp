#include <bits/stdc++.h>

using namespace std;

int summ;

long int method(long int x);

long int method(long int x)
{
	int a[5];
	while (x>0)
		 {
			if(x%10 <=3)
			        	{
				 		summ+=x%10;
						x /= 10;	
					}
			else
				break;
		}	 								
	if(summ % 10 == 0)	
			return x;
}

int main()
{	
	int k=0;
	long int i=0;
 	for(i = 1000000; i<=1300000; i++) 									
									//while (i<1300000)
													{						
														k+=10;
														cout<<method(k+i)<<" ";	
													}
}

