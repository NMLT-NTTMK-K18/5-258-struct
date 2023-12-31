#include <iostream>
#include <iomanip>

using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;
void Nhap(DATHUC&);
void Xuat(DATHUC);

int main()
{
	DATHUC f;
	Nhap(f);
	cout << "\n Da thuc vua nhap la: ";
	cout << endl;
	Xuat(f);

	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << setw(8) << "(" << f.a[i] << ")";
		cout << "x^" << i << "+";
	}
	cout << setw(8) << "(" << f.a[0] << ")";
}