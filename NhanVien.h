#include "thongtin.h"
#include <iostream>
#include <string.h>
using namespace std;
class NhanVien : public Taikhoan
{
	private:
	int chietkhau;
	public:
	NhanVien (int a, string b, string c, string d, string e, string f, string g, int x=0)
	{
		setID(a);
		setten(b);
		setemail(c);
		setsdt(d);
		setnamsinh(e);
		setuser(f);
		setpass(g);
		this->chietkhau=x;
	}
void Print()
{
	cout<<"ID: "<<NhanVien.setID<<endl
	cout<<"Ho ten: "<<NhanVien.getten()<<endl;
	cout<<"Email: "<<NhanVien.getemail()<<endl;
	cout<<"Sodienthoai: "<<NhanVien.getsdt()<<endl;
	cout<<"Namsinh: "<<NhanVien.getnamsinh()<<endl;
	cout<<"user: "<<NhanVien.getuser()<<endl;
	cout<<"pass: "<<NhanVien.getpass()<<endl;
}
bool duyetapp(int p);
	if (p==1)
	{
		cout<<"Nhap chiet khau cua app: "<<x<<endl;
		return true;
	}
	else
	{
		return false;
	}
};
