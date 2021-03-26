#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int S, N, x, y, i, yMax=0, xMax=0;
	cin>>N;
	for (i = 1; i<=N; i++)
						{
							cin>>x>>y;
							if (abs(x)>xMax && y == 0)
											xMax = abs(x);
							if (abs(y)>yMax && x == 0)
											yMax = abs(y);		
						}
	if (xMax == 0 || yMax == 0)
						cout<<"No";
	else					
		cout<<(xMax*yMax)/2;	
}
