#include "CongTy.h"
#include "iomanip"
void program(CongTy &x)
{
	int choice;
	cout << "1. Nhap\n2. Xuat\n3. Tong Luong\n4. Tim NV\n";
	cout << "\t\t\tEnter your choice: ";
	cin >> choice;
	system("cls");
	switch (choice)
	{
	case 1: x.nhap(); break;
	case 2: x.xuat(); break;
	case 3: 
	{
		long double temp = x.tinhTongLuong();
		if (temp == 0)
		{
			cout << "Khong co NV nao!!!\n";
		}
		else
		{
			cout << "Tong luong cac NV la: " << fixed << setprecision(2) << x.tinhTongLuong() << "\n";
		}
	} break;
	case 4:
	{
		string temp;
		cout << "Nhap ten NV: ";
		cin.ignore(100, '\n');
		getline(cin, temp, '\n');
		bool ans = x.timNV(temp);
		if (ans == true)
		{
			cout << temp << " co trong Cong Ty ^.^\n";
		}
		else
		{
			cout << "Khong co NV nay!!!\n";
		}
	}break;
	default:
		cout << "Khong co lua chon nay!!!\n";
		break;
	}
}
void main()
{
	CongTy x;
	string choice;
	do
	{
		program(x);
		cout << "Do you want to continue(yes/no): ";
		cin >> choice;
		system("cls");
	} while (_stricmp(choice.c_str(),"yes")==0);
	_getch();
}