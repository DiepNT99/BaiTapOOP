#pragma once
//Các loại sách cần quản lý thêm các thuộc tính : tên tác giả, số trang.
#include"TaiLieu.h"
class Sach:public TaiLieu
{
public:
	Sach();

	void SetTenTG(std::string);
	void SetSoT(int);

	std::string GetTenTG();
	int GetSoT();

	virtual void NhapTaiLieu();
	virtual void XuatTaiLieu();

private:
	std::string sTenTG;
	int nSoT;
};

