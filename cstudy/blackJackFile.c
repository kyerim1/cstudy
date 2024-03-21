#include "card.h"


// 파일명 blackJList.txt
// 파일 저장 양식   플레이번호,보유금액,총잃은금액,총획득금액
int load() {
	// 파일에서 보유금액이 0 또는 - 인경우는 제외 하고 가져오기
	// 제외 하고 가져오는 방법은 먼저 파일에서 읽은다음에 확인하고 동적할당 공간에 저장
	// 동적할당 공간 저장 할때 마다 playerCnt 증가
	char filename[30] = "c:/test/blackJList.txt";
	FILE* fp = NULL;
	int maxnum = 0;
	fp = fopen(filename, "r");
	if (fp != NULL) {
		char line[100];
		while (fgets(line, sizeof(line), fp) != NULL) {
			int a, b, c, d;
			sscanf(line, "%d,%d,%d,%d", &a,&b,&c,&d);
			if (maxnum < a) maxnum = a;
			if (b > 0) {
				if (player == NULL) {
					player = (Player*)malloc(sizeof(Player));
				}
				else {
					player = (Player*)realloc(player, sizeof(Player) * (playerCnt + 1));
				}
				player[playerCnt].stay = 0;
				player[playerCnt].money.cash = b;
				player[playerCnt].num = a;
				player[playerCnt].money.lost = c;
				player[playerCnt].money.win = d;
				player[playerCnt].score = 0;
				player[playerCnt].betting = 0;
				playerCnt++;
			}
		}
		fclose(fp);
	}
	return maxnum;
}
void save() {
	//현재 player 에 연결된 동적할당 공간에 있는 플레이어 정보만 저장
	char filename[30] = "c:/test/blackJList.txt";
	FILE* fp=NULL;
	fp = fopen(filename, "w");
	if (fp != NULL) {
		for (int i = 0; i < playerCnt; i++) {
			fprintf(fp, "%d,%d,%d,%d\n", player[i].num, player[i].money.cash,
				player[i].money.lost, player[i].money.win);
		}
		fclose(fp);
	}

}