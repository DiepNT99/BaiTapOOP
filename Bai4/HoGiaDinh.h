#pragma once
// người ta cần các thông tin sau: Số thành viên trong gia đình, Số nhà, thông tin mỗi cá nhân trong gia đình. 
#include"Nguoi.h"
class Family
{
public:
	Family();
	void SetMember(int);
	void SetAddress(string);
	//void SetPerson(vector<unique_ptr<Person>>&);

	int GetMember();
	string GetAdress();
	//vector<unique_ptr<Person>>& GetPerson();

	void InputFamily();
	void OututFamily();
	~Family();

private:
	int nMember;
	string sAddress;
	vector<unique_ptr<Person>> person;
};

