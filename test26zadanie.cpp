#include <algorithm>
#include <iostream>
#include <fstream> 		//include הכÿ נאבמעû ס פאיכאלט
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include <string.h>
#include <stdio.h>



using namespace std;

int main()
{
	int i=1, j, k, c, n, j_last, pochti_summ, summ, ostatok, max_ostatok = 0;
	char ch;
	string line;
	int a[10000];
	ifstream in("E:\\23.txt");			// ÈÌ‗ ÔÀÉËÀ Ñ 2-Ì‗ "\\" È ÒÎËÜÊÎ ÒÀÊ


								in >> n;							
								in >> k;
								cout<<n<<" "<<k;
							while(((ch = in.get()) != EOF))
							//for(i = 0; i<=4; i++)
															{
																in >> a[i];		
																cout<<a[i]<<" ";	
																i++;													
															}
								in.close() ;
							}
	
