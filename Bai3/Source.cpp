/*Các thí sinh dự thi đại học bao gồm các thí sinh thi khối A, B, và khối C. 
Các thí sinh cần quản lý các thông tin sau: Số báo danh, họ tên, địa chỉ, mức ưu tiên.

Thí sinh thi khối A thi các môn: Toán, Lý, Hoá.

Thí sinh thi khối B thi các môn: Toán, Hoá, Sinh.

Thí sinh thi khối C thi các môn: Văn, Sử, Địa.

Yêu cầu 1: Xây dựng các lớp để quản lý các thi sinh dự thi đại học.

Yêu cầu 2: Xây dựng lớp TuyenSinh có các chức năng:

Thêm mới thí sinh.
Hiện thị thông tin của thí sinh và khối thi của thí sinh.
Tìm kiếm theo số báo danh.
Thoát khỏi chương trình.*/
#include"QuanLyThiSinh.h"
int main()
{
	QuanLyThiSinh List;
	int nChon{ 0 };
	do
	{
		//system("cls");
		std::cout << "||================ Candidates managerment systems ================||" << std::endl;
		std::cout << "||                      1. Them thi sinh                         ||" << std::endl;
		std::cout << "||                      2. Hien Thi thi sinh                     ||" << std::endl;
		std::cout << "||                      3. Tim kiem thi sinh                     ||" << std::endl;
		std::cout << "||                      4. Thoat                                 ||" << std::endl;
		std::cout << "||===============================================================||" << std::endl;
		std::cin >> nChon;
		switch (nChon)
		{
		case 1:
		{
			system("cls");
			List.TheMoiThiSinh();
			break;
		}
		case 2:
		{
			system("cls");
			List.HienThiThongTin();
			break;
		}
		case 3:
		{
			system("cls");
			List.TimKiemTheoSoBaoDanh();
			break;
		}
		}
		system("cls");

	} while (nChon != 4);
	return 0;
}
