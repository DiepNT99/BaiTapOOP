#pragma once
#include"Source.h"
class CanBo
{
private:
	string sHoTen, sGioiTinh, sDiaChi;
	int nTuoi;
public:
	CanBo();

	void SetHoTen(string);
	string GetHoTen();

	void SetGioiTinh(string);
	string GetGioiTinh();

	void SetDiaChi(string);
	string GetDiaChi();

	void SetTuoi(int);
	int GetTuoi();

	friend istream& operator>>(istream&, CanBo&);
	friend ostream& operator<<(ostream&, CanBo&);

	virtual ~CanBo();
};
