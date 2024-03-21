#include "card.h"

static void draw(int total_betting);

static int score_sum(Card** c);  // 인자 - player[i].player_card


void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void play() {
	Sleep(2000);
	system("cls");
	printf("딜러가 카드를 섞고 있습니다. \n");
	Sleep(1000);
	shuffle(); // 카드 섞기 - 랜덤이용해서
	printf("카드를 나누어주고 있습니다....\n");
	Sleep(1000);
	deal(); // 플레이어에게 카드 2장씩 나누어주고 딜러도 카드를 가진다.
	int turn = 0; 
	betting();
	int total_betting = 0;
	for (int i = 0; i < playerCnt; i++)total_betting += player[i].betting;
	while (turn!=100) {
		draw(total_betting); // 화면 그리기
		if (endGame()) break; // 게임 끝내기
		dealer(turn); // 딜러 차례- turn이 0이면 딜러 턴 0이 아니면 패스
		turn = stayOrHit(turn); // 플레이어 차례 - turn이 1이면 첫번째 플레이어 턴 
	//	// stayOrHit에서는 모든플레이어가 카드를 받을지 안받을지 진행
	//	// 모두가 카드를 받지않으면 결과 출력 하고 turn으로 반환 값 100 
	}
}

static void draw(int total_betting) {
	system("cls");
	printf("플레이어 수 : %d명, 총 배팅 금액 : %d원 \n", playerCnt, total_betting);
	
	dealer_card(); // 딜러 카드 출력
	for (int i = 0; i < playerCnt; i++) {
		printf("\n----------------- %d PLAYER ↓------------------\n",player[i].num);
		for (int k = 0; player[i].player_card[k] != NULL; k++) {
			drawCard(player[i].player_card[k]->number , 
				player[i].player_card[k]->shape, 0 + (k * 7), 10 + (i * 8));
		}
		int sum = score_sum(player[i].player_card);
		printf("score : %d   %s", sum, sum>21?"플레이어 다이":"");

	}
	//drawCard() 함수 실행 이 되어야 한다.  그외에 다른 내용도 화면 출력 
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