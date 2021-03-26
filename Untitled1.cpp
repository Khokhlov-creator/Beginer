#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int n, a[10], s=10, max=0 , ia=0, maxs=0, i, x;
	cin>> n;
	for (i=0; i<s; i++) {
						cin>> a[i];				 //Вводятся первые S чисел
					
						}
						cout<<endl;
	for (i=s; i<n; i++) {
							cin>>x;                   	//Вводятся остальные числа
							if(a[ia]<max) max=a[ia];				//Нахождение минимума/максимума среди чисел текущих позиций
							if(x+max<maxs) maxs=x*x+max*max;				//Нахождение искомого результата
							a[ia]=x;								//Перемещение значения X в текущую позицию
							ia=(ia+1)%s;								//Определение и смещение индекса позиции
							cout<<a[ia]<<" ";
						}
	cout<<maxs;
	return 0;
}
