#include"HoGiaDinh.h"
Family::Family()
{
	this->nMember = 0;
	this->sAddress = "";
	this->person.resize(0);
}
void Family::SetMember(int Member)
{
	this->nMember = Member;
}
void Family::SetAddress(string Address)
{
	sAddress = Address;
}
//void Family::SetPerson(vector<unique_ptr<Person>>& person)
//{
//	for (int i = 0; i < person.size(); i++)
//	{
//		this->person.push_back(move(person[i]));
//	}
//}

int Family::GetMember()
{
	return nMember;
}
string Family::GetAdress()
{
	return sAddress;
}
//vector<unique_ptr<Person>>& Family::GetPerson()
//{
//	return this->person;
//}

void Family::InputFamily()
{
	system("cls");
	std::cout << "-------------------Enter Information of family----------------------" << std::endl;
	int nTemp{ 0 };
	std::cout << "Enter number of people in family: "; std::cin >> nTemp; SetMember(nTemp);
	std::string sTemp{ "" };
	std::cout << "Enter address of family: "; cin.ignore(); getline(cin, sTemp); SetAddress(sTemp);
	for (int i = 0; i < nTemp; i++)
	{
		unique_ptr<Person> p(new Person);
		p->InputPerson();
		this->person.push_back(move(p));
		cin.ignore();
	}

	std::cout << "--------------------End of Information of family--------------------" << std::endl;
}

void Family::OututFamily()
{
	//system("cls");
	std::cout << "-------------------Export Information of family----------------------" << std::endl;
	std::cout << "Number of people in family: " << GetMember() << std::endl;
	std::cout << "Address of family: " << GetAdress() << std::endl;
	for (int i = 0; i < this->person.size(); i++)
	{
		this->person[i]->OutputPerson();
	}
	std::cout << "-------------------End of Information of family------------------" << std::endl;
}
Family::~Family()
{

}