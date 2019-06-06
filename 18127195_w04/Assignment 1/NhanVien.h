#include "iostream"
#include "string"
#include "conio.h"
using namespace std;
class NhanVien
{
public:
	NhanVien();
	NhanVien(string ten,double luong);
	NhanVien(string ten, int nam, double luong);
	NhanVien(string ten);
	NhanVien& operator=(const NhanVien &x);
	void nhap();
	void xuat();
	double tinhLuong();
	~NhanVien();

protected:
	string hoTen;
	int namVaoLam;
	double luongCoBan;
};

