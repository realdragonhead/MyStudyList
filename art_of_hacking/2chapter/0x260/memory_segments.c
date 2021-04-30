#include <stdio.h>
#include <stdlib.h>

int global_var;

int global_initialized_var = 5;

void function() {
	int stack_var;
	printf("function의 stack_var는 주소 0x%16p에 있다.\n", &stack_var);
}

int main() {
	int stack_var;
	static int static_initialized_var = 5;
	static int static_var;
	int *heap_var_ptr;

	heap_var_ptr = (int *) malloc(4);

	printf("global_initialized_var는 주소 0x%16p에 있다.\n", &global_initialized_var);
	printf("static_initialized_var는 주소 0x%16p에 있다.\n\n", &static_initialized_var);
	

	printf("static_var는 주소 0x%16p에 있다.\n", &static_var);
	printf("global_var는 주소 0x%16p에 있다.\n\n", &global_var);


	printf("heap_var는 주소 0x%16p에 있다.\n\n", heap_var_ptr);

	
	printf("stack_var는 주소 0x%16p에 있다.\n", &stack_var);
	function();
}
