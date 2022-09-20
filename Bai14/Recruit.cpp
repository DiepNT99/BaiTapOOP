#include"Recruit.h"
Recruit::Recruit(){
	student.resize(0);
}

void Recruit::AddStudent()
{
	int nChoine{ 0 };
	system("cls");
	do
	{
		std::cout << "Type of student: \n" << "1. GoodStudent\n" << "2. NormaStudent" << std::endl;
		std::cout << "Enter your choice: "; std::cin >> nChoine; cin.ignore();
	} while (nChoine < 1 || nChoine > 2);

	if (nChoine == 1)
	{
		system("cls");
		std::unique_ptr<GoodStudent>goodstudent (new GoodStudent);
		goodstudent->InputInfor();
		student.push_back(move(goodstudent));
	}
	else 
	{
		system("cls");
		std::unique_ptr<NormalStudent>normalstudent(new NormalStudent);
		normalstudent->InputInfor();
		student.push_back(move(normalstudent));
	}
}
void Recruit::ShowStudent(){
	for (int i = 0; i < student.size(); i++)
	{
		cout << "---------------------Student [" << i + 1 << "]-------------------------" << endl;
		cout << "Name: " << student[i]->GetFullName() << endl;
		cout << "Phone:" << student[i]->GetPhone() << endl;
		cout << "------------------------End [" << i + 1 << "]--------------------------" << endl;
	}
	system("pause");
}
void Recruit::ArrangeGoodStudent(int& count,vector<int>& index )
{
	for (int i = 0; i < student.size(); i++)
	{
		if (shared_ptr<GoodStudent> gs = dynamic_pointer_cast<GoodStudent>(student[i]))
		{
			//cout << "casting complete" << endl;
			count++;
			index.push_back(i);
		}
	}
	for (int i=0 ; i < index.size() -1; i++)
	{
		for (int j = i + 1; j < index.size(); j++)
		{
			shared_ptr<GoodStudent> gs1 = dynamic_pointer_cast<GoodStudent>(student[index[i]]);
			shared_ptr<GoodStudent> gs2 = dynamic_pointer_cast<GoodStudent>(student[index[j]]);
			if (gs1->GetGpa() < gs2->GetGpa())
			{
				//SwapStudent(student[index[i]], student[index[j]]);
				swap(student[index[i]], student[index[j]]);
				continue;
			}
			else if (gs1->GetGpa() == gs2->GetGpa())
			{
				if (!(CompareString(gs1->GetFullName(), gs2->GetFullName())))
				{
					//SwapStudent(student[index[i]], student[index[j]]);
					swap(student[index[i]], student[index[j]]);
				}
			}
		}
	}
}
void Recruit::ArrangNormalStudent(int& count, vector<int>& index)
{
	for (int i = 0; i < student.size(); i++)
	{
		if (shared_ptr<NormalStudent> ns = dynamic_pointer_cast<NormalStudent>(student[i]))
		{
			//cout << "casting nomal complete" << endl;
			count++;
			index.push_back(i);
		}
	}
	for (int i = 0; i < index.size() - 1; i++)
	{
		for (int j = i + 1; j < index.size(); j++)
		{
			shared_ptr<NormalStudent> ns1 = dynamic_pointer_cast<NormalStudent>(student[index[i]]);
			shared_ptr<NormalStudent> ns2 = dynamic_pointer_cast<NormalStudent>(student[index[j]]);
			if (ns1->GetEntryTestScore() < ns2->GetEntryTestScore())
			{
				//SwapStudent(student[index[i]], student[index[j]]);
				swap(student[index[i]], student[index[j]]);
			}
			else if (ns1->GetEntryTestScore() == ns2->GetEntryTestScore())
			{
				if (ns1->GetEnglishScore()<ns2->GetEnglishScore())
				{
					//SwapStudent(student[index[i]], student[index[j]]);
					swap(student[index[i]], student[index[j]]);
				}
			}
		}
	}
}
void Recruit::ChoiceStudent(int choiceNumber){
	/*Nếu số lượng ứng viên là sinh viên khá giỏi có nhiều hơn số lượng cần tuyển 
	thì xét ưu tiên theo điểm GPA. Nếu xuất hiện ứng viên khá giỏi có cùng điểm GPA 
	thì xét ưu tiên theo họ tên. Vd: nếu họ tên là Nguyễn Văn A và Nguyễn Văn B thì ứng viên Nguyễn Văn A được chọn. 
	(Giả sử không bao giờ có sinh viên có trùng họ tên nhau).*/
	int countGs{ 0 }, countNs{ 0 };
	vector<int> indexGs, indexNs;
	ArrangeGoodStudent(countGs, indexGs);
	
	if (countGs >= choiceNumber)
	{
		for (int i = 0; i < choiceNumber; i++)
		{
			student[indexGs[i]]->OutputInfor();
		}
		system("pause");
		
	}
	else
	{

		for (int i = 0; i < countGs ; i++)
		{
			student[indexGs[i]]->OutputInfor();	
		}
		ArrangNormalStudent(countNs, indexNs);
		for (int i = 0; i < choiceNumber - countGs; i++)
		{
			student[indexNs[i]]->OutputInfor();
		}
		system("pause");
		
	}
}
//void Recruit::SwapStudent(shared_ptr<Student>& student1, shared_ptr<Student>& student2)
//{
//	shared_ptr<Student> refGood(nullptr);
//	refGood = student1;
//	student1 = student2;
//	student2 = refGood;
//
//}
//void ShowChoiceStudent(vector < shared_ptr<Student>> Ref)
//{
//	for (int i = 0; i < Ref.size(); i++)
//	{
//
//		cout << "----------------------Choice [" << i + 1 << "]-------------------------" << endl;
//		Ref[i]->OutputInfor();
//		cout << "------------------------End [" << i + 1 << "]--------------------------" << endl;
//	}
//}
int Recruit::NumberOfComponant()
{
	int count = this->student.size();
	return count;
}
Recruit::~Recruit(){}