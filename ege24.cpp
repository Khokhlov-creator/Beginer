#include <iostream>
#include <fstream> 		//include для работы с файлами
#include <stdlib.h>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{
	int i, j, max = 0, k = 1;
	char c1, c2, c3, line;
	string S = "LDR", S1;
	char c[1000000];			//Массив для символов файла
	
	ifstream in("E:\\zadanie24_2.txt");		//Открытие файла
							while (in.get(line))			
											{
												
												c[i] = line;	//
												i++;
												
											}
						for (j = 0; j<=i; j++ )
											{
											if ((c[j] == 'L' && c[j] % 3 == 0) || (c[j] == 'L' && c[j] % 3 == 1) || (c[j] == 'L' && c[j] % 3 == 2))	//c1 == 'L' && c2 == 'D' && c3 == 'R' 	
															{
																k++;
																if(k > max)
																			max = k;
															}	
											else 
													{
												
														k = 1;	
													}
															
												}	
		if (c[j] == 'L')
						max = max++;
	in.close();								
	cout<<max;
	
	
	
}
