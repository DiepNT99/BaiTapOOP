#pragma once
/*các thông tin cá nhân : Họ tên, tuổi, quê quán, mã số giáo viên.
Yêu cầu 1 : Xây dựng lớp Nguoi để quản lý các thông tin cá nhân của mỗi giáo viên.*/
#include"Lib.h"
class Person
{
public:
	Person();

	void SetFullName(string);
	void SetAddress(string);
	void SetID(string);
	void SetAge(int);

	string GetFullName();
	string GetAddress();
	string GetID();
	int GetAge();

	virtual ~Person();

private:
	string sFullName, sAddress, sID;
	int nAge;
};

