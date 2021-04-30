#include <stdio.h>

int main() {
	int int_var = 5;
	int * int_ptr;

	int_ptr = &int_var;

	printf("int_ptr = 0x%08x\n", int_ptr);
	printf("&int_ptr = 0x%08x\n", &int_ptr);
	printf("&int_ptr = 0x%08x\n\n", *int_ptr);

	printf("int_var는 0x%08x에 위치해 있고, 값은 %d 이다\n", &int_var, int_var);
	printf("int_ptr는 0x%08x에 위치해 있고, 값은 0x%08x이고, %dㄹㅡㄹ 가리킨다\n\n", &int_ptr, int_ptr, *int_ptr);
}
