#include "Cartesiana.h"

Cartesiana::Cartesiana (){
	x=0;
	y=0;
}


Cartesiana::Cartesiana(int x,int y){
	this->x=x;
	this->y=y;
}



//Setters//

void Cartesiana::setX(int x){
	x=x;
}
void Cartesiana::setY(int y){
	y=y;
}

void Cartesiana::setXY(int x,int y){
	x=x;
	y=y;
}

//Getters//

int Cartesiana::getX (){
	return x;
}

int Cartesiana::getY (){
	return y;
}

//Sobrecarga de Operadores//

void Cartesiana::operator++(){
	x+=1;
	y+=1;
}

void Cartesiana::operator--(){
	x-=1;
	y-=1;
}

Cartesiana Cartesiana::operator+(Cartesiana a){
	Cartesiana c(a.x+this->x,a.y+this->y);
	return c;
}

Cartesiana Cartesiana::operator -(Cartesiana a){
	Cartesiana c(a.x-this->x,a.y-this->y);
	return c;
}

//showData//

void Cartesiana::showData(){
	cout<<this->x<<", "<<this->y<<endl;
	cout<<"Vamo' lo pibe"<<endl;
}
