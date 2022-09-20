/*Để quản lý các hộ dân cư trong một khu phố, người ta cần các thông tin sau: Số thành viên trong gia đình, Số nhà, thông tin mỗi cá nhân trong gia đình. 
Với mỗi cá nhân, người ta quản lý các thông tin sau: Họ tên, Tuổi, Nghề nghiệp, số chứng minh nhân dân(duy nhất cho mỗi người).

Yêu cầu 1: Hãy xây dựng lớp Nguoi để quản lý thông tin của mỗi cá nhân.

Yêu cầu 2: Xây dựng lớp HoGiaDinh để quản lý thông tin của từng hộ gia đình.

Yêu cầu 2: Xây dựng lớp KhuPho để quản lý các thông tin của từng hộ gia đình.

Yêu cầu 3: Nhập n hộ dân. (n nhập từ bàn phím), hiển thị thông tin của các hộ trong khu phố.*/
#include"KhuPho.h"
int main()
{
	Street List;
	int nChon{ 0 };
	do
	{
		system("cls");
		std::cout << "||=================== Street managerment systems ================||" << std::endl;
		std::cout << "||                      1. Add family                            ||" << std::endl;
		std::cout << "||                      2. Export family                         ||" << std::endl;
		std::cout << "||                      3. Exit                                  ||" << std::endl;
		std::cout << "||===============================================================||" << std::endl;
		cout << "Enter your choice here: ";std::cin >> nChon;
		switch (nChon)
		{
		case 1:
		{
			system("cls");
			List.InputStreet();
			break;
		}
		case 2:
		{
			system("cls");
			List.OutputStreet();
			system("pause");
			break;
		}
		system("cls");
		}
	} while (nChon != 3);
	return 0;
}