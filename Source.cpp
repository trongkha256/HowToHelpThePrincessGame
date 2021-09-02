#include "Header.h"
void Gate::Nhap()
{
	cin.ignore();
	cout << "Nhap ten Cong: ";
	getline(cin, TenCong);
	cout << "Nhap ten Nguoi Gac Cong: ";
	getline(cin, TenNguoiGacCong);
}
void Gate::Xuat()
{
	cout << "Ten Cong: " << TenCong << endl;
	cout << "Nguoi Gac Cong: " << TenNguoiGacCong << endl;
}
double Gate::TinhTien()
{
	return 0;
}
double Gate::TinhSucManh()
{
	return 0;
}
double Gate::TinhTriTue()
{
	return 0;
}
void BusinessGate::Nhap()
{
	Gate::Nhap();
	cout << "Nhap Don Gia: ";
	cin >> DonGia;
	cout << "Nhap So Hang: ";
	cin >> SoHang;
}
void BusinessGate::Xuat()
{
	Gate::Xuat();
	cout << "Don Gia: " << DonGia << endl;
	cout << "So Hang: " << SoHang << endl;
	cout << "Tong Tien= " << DonGia * SoHang << endl;
}
double BusinessGate::TinhTien()
{
	return DonGia * SoHang;
}
void AcademicGate::Nhap()
{
	Gate::Nhap();
	cout << "Nhap So cau hoi tri tue: ";
	cin.ignore(100, '\n');
	cin >> SoCauHoi;
}
void AcademicGate::Xuat()
{
	Gate::Xuat();
	cout << "So cau hoi tri tue: " << SoCauHoi << endl;
}
double AcademicGate::TinhTriTue()
{
	return SoCauHoi;
}
void PowerGate::Nhap()
{
	Gate::Nhap();
	cout << "Nhap chi so suc manh: ";
	cin.ignore(100, '\n');
	cin >> SoSucManh;
}
void  PowerGate::Xuat()
{
	Gate::Xuat();
	cout << "So suc manh: " << SoSucManh << endl;
}

double  PowerGate::TinhSucManh()
{
	return SoSucManh;
}
Prince::Prince()
{
	SoTien = 0;
	SoSucManh = 0;
	SoTriTue = 0;
}
void Prince::NhapHoangTu()
{
	cout << "Nhap so tien cua Hoang Tu: ";
	cin >> SoTien;
	cout << "Nhap so tri tue cua Hoang Tu: ";
	cin >> SoTriTue;
	cout << "Nhap so suc manh cua Hoang Tu: ";
	cin >> SoSucManh;
}
void NhapDanhSachCong(vector <Gate*>& a, int n)
{
	int type;
	Gate* p;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap cong thu " << i + 1 << endl;
		cout << "Nhap loai cua cong (1.BusinessGate 2.AcadamiGate 3.PowerGate): ";
		cin >> type;
		p = NULL;
		if (type == 1)
		{
			p = new BusinessGate;
		}
		else if (type == 2)
		{
			p = new AcademicGate;
		}
		else if (type == 3)
		{
			p = new PowerGate;
		}
		p->Nhap();
		p->Xuat();
		a.push_back(p);
		cout << endl;


	}
}
bool Prince::VuotCong(vector <Gate*>& a, int  n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i]->getType() == 1)
		{
			SoTien -= a[i]->TinhTien();
			if (SoTien < 0)
			{
				cout << "Hoang Tu That Bai Tai Cong: " << i + 1 << endl;
				return 0;
			}
		}
		if (a[i]->getType() == 2)
		{
			if (SoTriTue < a[i]->TinhTriTue())
			{
				cout << "Hoang Tu That Bai Tai Cong: " << i + 1 << endl;
				return 0;
			}
		}
		if (a[i]->getType() == 3)
		{
			SoSucManh -= a[i]->TinhSucManh();
			if (SoSucManh < 0)
			{
				cout << "Hoang Tu That Bai Tai Cong: " << i + 1 << endl;
				return 0;
			}
		}
	}
	return 1;

}
