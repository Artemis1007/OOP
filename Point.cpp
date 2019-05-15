#include<iostream>
#include<math.h>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point();
	point(int ,int );
	void setX(int );
	void setY(int );
	int getX() const;
	int getY() const;
};
point :: point() : x{0}, y{0} {};
point :: point(int x,int y) : x{x},y{y} {};
void point:: setX (int x)
{
	this->x=x;
}
void point::setY (int y)
{
	this->y=y;
}
int point::getX()const
{
	return this->x;
}
int point::getY()const
{
	return this->y;
}

class hcn
{

	point a1;
	point b1;
public:
	hcn();
	hcn(int, int, int, int);
	float cv();
	float dt();
	
};
hcn::hcn()
{
	point a(0,0);
	point b(1,1);
}
hcn::hcn(int a, int b, int c, int d)
{
	a1.setX(a);
	a1.setY(b);
	b1.setX(c);
	b1.setY(d);
}
float hcn::cv()
{
	int cd=abs(a1.getX() - b1.getX());
	int cr=abs(a1.getY() - b1.getY());
	return (cd+cr)*2;
}
float hcn::dt()
{
	int cd=abs(a1.getX() - b1.getX());
	int cr=abs(a1.getY() - b1.getY());
	return cd*cr;
}
class tg
{
	point a1;
	point b1;
	point c1;
public:
	tg();
	tg(int, int, int, int, int, int);
	float cv();
	float dt();
};
tg::tg()
{
	point a(0,0);
	point b(2,0);
	point c(1,1);
}
tg::tg(int a, int b, int c, int d, int e, int f)
{
	a1.setX(a);
	a1.setY(b);
	b1.setX(c);
	b1.setY(d);
	c1.setX(e);
	c1.setY(f);
}
float tg::cv()
{
	float q=sqrt((b1.getX()-a1.getX())*(b1.getX()-a1.getX())+(b1.getY()-a1.getY())*(b1.getY()-a1.getY()));
	float w=sqrt((b1.getX()-c1.getX())*(b1.getX()-c1.getX())+(b1.getY()-c1.getY())*(b1.getY()-c1.getY()));
	float e=abs(c1.getX()-a1.getX());
	return q+w+e;
}
float tg::dt()
{
	float q=sqrt((b1.getX()-a1.getX())*(b1.getX()-a1.getX())+(b1.getY()-a1.getY())*(b1.getY()-a1.getY()));
	float w=sqrt((b1.getX()-c1.getX())*(b1.getX()-c1.getX())+(b1.getY()-c1.getY())*(b1.getY()-c1.getY()));
	float e=abs(c1.getX()-a1.getX());
	float r=(q+w+e)/2;
	return sqrt(r*(r-q)*(r-w)*(r-e));
}

int main()
{
	hcn a(2,3,4,5);
	cout<<"Chu vi hcn = "<<a.cv()<<endl;
	cout<<"Dien tich hcn = "<<a.dt()<<endl;
	tg b(0,0,1,1,2,0);
	cout<<"Chu vi tg = "<<b.cv()<<endl;
	cout<<"Dien tich tg = "<<b.dt()<<endl;
	return 0;
}
