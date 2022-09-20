/*các thông tin cá nhân : Họ tên, tuổi, quê quán, mã số giáo viên.
Yêu cầu 1 : Xây dựng lớp Nguoi để quản lý các thông tin cá nhân của mỗi giáo viên.*/
#include"Person.h"
Person::Person():sFullName(""),sAddress(""),sID(""),nAge(0)
{
	//this->sFullName = "";
	//this->sAddress = "";
	//this->sID = "";
	//this->nAge = 0;
}

void Person::SetFullName(string FullName)
{
	sFullName = FullName;
}
void Person::SetAddress(string Address)
{
	sAddress = Address;
}
void Person::SetID(string ID)
{
	sID = ID;
}
void Person::SetAge(int Age)
{
	nAge = Age;
}

string Person::GetFullName()
{
	return sFullName;
}
string Person::GetAddress()
{
	return sAddress;
}
string Person::GetID()
{
	return sID;
}
int Person::GetAge()
{
	return nAge;
}

Person::~Person()
{

}