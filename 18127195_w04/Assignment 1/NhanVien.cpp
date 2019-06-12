#include "NhanVien.h"
NhanVien::NhanVien()
{
	hoTen = "Khong biet";
	namVaoLam = 2011;
	luongCoBan = 8000000;
}

NhanVien::NhanVien(string ten, double luong)
{
	hoTen = ten;
	luongCoBan = luong;
}

NhanVien::NhanVien(string ten, int nam, double luong)
{
	hoTen = ten;
	namVaoLam = nam;
	luongCoBan = luong;
}

NhanVien::NhanVien(string ten)
{
	hoTen = ten;
}

NhanVien & NhanVien::operator=(const NhanVien & x)
{
	if (this == &x)
	{
		return *this;
	}
	this->hoTen = x.hoTen;
	this->luongCoBan = x.luongCoBan;
	this->namVaoLam = x.namVaoLam;
	return *this;
}

void NhanVien::nhap()
{
	cin.ignore(100, '\n');
	cout << "Ten Nhan Vien: ";
	getline(cin, hoTen, '\n');
	cout << "Nam vao lam viec: ";
	cin >> namVaoLam;
	cout << "Luong co ban: ";
	cin >> luongCoBan;
}

void NhanVien::xuat()
{
	cout << "Ten Nhan Vien: " << hoTen << "\n";
	cout << "Nam vao lam viec: " << namVaoLam << "\n";
	cout << "Luong co ban: " << luongCoBan << "\n";
}

double NhanVien::tinhLuong()
{
	return luongCoBan;
}

string NhanVien::layten()
{
	return hoTen;
}

NhanVien::~NhanVien()
{
	hoTen = "";
	namVaoLam = 0;
	luongCoBan = 0;
}