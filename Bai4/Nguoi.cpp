#include"Nguoi.h"
Person::Person()
{
	this->sFullName = "";
	this->sJob = "";
	this->sIdentifier = "";
	this->nAge = 0;
}

void Person::SetFullName(string FullName)
{
	sFullName = FullName;
}
void Person::SetJob(string Job)
{
	sJob = Job;
}
void Person::SetIdentifier(string Indentifier)
{
	sIdentifier = Indentifier;
}
void Person::SetAge(int Age)
{
	nAge = Age;
}

string Person::GetFullName()
{
	return sFullName;
}
string Person::GetJob()
{
	return sJob;
}
string Person::GetIdentifier()
{
	return sIdentifier;
}
int Person::GetAge()
{
	return nAge;
}
void Person::InputPerson()
{
	//system("cls");
	std::string sTemp{ "" };
	std::cout << "-------------------Enter Information of the person----------------------" << std::endl;
	std::cout << "Enter name of she/he: "; /*cin.ignore();*/ getline(cin, sTemp); SetFullName(sTemp);
	std::cout << "Enter job of she/he: "; /*cin.ignore();*/ getline(cin, sTemp); SetJob(sTemp);
	std::cout << "Enter passport of she/he: "; /*cin.ignore(); */getline(cin, sTemp); SetIdentifier(sTemp);
	int nTemp{ 0 };
	std::cout << "Enter age of she/he: "; std::cin >> nTemp; SetAge(nTemp);
	std::cout << "--------------------------End of Information person--------------------------" << std::endl;
}
void Person::OutputPerson()
{
	std::cout << "-------------------Export Information of the person----------------------" << std::endl;
	std::cout << "Full Name: " << GetFullName() << std::endl;
	std::cout << "Job: " << GetJob() << std::endl;
	std::cout << "Passport: " << GetIdentifier() << std::endl;
	std::cout << "Age: " << GetAge() << std::endl;
	std::cout << "--------------------------End of Information--------------------------" << std::endl;
}
Person::~Person(){}
