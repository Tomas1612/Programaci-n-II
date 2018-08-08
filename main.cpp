#include "Cartesiana.h"

int main ()
{
	Cartesiana a(5,3),b(8,6),c,d,e,tomi;
	
	a.showData();
	
	c=a+b;
	c.showData();
	
	d=a-b;
	d.showData();
	
	tomi=d-c;
	tomi.showData();
	
	--tomi;
	tomi.showData();
}
