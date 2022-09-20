#include"Teacher.h"
Teacher::Teacher(): nSalaryDefault(0),nSalaryBonus(0),nSalaryFine(0),nRealSalary(0){}
void Teacher::SetSalaryDefault(int Salary)
{
	this->nSalaryDefault = Salary;
}
void Teacher::SetSalaryBonus(int Salary)
{
	this->nSalaryBonus = Salary;
}
void Teacher::SetSalaryFine(int Salary)
{
	this->nSalaryFine = Salary;
}
void Teacher::SetRealSalary(int Salary)
{
	this->nRealSalary =/* this->nSalaryDefault+this->nSalaryBonus-this->nSalaryFine;*/ Salary;
}

int Teacher::GetSalaryDefault()
{
	return nSalaryDefault;
}
int Teacher::GetSalaryBonus()
{
	return nSalaryBonus;
}
int Teacher::GetSalaryFine()
{
	return nSalaryFine;
}
int Teacher::GetRealSalary()
{
	return nRealSalary;
}
Teacher::~Teacher()
{

}
