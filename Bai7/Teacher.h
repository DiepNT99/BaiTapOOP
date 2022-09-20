#pragma once
//Yêu cầu 2: Xây dựng lớp CBGV để quản lý các thông tin của các cán bộ giáo viên.
#include"Person.h"
class Teacher:public Person
{
public:
	Teacher();
	void SetSalaryDefault(int);
	void SetSalaryBonus(int);
	void SetSalaryFine(int);
	void SetRealSalary(int);

	int GetSalaryDefault();
	int GetSalaryBonus();
	int GetSalaryFine();
	int GetRealSalary();

	~Teacher();


private:
	int nSalaryDefault, nSalaryBonus, nSalaryFine, nRealSalary;
};

