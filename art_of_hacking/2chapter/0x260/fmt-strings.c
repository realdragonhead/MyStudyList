#include <stdio.h>

int main() {
	char string[10];
	int A = -73;
	unsigned int B = 31337;
	
	strcpy(string, "sample");
	printf("[A] 10진수: %d, 16진수: %x, 부호 없는 10진수: %u\n", A, A, A);
	printf("[A] 10진수: %d, 16진수: %x, 부호 없는 10진수: %u\n", B, B, B);
	printf("[B의 필드 길이] 3: '%3u', 10: '%10u', '%08u'\n", B, B, B);
	printf("[문자열] %s 주소 %08x\n", string, string);

	printf("변수 A의 주소: %08x\n", &A);
}
