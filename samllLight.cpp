#include "stdafx.h"
#include "samllLight.h"
#include "samllRead.h"

samllLight::samllLight()
{
	face = "˧";
	read = new samllRead;
}
samllLight::~samllLight()
{
	delete read;
}
void samllLight::buy()						    //������
{
	//	buyCar(read->money);
	//	buyHouse(read->money);
	//	playDNF(read->money);
}
void samllLight::buyCar(long int &money)		//��
{
	money = money - 1000000;
}
void samllLight::buyHouse(long int &money)		//��
{
	money = money - 1000000;
};
void samllLight::playDNF(long int &money)		//��DNF
{
	while (money > 0)
	{
		money--;
	}
}
void samllLight::life()			//�����
{
		read->money = read->money - 100;
}
void samllLight::sellCar()
{
	this->money += 80000000;
}