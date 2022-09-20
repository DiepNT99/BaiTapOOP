#include"Sach.h"
Sach::Sach()
{
	this->sTenTG = "";
	this->nSoT = 0;
}

void Sach::SetTenTG(std::string TenTG)
{
	sTenTG = TenTG;
}
void Sach::SetSoT(int SoT)
{
	nSoT = SoT;
}

std::string Sach::GetTenTG()
{
	return sTenTG;
}
int Sach::GetSoT()
{
	return nSoT;
}
//Mỗi tài liệu gồm có các thuộc tính sau : Mã tài liệu(Mã tài liệu là duy nhất), Tên nhà xuất bản, số bản phát hành.
//Các loại sách cần quản lý thêm các thuộc tính : tên tác giả, số trang.
void Sach::NhapTaiLieu()
{
	std::string sTemp{""};
	std::cout << "-------------------Enter Information of the book----------------------" << std::endl;
	std::cout << "Nhap ma tai lieu: "; std::cin.ignore(); getline(std::cin, sTemp); SetMaTL(sTemp);
	std::cout << "Nhap ten nha xuat ban: "; std::cin.ignore(); getline(std::cin, sTemp); SetTenNXB(sTemp);
	int nTemp{0};
	std::cout << "Nhap so ban da phat hanh: "; std::cin >> nTemp; SetSoBPH(nTemp);
	std::cout << "Nhap ten tac gia: "; std::cin.ignore(); getline(std::cin, sTemp); SetTenTG(sTemp);
	std::cout << "Nhap so trang cua sach: "; std::cin >> nTemp; SetSoT(nTemp);
	SetType("Sach");
	std::cout << "--------------------------End of Information--------------------------" << std::endl;
}
void Sach::XuatTaiLieu()
{
	std::cout << "-------------------Export Information of the book----------------------" << std::endl;
	std::cout << "Ma tai lieu: " << GetMaTL() << std::endl;
	std::cout << "Ten nha xuat ban: "<<GetTenNXB() << std::endl;
	std::cout << "So ban da phat hanh: "<<GetSoBPH() << std::endl;
	std::cout << "Ten tac gia: "<<GetTenTG() << std::endl;
	std::cout << "So trang cua sach: "<<GetSoT() << std::endl;
	std::cout << "--------------------------End of Information--------------------------" << std::endl;
}