#include "card.h"


static Player ����;
static int score_sum(Card** c);
void dealer_card() {
	printf("\n----------------- ���� ��------------------\n");
	for (int k = 0; ����.player_card[k] != NULL; k++) {
		drawCard(����.player_card[k]->number,
			����.player_card[k]->shape, 0+(k*7), 3  );
	}
	int sum = score_sum(����.player_card);
	printf("score : %d", sum);
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


void shuffle() {
	srand(time(NULL));
	for (int i = 0; i < 52; i++) {
		int r = rand() % 52;
		Card temp = card[r];
		card[r] = card[i];
		card[i] = temp;
	}
}
void deal() {
	for (int k = 0; k < 8; k++) {
		����.player_card[k] = NULL;
	}

	for (int k = 0; k < 2; k++) {
		����.player_card[k] = card++ ;
		for (int i = 0; i < playerCnt; i++) {
			player[i].player_card[k] = card++;
		}
	}

}
void betting() {
	system("cls");
	for (int i = 0; i < playerCnt; i++) {
		printf("%d. Player��, �ѱݾ� %d��.\n�� ���� �Ͻðڽ��ϱ� ? : ",
			player[i].num,player[i].money.cash);
		scanf("%d", &player[i].betting);
		getchar();
		if (player[i].betting > player[i].money.cash) {
			printf("���� �ݾ׺��� �����ϴ�. �ٽ� �Է��ϼ��� \n");
			i--; continue;
		}
		player[i].money.cash -= player[i].betting; //���� �ݾ� ����

		if (player[i].money.cash==0) {
			printf("���� �ϼ̽��ϴ�.\n �����Ͻðڽ��ϱ�?(y/n)");
			if (getch() == 'n') {
				i--; player[i].money.cash += player[i].betting;
				printf("\n");
			}
		}
	}
	Sleep(2000);
}

// �÷��̾� ���� 0 + (k * 7), 10 + (i * 8)
int stayOrHit(int turn) {
	Player *p = player+turn;
	if (score_sum(p->player_card)<21 && p->stay!=1 ) { //21���� �۰� stay�� �ƴ϶��
		gotoxy(0, 9 + (turn * 8));
		printf("1. hit   2.stay ? : ");
		if (getch() == '1') {
			int i = 0;
			for (; p->player_card[i] != NULL; i++);
			p->player_card[i] = card++;
			if (score_sum(p->player_card) > 21) {
				p->stay = 1;
				printf("\x1b[31m"); printf("\n %d �÷��̾� ����!!! ", p->num);
				printf("\x1b[0m");
				Sleep(1000);
			}
			if (score_sum(p->player_card) == 21) {
				p->stay = 1;
				printf("\x1b[31m"); printf("\n %d �÷��̾� ����!!! ", p->num);
				printf("\x1b[0m");
				Sleep(1000);
			}
		}
		else {
			p->stay = 1;
		}
	}

	if (turn == playerCnt - 1) return 0; // ������ �÷��̾� ���ʰ� ������ ��������
	return turn + 1;
}



// ���� ����
void dealer(int turn) {
	if (turn == 0) {
		if (score_sum(����.player_card) < dealerMax) { // ������ ���� 17���� ������� hit
			int i = 0;
			for (; ����.player_card[i] != NULL; i++);
			����.player_card[i] = card++;
			gotoxy(0, 2);
			printf("\x1b[31m"); printf("HIT"); printf("\x1b[0m");
		}
		else {
			����.stay = 1;
			gotoxy(0, 2);
			printf("\x1b[31m"); printf("STAY"); printf("\x1b[0m");
		}
		Sleep(1000);
	}
}

int endGame() {
	int isAllStay = 0;
	if (����.stay == 1) isAllStay = 1;
	for (int i = 0; i < playerCnt; i++) {
		if (player[i].stay == 0) {
			isAllStay = 0; break;
		}
	}
	// ��� ��ǥ
	if (isAllStay) {
		int dealer_score = score_sum(����.player_card);
		if (dealer_score > 21) dealer_score = 0;
		for (int i = 0; i < playerCnt; i++) {
			int player_score = score_sum(player[i].player_card);
			if (player_score > 21) {
				player[i].money.lost += player[i].betting;
				continue;
			}
			if (player_score > dealer_score) {
				player[i].money.cash += player[i].betting * 2;
				player[i].money.win += player[i].betting * 2;
				printf("\n\n%d �÷��̾� ��� : %d�� ", player[i].num, player[i].betting * 2);
			}
		}
		save();
	}


	return isAllStay;
}