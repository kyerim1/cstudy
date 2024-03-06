#include <stdio.h>
//#include "aa.h"

char main() {

	int birth = 19990101;
	short age = 25;
	unsigned char ch = 69;
	int result = 0;
	printf(" %d   %d  %c \n", birth, age, ch);

	ch = 130;
	printf(" %d    %c  \n", ch, ch);

	result = ch + age;
	printf("결과 %d \n", result);

}

/*


	데이터 타입
		정수형 - int(4), long(8), short(2) , char(1)

		실수형 - float(4), double(8), longdouble(8)

		문자형 - char(1)

		void - 함수나 메서드의 반환값을 제공하지 않는 의미로 사용



	형식 지정자

	%d  -  10진수 정수  -> int, short
	%ld  - 10진수 정수  ->  long
	%f - 10진수 실수 -> float, double
	%lf - 10진수 실수 -> double
	%c  - 문자 -> char
	%s  - 문자열 -> char*
	%p  - 메모리주소  -> void*

	%o  - 8진수 -> int
	%x  - 16진수  -> int
	%u  - 부호없는 10진수 -> unsigned int


int a(int a11, int b);

int printf( const char* format, ...);

*/