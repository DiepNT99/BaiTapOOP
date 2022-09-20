#include"NormalStudent.h"

NormalStudent::NormalStudent():sEnglishScore(""),sEntryTestScore("") {}

void NormalStudent::SetEnglishScore(string EnglishScore) { this->sEnglishScore = EnglishScore; }
string NormalStudent::GetEnglishScore() { return this->sEnglishScore; }

void NormalStudent::SetEntryTestScore(string EntryTestScore) { this->sEntryTestScore = EntryTestScore; }
string NormalStudent::GetEntryTestScore() { return this->sEntryTestScore; }

bool NormalStudent::EnglishScoreException(string Text){
	try
	{
		if (!CheckNum(Text))
		{
			throw Exception("Input files have unknow errors !!!");
		}

	}
	catch (Exception& ex)
	{
		cout << ex.what() << endl;
		return false;
	}
	return true;
}
bool NormalStudent::EntryTestScoreException(string Text){
	try
	{
		if (!CheckNum(Text))
		{
			throw Exception("Input files have unknow errors !!!");
		}

	}
	catch (Exception& ex)
	{
		cout << ex.what() << endl;
		return false;
	}
	return true;
}

void NormalStudent::InputInfor(){
	string sTemp{ "" };
	Student::InputInfor();
	cout << "Enter EnglishScore :";getline(cin, sTemp); FixName(sTemp); this->SetEnglishScore(sTemp);
	cout << "Enter TestCore :"; getline(cin, sTemp); FixName(sTemp); this->SetEntryTestScore(sTemp);
}
void NormalStudent::OutputInfor(){
	Student::OutputInfor();
	cout << "EnglishScore: " << this->GetEnglishScore() << endl;
	cout << "TestCore: " << this->GetEntryTestScore() << endl;
}

NormalStudent::~NormalStudent(){}

