#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int num_del = 5, del,count_del;
	long int max_del=0, j;
	for(long int i = 63000000; i<=75000000; i++)
												{
													for(j = 2; j<=i/2; j++)																				
																			if(j%2 != 0 && i%j == 0)
																									count_del++;				
													if(count_del == num_del && j%2 != 0 && i%j == 0)
																									{
																										if(j > max_del)
																													max_del = j;
																										cout<<i<<" "<<max_del<<" "<<count_del<<endl;
																									}
													count_del = 0;						
													max_del = 0;				
												}
}
