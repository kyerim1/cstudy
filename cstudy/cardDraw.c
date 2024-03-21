#include "card.h"

static void left_num_text(int num);
static void right_num_text(int num);
void drawCard(int num, int shape, int x, int y) {
	// num은 카드번호 또는 문자,  shape카드 모양
	gotoxy(x, y);
	printf("┌─────┐\n");
	gotoxy(x, y+1);
	left_num_text(num);
	gotoxy(x, y + 2);
	switch (shape) {
	case SPADE:
		printf("│  %2s │\n", spade); break;
	case CLUB:
		printf("│  %2s │\n", club); break;
	case DIA:
		printf("│  %2s │\n", dia); break;
	case HEART:
		printf("│  %2s │\n", heart);
	}
	gotoxy(x, y + 3);
	right_num_text(num);
	gotoxy(x, y + 4);
	printf("└─────┘\n");
}
static void left_num_text(int num) {
	switch (num) {
	case ACE:
		printf("│%2c   │\n", 'A'); break;
	case JACK:
		printf("│%2c   │\n", 'J'); break;
	case QUEEN:
		printf("│%2c   │\n", 'Q'); break;
	case KING:
		printf("│%2c   │\n", 'K'); break;
	default:
		printf("│%2d   │\n", num);
	}
}
static void right_num_text(int num) {
	switch (num) {
	case ACE:
		printf("│   %2c│\n", 'A'); break;
	case JACK:
		printf("│   %2c│\n", 'J'); break;
	case QUEEN:
		printf("│   %2c│\n", 'Q'); break;
	case KING:
		printf("│   %2c│\n", 'K'); break;
	default:
		printf("│   %2d│\n", num);
	}
}