#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//   Sleep(1000);

int init(); // 게임 설정
void draw(int gamer);  //그림 그리는 함수
int game(int gamer);  //게임 시작함수
void result(int select);  //결과 출력함수

void main() {
	int gamer = init();
	int select = 0;
	printf("야바위 게임 함수호출");
	select = game(gamer);
	result(select);
}
int init() {
	int cnt = 0,people=0;
	do {
		printf("참가인원 설정 : ");
		scanf_s("%d", &people);
		if (people > 7) printf(" 최대 참가 인원수는 7명 입니다.");
	} while (people > 7);
	cnt = people / 2 + 2;
	return cnt;
}
void draw(int gamer) {
	
	for (int i = 1; i <= gamer; i++) {
		printf("┌──────┐");
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("│      │");
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("│   %d  │",i);
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("│      │");
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("└──────┘");
		if (i != gamer) printf("     ");
	}
	printf("\n");




}
int game(int gamer) {
	int select;
	printf("자~아 돈 놓고 돈 먹기 \n");
	printf("지나가는 개도 다 맞추는 그 게임\n\n");
	printf("'그리기 함수 호출중");
	for (int i = 1; i <= 10; i++) { Sleep(500); printf("."); }
	printf("'\n");
	draw(gamer);
	printf("\n왕을 찍으세요 왕!!!! : ");
	scanf_s("%d", &select);
	return select;
}
void result(int select) {
	int com = rand() % 4 + 1;
	if (select == com) {
		printf("정답!! \n\n\n");
	}
	else {
		printf("당신의 재산이 모두 몰수 되었습니다.\n\n\n");
	}
}






//
//
//int rec_func(int n) {
//	if (n == 1) return 1;
//	return n + rec_func(n - 1);
//}
//
//void main() {
//	int res = rec_func(10);
//	printf("%d", res);
//}
//
//
//int fac(int num) {
//	if (num == 1) return 1;
//	return num * fac(num - 1);
//}
//
//void main() {
//	printf("%d \n",fac(5));
//}





//
////재귀함수 - 자신을 실행 시키는 함수
//// 재귀함수로  구구단 4단 출력 해보세요
//void out(int num, int i) {
//
//	if (i == 10) return;
//
//	printf("%d * %d = %d\n", num, i, num * i);
//
//	out(num, i + 1);
//}
//
//void main() {
//	out(4,1);
//}


//
//void sum(int num);
//
//void main() {
//	sum(10);
//	sum(100);
//}
//
//void sum(int num)
//{
//	int tot = 0, i=1;
//	for (; i <= num; i++) {
//		tot += i;
//	}
//
//	printf("1부터 %d까지의 합은 %d입니다.\n",num ,tot );
//}
//


//double centi_to_meter(int t);
//
//void main() {
//
//	double res;
//
//	res = centi_to_meter(187);
//	printf("%.2lfm\n", res);
//
//}
//double centi_to_meter(int t) {
//	double m = 0;
//
//	m = t / 100.0;
//
//	return m;
//}




//
////999999이하의 숫자를 입력하여  입력한 숫자가 몇자리 숫자인지
//// 구하여 main함수에서 출력하기
//
//int digit(int num) {
//	int mul = 10;
//
//	for (int i = 1; i <= 6; i++) {
//		printf("i -> %d \n", i);
//		if (num / mul == 0) return i;
//		mul *= 10;
//	}
//	return 0;
//}
//
//void main() {
//	int num = 0;
//	printf("정수 입력 : ");
//	scanf_s("%d", &num);
//	printf("%d는 %d자리수 숫자이다. \n",num,digit(num));
//}

//
//// 정수를 하나 입력한다.
//// 입력한 정수에대해 짝수인지 홀수 인지 출력하는 함수를 만들기
//// 단, 0 을 입력하면 에러 라고 출력되어야한다.
//
//void output(int num) {
//	if (num == 0)
//		printf("에러 \n");
//	else if (num % 2 == 0)
//		printf("짝수\n");
//	else
//		printf("홀수\n");
//}
//
//void main() {
//	int num = 0;
//	printf("정수입력 : ");
//	scanf_s("%d", &num);
//	output(num);
//}


//
////함수이름은 함수의 기능에 맞는 이름 으로 정한다.네이밍표기법따라서
//// 매개변수는 함수의 내용을 실행 하는데 외부데이터가 필요한경우 생성한다.
//// return 반환 은  함수가 실행 되고 나온 결과 값에 대해 외부에서 사용해야 되는경우
//// 반환타입  함수이름(매개변수 )
//void sum(int a, int b) {
//	int add = a + b;
//	printf(" 두정수 의 합 : %d \n", add);
//}
//
//int total(int k, int e, int m) {
//	int add = k + e + m;
//	printf("총점은 %d \n", add);
//	return add;
//}
//void avg(int tot) {
//	printf("평균은 %d \n", tot / 3);
//}
//void main() {
//	int kor = 80, eng = 88, mat = 90;
//	int tot = total(kor, eng, mat);
//	avg(tot );
//	/*int a1 = 10 , b1 = 20;
//	sum(a1, b1);*/
//
//}




//
//
//void draw() {
//
//	printf("┌──────┐     ┌──────┐     ┌──────┐     ┌──────┐\n");
//	printf("│      │     │      │     │      │     │      │\n");
//	printf("│   1  │     │  2   │     │  3   │     │  4   │\n");
//	printf("│      │     │      │     │      │     │      │\n");
//	printf("└──────┘     └──────┘     └──────┘     └──────┘\n");
//
//}
//
//
//int game() {
//	int select;
//	printf("자~아 돈놓고 돈 먹기 \n");
//	Sleep(1000);
//	printf("지나가는 개도 다 맞추는 그 게임\n\n");
//	printf("'그리기 함수호출중");
//	for (int i = 1; i <= 10; i++) { Sleep(500); printf("."); }
//	printf("'\n");
//	draw();
//	printf("\n왕을 찍으세요 왕!!!  :   ");
//	scanf_s("%d", &select);
//	return select;
//}
//void result(int select) {
//	int com = rand() % 4 + 1;
//	if (select == com) {
//		printf("정답!!!\n\n\n");
//	}
//	else {
//		printf("당신의 재산이 모두 몰수 되었습니다.\n\n\n");
//	}
//}
//
//void main() {
//	int select = 0;
//	printf("야바위 게임 함수호출");
//	select = game();
//	result(select);
//}