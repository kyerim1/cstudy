#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void main() {

	int num = 0, cnt=0;
	bool isPrime = true;
	printf("2 �̻��� ���� �Է� : ");
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
	//	printf("���� �Է� : ");
	//	scanf_s("%d", &num);
	//	rnum = rand() % 9 + 1;
	//	printf("������ : %d \n", rnum);
	//	if (num % rnum == 0) {
	//		printf("��÷ \n");
	//		break;
	//	}
	//}


	// ������ ��� �Է��Ѵ�. �Է��ϴ� ������ ������ 1~ 50�߿����� �Է�
	// ������ �Է��Ҷ� ���� ������ �߻���Ų��.
	// ������ ������ 1~9 ��.
	// ���� �Է��� ������  ������ ������  ��÷ �̶�� ��� �ϰ� �ݺ�������



	//int num = rand()%37 + 21;
	//printf("%d", num);


	// ���� �Է��� �������´� �������� ����Ѵ�.
	// ��,  5���� ����Ҷ���  5*5 = 25 ������ 6*5=30 ���� ����Ǿ� ���

	//int num = 0;
	//printf("�����ܼ� �Է� : ");
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



	// ������ 2���� ��� �ϰ� ,  2 * 9 = 18 �� �������ٿ� ��µǰ� ����
	//  �����ٿ�  9 * 2 = 18 �� �����Ͽ� 9�� �� ����ϼ���.
	// ��ü ������ �� 2�� �� ����ϼ���.

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
	//	printf("���� �Է�(0-����) : ");
	//	scanf_s("%d", &num);
	//} while (num != 0);



	// while��
	//  int a=1;  �ʱⰪ
	// while( a<=5 ){  ���ǽ�
	//  a++;  ������
	// }

	// for��
	// for(int a=1; a<=5; a++){  �ʱⰪ; ���ǽ�; ������
	// }

	//do~while��
	// int a=1; �ʱⰪ
	// do{
	//    a++;   ������
	// }while (a <= 5);  ���ǽ�







	// 1���� 10���� ����ϸ鼭  ¦�� ����Ҷ��� *** �� ���� ����ϼ���.

	//for (int i = 1; i <= 10; i++) {
	//	if (i % 2 == 0)
	//		printf("%d***\n", i);
	//	else
	//		printf("%d\n", i);
	//}

	// 1���� 10���� �ݺ����� ����� ����ϴµ�
	// ���� ��� ��� ,  ���� ��ŭ *�� ����ϼ���. 
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


	// �ݺ��� - while, for, do~while
	//while (1) {

	//}
	/*for (int i = 1; i <= 10; i++) {
		printf("%d  \n", i);
	}*/

}