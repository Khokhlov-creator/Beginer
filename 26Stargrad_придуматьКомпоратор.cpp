#include <algorithm>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include <string.h>

using namespace std;

int main()
{
	int N,k,s1=0,s2=0;
	int a[10000];
	cin>>N>>k;
	for(int i = 0; i<N; i++)
							cin>>a[i];
							
	sort(a, a+N);
	for(int i = 0; i<N; i++)	
							cout<<a[i]<<endl;
	for(int i = N-1; i>=N-k; i--)
							{
								s1+=a[i];
								s2+=a[i-k];
							}
	cout<<s1<<" "<<s2;
	
	
	
}
