#include <iostream>
#include <fstream> 		//include ��� ������ � �������
#include <stdlib.h>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{
	int j,i,S = 0;
	int arr[10];
	
	ifstream in("D:\\test.txt");	//���������� ���������� - ������� ��������� ������ ����� � �������� ��� � ����������� �����
		
		for (i=0; i<10; i++)
								{
									in >> arr[i];			//������ �� ��������� ������� � �������� ������
									
								}
		for (i=0; i<10; i++)
								{
									cout << S + arr[i]<<endl;	
									S += arr[i];
								}	
	in.close();				
	cout<<S;						
	
	
	ofstream out("D:\\test.txt", ios_base::app);				//ios_base - ������� ������� ����� ������ � ������ ��� ��������
		
		out << S;	
					
	out.close();		
}
