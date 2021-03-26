#include <algorithm>
#include <iostream>
#include <fstream> 		//include הכÿ נאבמעû ס פאיכאלט
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include <string.h>

using namespace std;

int main()
{
	int i=0, j, k, N , c, a, b, max_krat=0, max_krat_14=0, max_krat_7, max_krat_2;
	
	
	
	ifstream in("E:\\27-B_2.txt");//ifstream in("E:\\27-A_2.txt");		 
	in >> N;	
	for (i  = 1; i<=N; i++)
							{
								in>>a;
								if (max_krat_14 < a && a % 14 == 0)
																max_krat_14 = a;
								if (max_krat_2 < a && a % 2 == 0)
																max_krat_2 = a;
								if (max_krat_7 < a && a% 7 == 0)
																max_krat_7 = a;
								if (max_krat < a)
												max_krat = a;									
							}
	in.close() ;
	if (max_krat_14 * max_krat > max_krat_2 * max_krat_7)
														cout<<max_krat_14 * max_krat;
	else
		cout<<max_krat_2 * max_krat_7;
}
