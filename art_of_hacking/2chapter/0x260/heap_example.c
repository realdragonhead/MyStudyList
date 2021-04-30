#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char *char_ptr;
	int *int_ptr;
	int mem_size;

	if (argc < 2)
		mem_size = 50;
	else
		mem_size = atoi(argv[1]);

	printf("\t[+] char_ptr를 위해 힙에 %d바이트 할당\n", mem_size);
	char_ptr = (char *) malloc(mem_size);

	if(char_ptr == NULL) {
		fprintf(stderr, "오류: 힙 메모리 할당 실패\n");
		exit(-1);
	}
	

	strcpy(char_ptr, "This is memory is located on the heap.");
	printf("char_ptr (%p) --> '%s'\n", char_ptr, char_ptr);

	printf("\t[+] int_ptr를 위해 힙에 12바이트 할당\n");

	int_ptr = (int *) malloc(12);
	if(int_ptr == NULL) {
		fprintf(stderr, "오류: 힙 메모리 할당 실패\n");
		exit(-1);
	}


	*int_ptr = 31337;
	printf("int_pt (%p) --> %d\n", int_ptr, *int_ptr);
	


	printf("\t[-] char_ptr의 힙 메모리 해제 중...\n");
	free(char_ptr);

	printf("\t[+] char_ptr을 위해 추가 15바이트 할당\n");
	char_ptr = (char *) malloc(15);

	if(char_ptr == NULL) {
		fprintf(stderr, "오류: 힙 메모리 할당 실패\n");
		exit(-1);
	}

	strcpy(char_ptr, "new_memory");
	printf("char_ptr (%p) --> '%s'\n", char_ptr, char_ptr);

	printf("\t[-] int_ptr의 힙 메모리 해제 중...\n");
	free(int_ptr);
	printf("\t[=] char_ptr의 힙 메모리 해제 중...\n");
	free(char_ptr);
}
