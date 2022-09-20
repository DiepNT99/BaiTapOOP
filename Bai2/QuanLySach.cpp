#include"QuanLySach.h"
void QuanLySach::ThemMoiTaiLieu()
{
	int nChoine{ 0 };
	system("cls");

	do
	{
		std::cout << "Ban muon them tai lieu thuoc loai: \n" << "1. Sach\n" << "2. Tap Chi\n" << "3. Bao" << std::endl;
		std::cout << "Enter your choice: "; std::cin >> nChoine;
	} while (nChoine<1||nChoine>3);
	
	if (nChoine==1)
	{
		system("cls");
		std::unique_ptr<Sach> sach(new Sach);
		sach->NhapTaiLieu();
		ListTaiLieu.push_back(move(sach));
	}
	else if (nChoine == 2)
	{
		system("cls");
		std::unique_ptr<TapChi> tapchi(new TapChi);
		tapchi->NhapTaiLieu();
		ListTaiLieu.push_back(move(tapchi));
	}
	else
	{
		system("cls");
		std::unique_ptr<Bao> bao(new Bao);
		bao->NhapTaiLieu();
		ListTaiLieu.push_back(move(bao));
	}
}
void QuanLySach::XoaTaiLieu()
{
	system("cls");
	int nChoice{0};
	std::string sChoine = "";
	do
	{
		std::cout << "Ban muon xoa tai lieu nao: \n" << "1. Nhap ma tai lieu\n" << "2. Thoat" << std::endl;
		std::cin >> nChoice;
	} while (nChoice<1||nChoice>2);
	switch (nChoice)
	{
		case 1:
		{
			system("cls");
			std::cout << "Nhap ma tai lieu o day: "; std::cin.ignore(); getline(std::cin, sChoine);
			for (int i = 0; i < ListTaiLieu.size(); i++)
			{
				if (ListTaiLieu[i]->GetMaTL() == sChoine)
				{

					ListTaiLieu.erase(ListTaiLieu.begin()+i);
					i--;
					break;
				}
				else
				{
					std::cout << "Ma tai lieu ban nhap khong co trong thu vien" << std::endl;
				}
			}
			break;
		}
		case 2:
			break;
	}
}
void QuanLySach::HienThiThongTinTaiLieu()
{
	for (int i = 0; i <ListTaiLieu.size(); i++)
	{
		ListTaiLieu[i]->XuatTaiLieu();
	}
	system("pause");

}
void QuanLySach::TimKiemTaiLieu()
{
	int nChoine{ 0 };
	system("cls");
	do
	{
		std::cout << "Ban muon tim tai lieu thuoc loai: \n" << "1. Sach\n" << "2. Tap Chi\n" << "3. Bao" << std::endl;
		std::cout << "Enter your choice: "; std::cin >> nChoine;
	} while (nChoine < 1 || nChoine>3);

	if (nChoine == 1)
	{
		system("cls");
		for (int i = 0; i < ListTaiLieu.size(); i++)
		{
			if (ListTaiLieu[i]->GetType()=="Sach")
			{
				ListTaiLieu[i]->XuatTaiLieu();
				system("pause");
			}
		/*	std::unique_ptr<Sach> s = ;*/
		}
	}
	else if (nChoine == 2)
	{
		system("cls");
		for (int i = 0; i < ListTaiLieu.size(); i++)
		{
			if (ListTaiLieu[i]->GetType() == "TapChi")
			{
				ListTaiLieu[i]->XuatTaiLieu();
				system("pause");
			}
			/*	std::unique_ptr<Sach> s = ;*/
		}
	}
	else
	{
		system("cls");
		for (int i = 0; i < ListTaiLieu.size(); i++)
		{
			if (ListTaiLieu[i]->GetType() == "Bao")
			{
				ListTaiLieu[i]->XuatTaiLieu();
				system("pause");
			}
			/*	std::unique_ptr<Sach> s = ;*/
		}
	}
}
void QuanLySach::KiemTraTrungLap()
{
	for (int i = 0; i < ListTaiLieu.size()-1; i++)
	{
		for (int j = i+1; j < ListTaiLieu.size(); j++)
		{
			if (ListTaiLieu[i]->GetMaTL() == ListTaiLieu[j]->GetMaTL())
			{
				std::string sTemp = "";
				std::cout << "Ban nhap trung ma tai lieu yeu cau doi lai:";
				std::cin.ignore(); std::getline(std::cin, sTemp);
				ListTaiLieu[j]->SetMaTL(sTemp);
			}
		}
	}
}