#include<bits/stdc++.h>
using namespace std;

int main()
{
	int c,c_main=0,a;
	for(int i = 0; i<3; i++)
							{
								cin>>a;	
								while (a>0)
											{
												if (a%10 == 0)
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
	cout<<c_main<<endl;
							}
	

}
