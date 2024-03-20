#include "card.h"

static void draw();

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
	while (turn!=100) {

		draw(); // 화면 그리기
		dealer(turn); // 딜러 차례- turn이 0이면 딜러 턴 0이 아니면 패스
		turn = stayOrHit(turn); // 플레이어 차례 - turn이 1이면 첫번째 플레이어 턴 
		// stayOrHit에서는 모든플레이어가 카드를 받을지 안받을지 진행
		// 모두가 카드를 받지않으면 결과 출력 하고 turn으로 반환 값 100 
	}
}

static void draw() {

	//drawCard() 함수 실행 이 되어야 한다.  그외에 다른 내용도 화면 출력 
}