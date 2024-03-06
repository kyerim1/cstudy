#include <stdio.h>
#include <stdbool.h>

#define p 3.14

void main() {

	// bmi = (체중 / (키(m단위)*키(m단위)))
	
	int kg = 0;
	float cm = 0;
	float bmi = 0;

	printf("몸무게와 키 입력 : ");
	scanf_s("%d %f", &kg, &cm);

	cm = cm / 100;

	bmi = kg / (cm * cm);

	printf("(%.1f)%s\n",bmi, (bmi>=20.0 && bmi <25.0) ?"표준입니다." : "체중관리가 필요합니다.");


	/*int hour = 0, min=0, sec = 0;
	double time = 3.76;
	printf("%.2lf시간은", time);
	hour = (int)time;
	time = time - hour;
	min = (int)(time * 60);
	time = time * 60 - min;
	sec = (int)(time * 60);


	printf(" %d시간 %d분 %d초입니다.  \n", hour,min,sec);*/


	/*int seats = 70, audience = 65;
	double rate = 0;

	rate = audience / (double)seats * 100;
	printf("입장률 : %.1lf%% \n", rate);*/


	//printf("  %d  \n", 24 & 19);
	//printf(" %d  \n", 26 | 12);
	//printf(" %d  \n", ~14);
	//
	//int num = -14;
	//int res = 0;

	//res = (~num) + 1;
	//printf(" %d  %d  \n", ~num, res);

	//printf("%d  \n", 43 ^ 15);

	//printf("%d  \n", 4 << 2);
	//printf("%d  \n", 16 >> 3);

	//printf("%d  \n", 11 * 9);
	//printf(" %d  \n", (11 << 3) + 11);



	// 비트 연산자 -  비트 논리연산자, 비트 시프트 연산자
	// 비트 논리연산자 - and( &), or( | ), not ( ~ ), xor( ^ )
	// 비트 시프트연산자 - left( << ), right( >> );
	// 데이터단위
	//   bit - byte - kbyte - mbyte - gbyte-
	// bit -> 0 ,1 (2진수)
	// 1byte (8bit) -> 문자 , 숫자는 최대 255까지 가능
	// 1kbyte (1024byte) -> 몇개정도의 문단
	// 1mbyte ( 1024kbyte) -> mp3음악 1분
	// 1gbyte ( 1024mbyte) -> hd급 영화  30분



	// 종권이 집에  가습기가 있다.
	// 가습기에 자동 설정으로 습도 55로 설정했다.
	//  집에 습도가 60이상되면 가습기는 중지 되고
	//  습도가 50이하 되면 가습기가 가동 된다.
	//  집의 습도를 입력받아   가습기의 동작을 출력하시오.

	//int hum = 0;
	//
	//printf("현재 습도 : ");
	//scanf_s("%d", &hum);

	//printf(" %s  \n", hum >=60 ? "가습기 중지" :
	//	hum <= 50 ? " 가습기 가동" : "가습기 운행중");


	//  ( 조건식 )  ?  참일경우 : 거짓일경우 ;

	/*int result = 0;
	int a = 0, b = 0;
	result = (10 > 5) ? 1000 : 55;
	printf(" %d  \n", result);
	printf(" %s \n", (3 > 5) ? "5보다크다" : "5보다작다");

	(3 > 5) ? printf("5보다 작다") : printf("5보다 크다");
	(3 > 5) ? scanf_s("%d", &a) : scanf_s("%d", &b);
	printf("%d  %d  \n", a, b);
	
	(3 > 5) ? a = 10 : b = 30;*/


	//int num = 10;
	//float fnum = 4.53;
	//double dnum = 5.44;
	//char ch = 'r';

	//printf("int타입의 메모리 크기 : %d \n", sizeof(num) );
	//printf(" %d  \n", sizeof(fnum));
	//printf("%d \n", sizeof(dnum));
	//printf("%d \n", sizeof(ch));




	
	//int kor = 3, eng = 5, mat = 4;
	//int credits = 0;
	//int res = 0;
	//float kscore = 3.8, escore = 4.4, mscore = 3.9;
	//float grade = 0;

	//credits = kor + eng + mat;
	//grade = (kscore + escore + mscore) / 3;
	//res = credits >= 10 && grade > 4.0;
	//printf("%d ", res );


	/*int r = 0, k = 0;
	const float pi = 3.14;
	int dist = 0;
	float time = 0;


	printf("반지름 : ");
	scanf_s("%d", &r);

	printf("자동차 속도 : ");
	scanf_s("%d", &k);

	dist = r * 2 * pi;

	time = (dist / (float)k ) * 60;
	printf("트랙의 길이 : %dkm \n", dist);
	printf("자동차의속도 : 시속 %d K \n", k);
	printf("두바퀴 완주 : %f분 \n", time);*/


	//  원형 트랙의 반지름이 r 이고  
	//   트랙위를 자동차가 달린다.
	//  자동차의 속도는 k/h 이다.
	//  두바퀴를 완주하는데 몇 분이 걸리는가?






	//  and ( && )  ,  or ( || ) , not ( ! )
	// and는  두개 피연산자가 모두 참일경우에만 참
	// or은 두개 피연산자가 모두 거짓일경우에만 거짓
	// not 은  부정 ( 참->거짓,  거짓->참)

	//int money = 5300;
	//int 순대국밥 = 6500;
	//int 편의점라면 = 1800;
	//
	//int a = 23;
	////변수 a는 10 과 50사이의 값이냐?
	//printf("%d \n", 10 < a  &&  a < 50 );



	//printf(" %d  \n", (money >= 순대국밥) && (money >= 편의점라면));
	//printf("%d  \n", (money >= 순대국밥) || (money >= 편의점라면));
	//printf(" %d \n", !(money <= 순대국밥) );


}