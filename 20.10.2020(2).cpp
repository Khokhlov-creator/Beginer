#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int i, c, S1 = 0, S2 = 0;
	int a [6];
	cin>> c;
		for (i = 0; i<=6; i++)
								{
									a[i] = c%10;
									c = c / 10;
								}
		for (i = 0; i<3; i++)
								{
									S1 += a[i];
									S2 += a[i+3];
								}
		cout<<S1<<" "<<S2<<endl;
		if (S1 == S2)
					cout << "Lucky";
		else
			cout <<"Unlucky";
								
}
