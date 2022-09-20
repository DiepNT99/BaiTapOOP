#pragma once
#include"CanBo.h"
#include"Source.h"
class CongNhan : public CanBo
{
private:
	int nBac;
public:
	CongNhan();

	void SetBac(int);
	int GetBac();
	~CongNhan();
};