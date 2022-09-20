#include"Bao.h"
Bao::Bao()
{
	this->nNgayPH = 0;
}
void Bao::SetNgayPH(int NgayPH)
{
	nNgayPH = NgayPH;
}
int Bao::GetNgayPH()
{
	return nNgayPH;
}
void Bao::NhapTaiLieu()
{
	std::string sTemp{ "" };
	std::cout << "-------------------Enter Information of the book----------------------" << std::endl;
	std::cout << "Nhap ma tai lieu: "; std::cin.ignore(); getline(std::cin, sTemp); SetMaTL(sTemp);
	std::cout << "Nhap ten nha xuat ban: "; std::cin.ignore(); getline(std::cin, sTemp); SetTenNXB(sTemp);
	int nTemp{ 0 };
	std::cout << "Nhap so ban da phat hanh: "; std::cin >> nTemp; SetSoBPH(nTemp);
	do
	{
		std::cout << "Nhap ngay phat hanh tu 1->31 theo tung thang: " << std::endl;
		std::cin >> nTemp;
	} while (nTemp > 31 || nTemp < 1); SetNgayPH(nTemp);
	SetType("Bao");
	std::cout << "--------------------------End of Information--------------------------" << std::endl;
}
void Bao::XuatTaiLieu()
{
	std::cout << "-------------------Export Information of the magazine----------------------" << std::endl;
	std::cout << "Ma tai lieu: " << GetMaTL() << std::endl;
	std::cout << "Ten nha xuat ban: " << GetTenNXB() << std::endl;
	std::cout << "So ban da phat hanh: " << GetSoBPH() << std::endl;
	std::cout << "Ngay phat hanh: " << GetNgayPH() << std::endl;
	std::cout << "--------------------------End of Information--------------------------" << std::endl;
}