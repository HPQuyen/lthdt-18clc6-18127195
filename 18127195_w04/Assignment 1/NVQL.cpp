#include "NVQL.h"
NVQL::NVQL()
{
	heSoChucVu = 0;
	thuong = 0;
}

NVQL::NVQL(double heso)
{
	heSoChucVu = heso;
}

NVQL::NVQL(string ten, int nam, int luong, double heso, double thuong) : NhanVien(ten, nam, luong)
{
	this->heSoChucVu = heso;
	this->thuong = thuong;
}

NVQL & NVQL::operator=(NVQL & nvql)
{
	if (this == &nvql)
	{
		return *this;
	}
	NhanVien::operator=(nvql);
	this->heSoChucVu = nvql.heSoChucVu;
	this->thuong = nvql.thuong;
	return *this;
}

void NVQL::nhap()
{
	NhanVien::nhap();
	cout << "He so chuc vu: ";
	cin >> heSoChucVu;
	cout << "Thuong: ";
	cin >> thuong;
}

void NVQL::xuat()
{
	NhanVien::xuat();
	cout << "He so chuc vu: " << heSoChucVu << "\n";
	cout << "Thuong: " << thuong << "\n";
}

double NVQL::tinhLuong()
{
	return luongCoBan * heSoChucVu + thuong;
}

NVQL::~NVQL()
{
	heSoChucVu = 0;
	thuong = 0;
}
