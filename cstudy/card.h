#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

#define dealerMax 17
#define spade "♠"
#define club "♣"
#define dia "◆"
#define heart "♥"

enum Shape{ SPADE, CLUB, DIA, HEART };
enum num{ ACE =1 , JACK = 11, QUEEN = 12 , KING = 13};

typedef struct  Card {
	int number; // 카드번호
	enum Shape shape; // 카드 모양
}Card;

typedef struct Money {
	int cash; // 현재 금액
	int lost; // 잃은 총금액
	int win;  // 얻은 총금액
}Money;

typedef struct Player {
	int num;   // 플레이어 고유 번호
	int score;  // 플레이어의 현재 카드 점수
	struct Money money; //플레이어 금액
	struct Card *player_card[8];  // 플레이어 현재 보유 카드
}Player;

// 전역변수
Card *card; // 52개의 동적할당
Player * player; // 참가자 인원 수 만큼 동적할당
int playerCnt; // 참가자 총 인원수

//함수들들들들들들

//gameInit.c
void start(); // 카드 게임 시작 - init호출, board호출, play호출
void init(); //초기 설정-52개 카드 생성, 참가자 설정, 파일로드
void board(); // 게임 화면 그리기 

//blackJackFile.c  - 파일명 blackJList.c
void load(); //
void save();//
// Player구조체의 num과 money 내용 저장, 불러오기

//blackJack.c
void play(); // 게임 시작

//handOut.c
void shuffle(); // 카드 섞기
void deal(); // 카드 배분
void betting();  // 배팅
int stayOrHit(int turn); // 플레이어 턴에 추가 카드 받을것인지
void dealer(int turn); // 딜러 턴

//cardDraw.c
void drawCard(int num, int shape); // 카드 그리기 - 한장만 화면에 그리기
