#include"GoodStudent.h"
GoodStudent::GoodStudent():nGpa(0),sBestRewardName("") {}

void GoodStudent::SetGpa(double Gpa) { this->nGpa = Gpa; }
double GoodStudent::GetGpa() { return nGpa; }

void GoodStudent::SetBestRewardName(string BestRewardName) { this->sBestRewardName = BestRewardName; }
string GoodStudent::GetBestRewardName() { return sBestRewardName; }

bool GoodStudent::GpaException(double nTemp){
	try
	{
		if (nTemp>0.0f&&nTemp<8.5f)
		{
			throw Exception("Input files have unknow errors !!!");
		}

	}
	catch (Exception &ex)
	{
		cout << ex.what() << endl;
		return false;
	}
	return true;
}
bool GoodStudent::BestRewardNameException(string Text){
	try
	{
		if (!CheckName(Text))
		{
			throw Exception("Input files have unknow errors !!!");
		}

	}
	catch (Exception& ex)
	{
		cout << ex.what() << endl;
		return false;
	}
	return true;
}

void GoodStudent::InputInfor() {
	Student::InputInfor();
	cout << "Enter Gpa : "; cin >> this->nGpa;
	cout << "Enter Best of reward name:"; string sTemp{ "" }; cin.ignore(); getline(cin, sTemp); FixName(sTemp); this->SetBestRewardName(sTemp);
}

void GoodStudent::OutputInfor(){
	Student::OutputInfor();
	cout << "Gpa: " << this->GetGpa() << endl;
	cout << "BestRewardName: " << this->GetBestRewardName() << endl;
}

GoodStudent::~GoodStudent(){}