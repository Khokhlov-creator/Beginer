#include <algorithm>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include <string.h>

using namespace std;

int s=0;			//���������� ���������� ����������
int F(int n)
{
	cout<<n;
	if (n>=5)
			{
				F(n-1);		
				F(n-2);				
				F(n-3);
			}
	return s+=n;		//���������� ����� ����� � ����������� ���������
}

int main()
{
	int k;
	cin>>k;	
	cout<<endl<<F(k);		//����� ������
}
