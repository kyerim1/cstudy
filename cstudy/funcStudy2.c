#include <stdio.h>
#include <stdlib.h>


//
//void scoreInput(); // 국어 ,영어 , 수학 세과목
//int total(int kor, int eng, int mat); //총점
//int average(int kor, int eng, int mat); //평균
//void grade(int avg); //평점 A(~90),B(~80),C(~70),D(~60),  F
//void main() {
//	scoreInput();
//}
//void scoreInput() {
//	int kor=0, eng=0, mat=0, avg=0;
//	printf("국어, 영어, 수학 점수입력 : ");
//	scanf_s("%d %d %d", &kor, &eng, &mat);
//
//	avg = average(kor,eng,mat);
//	grade(avg);
//}
//int average(int kor, int eng, int mat) {
//	int tot = 0, avg = 0;
//	tot= total(kor, eng, mat);
//	avg = tot / 3;
//	return avg;
//}
//int total(int kor, int eng, int mat){
//	return kor + eng + mat;
//}
//void grade(int avg) {
//	char jum = 0;
//	switch (avg/10) {
//	case 10:
//	case 9:   jum = 'A'; break;
//	case 8: jum = 'B'; break;
//	case 7: jum = 'C'; break;
//	case 6: jum = 'D'; break;
//	default:
//		jum = 'F';
//	}
//	printf("평균 : %d점,   평점 : %c등급 \n", avg, jum);
//}

//
////종이에 도형을 그려주는 로봇 팔을 개발했다.
//// 도형을 그리기위해 도형의 중심좌표, 꼭지점갯수, 너비,높이 입력
//// 받아 그리는 코드를 만드세요.(원, 삼각형, 사각형)
//int posSetX();
//int posSetY();
//int pointSet();
//void draw(int posX, int posY, int point);
//void circle(posX, posY, width);
//void triangle(posX, posY, width, height);
//void rect(posX, posY, width, height);
//void main() { 
//	int posX = 0, posY = 0, point = 0;
//	posX = posSetX();
//	posY = posSetY();
//	point = pointSet();
//	draw(posX, posY, point);// 그리기는 꼭지점의좌표출력를 하면된다.
//}
//int posSetX(){// x축 좌표
//	int x = 0;
//	printf("좌표 X축 설정 : ");
//	scanf_s("%d", &x);
//	return x;
//}
//int posSetY(){// y축 좌표
//	int y = 0;
//	printf("좌표 Y축 설정 : ");
//	scanf_s("%d", &y);
//	return y;
//}
//int pointSet(){// 꼭지점 입력
//	int pCnt = 0;
//	printf("도형의 꼭지점 갯수 입력 : ");
//	scanf_s("%d", &pCnt);
//	return pCnt;
//} 
//void draw(int posX, int posY, int point){// 너비와 높이 입력받아 그리기 시작
//	int width = 0, height = 0;
//
//	if (point == 1) {
//		printf("반지름 입력 : ");
//		scanf_s("%d", &width);
//	}
//	else {
//		printf("너비 높이 입력 : ");
//		scanf_s("%d %d", &width, &height);
//	}
//	
//	if(point==1)// 원 
//		circle(posX, posY, width);
//	if(point==3)//삼각형
//		triangle(posX, posY, width, height);
//	if(point==4)//사각형
//		rect(posX, posY, width, height);
//} 
//// 원 
//void circle(posX, posY, width) {
//	printf("(%d,%d)좌표에서 반지름 %d\n", posX, posY, width);
//	printf("원 그리는중\n\n");
//}
////삼각형
//void triangle(posX, posY, width, height) {
//	int p1x = 0, p1y = 0, p2x = 0;
//	int p2y = 0, p3x = 0, p3y = 0;
//
//	p1x = posX ;
//	p1y = posY - height / 2;
//
//	p2x = posX - width / 2;
//	p2y = posY + height / 2;
//
//	p3x = posX + width / 2;
//	p3y = p2y;
//
//	printf("---(%d,%d)---\n",p1x,p1y);
//	printf("(%d,%d)---(%d,%d)\n", p2x, p2y, p3x, p3y);
//	printf("삼각형 그리는중\n\n");
//
//}
////사각형
//void rect(posX, posY, width, height) {
//	int p1x = 0, p1y = 0, p2x = 0;
//	int p2y = 0, p3x = 0, p3y = 0, p4x = 0, p4y = 0;
//
//	p1x = posX - width / 2;
//	p1y = posY - height / 2;
//
//	p2x = posX + width / 2;
//	p2y = posY - height / 2;
//
//	p3x = posX - width / 2;
//	p3y = posY + height / 2;
//
//	p4x = posX + width / 2;
//	p4y = posY + height / 2;
//
//	printf("(%d,%d) - (%d,%d) \n", p1x, p1y, p2x, p2y);
//	printf("(%d,%d) - (%d,%d) \n", p3x, p3y, p4x, p4y);
//	printf("사각형 그리는중\n\n");
//}




//
//int init();
//int   up_and_down(int max);
//void result(int count );
//
//void main() {
//	int max = init();  // 랜덤 최대범위 설정
//	int count = up_and_down(max);//업다운 게임 시작
//	// 업다운 게임 하는데 범위내에서 숫자를 입력하지않으면
//	// 즉시 게임 종료 하면서 count 1000 주기
//	result(count);	
//}
//int init() {
//	int range_max=0;
//	printf("난수 최대 범위 설정 : ");
//	scanf_s("%d", &range_max);
//	return range_max;
//}
//int   up_and_down(int max){
//	int com = 0, user=0, count=0 , iMin=1, iMax=max;
//	printf("\n\n========== 게임 시작 ==========\n\n\n");
//	com = rand() % max + 1;
//
//	while (1) {
//		printf("숫자 입력 : ");
//		scanf_s("%d", &user);
//		count++;
//
//		if (!(iMin <= user && iMax >= user))
//		{
//			return 1000;
//		}
//		if (com == user) {
//			return count;
//		}
//		else if (com > user) {
//			printf("업\n");
//			iMin = user + 1;
//		}
//		else if (com < user) {
//			printf("다운\n");
//			iMax = user - 1;
//		}
//	}
//
//	return 0;
//}
//void result(int count) {
//	printf("당신은 %d번만에 게임을 끝냈습니다.\n", count );
//	if (count > 8)
//		printf("당신은 다시는 게임 하지마세요\n\n");
//	else if (count > 4)
//		printf("노력하면 할 수 있습니다. 다시도전 해보세요\n\n");
//	else
//		printf("당신은 소질이 있습니다. 잔머리에\n\n");
//}