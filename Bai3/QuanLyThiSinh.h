#pragma once
#include"ThiSinhKhoiA.h"
#include"ThiSinhKhoiB.h"
#include"ThiSinhKhoiC.h"
class QuanLyThiSinh
{
public:
	QuanLyThiSinh();
	void TheMoiThiSinh();
	void HienThiThongTin();
	void TimKiemTheoSoBaoDanh();
	~QuanLyThiSinh();

private:
	std::vector<std::unique_ptr <ThiSinh>> ListThiSinh;
};