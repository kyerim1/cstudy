#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

void main() {


	// 간단한 아케이드 게임을 만들고 있는 재홍이
	// 방향키로  위(w), 아래(s), 왼쪽(a), 오른쪽(d), 
	//  공격(k), 점프(l) 을 사용 하고자 한다.
	//  키보드 조작에 따라 동작 할 내용을 printf 로 출력하세요
	// 지정된 키가 아닌 키를 조작할시에 아무것도 출력하지않는다.
	char k = 0;

	scanf("%c", &k);

	switch (k) {
	case 'w':
		printf("위 이동해"); break;
	case'a':printf("왼쪽 이동해"); break;
	case's':printf("아래 이동해"); break;
	case 'd':printf("오른쪽 이동해"); break;
	case 'k':printf("공격해"); break;
	case 'l':printf("점프해"); break;
	}







	
	int board[20][20]={ 0, } ,x=9,y=10;
	char k = 0;
	board[y][x] = 1;
	while (1) {
		for (int i = 0; i < 20; i++) {
			for (int k = 0; k < 20; k++) {
				if (board[i][k] == 1)
					printf("%c", '$');
				else
					printf(" ");
			}
			printf("\n");
		}
		k = getch();
		board[y][x] = 0;
		switch (k) {
		case 'w':
			y--; break;
		case'a':x--; break;
		case's':y++; break;
		case 'd':x++; break;
		}
		board[y][x] = 1;
		if (k == 'k') {
			system("cls");
			board[y][x + 1] = 2;
			for (int i = 0; i < 20; i++) {
				for (int k = 0; k < 20; k++) {
					if (board[i][k] == 1)
						printf("%c", '$');
					else if (board[i][k] == 2)
						printf("%c", '^');
					else
						printf(" ");
				}
				printf("\n");
			}
			Sleep(2000);
			board[y][x + 1] = 0;
		}
		if (k == 'l') {
			
			for (int a = 1; a <= 4; a++) {
				system("cls");
				board[y][x] = 0;
				if (a <= 2)y--;
				else y++;
				board[y][x] = 1;
				for (int i = 0; i < 20; i++) {
					for (int k = 0; k < 20; k++) {
						if (board[i][k] == 1)
							printf("%c", '$');
						else
							printf(" ");
					}
					printf("\n");
				}
				Sleep(500);

			}
		}
		

		system("cls");
	}



	






	
	// switch ~ case 문
	//  case 에 설정 된 값에 따라 동작 되는 조건문이다.

	//int num1=0, num2=0, res=0;
	//char op;

	//printf("사칙연산 입력(정수) : ");
	//scanf("%d%c%d", &num1, &op, &num2);

	//switch (op) {
	//	case '+':
	//		res = num1 + num2; break;
	//	case '-':
	//		res = num1 - num2; break;
	//	case '*':
	//		res = num1 * num2; break;
	//	case '/':
	//		res = num1 / num2; break;
	//	default:
	//		printf("잘못된 연산자입력입니다.");
	//}
	//printf("%d%c%d=%d \n", num1, op, num2, res);

	//int num = 1;
	//switch (num) {
	//	case 0:
	//	case 1:
	//		printf("파일 저장"); break;
	//	case 2:
	//		printf("파일 열기"); break;
	//	case 3:
	//		printf("프로그램 종료"); break;

	//	default:
	//		printf("잘못된 선택입니다.");
	//}


	// 민수가 외출 하였다가 집에 들어왔다.
	// 신발장에 동작감지 센서에 의해 
	// 집에 들어 왔다는걸 감지했다. 
	//  집의 온도가 19도 라면  3도높은 22 도까지 
	// 온도를 올려주고 가동을 멈추는 보일러시스템이다라면
	//  민수가 집에 들어 왔을경우  현재 내부의 온도를 측정하여 3도 
	// 높은 온도까지 올려주는 보일러를 동작시키세요. 
	//  내부온도가 25도라면 보일러가동안함
	// 1. 민수가 집에들어왔는가? (1- 들어옴, 2-안들어옴)
	// 2. 현재 집온도는?  

	//int move = 0 , temp=0;
	//printf("컴백홈? ");  scanf_s("%d", &move);
	//
	//
	//if (move == 1) {
	//	printf("집온도? "); scanf_s("%d", &temp);
	//	if (temp >= 25) {
	//		printf("보일러 가동 안함");
	//	}
	//	else {
	//		printf("보일러 가동 현재온도 %d, 설정온도 %d \n", temp, temp + 3);
	//	}
	//}
	//else {
	//	printf("동작 없음");
	//}






	//double  height = 179.5;
	//double  weight = 75.0;
	//if ( height >= 187.5 && weight < 80)
	//{
	//	printf("ok \n");
	//}
	//else
	//{
	//	printf("cancel\n");
	//}



	//if (5 > 6) {
	//	printf("조건식 이 참이라면 실행");
	//}
	//else if (5 < 1)
	//{
	//	printf("조건식이 거짓이라면 실행");
	//}

}