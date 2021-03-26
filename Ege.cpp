#include <iostream>



using namespace std;
int main()
{
	int x,i,c;
	int max = 0;
	int n;

	for (i = 1016; i<=7937; i++)
				{
					if ((i % 3 == 0) && (i % 7 != 0) && (i % 17 !=0) && (i % 19 != 0) && (i % 21 !=0) && (i > max))
						{
							max = i;
							c+=1;
						}
									
				}
	cout<<c<<" "<<max;
}
	

