#include <iostream>

using namespace std;

int main() {
	int num;

	cout << "���� �Է�: ";
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "1�� ���� �ԷµǾ����ϴ�" << endl;
		cout << "***************************" << endl;
	case 2:
		cout << "2�� ���� �ԷµǾ����ϴ�." << endl;
		cout << "**************************" << endl;
	default:
		cout << "1 �Ǵ� 2�� �ƴ� ���� �ԷµǾ����ϴ�." << endl;
		cout << "***************************************" << endl;


	}
	return 0;
}