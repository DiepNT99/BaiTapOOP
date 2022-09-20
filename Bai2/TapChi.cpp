#include"TapChi.h"
TapChi::TapChi()
{
	this->nSoPH = 0;
	this->nThangPH = 0;
}

void TapChi::SetSoPH(int SoPH)
{
	this->nSoPH = SoPH;
}
void TapChi::SetThangPH(int ThangPH)
{
	this->nThangPH = ThangPH;
}
int TapChi::GetSoPH()
{
	return nSoPH;
}
int TapChi::GetThangPH()
{
	return nThangPH;
}
void TapChi::NhapTaiLieu()
{
	std::string sTemp{ "" };
	std::cout << "-------------------Enter Information of the book----------------------" << std::endl;
	std::cout << "Nhap ma tai lieu: "; std::cin.ignore(); getline(std::cin, sTemp); SetMaTL(sTemp);
	std::cout << "Nhap ten nha xuat ban: "; std::cin.ignore(); getline(std::cin, sTemp); SetTenNXB(sTemp);
	int nTemp{ 0 };
	std::cout << "Nhap so ban da phat hanh: "; std::cin >> nTemp; SetSoBPH(nTemp);
	std::cout << "Nhap so phat hanh: "; std::cin >> nTemp; SetSoPH(nTemp);
	do
	{
		std::cout << "Thang phat hanh trong khoang tu 1->12:" << std::endl;
		std::cin >> nTemp;
	} while (nTemp > 12 || nTemp < 0); SetThangPH(nTemp);
	SetType("TapChi");
	std::cout << "--------------------------End of Information--------------------------" << std::endl;
}
void TapChi::XuatTaiLieu()
{
	std::cout << "-------------------Export Information of the magazine----------------------" << std::endl;
	std::cout << "Ma tai lieu: " << GetMaTL() << std::endl;
	std::cout << "Ten nha xuat ban: " << GetTenNXB() << std::endl;
	std::cout << "So ban da phat hanh: " << GetSoBPH() << std::endl;
	std::cout << "So phat hanh: " << GetSoPH() << std::endl;
	std::cout << "Thang phat hanh: " << GetThangPH() << std::endl;
	std::cout << "--------------------------End of Information--------------------------" << std::endl;
}