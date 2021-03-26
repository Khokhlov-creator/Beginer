#include <iostream>
#include <fstream> 		//include для работы с файлами


using namespace std;

int main()
{
	
//	ofstream out("D:\\1.txt"); 		//Поток для записи
	//	if (out.is_open())	
	//					{	
	//						out<<"1 2 3 4 5 6"<<endl;	
	//					}	
//	out.close();
	
	string line;

	ifstream in;
	
		in.open("D:\\1.txt");			//Поток для чтения
			if (in.is_open())
							{
								while (getline(in, line))
														{
															in<<line;
														
														}																					
							}
		in.close();
	return 0;
}
