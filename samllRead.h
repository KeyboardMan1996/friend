#pragma once
#include "samllLight.h"
class samllRead		//�кܶ�Ǯ��С��
{
public:
	samllRead() {
		money = 999999999;
	};
	~samllRead() {};
	//	friend samllLight;		//��С������û��˽�еĶ���
	friend void samllLight::life();		//ֻ�ṩ�����
private:
	long int money;
};