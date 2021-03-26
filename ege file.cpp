#include <iostream>
#include <fstream> 		//include הכÿ נאבמעû ס פאיכאלט
#include <stdlib.h>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{
	int i, max = 0, l ;
	char c1, c2, line;
	
	ifstream in("E:\\24_demo");
							while (in.get(line))
											{
												c1 = c2;
												c2 = line;
												if (c1 == c2 && c1 == 'X')		
															{
																l++;
																if(l > max)
																			max = l;
															}
												
												
												else 
													{
														cout<<l;
														l = 0;	
													}
																									
															
															
											}	
	in.close();
	cout<<max;
	
	
	
}
