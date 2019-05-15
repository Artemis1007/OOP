#include <iostream>
using namespace std;
class PhanSo
{
	private:			
		int tu;
		int mau;
	public:
	PhanSo()
	{
	
		tu = 0;
		mau = 1;
	};	
	PhanSo(int t, int m)
	{
	
		tu=t;
		mau=m;
	};
	PhanSo operator +(const PhanSo &a)
	{
		return PhanSo(tu *a.mau+a.tu*mau, mau*a.mau);
	}
	/*friend ostream& operator << (ostream &out, PhanSo A)
		{
			out<<A.tu<<"/"<<A.mau;
			return out;
		}*/
	void Print()
	{
		cout<<tu<<"/"<<mau<<endl;
	}
	void Tinh()
	{
		int c,d;
		int a,b,e;
		a=tu;
		b=mau;
		while (a!=b)
		if (a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
		e=a;
		if (tu>mau)
		{
			c=tu/mau;
			d=tu%mau;
			cout<<c<<"+"<<d/e<<"/"<<mau/e<<endl;
		}
		else
		{
			cout<<tu/e<<"/"<<mau/e<<endl;
		}
	}	
};
