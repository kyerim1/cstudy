#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void main() {

	int num = 0, cnt=0;
	bool isPrime = true;
	printf("2 이상의 정수 입력 : ");
	scanf_s("%d", &num);

	for (int i = 2; i <= num; i++) {
		isPrime = true;
		for (int k = 2; k < i; k++) {
			if (i % k == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime == true) {
			printf("%5d", i); cnt++;
		}
		if (cnt == 5) {
			printf("\n");  cnt = 0;
		}
	}





	/*printf("%d %d %d\n", 1, 123, 14);
	printf("%d %d %d\n", 123, 3, 1);
	printf("%d %d %d\n\n\n\n", 10, 123, 9);

	printf("%3d %3d %3d\n", 1, 123, 14);
	printf("%3d %3d %3d\n", 123, 3, 1);
	printf("%3d %3d %3d\n", 10, 123, 9);*/

	//srand(time(NULL));

	//int num = 0, rnum = 0;
	//while(1) {
	//	printf("정수 입력 : ");
	//	scanf_s("%d", &num);
	//	rnum = rand() % 9 + 1;
	//	printf("랜덤값 : %d \n", rnum);
	//	if (num % rnum == 0) {
	//		printf("당첨 \n");
	//		break;
	//	}
	//}


	// 정수를 계속 입력한다. 입력하는 정수의 범위는 1~ 50중에서만 입력
	// 정수를 입력할때 마다 난수를 발생시킨다.
	// 난수의 범위는 1~9 다.
	// 내가 입력한 정수가  난수의 배수라면  당첨 이라고 출력 하고 반복문종료



	//int num = rand()%37 + 21;
	//printf("%d", num);


	// 내가 입력한 정수에맞는 구구단을 출력한다.
	// 단,  5단을 출력할때는  5*5 = 25 다음에 6*5=30 으로 변경되어 출력

	//int num = 0;
	//printf("구구단수 입력 : ");
	//scanf_s("%d", &num);
	//for (int i = 1; i <= 9; i++) {
	//	if (num == 5 && i == 6) {
	//		int tmp = num;
	//		num = i;
	//		i = tmp;
	//	}
	//		
	//	printf("%d * %d = %d\n", num, i, num * i);

	//}



	// 구구단 2단을 출력 하고 ,  2 * 9 = 18 이 마지막줄에 출력되고 나면
	//  다음줄에  9 * 2 = 18 로 시작하여 9단 을 출력하세요.
	// 전체 변수는 총 2개 만 사용하세요.

	//int a = 2, b = 1;
	//for (; b <= 9; b++) {
	//	printf("%d * %d = %d \n", a, b, a * b);
	//}
	//b--;
	//for (; a <= 9; a++) {
	//	printf("%d * %d = %d \n", b, a, a * b);
	//}

	//int num = 0;

	//do{
	//	printf("정수 입력(0-종료) : ");
	//	scanf_s("%d", &num);
	//} while (num != 0);



	// while문
	//  int a=1;  초기값
	// while( a<=5 ){  조건식
	//  a++;  증감식
	// }

	// for문
	// for(int a=1; a<=5; a++){  초기값; 조건식; 증감식
	// }

	//do~while문
	// int a=1; 초기값
	// do{
	//    a++;   증감식
	// }while (a <= 5);  조건식







	// 1부터 10까지 출력하면서  짝수 출력할때는 *** 을 같이 출력하세요.

	//for (int i = 1; i <= 10; i++) {
	//	if (i % 2 == 0)
	//		printf("%d***\n", i);
	//	else
	//		printf("%d\n", i);
	//}

	// 1부터 10까지 반복문을 만들고 출력하는데
	// 숫자 출력 대신 ,  숫자 만큼 *을 출력하세요. 
	/*int line = 11;
	for (int i = 1; i <= line; i++) {
		for (int blank = 1; blank < i; blank++) {
			printf(" ");
		}
		for (int star = (line-i+1) * 2-1; star >=1; star--) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i <= line; i++) {
		for (int blank = line; blank > i; blank--) {
			printf(" ");
		}
		for (int star = 1; star <= i*2-1; star++) {
			printf("*");
		}
		printf("\n");
	}

*/


	// 반복문 - while, for, do~while
	//while (1) {

	//}
	/*for (int i = 1; i <= 10; i++) {
		printf("%d  \n", i);
	}*/

}