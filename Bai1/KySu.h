#pragma once
#include"CanBo.h"
#include"Source.h"
class KySu:public CanBo
{
private:
	string sNganhDaoTao;
public:
	KySu();
	void SetNganhDaoTao(string);
	string GetNganhDaoTao();
};