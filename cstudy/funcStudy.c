#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//   Sleep(1000);

int init(); // ���� ����
void draw(int gamer);  //�׸� �׸��� �Լ�
int game(int gamer);  //���� �����Լ�
void result(int select);  //��� ����Լ�

void main() {
	int gamer = init();
	int select = 0;
	printf("�߹��� ���� �Լ�ȣ��");
	select = game(gamer);
	result(select);
}
int init() {
	int cnt = 0,people=0;
	do {
		printf("�����ο� ���� : ");
		scanf_s("%d", &people);
		if (people > 7) printf(" �ִ� ���� �ο����� 7�� �Դϴ�.");
	} while (people > 7);
	cnt = people / 2 + 2;
	return cnt;
}
void draw(int gamer) {
	
	for (int i = 1; i <= gamer; i++) {
		printf("����������������");
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("��      ��");
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("��   %d  ��",i);
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("��      ��");
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("����������������");
		if (i != gamer) printf("     ");
	}
	printf("\n");




}
int game(int gamer) {
	int select;
	printf("��~�� �� ���� �� �Ա� \n");
	printf("�������� ���� �� ���ߴ� �� ����\n\n");
	printf("'�׸��� �Լ� ȣ����");
	for (int i = 1; i <= 10; i++) { Sleep(500); printf("."); }
	printf("'\n");
	draw(gamer);
	printf("\n���� �������� ��!!!! : ");
	scanf_s("%d", &select);
	return select;
}
void result(int select) {
	int com = rand() % 4 + 1;
	if (select == com) {
		printf("����!! \n\n\n");
	}
	else {
		printf("����� ����� ��� ���� �Ǿ����ϴ�.\n\n\n");
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
////����Լ� - �ڽ��� ���� ��Ű�� �Լ�
//// ����Լ���  ������ 4�� ��� �غ�����
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
//	printf("1���� %d������ ���� %d�Դϴ�.\n",num ,tot );
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
////999999������ ���ڸ� �Է��Ͽ�  �Է��� ���ڰ� ���ڸ� ��������
//// ���Ͽ� main�Լ����� ����ϱ�
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
//	printf("���� �Է� : ");
//	scanf_s("%d", &num);
//	printf("%d�� %d�ڸ��� �����̴�. \n",num,digit(num));
//}

//
//// ������ �ϳ� �Է��Ѵ�.
//// �Է��� ���������� ¦������ Ȧ�� ���� ����ϴ� �Լ��� �����
//// ��, 0 �� �Է��ϸ� ���� ��� ��µǾ���Ѵ�.
//
//void output(int num) {
//	if (num == 0)
//		printf("���� \n");
//	else if (num % 2 == 0)
//		printf("¦��\n");
//	else
//		printf("Ȧ��\n");
//}
//
//void main() {
//	int num = 0;
//	printf("�����Է� : ");
//	scanf_s("%d", &num);
//	output(num);
//}


//
////�Լ��̸��� �Լ��� ��ɿ� �´� �̸� ���� ���Ѵ�.���̹�ǥ�������
//// �Ű������� �Լ��� ������ ���� �ϴµ� �ܺε����Ͱ� �ʿ��Ѱ�� �����Ѵ�.
//// return ��ȯ ��  �Լ��� ���� �ǰ� ���� ��� ���� ���� �ܺο��� ����ؾ� �Ǵ°��
//// ��ȯŸ��  �Լ��̸�(�Ű����� )
//void sum(int a, int b) {
//	int add = a + b;
//	printf(" ������ �� �� : %d \n", add);
//}
//
//int total(int k, int e, int m) {
//	int add = k + e + m;
//	printf("������ %d \n", add);
//	return add;
//}
//void avg(int tot) {
//	printf("����� %d \n", tot / 3);
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
//	printf("����������������     ����������������     ����������������     ����������������\n");
//	printf("��      ��     ��      ��     ��      ��     ��      ��\n");
//	printf("��   1  ��     ��  2   ��     ��  3   ��     ��  4   ��\n");
//	printf("��      ��     ��      ��     ��      ��     ��      ��\n");
//	printf("����������������     ����������������     ����������������     ����������������\n");
//
//}
//
//
//int game() {
//	int select;
//	printf("��~�� ������ �� �Ա� \n");
//	Sleep(1000);
//	printf("�������� ���� �� ���ߴ� �� ����\n\n");
//	printf("'�׸��� �Լ�ȣ����");
//	for (int i = 1; i <= 10; i++) { Sleep(500); printf("."); }
//	printf("'\n");
//	draw();
//	printf("\n���� �������� ��!!!  :   ");
//	scanf_s("%d", &select);
//	return select;
//}
//void result(int select) {
//	int com = rand() % 4 + 1;
//	if (select == com) {
//		printf("����!!!\n\n\n");
//	}
//	else {
//		printf("����� ����� ��� ���� �Ǿ����ϴ�.\n\n\n");
//	}
//}
//
//void main() {
//	int select = 0;
//	printf("�߹��� ���� �Լ�ȣ��");
//	select = game();
//	result(select);
//}