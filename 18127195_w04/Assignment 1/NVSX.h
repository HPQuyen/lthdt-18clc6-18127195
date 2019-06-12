#include "NVVP.h"
class NVSX : public NhanVien
{
public:
	NVSX();
	NVSX(int sosanpham);
	NVSX(string ten, int nam, double luong, int sosanpham);
	NVSX & operator=(const NVSX &nvsx);
	void nhap();
	void xuat();
	double tinhLuong();
	~NVSX();

private:
	int soSanPham;
};
