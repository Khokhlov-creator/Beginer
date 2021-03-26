#include <iostream>
#include <fstream> 		//include для работы с файлами
#include <stdlib.h>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{
	int j,i,S = 0;
	int arr[10];
	
	ifstream in("D:\\test.txt");	//Объявление переменной - объекта файлового потока ВВОДА и привязка его к конкретному файлу
		
		for (i=0; i<10; i++)
								{
									in >> arr[i];			//Чтение из файлового объекта в заданный массив
									
								}
		for (i=0; i<10; i++)
								{
									cout << S + arr[i]<<endl;	
									S += arr[i];
								}	
	in.close();				
	cout<<S;						
	
	
	ofstream out("D:\\test.txt", ios_base::app);				//ios_base - базовая система ВВОДА ВЫВОДА с ключом для дозаписи
		
		out << S;	
					
	out.close();		
}
