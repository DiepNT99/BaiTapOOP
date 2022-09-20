#include"CongNhan.h"
CongNhan:: CongNhan()
{
	this->nBac = 1;
}
void CongNhan::SetBac(int Bac)
{
	this->nBac = Bac;
}
int CongNhan::GetBac()
{
	return this->nBac;
}
CongNhan::~CongNhan(){}