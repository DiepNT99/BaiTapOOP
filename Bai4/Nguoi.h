#pragma once
#include"Header.h"
//Với mỗi cá nhân, người ta quản lý các thông tin sau : Họ tên, Tuổi, Nghề nghiệp, số chứng minh nhân dân(duy nhất cho mỗi người).
class Person
{
public:
	Person();

	void SetFullName(string);
	void SetJob(string);
	void SetIdentifier(string);
	void SetAge(int);

	string GetFullName();
	string GetJob();
	string GetIdentifier();
	int GetAge();

	void InputPerson();
	void OutputPerson();
	virtual ~Person();

private:
	string sFullName, sJob, sIdentifier;
	int nAge;
};
