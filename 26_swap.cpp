#include <algorithm>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include <string.h>

using namespace std;
/*int swap (int A, int B)
{
	int c;
	if (A>B)
			{				
				c = A;
				A = B;
				B = c;	
			}	

	
}
*/
int main()
{
	long int N;
	int j,k,s;
	int a[1000];
	int b[1000];
	ifstream in("E://26.txt");
	in>>N;
	for (int i = 1; i<=N; i++)
								{
									in >> a[i];
							  	 	b[i] = a[i];
									   if (a[i] == 1)	
									   				k++;	
								}					
							
	sort(a, a+N);
	
	for (int i = 1; i<=N; i++)							
							for (int j = N-1; j>=i; j--)
												if (b[j] > b[j+1])
																swap(b[j], b[j+1]);
	for(int i = 0; i<10; i++)
							{
							s += a[i];
							cout<<a[i]<<" ";
							}
	cout<<endl;
	for(int i = 0; i<10; i++)							
								cout<<b[i]<<" ";
	cout<<endl<<k;
							
							
//	cout<<s;	
}

