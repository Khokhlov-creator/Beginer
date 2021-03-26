#include<bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <fstream> 		//include הכÿ נאבמעû ס פאיכאלט
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include <string.h>
using namespace std;
int F(int n);
int F(int n)
{
	int j=0;
	if (n>30)
			return n*n+3*n+5;		
	if (n <=30 && n%2 ==0)
						return 2*F(n+1)+ F(n+4);							
	if (n <= 30 && n%2 != 0)
						return F(n+2)+ 3*F(n+5);
						
//	return j;		
}

int main()
{
	long int a=0,c=0,c_main=0;
	cout<<F(31);
	for (int i = 1; i<=1000; i++)
								{									
									a = F(i);
									c=0;	
									cout<<a<<" ";
									while (a>0)
												{
													if (a%10 == 0) c++;
													a = a/10;
												}	
									if (c >= 2) 
												{
												//	cout<<i<<" ";
													c_main++;	
												}													
								}						
	cout<<c_main<<endl;
	
}
