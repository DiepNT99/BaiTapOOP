#pragma once
/*Các thí sinh dự thi đại học bao gồm các thí sinh thi khối A, B, và khối C.
Các thí sinh cần quản lý các thông tin sau: Số báo danh, họ tên, địa chỉ, mức ưu tiên.*/
#include"Lib.h"
class ThiSinh
{
public:
	ThiSinh();

	void SetSoBaoDanh(std::string);
	void SetHoTen(std::string);
	void SetDiaChi(std::string);
	void SetMucUuTien(std::string);
	void SetSubject(std::string);

	std::string GetSoBaoDanh();
	std::string GetHoTen();
	std::string GetDiaChi();
	std::string GetMucUuTien();
	std::string GetSubject();

	virtual void ThemThiSinh()=0;
	virtual void HienThiThongTinThiSinh()=0;
	~ThiSinh();

private:
	std::string sSoBaoDanh, sHoTen, sDiaChi, sMucUuTien,sSubject;
};

