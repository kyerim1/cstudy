#include "card.h"

static void make_card(); // ī�� ����
static void player_set(int maxnum); // �÷��̾� ����

void start() {
	printf("\x1b[31m"); printf("\x1b[43m");
	printf("���� ���ӿ� ���Ű� ȯ���մϴ�.\n");
	printf("\x1b[32m"); printf("\x1b[47m");
	printf("��� �����ڸ� �̱�� 456���� ȹ���ϰ� �˴ϴ�.\n\n");
	printf("\x1b[0m");

	init();
	//board();
	play(); // ���� ����
}
void init() {
	int maxnum=load(); // ���� �ҷ�����
	make_card();
	player_set(maxnum);
}
void board() {
	Sleep(2000);
	system("cls");
	printf(" ������ : %d�� \n", playerCnt);

}

static void make_card() {
	card = (Card*)malloc(sizeof(Card) * 52);
	for (int i = 0; i < 4; i++) {
		for (int k = 0; k < 13; k++) {
			card[i * 13 + k].number = k + 1;
			card[i * 13 + k].shape = i;
		}
	}
}
static void player_set(int maxnum) {
	int numbers, mynum = 0;
	
	printf("\n �����ο� ���� (�ִ�4��): ");
	scanf("%d", &numbers);
	getchar(); // ���� ����
	if (player != NULL) {
		if (player[playerCnt - 1].num + (numbers-playerCnt)> 456) {
			printf("456����� �� �������� �մϴ�. ������ ������ �����ڼ��� �����մϴ�.\n");
			printf("������ ���� �����ڼ� : %d��\n\n", playerCnt + 456 - player[playerCnt - 1].num);
			numbers = playerCnt + 456 - player[playerCnt - 1].num;
		}
	}
	if (playerCnt < numbers) {// ���� �����ڼ����� �����ο��� ū��� (�Ļ� ������ �ڵ� ����)
		if (player == NULL) {
			player = (Player*)malloc(sizeof(Player));
			player[playerCnt].num = 1;
			player[playerCnt].money.cash = 500000;
			player[playerCnt].money.lost = 0;
			player[playerCnt].money.win = 0;
			player[playerCnt].score = 0;
			player[playerCnt].stay = 0;
			player[playerCnt].betting = 0;
			playerCnt++;
			maxnum = 1;
		}
		//�� ������ ����
		for (int i = playerCnt!=0?playerCnt : 1 ; i < numbers; i++) {
			player = (Player*)realloc(player, sizeof(Player) * (i+1));
			player[i].num = ++maxnum;
			player[i].money.cash = 500000;
			player[i].money.lost = 0;
			player[i].money.win = 0;
			player[i].score = 0;
			player[i].stay = 0;
			player[i].betting = 0;
			playerCnt++;
		}
	}

	for (int i = 0; i < playerCnt; i++) {
		for (int k = 0; k < 8; k++) {
			player[i].player_card[k] = NULL;
		}
	}

}