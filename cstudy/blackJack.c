#include "card.h"

static void draw();

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
	while (turn!=100) {

		draw(); // ȭ�� �׸���
		dealer(turn); // ���� ����- turn�� 0�̸� ���� �� 0�� �ƴϸ� �н�
		turn = stayOrHit(turn); // �÷��̾� ���� - turn�� 1�̸� ù��° �÷��̾� �� 
		// stayOrHit������ ����÷��̾ ī�带 ������ �ȹ����� ����
		// ��ΰ� ī�带 ���������� ��� ��� �ϰ� turn���� ��ȯ �� 100 
	}
}

static void draw() {

	//drawCard() �Լ� ���� �� �Ǿ�� �Ѵ�.  �׿ܿ� �ٸ� ���뵵 ȭ�� ��� 
}