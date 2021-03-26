#include <algorithm>
#include <iostream>
#include <fstream> 		//include для работы с файлами
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include <string.h>

using namespace std;

int main()
{
	int  k, i = 0, j, countX=0,countY= 0, countZ = 0, mega_count = 0;
	char a[1000000];
	string s, s1, s2;
	ifstream in ("E:\\24.txt");
	while(!in.eof())			//	while(((ch = in.get()) != EOF)) Можно и так, но это для ососбо одаренных
						{
							in >> a[i];			//Заполнение массива из файла
							i++;												
						}
	int len = i;
	in.close();
	i=0;
	for (i = 0; i<= len; i++)
							{
								if (a[i] == 'X')
												{
												countX++;
												countY = 0;
												countZ = 0;
												}
												
												
								if (a[i] == 'Y')
												{
												countY++;
												countZ = 0;
												countX = 0;
												}
								if (a[i] =='Z')
												{
												countZ++;
												countY = 0;
												countX = 0;
												}
								if(countZ == 5)
												{
													mega_count++;
													countZ = 0;
													
												}
								if(countX == 10)
												{
													mega_count++;
													countX = 0;
												}
								if(countY == 7)
												{
													mega_count++;
													countY = 0;
												}
								
									
							}
	
	
	
 	/*while (i <len - 10)
						{
						
						for (j = i; j < i+10; j++)
														s += a[j];
								if(s == "XXXXXXXXXX")	count++;
										
								s = "";	
						i+=10;
						
						}
	cout<<count<<endl;
	i=0;
	while (i <len - 7)
						{
						
						for (j = i; j < i+7; j++)
														s += a[j];
								if(s == "YYYYYYY")	count++;
										
								s = "";	
						i+=7;
						
						}
	cout<<count<<endl;
	i=0;
	while (i <len - 5)
						{
						
						for (j = i; j < i+5; j++)
														s += a[j];
								if(s == "ZZZZZ")	count++;
										
								s = "";	
						i+=5;
						
						}
	cout<<count<<endl;
	*/
	/*for( i = 1; i <=len-10; i++)
							{
								for (j = i; j < i+10; j++)
														s += a[j];
								if(s == "XXXXXXXXXX")																	
								count++;									
								
								
								s = "";		
																			
							}
						cout<<count<<endl;
	for( i = 0; i <=len-7; i++)
								{
									for (j = i; j < i+7; j++)
															s += a[j];
							 		if(s == "YYYYYYY") count++;
									s = "";
														
								}
								cout<<count<<endl;													
	for( i = 0; i <=len-5; i++)	
								{
									for (j = i; j < i+5; j++)
															s += a[j];	
									if(s == "ZZZZZ") count++;
									s = "";					
								}
								cout<<count<<endl;		
	*/																	
							
	cout<<mega_count;
	
									
}
