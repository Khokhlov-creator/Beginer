#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

int main()
{
	
	string c, b, x;
	int i, S1 = 0, S2 = 0;
	int a [6];
	cin>> c;
		
		for (i = 0; i<3; i++)
								{
									b = c.substr(i, 1) ;		//Выделение построки из строки длиной в 1 символ
									x = c.substr(i+3, 1) ;
									
									
									S1 += atoi(b.c_str() );		 //Конвертация одного символа в число
									S2 += atoi(x.c_str() );		//Конвертация одного символа в число
								} 
		cout<<S1<<" "<<S2<<endl;
		if (S1 == S2)
					cout << "Lucky";
		else
			cout <<"Unlucky";
								
}
