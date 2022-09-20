
#include"QuanLyCanBo.h"
QuanLyCanBo::QuanLyCanBo()
{
}
void QuanLyCanBo::XuatCanBo(int i=0)
{ 
	//unique_ptr<CongNhan> cn;
	CongNhan* cn;
	//unique_ptr<KySu> ks;
	KySu* ks;
	//unique_ptr<NhanVien> nv;
	NhanVien* nv;
	for ( i=0;i<this->canbo.size(); i++)
	{
		cn = dynamic_cast<CongNhan*>(this->canbo[i]);
		ks= dynamic_cast<KySu*>(this->canbo[i]);
		nv= dynamic_cast<NhanVien*>(this->canbo[i]);
		if (cn!=nullptr)
		{
			cout << *this->canbo[i] ;
			cout << "Bac cong nhan: " << cn->GetBac() << endl;
		}
		else if (ks != nullptr)
		{
			cout << *this->canbo[i];
			cout <<"Nganh dao tao: "<< ks->GetNganhDaoTao() << endl;
		}
		else
		{
			cout << *this->canbo[i];
			cout <<"Cong viec: "<< nv->GetCongViec() << endl;
		}	
	}
	system("pause");
	system("cls");

}
void QuanLyCanBo::TimKiemTheoTen()
{
	//unique_ptr<CongNhan> cn;
	CongNhan* cn;
	//unique_ptr<KySu> ks;
	KySu* ks;
	//unique_ptr<NhanVien> nv;
	NhanVien* nv;
	cout << "Nhap ten can bo muon tim: " << endl;
	string sTen;
	cin.ignore();getline(cin, sTen); 
	for (int i = 0; i < this->canbo.size(); i++)
	{
		CanBo* cb = this->canbo[i];
		if (cb->GetHoTen()==sTen)
		{
			cn = dynamic_cast<CongNhan*>(this->canbo[i]);
			ks = dynamic_cast<KySu*>(this->canbo[i]);
			nv = dynamic_cast<NhanVien*>(this->canbo[i]);
			if (cn != nullptr)
			{
				cout << *this->canbo[i];
				cout << "Bac cong nhan: " << cn->GetBac() << endl;
			}
			if (ks != nullptr)
			{
				cout << *this->canbo[i];
				cout << "Nganh dao tao: " << ks->GetNganhDaoTao() << endl;
			}
			if (nv != nullptr)
			{
				cout << *this->canbo[i];
				cout << "Cong viec: " << nv->GetCongViec() << endl;
			}
		}
		
	}
	system("pause");
	system("cls");
}
void QuanLyCanBo::ThemMoiCanBo()
{
	int nSoNhanVien{0};
	cout << "Nhap So Luong Can Bo Muon Them: " << endl;
	cin >>nSoNhanVien;
	/*cout << nSoNhanVien;
	system("pause");*/
	LuaChonBoPhan(nSoNhanVien);
}
void QuanLyCanBo::LuaChonBoPhan(int nSoNhanVien)
{
	int n{0};
	for (int i = 0; i < /*this->canbo.size()*/ nSoNhanVien; i++)
	{
		system("cls");
		cout << "Can bo thu "<<i+1<<" thuoc bo phan nao:" << endl;
		do
		{
			cout << "1.Cong Nhan" << "\n"
				<< "2.Ky Su" << "\n"
				<< "3.Nhan Vien" << endl;
			cin >> n;
		} while (n != 1 && n != 2 && n != 3);
		switch (n)
		{
		case 1:
		{
			system("cls");
			int capbac{0};
			//unique_ptr<capbac> a;
			this->canbo.push_back(new CongNhan);
			cin >> *(this->canbo[i]);
			//canbo.push_back(this->canbo[i]);
			CongNhan* CN = dynamic_cast<CongNhan*>(this->canbo[i]);
			cout << "Nhap cap bac cua nhan vien: " ;
			cin >> capbac;
			CN->SetBac(capbac);
			break;
		}
		case 2:
		{

			system("cls");
			string kysu = "";
			this->canbo.push_back(new KySu);
			cin >> *this->canbo[i];
			KySu* KS = dynamic_cast<KySu*>(this->canbo[i]);
			cout << "Nhap nganh dao tao cua Ky Su: ";
			/*cin.ignore();*/getline(cin, kysu);
			KS->SetNganhDaoTao(kysu);
			break;
		}
		case 3:
		{

			system("cls");
			string nhanvien;
			this->canbo.push_back(new NhanVien);
			cin >> *this->canbo[i];
			NhanVien* NV = dynamic_cast<NhanVien*>(this->canbo[i]);
			cout << "Nhap cong viec cua nhanh vien: " ;
			/*cin.ignore();*/ getline(cin, nhanvien);
			NV->SetCongViec(nhanvien);
			break;
		}
		}
	}
	system("cls");
}
QuanLyCanBo::~QuanLyCanBo()
{
	for (int i = 0; i < canbo.size(); i++)
	{
		delete canbo[i];
	}
}