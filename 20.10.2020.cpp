#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int i, N = 10;
	int a [N], b [N], c [20];
	for (i = 0; i <= N; i++)
							{
								a[i] = rand()%10;
								b[i] = a[i] * 10;
								cout<<a[i]<<" "<<b[i]<<endl;
								
							}
	for (i = 0; i <= N; i++)
							{
								c[i*2] = a[i];
								c[i*2-1] = b[i];														
							}
	for (i = 0; i <= 20; i++)
							cout<<c[i]<< " ";
							
}
