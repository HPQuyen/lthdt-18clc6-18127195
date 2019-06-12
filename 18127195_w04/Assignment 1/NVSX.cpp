#include "NVSX.h"

NVSX::NVSX()
{
	soSanPham = 0;
}

NVSX::NVSX(int sosanpham)
{
	soSanPham = sosanpham;
}

NVSX::NVSX(string ten, int nam, double luong, int sosanpham) : NhanVien(ten, nam, luong)
{
	this->soSanPham = sosanpham;
}

NVSX & NVSX::operator=(const NVSX & nvsx)
{
	if (this == &nvsx)
	{
		return *this;
	}
	NhanVien::operator=(nvsx);
	this->soSanPham = nvsx.soSanPham;
	return *this;
}
void NVSX::nhap()
{
	NhanVien::nhap();
	cout << "So san pham: ";
	cin >> soSanPham;
}

void NVSX::xuat()
{
	NhanVien::xuat();
	cout << "So san pham: " << soSanPham << "\n";
}

double NVSX::tinhLuong()
{
	return luongCoBan + soSanPham * 2000;
}

NVSX::~NVSX()
{
	soSanPham = 0;
}