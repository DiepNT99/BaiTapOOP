#pragma once
#include"Lib.h"
//Mỗi tài liệu gồm có các thuộc tính sau : Mã tài liệu(Mã tài liệu là duy nhất), Tên nhà xuất bản, số bản phát hành.
class TaiLieu
{
public:
	TaiLieu();

	void SetMaTL(std::string);
	void SetTenNXB(std::string);
	void SetType(std::string);
	void SetSoBPH(int);

	std::string GetMaTL();
	std::string GetTenNXB();
	std::string GetType();
	int GetSoBPH();

	virtual	void NhapTaiLieu() = 0;
	virtual void XuatTaiLieu() = 0;
	virtual ~TaiLieu();
private:
	std::string sMaTL, sTenNXB,sType;
	int nSoBPH;
};
