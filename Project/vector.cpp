//32204563 mobile system engineering Choi minseok(Class for vector)
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;

class vector //vector class
{
public:
	int x, y, z;

	void create_vector()//vector�� ����� �Լ�
	{
		cout << "\nValue�� �Է��Ͻÿ�.\nx:";
		cin >> x;
		cout << "\ny:";
		cin >> y;
		cout << "\nz:";
		cin >> z;
	}

	void modify()//vector value�� �����ϴ� �Լ�
	{
		int change;
		display_vector();
		cout << "\n�����ϰ� ���� ���� 1,2,3 �߿��� ���ÿ�. \n1. x�� ����\n2. y�� ����\n3. z�� ����\n";
		cin >> change;
		if (change == 1)
		{
			cout << "\n���ο� x�� �Է��Ͻÿ� :";
			cin >> x;
		}
		else if (change == 2)
		{
			cout << "\n���ο� y�� �Է��Ͻÿ�:";
			cin >> y;
		}
		else if (change == 3)
		{
			cout << "\n���ο� z�� �Է��Ͻÿ� :";
			cin >> z;
		}
		display_vector();
	}

	void multiply()// ����
	{
		int Value;
		cout << "\n���� ���ڸ� �Է��Ͻÿ� :";
		cin >> Value;
		x *= Value;
		y *= Value;
		z *= Value;
		display_vector();
	}

	void display_vector()//display �Լ�
	{
		cout << "\n���� ���ʹ� :" << x << "i + " << y << "j + " << z << "k";
	}

};

void main()
{
	
	vector vec;
	vec.create_vector();
	vec.modify();
	vec.multiply();
	_getch();
}