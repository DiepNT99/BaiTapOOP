#pragma once
#include"TaiLieu.h"
//Các tạp chí cần quản lý thêm : Số phát hành, tháng phát hành.
class TapChi :public TaiLieu
{
public:
	TapChi();

	void SetSoPH(int);
	void SetThangPH(int);

	int GetSoPH();
	int GetThangPH();

	virtual void NhapTaiLieu();
	virtual void XuatTaiLieu();

private:
	int nSoPH,nThangPH;
};