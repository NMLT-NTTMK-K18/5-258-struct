#include <iostream>
#include <iomanip>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN &);
void Xuat(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P;
	Nhap(P);
	Xuat(P);
	return 0;
}

void Nhap(DIEMKHONGGIAN &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
	cout << "\nz: " << P.z;
}
