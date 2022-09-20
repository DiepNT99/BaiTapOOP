#pragma once
#include"Header.h"
class VanBan
{
public:
	VanBan();
	VanBan(string);

	void SetString(string);
	string GetString();

	int WordCount();
	int ACount();
	/*Yêu cầu 4: Chuẩn hoá văn bản theo tiêu chuẩn sau: Ở đầu và cuối sâu không có ký tự trống, 
	ở giữa sâu không có 2 hoặc nhiều hơn các ký tự khoảng trắng liền kề nhau.*/
	string Correct();

	~VanBan();

private:
	string sText; 
};

