/*Khoa CNTT – DHKHTN cần quản lý việc thanh toán tiền lương cho các cán bộ giá viên trong khoa. Để quản lý được, khoa cần các thông tin sau:

Với mỗi cán bộ giáo viên có các thông tin sau: lương cứng, lương thưởng, tiền phạt, lương thực lĩnh, và
các thông tin cá nhân: Họ tên, tuổi, quê quán, mã số giáo viên.

Yêu cầu 1: Xây dựng lớp Nguoi để quản lý các thông tin cá nhân của mỗi giáo viên.

Yêu cầu 2: Xây dựng lớp CBGV để quản lý các thông tin của các cán bộ giáo viên.

Yêu cầu 3: Xây dựng các phương thức thêm, xoá các cán bộ giáo viên theo mã số giáo viên.

Yêu cầu 4: Tính lương thực lĩnh cho giáo viên: Lương thực = Lương cứng + lương thưởng – lương phạt.*/
#include"Managerment.h"
/*Để quản lý các hộ dân cư trong một khu phố, người ta cần các thông tin sau: Số thành viên trong gia đình, Số nhà, thông tin mỗi cá nhân trong gia đình.
Với mỗi cá nhân, người ta quản lý các thông tin sau: Họ tên, Tuổi, Nghề nghiệp, số chứng minh nhân dân(duy nhất cho mỗi người).

Yêu cầu 1: Hãy xây dựng lớp Nguoi để quản lý thông tin của mỗi cá nhân.

Yêu cầu 2: Xây dựng lớp HoGiaDinh để quản lý thông tin của từng hộ gia đình.

Yêu cầu 2: Xây dựng lớp KhuPho để quản lý các thông tin của từng hộ gia đình.

Yêu cầu 3: Nhập n hộ dân. (n nhập từ bàn phím), hiển thị thông tin của các hộ trong khu phố.*/
#include"Managerment.h"
int main()
{
	QLGV List;
	int nChon{ 0 };
	do
	{
		system("cls");
		std::cout << "||=================== Street managerment systems ================||" << std::endl;
		std::cout << "||                      1. Add teacher                           ||" << std::endl;
		std::cout << "||                      2. Add salary of teacher                 ||" << std::endl;
		std::cout << "||                      3. Show Information teacher              ||" << std::endl;
		std::cout << "||                      4. Delete Information teacher            ||" << std::endl;
		std::cout << "||                      5. Exit                                  ||" << std::endl;
		std::cout << "||===============================================================||" << std::endl;
		cout << "Enter your choice here: "; std::cin >> nChon;
		switch (nChon)
		{
		case 1:
		{
			system("cls");
			List.AddInfor();
			break;
		}
		case 2:
		{
			system("cls");
			List.AddSalary();
			system("pause");
			break;
		}
		case 3:
		{
			system("cls");
			List.Show();
			system("pause");
			break;
		}
		case 4:
		{
			system("cls");
			List.Delete();
			system("pause");
			break;
		}
		system("cls");
		}
	} while (nChon != 5);
	return 0;
}
