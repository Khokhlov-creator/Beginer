#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int n, a[10], s=10, max=0 , ia=0, maxs=0, i, x;
	cin>> n;
	for (i=0; i<s; i++) {
						cin>> a[i];				 //�������� ������ S �����
					
						}
						cout<<endl;
	for (i=s; i<n; i++) {
							cin>>x;                   	//�������� ��������� �����
							if(a[ia]<max) max=a[ia];				//���������� ��������/��������� ����� ����� ������� �������
							if(x+max<maxs) maxs=x*x+max*max;				//���������� �������� ����������
							a[ia]=x;								//����������� �������� X � ������� �������
							ia=(ia+1)%s;								//����������� � �������� ������� �������
							cout<<a[ia]<<" ";
						}
	cout<<maxs;
	return 0;
}
