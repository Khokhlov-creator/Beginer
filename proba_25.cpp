#include <iostream>
using namespace std;

int tickets()
{
    
    
}

int main()
{
	int sum = 0;
    int i, j, k;
    int builet[6];
    for (i = 100000; i <= 999999; i++) {
        								for (k = i, j = 0; j < 6; j++, k /= 10) 
       									builet[j] = k % 10;
      									if (builet[0]+builet[1]+builet[2] == builet[3]+builet[4]+builet[5]) 
           																									sum = sum+i;        
    									}    
    cout << sum << endl;
    return 0;
}
