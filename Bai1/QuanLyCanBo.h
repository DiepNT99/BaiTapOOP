#pragma once
#include"Source.h"
#include"CanBo.h"
#include"CongNhan.h"
#include"KySu.h"
#include"NhanVien.h"
class QuanLyCanBo
{
public:
	QuanLyCanBo();
	void XuatCanBo(int);
	void ThemMoiCanBo();
	void LuaChonBoPhan(int=0);
	void TimKiemTheoTen();
	/*CanBo HienThiThongTin(); */
	~QuanLyCanBo();
private:
	vector<CanBo*> canbo;
};
