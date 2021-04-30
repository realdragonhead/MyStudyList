#include <stdio.h>

int main() {
	int i;
	
	char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
	int int_array[5] = {1, 2, 3, 4, 5};
	
	unsigned int hacky_nonpointer;
	
	hacky_nonpointer = (unsigned int) char_array;

	for(i=0; i < 5; i++) {
		printf("[hacky_nonpointer] %p를 가리킨다. 가리키는 문자 값은 '%c'\n", hacky_nonpointer, *((char *)hacky_nonpointer));
		hacky_nonpointer = hacky_nonpointer + sizeof(char);
	}

	hacky_nonpointer = (unsigned int) int_array;
	
	for(i=0; i < 5; i++) {
		printf("[hacky_nonpointer] %p를 가리킨다. 가리키는 정수 값은 %d\n", hacky_nonpointer, *((int *)hacky_nonpointer));
		hacky_nonpointer = hacky_nonpointer + sizeof(int);
	}
}
