#include "card.h"


static Player 딜러;
static int score_sum(Card** c);
void dealer_card() {
	printf("\n----------------- 딜러 ↓------------------\n");
	for (int k = 0; 딜러.player_card[k] != NULL; k++) {
		drawCard(딜러.player_card[k]->number,
			딜러.player_card[k]->shape, 0+(k*7), 3  );
	}
	int sum = score_sum(딜러.player_card);
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
		딜러.player_card[k] = NULL;
	}

	for (int k = 0; k < 2; k++) {
		딜러.player_card[k] = card++ ;
		for (int i = 0; i < playerCnt; i++) {
			player[i].player_card[k] = card++;
		}
	}

}
void betting() {
	system("cls");
	for (int i = 0; i < playerCnt; i++) {
		printf("%d. Player님, 총금액 %d원.\n얼마 배팅 하시겠습니까 ? : ",
			player[i].num,player[i].money.cash);
		scanf("%d", &player[i].betting);
		getchar();
		if (player[i].betting > player[i].money.cash) {
			printf("보유 금액보다 많습니다. 다시 입력하세요 \n");
			i--; continue;
		}
		player[i].money.cash -= player[i].betting; //배팅 금액 차감

		if (player[i].money.cash==0) {
			printf("올인 하셨습니다.\n 배팅하시겠습니까?(y/n)");
			if (getch() == 'n') {
				i--; player[i].money.cash += player[i].betting;
				printf("\n");
			}
		}
	}
	Sleep(2000);
}

// 플레이어 차례 0 + (k * 7), 10 + (i * 8)
int stayOrHit(int turn) {
	Player *p = player+turn;
	if (score_sum(p->player_card)<21 && p->stay!=1 ) { //21보다 작고 stay가 아니라면
		gotoxy(0, 9 + (turn * 8));
		printf("1. hit   2.stay ? : ");
		if (getch() == '1') {
			int i = 0;
			for (; p->player_card[i] != NULL; i++);
			p->player_card[i] = card++;
			if (score_sum(p->player_card) > 21) {
				p->stay = 1;
				printf("\x1b[31m"); printf("\n %d 플레이어 다이!!! ", p->num);
				printf("\x1b[0m");
				Sleep(1000);
			}
			if (score_sum(p->player_card) == 21) {
				p->stay = 1;
				printf("\x1b[31m"); printf("\n %d 플레이어 블랙잭!!! ", p->num);
				printf("\x1b[0m");
				Sleep(1000);
			}
		}
		else {
			p->stay = 1;
		}
	}

	if (turn == playerCnt - 1) return 0; // 마지막 플레이어 차례가 끝나면 딜러차례
	return turn + 1;
}



// 딜러 차례
void dealer(int turn) {
	if (turn == 0) {
		if (score_sum(딜러.player_card) < dealerMax) { // 딜러의 합이 17보다 작은경우 hit
			int i = 0;
			for (; 딜러.player_card[i] != NULL; i++);
			딜러.player_card[i] = card++;
			gotoxy(0, 2);
			printf("\x1b[31m"); printf("HIT"); printf("\x1b[0m");
		}
		else {
			딜러.stay = 1;
			gotoxy(0, 2);
			printf("\x1b[31m"); printf("STAY"); printf("\x1b[0m");
		}
		Sleep(1000);
	}
}

int endGame() {
	int isAllStay = 0;
	if (딜러.stay == 1) isAllStay = 1;
	for (int i = 0; i < playerCnt; i++) {
		if (player[i].stay == 0) {
			isAllStay = 0; break;
		}
	}
	// 결과 발표
	if (isAllStay) {
		int dealer_score = score_sum(딜러.player_card);
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
				printf("\n\n%d 플레이어 상금 : %d원 ", player[i].num, player[i].betting * 2);
			}
		}
		save();
	}


	return isAllStay;
}