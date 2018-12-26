#pragma once
#include "samllLight.h"
class samllRead		//有很多钱的小红
{
public:
	samllRead() {
		money = 999999999;
	};
	~samllRead() {};
	//	friend samllLight;		//对小明再有没有私有的东西
	friend void samllLight::life();		//只提供生活费
private:
	long int money;
};