#include <algorithm>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include <string.h>

using namespace std;

int s=0;			//Объявление глобальной переменной
int F(int n)
{
	cout<<n;
	if (n>=5)
			{
				F(n-1);		
				F(n-2);				
				F(n-3);
			}
	return s+=n;		//нахождение суммы шагов в рекурсивном алгоритме
}

int main()
{
	int k;
	cin>>k;	
	cout<<endl<<F(k);		//Вызов метода
}
