#include <stdio.h>
#include <stdbool.h>

#define p 3.14

void main() {

	// bmi = (ü�� / (Ű(m����)*Ű(m����)))
	
	int kg = 0;
	float cm = 0;
	float bmi = 0;

	printf("�����Կ� Ű �Է� : ");
	scanf_s("%d %f", &kg, &cm);

	cm = cm / 100;

	bmi = kg / (cm * cm);

	printf("(%.1f)%s\n",bmi, (bmi>=20.0 && bmi <25.0) ?"ǥ���Դϴ�." : "ü�߰����� �ʿ��մϴ�.");


	/*int hour = 0, min=0, sec = 0;
	double time = 3.76;
	printf("%.2lf�ð���", time);
	hour = (int)time;
	time = time - hour;
	min = (int)(time * 60);
	time = time * 60 - min;
	sec = (int)(time * 60);


	printf(" %d�ð� %d�� %d���Դϴ�.  \n", hour,min,sec);*/


	/*int seats = 70, audience = 65;
	double rate = 0;

	rate = audience / (double)seats * 100;
	printf("����� : %.1lf%% \n", rate);*/


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



	// ��Ʈ ������ -  ��Ʈ ��������, ��Ʈ ����Ʈ ������
	// ��Ʈ �������� - and( &), or( | ), not ( ~ ), xor( ^ )
	// ��Ʈ ����Ʈ������ - left( << ), right( >> );
	// �����ʹ���
	//   bit - byte - kbyte - mbyte - gbyte-
	// bit -> 0 ,1 (2����)
	// 1byte (8bit) -> ���� , ���ڴ� �ִ� 255���� ����
	// 1kbyte (1024byte) -> ������� ����
	// 1mbyte ( 1024kbyte) -> mp3���� 1��
	// 1gbyte ( 1024mbyte) -> hd�� ��ȭ  30��



	// ������ ����  �����Ⱑ �ִ�.
	// �����⿡ �ڵ� �������� ���� 55�� �����ߴ�.
	//  ���� ������ 60�̻�Ǹ� ������� ���� �ǰ�
	//  ������ 50���� �Ǹ� �����Ⱑ ���� �ȴ�.
	//  ���� ������ �Է¹޾�   �������� ������ ����Ͻÿ�.

	//int hum = 0;
	//
	//printf("���� ���� : ");
	//scanf_s("%d", &hum);

	//printf(" %s  \n", hum >=60 ? "������ ����" :
	//	hum <= 50 ? " ������ ����" : "������ ������");


	//  ( ���ǽ� )  ?  ���ϰ�� : �����ϰ�� ;

	/*int result = 0;
	int a = 0, b = 0;
	result = (10 > 5) ? 1000 : 55;
	printf(" %d  \n", result);
	printf(" %s \n", (3 > 5) ? "5����ũ��" : "5�����۴�");

	(3 > 5) ? printf("5���� �۴�") : printf("5���� ũ��");
	(3 > 5) ? scanf_s("%d", &a) : scanf_s("%d", &b);
	printf("%d  %d  \n", a, b);
	
	(3 > 5) ? a = 10 : b = 30;*/


	//int num = 10;
	//float fnum = 4.53;
	//double dnum = 5.44;
	//char ch = 'r';

	//printf("intŸ���� �޸� ũ�� : %d \n", sizeof(num) );
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


	printf("������ : ");
	scanf_s("%d", &r);

	printf("�ڵ��� �ӵ� : ");
	scanf_s("%d", &k);

	dist = r * 2 * pi;

	time = (dist / (float)k ) * 60;
	printf("Ʈ���� ���� : %dkm \n", dist);
	printf("�ڵ����Ǽӵ� : �ü� %d K \n", k);
	printf("�ι��� ���� : %f�� \n", time);*/


	//  ���� Ʈ���� �������� r �̰�  
	//   Ʈ������ �ڵ����� �޸���.
	//  �ڵ����� �ӵ��� k/h �̴�.
	//  �ι����� �����ϴµ� �� ���� �ɸ��°�?






	//  and ( && )  ,  or ( || ) , not ( ! )
	// and��  �ΰ� �ǿ����ڰ� ��� ���ϰ�쿡�� ��
	// or�� �ΰ� �ǿ����ڰ� ��� �����ϰ�쿡�� ����
	// not ��  ���� ( ��->����,  ����->��)

	//int money = 5300;
	//int ���뱹�� = 6500;
	//int ��������� = 1800;
	//
	//int a = 23;
	////���� a�� 10 �� 50������ ���̳�?
	//printf("%d \n", 10 < a  &&  a < 50 );



	//printf(" %d  \n", (money >= ���뱹��) && (money >= ���������));
	//printf("%d  \n", (money >= ���뱹��) || (money >= ���������));
	//printf(" %d \n", !(money <= ���뱹��) );


}