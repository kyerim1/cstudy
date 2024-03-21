#include "card.h"

static void draw(int total_betting);

static int score_sum(Card** c);  // ���� - player[i].player_card


void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void play() {
	Sleep(2000);
	system("cls");
	printf("������ ī�带 ���� �ֽ��ϴ�. \n");
	Sleep(1000);
	shuffle(); // ī�� ���� - �����̿��ؼ�
	printf("ī�带 �������ְ� �ֽ��ϴ�....\n");
	Sleep(1000);
	deal(); // �÷��̾�� ī�� 2�徿 �������ְ� ������ ī�带 ������.
	int turn = 0; 
	betting();
	int total_betting = 0;
	for (int i = 0; i < playerCnt; i++)total_betting += player[i].betting;
	while (turn!=100) {
		draw(total_betting); // ȭ�� �׸���
		if (endGame()) break; // ���� ������
		dealer(turn); // ���� ����- turn�� 0�̸� ���� �� 0�� �ƴϸ� �н�
		turn = stayOrHit(turn); // �÷��̾� ���� - turn�� 1�̸� ù��° �÷��̾� �� 
	//	// stayOrHit������ ����÷��̾ ī�带 ������ �ȹ����� ����
	//	// ��ΰ� ī�带 ���������� ��� ��� �ϰ� turn���� ��ȯ �� 100 
	}
}

static void draw(int total_betting) {
	system("cls");
	printf("�÷��̾� �� : %d��, �� ���� �ݾ� : %d�� \n", playerCnt, total_betting);
	
	dealer_card(); // ���� ī�� ���
	for (int i = 0; i < playerCnt; i++) {
		printf("\n----------------- %d PLAYER ��------------------\n",player[i].num);
		for (int k = 0; player[i].player_card[k] != NULL; k++) {
			drawCard(player[i].player_card[k]->number , 
				player[i].player_card[k]->shape, 0 + (k * 7), 10 + (i * 8));
		}
		int sum = score_sum(player[i].player_card);
		printf("score : %d   %s", sum, sum>21?"�÷��̾� ����":"");

	}
	//drawCard() �Լ� ���� �� �Ǿ�� �Ѵ�.  �׿ܿ� �ٸ� ���뵵 ȭ�� ��� 
}

int score_sum(Card** c) {
	int sum = 0; char hasAce = 0;
	for (int i = 0; c[i] != NULL; i++) {
		if (c[i]->number == ACE) hasAce = 1;
		if (c[i]->number > 10)
			sum += 10;
		else
			sum += c[i]->number;
	}
	if (hasAce && sum <= 11) sum += 10;

	return sum;
}