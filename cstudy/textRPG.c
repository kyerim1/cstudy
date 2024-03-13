#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>

void color(int);
char startScreen(); // ���� ȭ��
void menu(char); // �޴� ���� ���� 
void saveFile();//����
void loadFile();//�ҷ�����
void game();// ���ӽ���
void gameInit(void**); //���� �ʱ�ȭ
void fight();// ���� ����
void gameStory(void**); // ����

void main() {
	menu( startScreen() );
}
void gameStory(void** avata) {
	int age = *((int*)avata[0]), level = *((int*)avata[2]);
	char job[50], life[20],look[50];

	strcpy(job, (char*)avata[1]);
	strcpy(life, (char*)avata[3]);
	strcpy(look, (char*)avata[4]);
	char board[10][17] = { 0, };
	int X = 8, headY = 8, bodyY=9;
	board[headY][X] = 1;
	board[bodyY][X] = 2;
	int ySize = sizeof(board)/sizeof(board[0]), xSize = sizeof(board[0]);
	for (int i = 1; i <= 6; i++) {
		int posx = rand() % 17;
		int posy = rand() % 10;
		if (posx == X ) {
			i--;
			continue;
		}
		board[posy][posx] = 6;
	}
	while (1) {
		for (int i = 0; i < ySize; i++) {
			for (int k = 0; k < xSize; k++) {
				if (board[i][k] == 0)
					printf("  ");
				else if (board[i][k] == 6)
					printf("��");
				else if (board[i][k] == 1)
					printf("��");
				else if (board[i][k] == 2)
					printf("��");
			}
			printf("\n");
		}
		Sleep(1000);
		system("cls");
		for (int i = ySize-1; i > 0 ; i--) {
			for (int k = 0; k < xSize; k++) {
				board[i][k]=board[i-1][k];
			}
		}
		memset(board[0], 0, sizeof(char)*xSize);
		for (int i = 0; i < 2; i++) {
			int posx = rand() % 17;
			if (posx == X) {
				i--;
				continue;
			}
			board[0][posx] = 6;
		}
	}
}
void game() {
	int age = 0,level=0;
	char job[50], life[20], look[50];
	void* avata[5] = { &age, job, &level, life, look };

	printf("����� �ƹ�Ÿ�� ���� ���ּ���\n");
	Sleep(1000);
	gameInit(avata);
	system("cls");

	gameStory(avata);
}

void gameInit(void** avata) {

	char job_list[5][20] = { "���л�","����л�","���ػ�","�Ǿ���","��ȥ��" };
	puts("\n��������");
	for (int i = 0; i < 5; i++)
		printf("%d. %s", i + 1, job_list[i]);
	char job_select = getch();
	Sleep(1000);

	char life_list[5][20] = { "������","�����","������","�߹���","����" };
	puts("\n�λ� ���̵� ����");
	for (int i = 0; i < 5; i++)
		printf("%d. %s �λ�", i + 1, life_list[i]);
	char life_select = getch();
	Sleep(1000);

	char appear_list[5][50] = { "Ű�� ������ �߻���(�̻�) �ܸ�",
		"Ű�� ũ���� ��ȭ�� �Ǻ�","Ű �ؼ� �ܸ� �ؼ�","�ܸ�, Ű ��� , ��Ҹ��� ����" };
	puts("\n�ܸ� ���� ");
	for (int i = 0; i < 4; i++)
		printf("%d. %s", i + 1, appear_list[i]);
	char appearance_select = getch();

	*((int*)avata[0]) = job_select == '3' ? 26 : job_select == '4' ? 40 : job_select == '5' ? 32 : job_select - 33;
	strcpy( (char*)avata[1], job_list[job_select - 49]);
	*((int*)avata[2]) = life_select - 48;
	strcpy((char*)avata[3], life_list[life_select - 49]);
	strcpy((char*)avata[4], appear_list[appearance_select - 49]);

	printf("\n\n����� %s %s�̰�, %s�� �������ϴ�.", life_list[life_select - 49],
		job_list[job_select - 49], appear_list[appearance_select - 49]);
	Sleep(5000);
}

void loadFile() {
	Sleep(1000);
	printf("�ҷ����� ����");
	Sleep(1000);
	system("cls");
	game();
}

void menu(char select) {
	switch (select) {
	case '1'://������
		game(); break;
	case '2'://�̾��ϱ�
		loadFile(); break;
	case '3'://����
		printf("������ ����"); break;
	case '4': //������
		printf("������"); break;
	case '5': //����
		return;
	}
}

char startScreen() {
	color(4); printf("T "); color(1); printf("E "); color(6); printf("X ");
	color(7); printf("T "); color(2); printf("R "); color(9); printf("P ");
	color(4); printf("G \n"); color(7);

	//Beep(330, 300);	Beep(290, 300); Beep(260, 300); Beep(290, 300);
	//Beep(330, 300); Beep(330, 300); Beep(330, 300);
	//Beep(290, 300); Beep(290, 300); Beep(290, 300);
	//Beep(330, 300); Beep(330, 300); Beep(330, 300);
	//Beep(330, 300);	Beep(290, 300); Beep(260, 300); Beep(290, 300);
	//Beep(330, 300); Beep(330, 300); Beep(330, 300);
	//Beep(290, 300); Beep(290, 300); Beep(330, 300); Beep(290, 300); Beep(260, 300);
	
	/*Beep(260, 500); Beep(340, 500); Beep(380, 500); Beep(420, 500); Beep(380, 500);
	Beep(340, 500); Beep(380, 700);
	Beep(420, 500); Beep(340, 500); Beep(380, 500);	Beep(340, 500); Beep(290, 500); Beep(260, 700);
	Beep(260, 500); Beep(340, 500); Beep(380, 500); Beep(420, 500); Beep(380, 500);
	Beep(340, 500); Beep(380, 700);
	Beep(420, 500); Beep(340, 500); Beep(380, 500); Beep(290, 500); Beep(330, 500); Beep(340, 300);
	Beep(380, 500); Beep(380, 500); Beep(380, 500); Beep(340, 500); Beep(380, 500); Beep(420, 300);
	Beep(340, 700);
	Beep(290, 500); Beep(290, 500); Beep(260, 500); Beep(420, 500); Beep(380, 500);
	Beep(520, 500); Beep(420, 500); Beep(380, 500); Beep(340, 500); Beep(380, 500);
	Beep(420, 500); Beep(290, 700);
	Beep(260, 500); Beep(340, 500); Beep(330, 500); Beep(340, 500); Beep(380, 500);
	Beep(340, 700);*/


	printf("������ ��������!\n");
	printf("1. ��  ����\n");
	puts("2. �̾� �ϱ�");
	puts("3. ���� ����");
	puts("4. ��  �� ��");
	puts("5. ���� ����");
	char select;
	select = getch();
	return select;
}

void color(int n) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
}