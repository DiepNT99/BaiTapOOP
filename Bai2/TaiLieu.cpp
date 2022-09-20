#include"TaiLieu.h"
TaiLieu::TaiLieu()
{
	this->sMaTL = "";
	this->sTenNXB = "";
	this->nSoBPH = 0;
}

void TaiLieu::SetMaTL(std::string MaTL)
{
	this->sMaTL = MaTL;
}

void TaiLieu::SetTenNXB(std::string TenNXB)
{
	this->sTenNXB = TenNXB;
}
void TaiLieu::SetSoBPH(int SoBPH)
{
	this->nSoBPH = SoBPH;
}
void TaiLieu::SetType(std::string Type)
{
	this->sType = Type;
}
//
std::string TaiLieu::GetMaTL()
{
	return sMaTL;
}
std::string TaiLieu::GetTenNXB()
{
	return sTenNXB;
}
int TaiLieu::GetSoBPH()
{
	return nSoBPH;
}
std::string TaiLieu::GetType()
{
	return sType;
}
TaiLieu::~TaiLieu() {};