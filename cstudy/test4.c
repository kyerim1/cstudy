#include <stdio.h>

void main() {



	// 1부터 10까지 출력하면서  짝수 출력할때는 *** 을 같이 출력하세요.

	//for (int i = 1; i <= 10; i++) {
	//	if (i % 2 == 0)
	//		printf("%d***\n", i);
	//	else
	//		printf("%d\n", i);
	//}

	// 1부터 10까지 반복문을 만들고 출력하는데
	// 숫자 출력 대신 ,  숫자 만큼 *을 출력하세요. 

	for (int i = 1; i <= 4; i++) {
		for (int blank = 4; blank > i; blank--) {
			printf(" ");
		}
		for (int star = 1; star <= i*2-1; star++) {
			printf("*");
		}
		printf("\n");
	}




	// 반복문 - while, for, do~while
	//while (1) {

	//}
	/*for (int i = 1; i <= 10; i++) {
		printf("%d  \n", i);
	}*/

}