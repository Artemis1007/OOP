#ifndef THONGTIN_H
#define THONGTIN_H
#include <string.h>
using namespace std;
class Taikhoan
{
	private:
		int ID;
		string ten;
		string email;
		string sdt;
		string namsinh;
		string user;
		string pass;
	public:
		Taikhoan()
		{}	
		Taikhoan (int a, string b, string c, string d, string e, string f, string g)
		{
			this->ID=a;
			this->ten=b;
			this->email=c;
			this->sdt=d;
			this->namsinh=e;
			this->user=f;
			this->pass=g;
		}
	void setID(int a)
	{
		this->ID=a;
	}
	void setten(string b)
	{
		this->ten=b;
	}
	void setemail(string c)
	{
		this->email=c;
	}
	void setsdt(string d)
	{
		this->sdt=d;
	}
	void setnamsinh(string e)
	{
		this->namsinh=e;
	}
	void setuser(string f)
	{
		this->user=f;
	}
	void setpass(string g)
	{
		this->pass=g;
	}
	int getID()const
	{
		return this->ID;
	}
	string getten()
	{
		return this->ten;
	}
	string getemail()
	{
		return this->email;
	}
	string getsdt()
	{
		return this->sdt;
	}
	string getnamsinh()
	{
		return this->namsinh;
	}
	string getuser()
	{
		return this->user;
	}
	string getpass()
	{
		return this->pass;
	}
};
#endif
