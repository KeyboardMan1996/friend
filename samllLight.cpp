#include "stdafx.h"
#include "samllLight.h"
#include "samllRead.h"

samllLight::samllLight()
{
	face = "帅";
	read = new samllRead;
}
samllLight::~samllLight()
{
	delete read;
}
void samllLight::buy()						    //买买买
{
	//	buyCar(read->money);
	//	buyHouse(read->money);
	//	playDNF(read->money);
}
void samllLight::buyCar(long int &money)		//买车
{
	money = money - 1000000;
}
void samllLight::buyHouse(long int &money)		//买房
{
	money = money - 1000000;
};
void samllLight::playDNF(long int &money)		//玩DNF
{
	while (money > 0)
	{
		money--;
	}
}
void samllLight::life()			//生活费
{
		read->money = read->money - 100;
}
void samllLight::sellCar()
{
	this->money += 80000000;
}