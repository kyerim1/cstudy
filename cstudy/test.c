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
	printf("��� %d \n", result);

}

/*


	������ Ÿ��
		������ - int(4), long(8), short(2) , char(1)

		�Ǽ��� - float(4), double(8), longdouble(8)

		������ - char(1)

		void - �Լ��� �޼����� ��ȯ���� �������� �ʴ� �ǹ̷� ���



	���� ������

	%d  -  10���� ����  -> int, short
	%ld  - 10���� ����  ->  long
	%f - 10���� �Ǽ� -> float, double
	%lf - 10���� �Ǽ� -> double
	%c  - ���� -> char
	%s  - ���ڿ� -> char*
	%p  - �޸��ּ�  -> void*

	%o  - 8���� -> int
	%x  - 16����  -> int
	%u  - ��ȣ���� 10���� -> unsigned int


int a(int a11, int b);

int printf( const char* format, ...);

*/