#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

void main() {


	// ������ �����̵� ������ ����� �ִ� ��ȫ��
	// ����Ű��  ��(w), �Ʒ�(s), ����(a), ������(d), 
	//  ����(k), ����(l) �� ��� �ϰ��� �Ѵ�.
	//  Ű���� ���ۿ� ���� ���� �� ������ printf �� ����ϼ���
	// ������ Ű�� �ƴ� Ű�� �����ҽÿ� �ƹ��͵� ��������ʴ´�.
	char k = 0;

	scanf("%c", &k);

	switch (k) {
	case 'w':
		printf("�� �̵���"); break;
	case'a':printf("���� �̵���"); break;
	case's':printf("�Ʒ� �̵���"); break;
	case 'd':printf("������ �̵���"); break;
	case 'k':printf("������"); break;
	case 'l':printf("������"); break;
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



	






	
	// switch ~ case ��
	//  case �� ���� �� ���� ���� ���� �Ǵ� ���ǹ��̴�.

	//int num1=0, num2=0, res=0;
	//char op;

	//printf("��Ģ���� �Է�(����) : ");
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
	//		printf("�߸��� �������Է��Դϴ�.");
	//}
	//printf("%d%c%d=%d \n", num1, op, num2, res);

	//int num = 1;
	//switch (num) {
	//	case 0:
	//	case 1:
	//		printf("���� ����"); break;
	//	case 2:
	//		printf("���� ����"); break;
	//	case 3:
	//		printf("���α׷� ����"); break;

	//	default:
	//		printf("�߸��� �����Դϴ�.");
	//}


	// �μ��� ���� �Ͽ��ٰ� ���� ���Դ�.
	// �Ź��忡 ���۰��� ������ ���� 
	// ���� ��� �Դٴ°� �����ߴ�. 
	//  ���� �µ��� 19�� ���  3������ 22 ������ 
	// �µ��� �÷��ְ� ������ ���ߴ� ���Ϸ��ý����̴ٶ��
	//  �μ��� ���� ��� �������  ���� ������ �µ��� �����Ͽ� 3�� 
	// ���� �µ����� �÷��ִ� ���Ϸ��� ���۽�Ű����. 
	//  ���οµ��� 25����� ���Ϸ���������
	// 1. �μ��� �������Դ°�? (1- ����, 2-�ȵ���)
	// 2. ���� ���µ���?  

	//int move = 0 , temp=0;
	//printf("�Ĺ�Ȩ? ");  scanf_s("%d", &move);
	//
	//
	//if (move == 1) {
	//	printf("���µ�? "); scanf_s("%d", &temp);
	//	if (temp >= 25) {
	//		printf("���Ϸ� ���� ����");
	//	}
	//	else {
	//		printf("���Ϸ� ���� ����µ� %d, �����µ� %d \n", temp, temp + 3);
	//	}
	//}
	//else {
	//	printf("���� ����");
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
	//	printf("���ǽ� �� ���̶�� ����");
	//}
	//else if (5 < 1)
	//{
	//	printf("���ǽ��� �����̶�� ����");
	//}

}