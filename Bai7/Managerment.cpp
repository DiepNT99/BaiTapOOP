#include"Managerment.h"
QLGV::QLGV()
{
	ListTeacher.clear();
}
void QLGV::AddInfor()
{
	shared_ptr<Teacher> teacher(new Teacher);
	//system("cls");
	std::string sTemp{ "" };
	std::cout << "-------------------Enter Information of the teacher----------------------" << std::endl;
	std::cout << "Enter name of she/he: "; cin.ignore(); getline(cin, sTemp);  teacher->SetFullName(sTemp);
	std::cout << "Enter address of she/he: "; /*cin.ignore();*/ getline(cin, sTemp); teacher->SetAddress(sTemp);
	std::cout << "Enter ID of she/he: "; /*cin.ignore(); */getline(cin, sTemp); teacher->SetID(sTemp);
	int nTemp{ 0 };
	std::cout << "Enter age of she/he: "; std::cin >> nTemp; teacher->SetAge(nTemp);

	do
	{
		system("cls");
		cout << "Do you want to add Salary for she/he:\n" << "1.Yes\n" << "2.No\n" << "Enter your choice: ";
		cin >> nTemp;
		switch (nTemp)
		{
		case 1:
			AddSalary(teacher);
			break;
		}
		break;
	} while (nTemp!=2);
	std::cout << "--------------------------End of Information person--------------------------" << std::endl;
	ListTeacher.push_back(teacher);
}
void QLGV::AddSalary(shared_ptr<Teacher>& teacher)
{
	int nTemp{ 0 };
	std::cout << "Enter default salary of she/he: "; /*cin.ignore();*/ cin>>nTemp; teacher->SetSalaryDefault(nTemp);
	std::cout << "Enter bonus salary of she/he: "; /*cin.ignore();*/ cin >> nTemp; teacher->SetSalaryBonus(nTemp);
	std::cout << "Enter fine salary of she/he: "; /*cin.ignore();*/ cin >> nTemp; teacher->SetSalaryFine(nTemp);
	CaculateSalary(teacher);
}
void QLGV::AddSalary()
{
	int count{0};
	string sTemp{ "" };
	cout << "Enter ID of teacher you want to add salary: ";
	cin.ignore(); getline(cin, sTemp);
	//list<shared_ptr<Teacher>>::iterator it;
	for (auto it = ListTeacher.begin(); it != ListTeacher.end(); ++it)
	{
		if ((*it)->GetID() == sTemp)
		{
			AddSalary(*it);
			count = 1;
		}
		else
		{
			count = 0;
		}
	}
	if (count ==0)
	{
		cout << "Don't have teacher with ID you enter from keyboard !" << endl;
	}

}
void QLGV::Delete()
{
	int count{ 0 };
	string sTemp{ "" };
	cout << "Enter ID of teacher you want to delete: "; cin.ignore(); getline(cin, sTemp);
	list<shared_ptr<Teacher>>::iterator it;
	for (it = ListTeacher.begin(); it != ListTeacher.end(); ++it)
	{
		if ((*it)->GetID() == sTemp)
		{
			//(*it).reset();

			ListTeacher.erase(it);
			break;//error 
		}	
	}
}
void QLGV::Show()
{
		list<shared_ptr<Teacher>>::iterator it;
		for (it = ListTeacher.begin(); it != ListTeacher.end(); ++it)
		{
			ShowInfor(*it);
		}
		cout << '\n';
}
void QLGV::ShowInfor(shared_ptr<Teacher>& it)
{
	std::cout << "-------------------Export Information of the person----------------------" << std::endl;
	std::cout << "Full Name: " << it->GetFullName() << std::endl;
	std::cout << "Address: " << it->GetAddress() << std::endl;
	std::cout << "ID: " << it->GetID() << std::endl;
	std::cout << "Age: " << it->GetAge() << std::endl;
	cout << "Default salary: " << it->GetSalaryDefault() << endl;
	cout << "Bonus salary: " << it->GetSalaryBonus() << endl;
	cout << "Fine salary: " << it->GetSalaryFine() << endl;
	cout << "Real salary: " << it->GetRealSalary() << endl;
	std::cout << "--------------------------End of Information--------------------------" << std::endl;
}
void QLGV::CaculateSalary(shared_ptr<Teacher>& teacher)
{
	int nTemp = teacher->GetSalaryDefault() + teacher->GetSalaryBonus() - teacher->GetSalaryFine();
	teacher->SetRealSalary(nTemp);
}
QLGV::~QLGV()
{

}