#include <iostream>

using namespace std;

int main() {
	int r;
	float CArea, Cference;

	cout << "������ �Է�: ";
	cin >> r;
	CArea = 2 * (float)3.14 * r;
	Cference = r * r * (float)3.14;

	cout << "���� ���� : " << CArea << endl;
	cout << "���� ����: " << Cference << endl;

	return 0;
}