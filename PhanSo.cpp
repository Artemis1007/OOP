#include <iostream>
using namespace std;
#include "HonSo.h"
int main()
{
	int n;
	cout<<"Moi ban nhap so phan so can tinh: ";
	cin>>n;
	HonSo c;
	for (int i=1; i<=n; i++)
	{
		int a,b;
		cout<<"Moi ban nhap tu cua phan so thu "<<i<<" la: ";
		cin>>a;
		cout<<"Moi ban nhap mau cua phan so thu "<<i<<" la: ";
		cin>>b;
		HonSo d1(a,b);
		c=c+d1;
		
	}
	c.Print();
	//c.Tinh();
	return 0;
}
