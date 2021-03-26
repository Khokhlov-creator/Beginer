#include <iostream>
#include <fstream> 		//include הכÿ נאבמעû ס פאיכאלט
#include <stdlib.h>
#include <sstream>
#include <cstring>

using namespace std;

int str_to_int (string s)
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
	
int main()
{
	
	int i; 			//double i;
	string phrase = "12343412";				//string phrase = "1234.3412";
	i = str_to_int (phrase);
	cout<<i<<endl;
}
	
