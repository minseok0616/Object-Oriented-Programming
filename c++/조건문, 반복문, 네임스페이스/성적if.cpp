#include <iostream>
using namespace std;

int main()
{
	int jumsu;

	cout << "������ �Է��Ͻÿ� : ";
	cin >> jumsu;

	if (jumsu <= 100 && jumsu >= 90)
		cout << "����� ������ A�Դϴ�" << endl;
	else if (jumsu <= 89 && jumsu >= 80)
		cout << "����� ������ B�Դϴ�" << endl;
	else if (jumsu <= 79 && jumsu >= 70)
		cout << "����� ������ C�Դϴ�" << endl;
	else if (jumsu <= 69 && jumsu >= 60)
		cout << "����� ������ D�Դϴ�" << endl;
	else
		cout << "����� ������ F�Դϴ�" << endl;

	return 0;
		

}