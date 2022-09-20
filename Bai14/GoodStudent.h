#pragma once
#include"Student.h"
class GoodStudent : public Student
{
public:
	GoodStudent();

	void SetGpa(double);
	double GetGpa();

	void SetBestRewardName(string);
	string GetBestRewardName();

	bool GpaException(double nTemp);
	bool BestRewardNameException(string sTemp);

	void InputInfor();
	void OutputInfor();

	~GoodStudent();

private:
	string sBestRewardName;
	double nGpa;
};