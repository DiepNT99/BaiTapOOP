#include"Lib.h"

bool CheckName(string Text)
{
	//try
	//{
		if (Text.size() > 0)
		{
			for (int i = 0; i < Text.length(); i++) {
				if ((Text[i] > 64 && Text[i] < 91)) {
					continue;
				}
				if ((Text[i] > 96) && (Text[i] < 123))
				{
					continue;
				}
				if (Text[i] == ' ')
				{
					continue;
				}
				else
				{
					//throw Exception("Error Name!");
					return false;
				}
			}
		}
		else
		{
			//throw Exception("Error Name!");
			return false;
		}

	//}
	//catch (Exception& ex)
	//{
	//	cout << ex.what() << endl;
	//	return false;
	//}
	return true;
}
bool CheckNum(string Num)
{
	//try
	//{
		if (Num.size() > 0)
		{
			for (int i = 0; i < Num.size(); i++) {
				if (Num[i]=='.')
				{
					continue;
				}
				else
				{
					if ((Num[i] < 47) || (Num[i] > 58)) {
						//throw Exception("Error! Please enter again by bellow!");
						return false;
					}
				}
				
			}
		}
		else
		{
			//throw Exception("Error! Please enter again by bellow!");
			return false;
		}
	//}
	//catch (Exception& ex)
	/*{
		cout << ex.what() << endl;
		return false;
	}*/
	return true;
}
void FixName(string& sText)
{
		string sTemp{ "" };
		while ((sText.begin() < (sText.end() - 1)) && (*sText.begin() == ' '))
		{
			sTemp.clear();
			for (string::iterator it = (sText.begin() + 1); it < (sText.end()); it++)
			{
				sTemp.push_back(*it);
				//lenght--;
			}
			sText.clear();
			sText = sTemp;
		}
		while ((sText.begin() < (sText.end() - 1)) && (*(sText.end() - 1) == ' '))
		{
			sTemp.clear();
			for (string::iterator it = sText.begin(); it != sText.end() - 1; it++)
			{
				sTemp.push_back(*it);
				//lenght--;
			}
			sText.clear();
			sText = sTemp;
		}
		for (string::iterator it = sText.begin(); it != sText.end() - 1; it++)
		{
			// Ðua h?t v? ch? thu?ng
			if (*it >= 'A' && *it <= 'Z') {
				*it += 32;
			}
			// B? d?u tr?ng th?a ? gi?a
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
		for (string::iterator it = sText.begin(); it != sText.end() - 1; it++)
		{
			if ((*(it + 1) != ' ') && (*it == ' '))
			{
				*(it + 1) -= 32;
				//continue;
			}
		}

		if (*(sText.begin()) >= 'a' && *(sText.begin()) <= 'z')
		{
			*(sText.begin()) -= 32;
		}
}
bool CompareString(string str_inp1, string str_inp2)
{
	int res = str_inp1.compare(str_inp2);

	if (res > 0)
		return false;
	else if (res < 0)
		return true;

}