#include <iostream>
#include <fstream> 		//include для работы с файлами
#include <stdlib.h>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{
	int begin = 95632, end = 95650, count_del,num_del = 6;			//begin - начало промежутка, end - конец промежутка, count_del - кол-во делителей, num_del - НУЖНОЕ число делителей			
	int del[num_del+1];			//массив для хранения делителей
	
	for (int i = begin; i <= end; i++)					// цикл от начала промежутка, до кго конца
								{
									count_del = 0;			//обнуление счетчика
									for (int j = 1; j <=i; j++)			//цикл для делителей			//Заменить если нужно до половины	for (int j = 1; j/2 <=i; j++)	
																	{
																		if (i % j == 0 && j % 2 !=0)		//Проверка на делимость	     //&& j % 2 !=0 - для проверки на четность/нечетность		
																						{
																							count_del++;
																							if (count_del> num_del)			//проверка кол-ва делителей
																											break;			//Выход из цикла. если делителей больше чем надо
																							del[count_del] = j;			//Хранение																							
																						}																																			 						
																	}																		
									if (count_del == num_del)			//Работает только если НУЖНОЕ кол-во делителей
															{									
																for (int x = 1; x<=num_del; x++ )			//Цикл для записи 
																								{	
																									cout<<del[x]<<" ";			
																								}
																cout<<endl;
															}				
								}
								
}
