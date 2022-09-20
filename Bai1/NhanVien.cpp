#include"NhanVien.h"
NhanVien::NhanVien()
{
	this->sCongViec = "";
}
void NhanVien::SetCongViec(string CongViec)
{
	this->sCongViec = CongViec;
}
string NhanVien::GetCongViec()
{
	return this->sCongViec;
}