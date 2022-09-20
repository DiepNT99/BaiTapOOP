#include"ThiSinhKhoiA.h"
ThiSinhKhoiA::ThiSinhKhoiA():ThiSinh()
{

}

void ThiSinhKhoiA::ThemThiSinh()
{
	std::string sTemp{ "" };
	std::cout << "-------------------Enter Information of the book----------------------" << std::endl;
	std::cout << "Nhap so bao danh: "; std::cin.ignore(); getline(std::cin, sTemp); SetSoBaoDanh(sTemp);
	std::cout << "Nhap ho va ten thi sinh: "; std::cin.ignore(); getline(std::cin, sTemp); SetHoTen(sTemp);
	std::cout << "Nhap dia chi: "; std::cin.ignore(); getline(std::cin, sTemp); SetDiaChi(sTemp);
	std::cout << "Nhap muc uu tien: "; std::cin.ignore(); getline(std::cin, sTemp); SetMucUuTien(sTemp);
	SetSubject("Khoi A: Toan, Ly, Hoa");
	std::cout << "--------------------------End of Information--------------------------" << std::endl;
}
void ThiSinhKhoiA::HienThiThongTinThiSinh()
{
	std::cout << "-------------------Export Information of the book----------------------" << std::endl;
	std::cout << "So bao danh: " << GetSoBaoDanh() << std::endl;
	std::cout << "Ho va Ten: " << GetHoTen() << std::endl;
	std::cout << "Dia chi: " << GetDiaChi() << std::endl;
	std::cout << "Muc uu tien: " << GetMucUuTien() << std::endl;
	std::cout << "Khoi thi: " << GetSubject() << std::endl;
	std::cout << "--------------------------End of Information--------------------------" << std::endl;
}

ThiSinhKhoiA::~ThiSinhKhoiA()
{

}