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
	int i=0, j, k,N , c, a, b, razn, max_krat=0, max_nekrat, min_razn = 100001;
	
	
	
	ifstream in("E:\\27-B_demo.txt");		// ifstream in("E:\\27-B_demo.txt");
	in >> N;	
	for (i  = 1; i<=N; i++)
							{
								in >> a;
								in >> b;	
								if (a > b) 
											max_krat += a;
								else 
									max_krat +=b;
								razn = abs(a - b);
								if (min_razn > razn && razn % 3 != 0)
																			min_razn = razn;													
							}
	in.close() ;
	if (max_krat % 3 != 0)
							cout<<max_krat<<"!";
	else
		cout<<max_krat - min_razn;
	
	
		
	//	while(((ch = in.get()) != EOF))		//	while(!in.eof()) Можно и так, но это для ососбо одаренных
								//	{
								//		in >> a[i];			//Заполнение массива из файла
								//		i++;												
								//	}
}
