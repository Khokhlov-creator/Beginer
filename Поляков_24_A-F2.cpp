#include <bits/stdc++.h>

using namespace std;

int main()
{
	int min=10000,count=0, i;
	int check[26];			//ìàññèâ Ñ×ÅÒ×ÈÊ.
	char a;
	ifstream in("E://Polyak_1.txt");
	for(i = 1; i<=10000; i++)
								{
									count = 0;									
									in>>a;
									if (a == 'A')
												while(a != 'F')																																																															
																count++;
									if(count!=1 && count<min)								
															min = count;
								}
							
	cout<<min;
}
