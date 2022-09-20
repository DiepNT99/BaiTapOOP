#pragma once
#include"Lib.h"
class Student
{
public:
	Student();

	void SetFullName(string);
	void SetBirthDay(string);
	void SetSex(string);
	void SetPhone(string);
	void SetUniversityName(string);
	void SetGradeLevel(string);

	string GetFullName();
	string GetBirthDay();
	string GetSex();
	string GetPhone();
	string GetUniversityName();
	string GetGradeLevel();

	bool InvalidFullNameException(string Text);
	bool InvalidDOBException(string Text);
	bool InvalidPhoneNumberException(string Text);

	virtual void InputInfor();
	virtual void OutputInfor();

	virtual ~Student();

private:
	std::string sBirthDay, sFullName, sSex, sPhone, sUniversityName, sGradeLevel;
};