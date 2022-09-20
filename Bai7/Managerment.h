#pragma once
#include"Teacher.h"
class QLGV
{
public:
	QLGV();
	void AddInfor();
	void AddSalary();
	void AddSalary(shared_ptr<Teacher>&);
	void Delete();
	void ShowInfor(shared_ptr<Teacher>&);
	void Show();
	void CaculateSalary(shared_ptr<Teacher>&);
	~QLGV();

private:
	list<shared_ptr<Teacher>> ListTeacher;
};

