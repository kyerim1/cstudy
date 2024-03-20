#include "card.h"

static void left_num_text(int num);
static void right_num_text(int num);
void drawCard(int num, int shape) {
	// num�� ī���ȣ �Ǵ� ����,  shapeī�� ���
	printf("��������������\n");
	left_num_text(num);
	switch (shape) {
	case SPADE:
		printf("��  %2s ��\n", spade); break;
	case CLUB:
		printf("��  %2s ��\n", club); break;
	case DIA:
		printf("��  %2s ��\n", dia); break;
	case HEART:
		printf("��  %2s ��\n", heart);
	}
	right_num_text(num);
	printf("��������������\n");
}
static void left_num_text(int num) {
	switch (num) {
	case ACE:
		printf("��%2c   ��\n", 'A'); break;
	case JACK:
		printf("��%2c   ��\n", 'J'); break;
	case QUEEN:
		printf("��%2c   ��\n", 'Q'); break;
	case KING:
		printf("��%2c   ��\n", 'K'); break;
	default:
		printf("��%2d   ��\n", num);
	}
}
static void right_num_text(int num) {
	switch (num) {
	case ACE:
		printf("��   %2c��\n", 'A'); break;
	case JACK:
		printf("��   %2c��\n", 'J'); break;
	case QUEEN:
		printf("��   %2c��\n", 'Q'); break;
	case KING:
		printf("��   %2c��\n", 'K'); break;
	default:
		printf("��   %2d��\n", num);
	}
}