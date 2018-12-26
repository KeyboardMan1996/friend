#pragma once
#include <string>
class samllRead;
class samllLight  //除了帅一无所有的小明
{
public:
	samllLight();
	~samllLight() ;
	std::string face;
	void buy();				//买买买
	void life();			//生活费
	void sellCar();			//卖房子
private:
	samllRead *read;						//小红
	int money;
	void buyCar(long int &money);		//买车
	void buyHouse(long int &money);		//买房
	void playDNF(long int &money);		//玩DNF
};
