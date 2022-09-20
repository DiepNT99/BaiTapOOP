
#include"QuanLyThiSinh.h"
QuanLyThiSinh::QuanLyThiSinh()
{

}
void QuanLyThiSinh::TheMoiThiSinh()
{
	int nChoine{ 0 };
	system("cls");

	do
	{
		std::cout << "Ban muon them thi sinh thuoc khoi: \n" << "1. A\n" << "2. B\n" << "3. C" << std::endl;
		std::cout << "Enter your choice: "; std::cin >> nChoine;
	} while (nChoine < 1 || nChoine>3);

	if (nChoine == 1)
	{
		system("cls");
		std::unique_ptr<ThiSinhKhoiA> KhoiA(new ThiSinhKhoiA);
		KhoiA->ThemThiSinh();
		ListThiSinh.push_back(move(KhoiA));
	}
	else if (nChoine == 2)
	{
		system("cls");
		std::unique_ptr<ThiSinhKhoiB> KhoiB(new ThiSinhKhoiB);
		KhoiB->ThemThiSinh();
		ListThiSinh.push_back(move(KhoiB));
	}
	else
	{
		system("cls");
		std::unique_ptr<ThiSinhKhoiC> KhoiC(new ThiSinhKhoiC);
		KhoiC->ThemThiSinh();
		ListThiSinh.push_back(move(KhoiC));
	}
}
void QuanLyThiSinh::HienThiThongTin()
{
	{
		for (int i = 0; i < ListThiSinh.size(); i++)
		{
			ListThiSinh[i]->HienThiThongTinThiSinh();
		}
		system("pause");

	}
}
void QuanLyThiSinh::TimKiemTheoSoBaoDanh()
{
	system("cls");
	int nChoice{ 0 };
	std::string sChoine = "";
	do
	{
		std::cout  << "1. Tim kiem thi sinh theo so bao danh \n" << "2. Thoat" << std::endl;
		std::cin >> nChoice;
	} while (nChoice < 1 || nChoice>2);
	switch (nChoice)
	{
	case 1:
	{
		system("cls");
		std::cout << "Nhap so bao danh cua thi sinh: "; std::cin.ignore(); getline(std::cin, sChoine);
		for (int i = 0; i < ListThiSinh.size(); i++)
		{
			if (ListThiSinh[i]->GetSoBaoDanh() == sChoine)
			{

				ListThiSinh[i]->HienThiThongTinThiSinh();
				system("pause");
			}
			else
			{
				std::cout << "Khong co thi sinh nao co ma so nay" << std::endl;
			}
		}
		break;
	}
	}
}
QuanLyThiSinh::~QuanLyThiSinh()
{

}

