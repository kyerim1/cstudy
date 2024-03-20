#include "card.h"


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

}
void betting() {

}
int stayOrHit(int turn) {

}
void dealer(int turn) {

}