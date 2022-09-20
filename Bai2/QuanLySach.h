#pragma once
#include"TapChi.h"
#include"Sach.h"
#include"Bao.h"
/*Yêu cầu 2 : Xây dựng lớp QuanLySach có các chức năng sau

Thêm mới tài liêu : Sách, tạp chí, báo.
Xoá tài liệu theo mã tài liệu.
Hiện thị thông tin về tài liệu.
Tìm kiếm tài liệu theo loại : Sách, tạp chí, báo.*/
class QuanLySach
{
public:
	//QuanLySach();
	void ThemMoiTaiLieu();
	void XoaTaiLieu();
	void HienThiThongTinTaiLieu();
	void TimKiemTaiLieu();
	void KiemTraTrungLap();
	// ~QuanLySach();

private:
	std::vector<std::unique_ptr<TaiLieu>> ListTaiLieu;
};
