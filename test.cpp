#include <iostream>
#include <fstream> 		//include дл€ работы с файлами
#include <stdlib.h>
#include <sstream>
#include <cstring>

using namespace std;


int str_to_int (char s)
	{
		stringstream s_str;
		int val;		//float val;
	//	if (strlen(s) == 0) 			//if (s.emply()) return 0;
	//						{
	//							return 0;	
	//						}
		s_str << s;
		s_str >> val;
		return val;
	}
	
						//  setlocale(LC_ALL, "rus"); // корректное отображение  ириллицы
int main()
{
	int j;
	int arr[10];
	
	for (j = 0; j<=10; j++ )
					arr[j] = 0;
					
	ofstream out("D:\\1.txt"); 		//ѕоток дл€ записи
	if (out.is_open())	
					{	
						out<<"1 2 3 4 5 6"<<endl;	
					}	
	out.close();
	int i;
	char line;
	int summ = 0;
	// atoi - выдел€ет целую часть из действительного числа или из целого
	// atof - все действительное число из строки переводит в число
	// преобразование стринга в строку с нулем выполн€ет метод c_str(), 
	
	ifstream in;
	
		in.open("D:\\1.txt");			//ѕоток дл€ чтени€
			if (in.is_open())
							{
								while (in.get(line) )		//&& i<count) && != EOF
														{
															
															arr[i] =str_to_int (line);
														
															summ += arr[i];
															cout<<arr[i]<<" ";
															
															i++;
															
														}																					
							}
		in.close();
		cout<<endl;
		cout<<summ;
	
	return 0;
}

