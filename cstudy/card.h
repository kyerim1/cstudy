#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

#define dealerMax 17
#define spade "��"
#define club "��"
#define dia "��"
#define heart "��"

enum Shape{ SPADE, CLUB, DIA, HEART };
enum num{ ACE =1 , JACK = 11, QUEEN = 12 , KING = 13};

typedef struct  Card {
	int number; // ī���ȣ
	enum Shape shape; // ī�� ���
}Card;

typedef struct Money {
	int cash; // ���� �ݾ�
	int lost; // ���� �ѱݾ�
	int win;  // ���� �ѱݾ�
}Money;

typedef struct Player {
	int num;   // �÷��̾� ���� ��ȣ
	int score;  // �÷��̾��� ���� ī�� ����
	struct Money money; //�÷��̾� �ݾ�
	struct Card *player_card[8];  // �÷��̾� ���� ���� ī��
}Player;

// ��������
Card *card; // 52���� �����Ҵ�
Player * player; // ������ �ο� �� ��ŭ �����Ҵ�
int playerCnt; // ������ �� �ο���

//�Լ��������

//gameInit.c
void start(); // ī�� ���� ���� - initȣ��, boardȣ��, playȣ��
void init(); //�ʱ� ����-52�� ī�� ����, ������ ����, ���Ϸε�
void board(); // ���� ȭ�� �׸��� 

//blackJackFile.c  - ���ϸ� blackJList.c
void load(); //
void save();//
// Player����ü�� num�� money ���� ����, �ҷ�����

//blackJack.c
void play(); // ���� ����

//handOut.c
void shuffle(); // ī�� ����
void deal(); // ī�� ���
void betting();  // ����
int stayOrHit(int turn); // �÷��̾� �Ͽ� �߰� ī�� ����������
void dealer(int turn); // ���� ��

//cardDraw.c
void drawCard(int num, int shape); // ī�� �׸��� - ���常 ȭ�鿡 �׸���
