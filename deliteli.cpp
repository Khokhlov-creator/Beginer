#include <iostream>
#include <fstream> 		//include ��� ������ � �������
#include <stdlib.h>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{
	int begin = 95632, end = 95650, count_del,num_del = 6;			//begin - ������ ����������, end - ����� ����������, count_del - ���-�� ���������, num_del - ������ ����� ���������			
	int del[num_del+1];			//������ ��� �������� ���������
	
	for (int i = begin; i <= end; i++)					// ���� �� ������ ����������, �� ��� �����
								{
									count_del = 0;			//��������� ��������
									for (int j = 1; j <=i; j++)			//���� ��� ���������			//�������� ���� ����� �� ��������	for (int j = 1; j/2 <=i; j++)	
																	{
																		if (i % j == 0 && j % 2 !=0)		//�������� �� ���������	     //&& j % 2 !=0 - ��� �������� �� ��������/����������		
																						{
																							count_del++;
																							if (count_del> num_del)			//�������� ���-�� ���������
																											break;			//����� �� �����. ���� ��������� ������ ��� ����
																							del[count_del] = j;			//��������																							
																						}																																			 						
																	}																		
									if (count_del == num_del)			//�������� ������ ���� ������ ���-�� ���������
															{									
																for (int x = 1; x<=num_del; x++ )			//���� ��� ������ 
																								{	
																									cout<<del[x]<<" ";			
																								}
																cout<<endl;
															}				
								}
								
}
