#include <iostream>
using namespace std;

class Cartesiana{

private:
	int x;
	int y;

public:
	Cartesiana ();
	Cartesiana (int,int);
	void setX (int);
	void setY (int);
	void setXY (int,int);
	int getX ();
	int getY ();
	void operator++();
	void operator--();
	Cartesiana operator+(Cartesiana);
	Cartesiana operator-(Cartesiana);
	void showData ();
};
