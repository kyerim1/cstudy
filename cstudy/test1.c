#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	char ch = 0;

	printf("문자 입력 : ");
	scanf("%c", &ch);
	printf("%c문자의 아스키 코드 값은 %d입니다.", ch, ch);



	//int num = 0;
	//int  num2 = 0;
	//printf("정수 두개 입력 : ");
	////scanf_s("%d %d" , &num, &num2);
	//scanf_s("%d%d", &num, &num2);

	///*printf("두번째 정수 입력 : ");
	//scanf_s("%d", &num2);*/

	//printf(" 확인  %d  %d\n", num, num2);



	/*int day = 5;
	int lose = 15;

	printf(" 민수가 15Kg 감량 을 위해 하루 %dkg만큼 빼야한다.\n", 15/5 );*/

	// 민수가 다이어트를한다.
	// 목표치는  15kg 감량
	// 현재 몸무게는 75kg이다.
	// 5일동안 다이어트를 한다면  하루에 몇 kg 씩 감량 해야 하는가


	//int kor = 70, eng = 80, mat = 90;
	//int tot = 0;

	//tot = kor + eng + mat;
	//printf("국어 : %d , 영어 : %d , 수학 : %d \n", kor, eng, mat);
	//printf("총점 : %d \n", tot);


	 //ctrl+k+c  int num = 10; // 변수의 초기화
	//변수를 생성 하면서 처음 저장될 값 설정 하는거


	//float f = 3.1234567;  // 소수점 6자리
	//double d = 3.12345678901234567; // 소수점 15자리
	//long double ld = 3.123456789012345678;

	//printf(" %.15f  ,  %.15f   ,  %f  \n", f, d, ld);

	//printf(" %f  %lf  %lf \n", f, d, ld);

}



/*

class a(){  int b;}

void main(){
	a aaa = new a();
	cc(aaa );
	System.out.println( aaa.b );
}
void cc(a aa){
aa.b=10;
}

*/