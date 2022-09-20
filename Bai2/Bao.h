#pragma once
#include"TaiLieu.h"
//Các báo cần quản lý thêm : Ngày phát hành.
class Bao :public TaiLieu
{
public:
	Bao();

	void SetNgayPH(int);

	int GetNgayPH();

	virtual void NhapTaiLieu();
	virtual void XuatTaiLieu();
	// ~Bao();

private:
	int nNgayPH;
};