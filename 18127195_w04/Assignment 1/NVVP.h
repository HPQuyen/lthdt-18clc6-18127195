#include "NhanVien.h"
class NVVP : public NhanVien
{
public:
	NVVP();
	NVVP(int ngay, double trocap);
	NVVP(string ten,int nam,double luong,int ngay,double trocap);
	NVVP& operator=(const NVVP &x);
	void nhap();
	void xuat();
	double LuongNV();
	~NVVP();

private:
	int soNgayLamViec;
	double troCap;
};
