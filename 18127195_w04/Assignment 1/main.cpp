#include "NVVP.h"
#include "iomanip"
void main()
{
	NVVP x;
	x.nhap();
	x.xuat();
	cout << "Luong la: " << fixed << setprecision(2) << x.LuongNV();
	_getch();
}