#include "NVSX.h"
class NVQL : public NhanVien
{
public:
	NVQL();
	NVQL(double heso);
	NVQL(string ten, int nam, int luong, double heso, double thuong);
	NVQL& operator = (NVQL &nvql);
	void nhap();
	void xuat();
	double tinhLuong();
	~NVQL();
private:
	double heSoChucVu;
	double thuong;
};
