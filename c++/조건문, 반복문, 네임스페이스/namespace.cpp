#include <iostream>

namespace A {
	void Add() {
		printf("A의 Add() 호출!\n");
	}
}
namespace B {
	void Add() {
		printf("B의 Add() 호출!\n");
	}
}

int main()
{
	A::Add();
	B::Add();
	return 0;



}