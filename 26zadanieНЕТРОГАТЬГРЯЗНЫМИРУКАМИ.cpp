#include <algorithm>
#include <iostream>
#include <fstream> 		//include ��� ������ � �������
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
	ifstream in("E:\\27880.txt");			// ��� ����� � 2-�� "\\" � ������ ���
	in >> n;						
	in >> k;
	while(((ch = in.get()) != EOF))			//	while(!in.eof()) ����� � ���, �� ��� ��� ������ ���������
									{
										in >> a[i];			//���������� ������� �� �����
										i++;												
									}
	l = i;				//���-�� ��������� � �������
	in.close() ;		
	sort (a, a+i);		//����������	//cout << a[i]<< " ";								
	i = 0;
	while (summ<n)	//���������� ����������� ���������� ���-�� 				
				{
					summ = summ + a[i];	
					i++;
				}
	cout<<i<<" ";	
	while (summ - j_last + a[i] <= n)	//������� �������� ���� ��������	
									{	
										summ = summ - j_last + a[i];
										j_last = a[i];										
									}	
	cout<<a[i];
}
