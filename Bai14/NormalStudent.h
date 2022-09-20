#pragma once
#include"Student.h"
class NormalStudent : public Student
{
public:
	NormalStudent();

	void SetEnglishScore(string);
	string GetEnglishScore();

	void SetEntryTestScore(string);
	string GetEntryTestScore();

	bool EnglishScoreException(string nTemp);
	bool EntryTestScoreException(string sTemp);

	void InputInfor();
	void OutputInfor();

	~NormalStudent();

private:
	string sEnglishScore, sEntryTestScore;
};

	