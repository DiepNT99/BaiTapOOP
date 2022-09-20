#include"ThiSinh.h"
ThiSinh::ThiSinh()
{
	this->sSoBaoDanh = "";
	this->sHoTen = "";
	this->sDiaChi = "";
	this->sMucUuTien = "";
}

void ThiSinh::SetSoBaoDanh(std::string SoBaoDanh)
{
	sSoBaoDanh = SoBaoDanh;
}
void ThiSinh::SetHoTen(std::string HoTen)
{
	sHoTen = HoTen;
}
void ThiSinh::SetDiaChi(std::string DiaChi)
{
	sDiaChi = DiaChi;
}
void ThiSinh::SetMucUuTien(std::string MucUuTien)
{
	sMucUuTien = MucUuTien;
}
void ThiSinh::SetSubject(std::string Subject)
{
	sMucUuTien = Subject;
}

std::string ThiSinh::GetSoBaoDanh()
{
	return sSoBaoDanh;
}
std::string ThiSinh::GetHoTen()
{
	return sHoTen;
}
std::string ThiSinh::GetDiaChi()
{
	return sDiaChi;
}
std::string ThiSinh::GetMucUuTien()
{
	return sMucUuTien;
}
std::string ThiSinh::GetSubject()
{
	return sSubject;
}

ThiSinh::~ThiSinh()
{

}
