#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "숫자입력 : ";
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "1의 값이 입력되었습니다." << endl;
		cout << "*********************" << endl;
		break;
	case 2:
		cout << "2의 값이 입력되었습니다." << endl;
		cout << "********************" << endl;
		break;
	default:
		cout << "1또는 2가 아닌 값이 입력되었습니다." << endl;
		cout << "***********************" << endl;

		
	}
}