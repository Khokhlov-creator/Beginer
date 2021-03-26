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
	int i=0, j, k, c, n, j_last, pochti_summ, summ, ostatok, max_ostatok = 0, l, i_last;
	char ch;
	string line;
	int a[10000];
	ifstream in("E:\\27880.txt");			// ИМЯ ФАЙЛА С 2-МЯ "\\" И ТОЛЬКО ТАК
	in >> n;						
	in >> k;
	while(((ch = in.get()) != EOF))			//	while(!in.eof()) Можно и так, но это для ососбо одаренных
									{
										in >> a[i];			//Заполнение массива из файла
										i++;												
									}
	l = i;				//Кол-во элементов в массиве
	in.close() ;		
	sort (a, a+i);		//Сортировка	//cout << a[i]<< " ";								
	i = 0;
	while (summ<n)	//Нахождение максимально возможного кол-ва 				
				{
					summ = summ + a[i];	
					i++;
				}
	cout<<i<<" ";	
	while (summ - j_last + a[i] <= n)	//Попытка ЗАПИХАТЬ файл побольше	
									{	
										summ = summ - j_last + a[i];
										j_last = a[i];										
									}	
	cout<<a[i];
}
