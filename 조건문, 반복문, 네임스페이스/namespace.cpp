#include <iostream>

namespace A {
	void Add() {
		printf("A�� Add() ȣ��!\n");
	}
}
namespace B {
	void Add() {
		printf("B�� Add() ȣ��!\n");
	}
}

int main()
{
	A::Add();
	B::Add();
	return 0;



}