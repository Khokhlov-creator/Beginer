#include <bits/stdc++.h>

using namespace std;

int main()
{
	int count=0, i;
	int check[26];
	char a[1000000];
	ifstream in("E://Polyak_1.txt");
	for(i = 1; i<=1000000; i++)
								in>>a[i];
	for(int j = 1; j<=i-2; j++)	
								{
									if(a[j] == a[j+2])
													{
															check[(int)a[j+1] - 64]++;
													}
												
								}
								
	int max = 0;
	for( i = 1; i<=26; i++)								
							if(max<check[i])
											{
												max = check[i];
												count = i;
											}
									
							
													
	cout<<(char)(count+64)<<" "<<max;								
}
