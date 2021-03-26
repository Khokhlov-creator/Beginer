#include <algorithm>
#include <iostream>
#include <fstream> 		//include для работы с файлами
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include <string.h>


using namespace std;

int main()
{
	int i=0, j, k, c, n, j_last, pochti_summ, summ, ostatok, max_ostatok = 0;
	char ch;
	string line;
	int a[10000];
	ifstream in("E:\\27880.txt");			// ИМЯ ФАЙЛА С 2-МЯ "\\" И ТОЛЬКО ТАК


								in >> n;							
								in >> k;
								while(((ch = in.get()) != EOF))			//	while(!in.eof()) Можно и так, но это для ососбо одаренных
															{
																in >> a[i];
																		
																cout<<a[i]<<" ";
																
																i++;														
															}
								in.close() ;
	
		
	sort (a, a+i);				//Сортировка
	while (summ < n)
					{	
						summ = summ + a[j];
						j++;
												
					}	
	j_last = j;	
	cout<<j<< endl;							//for(j = 0; j <=i; j++)	cout<<a[j]<<endl;
//	pochti_summ = summ - a[j_last];
//	cout<<pochti_summ<<endl;
//	ostatok = n - pochti_summ;
	i=j_last;
	while (summ - j_last + a[i] <= n)
								{								
									summ = summ - j_last + a[i];
									j_last = a[i];
									i++;
								}	
						
	
	cout<<a[i]<<" "<<i;
								

	
					
									
							
		
	//	in >> k;
	//	for (i = 0; i <= k-1; i++)
	//							{
	//								in >> a[i];
	//								cout<< a[i];
	//							}
		
		
		
		
}
