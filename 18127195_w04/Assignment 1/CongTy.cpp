#include "CongTy.h"

CongTy::CongTy()
{
}

void CongTy::nhap()
{
	int n;
	cout << "Nhap so NVVP: ";
	cin >> n;
	nvvp.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "\t\t\tNhap thong tin NVVP thu " << i + 1 << "\n";
		nvvp[i].nhap();
	}
	cout << "Nhap so NVSX: ";
	cin >> n;
	nvsx.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "\t\t\tNhap thong tin NVSX thu " << i + 1 << "\n";
		nvsx[i].nhap();
	}
	cout << "Nhap so NVQL: ";
	cin >> n;
	nvql.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "\t\t\tNhap thong tin NVQL thu " << i + 1 << "\n";
		nvql[i].nhap();
	}
}

void CongTy::xuat()
{
	int n = nvvp.size();
	if (n == 0)
	{
		cout << "Khong co NVVP nao!!!\n";
	}
	else
	{
		cout << "So NVVP: " << n << "\n";
		for (int i = 0; i < n; i++)
		{
			cout << "\t\t\t\t\tThong tin NVVP thu " << i + 1 << ":\n";
			nvvp[i].xuat();
		}
	}
	n = nvsx.size();
	if (n == 0)
	{
		cout << "Khong co NVSX nao!!!\n";
	}
	else
	{
		cout << "So NVSX: " << n << "\n";
		for (int i = 0; i < n; i++)
		{
			cout << "\t\t\t\t\tThong tin NVSX thu " << i + 1 << ":\n";
			nvsx[i].xuat();
		}
	}
	n = nvql.size();
	if (n == 0)
	{
		cout << "Khong co NVQL nao!!!\n";
	}
	else
	{
		cout << "So NVQL: " << n << "\n";
		for (int i = 0; i < n; i++)
		{
			cout << "\t\t\t\t\tThong tin NVQL thu " << i + 1 << ":\n";
			nvql[i].xuat();
		}
	}
}

long double CongTy::tinhTongLuong()
{
	long double sum = 0;
	for (int i = 0; i < nvvp.size(); i++)
	{
		sum = sum + nvvp[i].LuongNV();
	}
	for (int i = 0; i < nvsx.size(); i++)
	{
		sum = sum + nvsx[i].tinhLuong();
	}
	for (int i = 0; i < nvql.size(); i++)
	{
		sum = sum + nvql[i].tinhLuong();
	}
	return sum;
}

bool CongTy::timNV(string ten)
{
	string name;
	for (int i = 0; i < nvvp.size(); i++)
	{
		name = nvvp[i].layten();
		if (ten == name)
		{
			return true;
		}
	}
	for (int i = 0; i < nvsx.size(); i++)
	{
		name = nvsx[i].layten();
		if (ten == name)
		{
			return true;
		}
	}
	for (int i = 0; i < nvql.size(); i++)
	{
		name = nvql[i].layten();
		if (ten == name)
		{
			return true;
		}
	}
}

CongTy::~CongTy()
{
}