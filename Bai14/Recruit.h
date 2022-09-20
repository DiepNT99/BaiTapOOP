#pragma once
#include"GoodStudent.h"
#include"NormalStudent.h"
class Recruit
{
public:
	Recruit();

	void AddStudent();
	void ShowStudent();
	void ArrangeGoodStudent(int& , vector<int>& );
	void ArrangNormalStudent(int& , vector<int>& );
	void ChoiceStudent(int choiceNumber);
	//void SwapStudent(shared_ptr<Student>&,shared_ptr<Student>&);
	//void ShowChoiceStudent(vector <shared_ptr<Student>>);
	int NumberOfComponant();
	~Recruit();

private:
	vector<shared_ptr<Student>> student;

};

