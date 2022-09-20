
#include"Recruit.h"
int main()
{
	Recruit List;
	int nChon{ 0 };
	int choiceNumber{ 0 };
	int choice{ 0 };
	do
	{
		//system("cls");
		std::cout << "||================ Employees managerment systems ================||" << std::endl;
		std::cout << "||                      1. Add student                           ||" << std::endl;
		std::cout << "||                      2. Show student                          ||" << std::endl;
		std::cout << "||                      3. Show choice of student                ||" << std::endl;
		std::cout << "||                      4. Exit                                  ||" << std::endl;
		std::cout << "||===============================================================||" << std::endl;
		std::cin >> nChon;
		switch (nChon)
		{
		case 1:
		{
			system("cls");
			cout << "Enter number of student you want to add: "; cin >> choice;
			for (int i = 0; i < choice; i++)
			{
				List.AddStudent();
			}
			break;
		}
		case 2:
		{
			system("cls");
			List.ShowStudent();
			break;
		}
		case 3:
		{
			system("cls");
			do
			{
				cout << "Enter number of student you want to recruit: "; cin >> choiceNumber;
			} while (!(choiceNumber<=List.NumberOfComponant()));
			List.ChoiceStudent(choiceNumber);
			//List.ShowChoiceStudent(Ref);
			break;
		}
		}
		system("cls");

	} while (nChon != 4);
	return 0;
}