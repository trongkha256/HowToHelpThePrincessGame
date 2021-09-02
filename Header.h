#pragma once

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Gate
{
private:
	string TenCong;
	string TenNguoiGacCong;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual double TinhTien();
	virtual double TinhTriTue();
	virtual double TinhSucManh();
	virtual int getType()
	{
		return 0;
	}

};
class BusinessGate : public Gate
{
private:
	double DonGia;
	int SoHang;

public:
	void Nhap();
	void Xuat();
	double TinhTien();
	int getType()
	{
		return 1;
	}
};
class AcademicGate : public Gate
{
private:
	int SoCauHoi;

public:
	void Nhap();
	void Xuat();
	double TinhTriTue();
	int getType()
	{
		return 2;
	}
};
class PowerGate : public Gate
{
private:
	double SoSucManh;

public:
	void Nhap();
	void Xuat();
	double TinhSucManh();
	int getType()
	{
		return 3;
	}
};
class Prince
{
private:
	double SoTien;
	double SoTriTue;
	double SoSucManh;
public:
	Prince();
	void NhapHoangTu();
	bool VuotCong(vector<Gate*>&, int);

};
void NhapDanhSachCong(vector <Gate*>& a, int n);
