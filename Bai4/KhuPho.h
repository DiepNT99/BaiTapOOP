#pragma once
#include"HoGiaDinh.h"
class Street
{
public:
	Street();
	//void SetFamily(vector<unique_ptr<Family>>&);
	//vector<unique_ptr<Family>>& GetFamily();
	~Street();
	void InputStreet();
	void OutputStreet();
private:
	vector<unique_ptr<Family>> family;
};

