#include <bits/stdc++.h>

using namespace std;

int main()
{
	int min=10000,count=0, i;
	char a[1000000];
	ifstream in("E://Polyak_1.txt");
	for(i = 1; i<=1000000; i++)
								{
																		
									in>>a[i];
									
								}
	int c = i;
	for ( i = 1; i<=c-3; i++)
							{
								count = 1;
								if (a[i] == 'A')
											while(a[count] != 'F')	
																	{
																	count++;	
																	}																																																																																												
																	
																	
								if(count>2 && count<min)
														min = count+2;	
								cout<<count<<" ";								
							}
											
	cout<<endl<<min;
}
