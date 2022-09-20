#pragma once
#include"Source.h"
#include"CanBo.h"
class NhanVien:public CanBo
{
private:
	string sCongViec;
public:
	NhanVien();
	void SetCongViec(string);
	string GetCongViec();
};