#pragma once
#include <string>
class samllRead;
class samllLight  //����˧һ�����е�С��
{
public:
	samllLight();
	~samllLight() ;
	std::string face;
	void buy();				//������
	void life();			//�����
	void sellCar();			//������
private:
	samllRead *read;						//С��
	int money;
	void buyCar(long int &money);		//��
	void buyHouse(long int &money);		//��
	void playDNF(long int &money);		//��DNF
};
