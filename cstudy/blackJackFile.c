#include "card.h"


// ���ϸ� blackJList.txt
// ���� ���� ���   �÷��̹�ȣ,�����ݾ�,�������ݾ�,��ȹ��ݾ�
int load() {
	// ���Ͽ��� �����ݾ��� 0 �Ǵ� - �ΰ��� ���� �ϰ� ��������
	// ���� �ϰ� �������� ����� ���� ���Ͽ��� ���������� Ȯ���ϰ� �����Ҵ� ������ ����
	// �����Ҵ� ���� ���� �Ҷ� ���� playerCnt ����
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
	//���� player �� ����� �����Ҵ� ������ �ִ� �÷��̾� ������ ����
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