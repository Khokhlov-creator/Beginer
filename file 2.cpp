#include <iostream>
#include <fstream> 		//include ��� ������ � �������

using namespace std;

int main()
{
	ofstream out; 		//����� ��� ������
//	ifsteam in;			//����� ��� ������
	out.open("D:\\1.txt");			//��������� ����, ���� � ��� ����� - ��������� ��������, ��� ������ ����� � �������� ������������ "\\"
 		if (out.is_open())	
						{	
						out<<"1 2 3 4 5 6";	
						}	
	out.close();
	
}
