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
	long int N,K;
	int j,k,s;
	int a[1000];
	ifstream in("E://26_1.txt");
	in>>N;
	in>>K;
	for (int i = 0; i<N; i++)							
								in >> a[i];
	for (int i = 0; i<N-1; i++)							
							for (int j = N-1; j>=i; j--)
												if (a[j] < a[j+1])
																swap(a[j], a[j+1]);
	for(int i = 0; i<K; i++)
							{
							s += a[i];
							cout<<a[i]<<" ";
							}
							
	cout<<s;	
}

