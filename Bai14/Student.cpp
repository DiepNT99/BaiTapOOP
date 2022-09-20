#include"Student.h"
#include <regex>
Student::Student(){}

void Student::SetFullName(string FullName) { this->sFullName = FullName; }
void Student::SetBirthDay(string BirthDay) { this->sBirthDay = BirthDay; }
void Student::SetSex(string Sex) { this->sSex = Sex; }
void Student::SetPhone(string Phone) { sPhone = Phone; }
void Student::SetUniversityName(string UniversityName) { this->sUniversityName = UniversityName; }
void Student::SetGradeLevel(string Gradelevel) { this->sGradeLevel = Gradelevel; }

string Student::GetFullName() { return sFullName; }
string Student::GetBirthDay() { return sBirthDay; }
string Student::GetSex() { return this->sSex; }
string Student::GetPhone() { return this->sPhone; }
string Student::GetUniversityName() { return this->sUniversityName; }
string Student::GetGradeLevel() { return sGradeLevel; }

bool  Student::InvalidFullNameException(string Text)
{
	try
	{
		if (Text.size() < 10 || Text.size() > 50)
		{
			throw Exception("InvalidFullNameException!");
		}

		if (!CheckName(Text))
		{
			throw Exception("InvalidFullNameException!");
		}
		
	}
	catch (Exception &ex)
	{
		cout << ex.what() << endl;
		return false;
	}
	return true;
}
bool  Student::InvalidDOBException(string Text)
{
	try
	{
		//regex pattern("^(0[1-9]|1[012])[-/.](0[1-9]|[12][0-9]|3[01])[-/.](19|20)\\d\\d$");
		regex pattern("^(0[1-9]|[12][0-9]|3[01])[-/.](0[1-9]|1[012])[-/.](19|20)\\d\\d$");
		if (!regex_match(Text, pattern))
		{
			throw Exception("InvalidDOBException");
		}
	}
	catch (Exception& ex)
	{
		cout << ex.what() << endl;
		return false;
	}
	return true;
}
bool  Student::InvalidPhoneNumberException(string Text)
{
	try
	{
		string nNum{ "" };
		if (!CheckNum(Text))
		{
		throw Exception("InvalidPhoneNumberException!");
		}
		else if (Text.size() > 10)
		{
			throw Exception("InvalidPhoneNumberException!");
		}
		for (int i = 0; i < 3; i++)
		{
			nNum.push_back(Text[i]);
		}
		if (!(nNum=="090" || nNum == "098" || nNum == "091" || nNum == "031"||nNum=="035"||nNum=="038"))
		{
			throw Exception("InvalidPhoneNumberException!");
		}
		
		
	}
			
	catch (Exception& ex)
	{
		cout << ex.what() << endl;
		return false;
	}
	return true;
}

void Student::InputInfor(){
	string sTemp{ "" };
	do
	{
		cout << "Enter full name of student: "; getline(cin, sTemp); FixName(sTemp);
	} while (!InvalidFullNameException(sTemp)); this->SetFullName(sTemp);
	do
	{
		cout << "Enter birthday: "; getline(cin, sTemp);
	} while (!InvalidDOBException(sTemp));  this->SetBirthDay(sTemp);
	cout << "Enter sex of student: "; getline(cin, sTemp); FixName(sTemp); this->SetSex(sTemp);
	do
	{
		cout << "Enter phone number of student: "; getline(cin, sTemp);
	} while (!InvalidPhoneNumberException(sTemp)); this->SetPhone(sTemp);
	do
	{
		cout << "Enter name of university: "; getline(cin, sTemp);
	} while (!CheckName(sTemp)); FixName(sTemp); this->SetUniversityName(sTemp);
	do
	{
		cout << "Enter gradelevel of student: "; getline(cin, sTemp);
	} while (!CheckName(sTemp)); FixName(sTemp);  this->SetGradeLevel(sTemp);

}
void Student::OutputInfor(){
	cout << "FullName: " << this->GetFullName() << endl;
	cout << "Birthday: " << this->GetBirthDay() << endl;
	cout << "Sex: " << this->GetSex() << endl;
	cout << "Phone number: " << this->GetPhone() << endl;
	cout << "University: " << this->GetUniversityName() << endl;
	cout << "Gradelevel: " << this->GetGradeLevel() << endl;
}

Student::~Student(){}