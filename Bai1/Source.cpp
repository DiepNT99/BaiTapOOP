/*
Một đơn vị sản xuất gồm có các cán bộ là công nhân, kỹ sư, nhân viên.
Mỗi cán bộ cần quản lý các dữ liệu : Họ tên, tuổi, giới tính(name, nữ, khác), địa chỉ.

Cấp công nhân sẽ có thêm các thuộc tính riêng : Bậc(1 đến 10).
Cấp kỹ sư có thuộc tính riêng : Nghành đào tạo.
Các nhân viên có thuộc tính riêng : công việc.
Yêu cầu 1 : Xây dựng các lớp CongNhan, KySu, NhanVien kế thừa từ lớp CanBo.

Yêu cầu 2 : Xây dựng lớp QLCB(quản lý cán bộ) cài đặt các phương thức thực hiện các chức năng sau :

Thêm mới cán bộ.
Tìm kiếm theo họ tên.
Hiện thị thông tin về danh sách các cán bộ.
Thoát khỏi chương trình.*/
#include"Source.h"
#include"CanBo.h"
#include"CongNhan.h"
#include"KySu.h"
#include"NhanVien.h"
#include"QuanLyCanBo.h"
#include"Graphic.h"
int main()
{
	/*int mi{0};
	double ga{0},mi_per_ga{0};
	cout << " nhap mi:"; cin >> mi;
	cout << " nhap ga:"; cin >> ga;
	try {
		if (ga == 0)
			throw 0;
		mi_per_ga = static_cast<double>(mi) / ga;
		cout << "result: " << mi_per_ga << endl;
	}
	catch (int& ex)
	{
		cerr << "Sorry, you can't devided by 0" << endl;

	}
	return 0;*/
	QuanLyCanBo nhanvien;
	int nSoNhanVien{0};
	int chon{ 0 };
	do
	{
		//system("cls");
		cout << "||================ Employee managerment systems =================||"<< endl;
		cout << "||                      1. Nhap nhan vien                        ||"<< endl;
		cout << "||                      2. Xuat nhan vien                        ||"<< endl;
		cout << "||                      3. Tim kiem nhan vien                    ||" << endl;
		cout << "||                      4. Thoat                                 ||" << endl;
		cout << "||===============================================================||" << endl;
		cin >> chon;
		switch (chon)
		{
		case 1:
		{
			system("cls");
			nhanvien.ThemMoiCanBo();
			break;
		}
		case 2:
		{
			system("cls");
			nhanvien.XuatCanBo(0);
			break;
		}
		case 3:
		{
			system("cls");
			nhanvien.TimKiemTheoTen();
			break;
		}
		}

	} while (chon!=4);
	
	return 0;
}