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
	int summ_1, summ_2, k, j, i, count;
	char str[6];

	
	for (i = 100000; i<=999999; i++)
									{									
									for (k = 0,j = 0; j<6; j++; k/10)
									
																	{
																	summ_1 += static_cast<int>(str[j])-48;
																	summ_2 += static_cast<int>(str[j+3])-48;
																	}
															
									summ_2 = summ_2 - 54;								
									if (summ_1 == summ_2)
														count++;
									}

}						
