#include"VanBan.h"
VanBan::VanBan() :sText{""}{};
VanBan::VanBan(string Text) :sText(Text) {};

void VanBan::SetString(string Text)
{
	sText = Text;
}
string VanBan::GetString()
{
	return sText;
}

int VanBan::WordCount()
{
	string::iterator it;
	int nWord = (*(sText.begin()) != ' ');
	for (it=sText.begin();it!=sText.end()-1;++it)
	{
		if (( * it == ' ') && ( * (it + 1) != ' '))
		{
			nWord++;
		}
	}
	return nWord;
}
int VanBan::ACount()
{
	string::iterator it;
	int nWord{ 0 };
	for (it = sText.begin(); it != sText.end() - 1; ++it)
	{
		if ((*it == 'A') || (*it == 'a'))
		{
			nWord++;
		}
	}
	return nWord ;
}

/*Yêu cầu 4: Chuẩn hoá văn bản theo tiêu chuẩn sau: Ở đầu và cuối sâu không có ký tự trống,
ở giữa sâu không có 2 hoặc nhiều hơn các ký tự khoảng trắng liền kề nhau.*/
string VanBan::Correct()
{
	string sTemp{ "" };
	while ((sText.begin()<(sText.end()-1)) && (*sText.begin() == ' '))
	{
		sTemp.clear();
		for (string::iterator it = (sText.begin() + 1); it < (sText.end()); it++)
		{
			sTemp.push_back(*it);
			//lenght--;
		}
		sText.clear();
		SetString(sTemp);
	} 
	while ((sText.begin() < (sText.end() - 1)) && (*(sText.end()-1) == ' '))
	{
		sTemp.clear();
		for (string::iterator it = sText.begin() ; it != sText.end()-1; it++)
		{
			sTemp.push_back(*it);
			//lenght--;
		}
		sText.clear();
		SetString(sTemp);
	}
	for (string::iterator it = sText.begin(); it != sText.end() - 1; it++)
	{
		// Đưa hết về chữ thường
		if (*it >= 'A' && *it <= 'Z') {
			*it += 32;
		}
		// Bỏ dấu trắng thừa ở giữa
	}
	for (string::iterator it = sText.begin(); it != sText.end() - 1; it++)
	{
		if ((*it == *(it + 1)) && (*it == ' '))
		{
			sText.erase(it);
			it--;
			//continue;
		}
	}
	
	if (*(sText.begin()) >= 'a' && *(sText.begin()) <= 'z')
	{
		*(sText.begin()) -= 32;
	}
	return GetString();
}

VanBan::~VanBan()
{

}