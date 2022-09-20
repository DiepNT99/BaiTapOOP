#include"CanBo.h"
CanBo::CanBo()
{
	this->sHoTen = "";
	this->sGioiTinh = "";
	this->sDiaChi = "";
	this->nTuoi = 0;
}
void CanBo::SetHoTen(string HoTen)
{
	this->sHoTen = HoTen;
}
string CanBo::GetHoTen()
{
	return this->sHoTen;
}
void CanBo::SetGioiTinh(string GioiTinh)
{
	this->sGioiTinh = GioiTinh;
}
string CanBo::GetGioiTinh()
{
	return this->sGioiTinh;
}
void CanBo::SetDiaChi(string DiaChi)
{
	this->sDiaChi = DiaChi;
}
string CanBo::GetDiaChi()
{
	return this->sDiaChi;
}
void CanBo::SetTuoi(int Tuoi)
{
	this->nTuoi = Tuoi;
}
int CanBo::GetTuoi()
{
	return this->nTuoi;
}
istream& operator>>(istream& is, CanBo& CanBo)
{
	//loai bo loi
	cout << "---------------------Enter Infor-----------------------" << endl;
	cout << "Nhap Ho Ten: "; cin.ignore();  getline(is, CanBo.sHoTen);
	cout << "Nhap Tuoi: "; is >> CanBo.nTuoi;
	cout << "Nhap Gioi Tinh: "; cin.ignore(); getline(is, CanBo.sGioiTinh);
	cout << "Nhap Dia Chi: "; getline(is, CanBo.sDiaChi);
	return is;
}
ostream& operator<<(ostream& os, CanBo& CanBo)
{
	cout << "---------------------Out Infor-----------------------" << endl;
	cout << "Ho Ten: " << CanBo.sHoTen << endl;
	cout << "Tuoi: " << CanBo.nTuoi << endl;
	cout << "Gioi Tinh: " << CanBo.sGioiTinh << endl;
	cout << "Dia Chi: " << CanBo.sDiaChi << endl;
	return os;
}
 CanBo::~CanBo() {};

