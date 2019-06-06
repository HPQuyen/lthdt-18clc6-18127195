#include "NVVP.h"
NVVP::NVVP()
{
	soNgayLamViec = 0;
	troCap = 0;
}

NVVP::NVVP(int ngay, double trocap)
{
	soNgayLamViec = ngay;
	troCap = trocap;
}

NVVP::NVVP(string ten, int nam, double luong, int ngay, double trocap) : NhanVien(ten, nam, luong)
{
	soNgayLamViec = ngay;
	troCap = trocap;
}

NVVP & NVVP::operator=(const NVVP & x)
{
	if (this == &x)
	{
		return *this;
	}
	NhanVien::operator=(x);
	this->soNgayLamViec = x.soNgayLamViec;
	this->troCap = x.troCap;
	return *this;
}

void NVVP::nhap()
{
	NhanVien::nhap();
	cout << "So ngay lam viec: ";
	cin >> soNgayLamViec;
	cout << "Tro cap: ";
	cin >> troCap;
}

void NVVP::xuat()
{
	NhanVien::xuat();
	cout << "So ngay lam viec: " << soNgayLamViec << "\n";
	cout << "Tro Cap: " << troCap << "\n";
}

double NVVP::LuongNV()
{
	return NhanVien::tinhLuong() + soNgayLamViec * 100000 + troCap;
}

NVVP::~NVVP()
{
	soNgayLamViec = 0;
	troCap = 0;
}