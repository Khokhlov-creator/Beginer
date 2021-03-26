#include <iostream>
#include <fstream> 		//include для работы с файлами

using namespace std;

int main()
{
	ofstream out; 		//Поток для записи
//	ifsteam in;			//Поток для чтения
	out.open("D:\\1.txt");			//Открываем файл, путь и имя файла - строковый параметр, для работы файла в корневой используется "\\"
 		if (out.is_open())	
						{	
						out<<"1 2 3 4 5 6";	
						}	
	out.close();
	
}
