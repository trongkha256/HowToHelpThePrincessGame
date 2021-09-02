// 19120083.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Header.h"

int main()
{
	/*int n;
	cout << "Nhap so luong cong: ";
	cin >> n;
	cout << "So Cong: " << n << endl;
	vector <Gate*> a;
	NhapDanhSachCong(a, n);
	Prince ht;
	ht.NhapHoangTu();
	if (ht.VuotCong(a, n) == 1)
	{
		cout << "Hoang Tu Da Giai Cuu Duoc Cho Cong Chua An Toan. " << endl;

	}
	else
	{
		cout << "Hoang Tu khong the giai cuu duoc cho cong chua roi! " << endl;
	}
	return 0;*/
	char xau[100], * p = xau, * q;
	cout << "Nhap: ";
	scanf_s("%[a-z ]", xau);
	while (*p != ' ')
	{
		p++;
	}
	cout << strlen(xau);
	q = xau + strlen(xau) - 1;
	while (*q != ' ') q--;
	for (int i = 0; i < strlen(q); q++)
	{
		cout << q[i];
	}
	cout << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
