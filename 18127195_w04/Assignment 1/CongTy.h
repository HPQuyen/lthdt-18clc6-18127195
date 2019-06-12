#include "NVQL.h";
#include "vector"
class CongTy
{
public:
	CongTy();
	void nhap();
	void xuat();
	long double tinhTongLuong();
	bool timNV(string ten);
	~CongTy();

private:
	vector <NVQL> nvql;
	vector <NVSX> nvsx;
	vector <NVVP> nvvp;
};
