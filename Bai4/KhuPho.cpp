#include"KhuPho.h"
Street::Street()
{
	this->family.resize(0);
}
//void Street::SetFamily(vector<unique_ptr<Family>>& family)
//{
//	for (int i = 0; i < family.size(); i++)
//	{
//		this->family.push_back(move(family[i]));
//	}
//	
//	
//}
//vector<unique_ptr<Family>>& Street::GetFamily()
//{
//	return family;
//}
Street::~Street()
{

}
void Street::InputStreet()
{
	system("cls");
	cout << "Enter number of family you want to add: ";
	int nNum; cin >> nNum;
	for (int i = 0; i < nNum; i++)
	{
		unique_ptr<Family> f (new Family);
		f->InputFamily();
		this->family.push_back(move(f));
	}
}
void Street::OutputStreet()
{
	system("cls");
	for (int i = 0; i < this->family.size(); i++)
	{
		cout << "---------------Family [" << i + 1 << "]----------------" << endl;
		this->family[i]->OututFamily();
	}
}