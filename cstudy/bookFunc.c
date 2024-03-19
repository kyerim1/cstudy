#include "book.h"


static int writerCmp(Book*, char*);
static int titleCmp(Book*, char*);
static int publishingCmp(Book*, char*);
static void search(int num, Book* head);
static void kkk();
char* getTitle(Book* booklist , char *id) {
	for (int i = 0; i < bookCnt; i++) {
		if (strcmp(booklist[i].id, id) == 0) {
			return booklist[i].title;
		}
	}
}

char* getDate() {
	time_t rawtime;
	struct tm* timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	int year = timeinfo->tm_year + 1900;
	int month = timeinfo->tm_mon + 1;
	int day = timeinfo->tm_mday;
	static char today[20];
	sprintf(today, "%d%02d%02d", year, month, day);
	return today;
}

void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

MainMenu main_menu() {
	gotoxy(0, 3);
	printf("\t┌─────────────┐\n");
	printf("\t│ 1.도서 검색 │\n");
	printf("\t│ 2.도서 등록 │\n");
	printf("\t│ 3.도서 대여 │\n");
	printf("\t│ 4.도서 반납 │\n");
	printf("\t└─────────────┘\n");
	MainMenu select;
	select = _getch()-48;
	return select;
}
SubMenu sub_menu(MainMenu main_select) {
	system("cls");
	kkk();
}
Member* login() {
	int size = 0;
	Member* mlist = member_load(&size);
	system("cls");
	printf("로그인 화면 로딩");
	for (int i = 1; i <= 10; i++) {
		printf("."); Sleep(300);
	}
	system("cls");
	char name[20];
	int id;
	do {
		gotoxy(5, 3);
		printf("이름 : ");
		gets(name);
		gotoxy(5, 5);
		printf("회원 번호 : ");
		scanf("%d", &id);
		getchar();

		for (int i = 0; i < size; i++) {
			//printf("%s %d %d \n", mlist[i].name, mlist[i].id, strcmp(mlist[i].name, name));
			if (strcmp(mlist[i].name, name) == 0) {
				if (mlist[i].id == id) {
					printf(" \n확인 되었습니다. \n");
					Sleep(2000); return &mlist[i];
				}
			}
		}
		printf("\n\n 입력하신 이름과 번호를 다시 확인 해주세요 \n");
		printf("처음으로 돌아가기 - b");
		if (_getch() == 'b') return NULL;
		system("cls");
	} while (1);


}
void book_search(Book* list_head) {
	system("cls");
	gotoxy(5, 2);
	printf("도서 검색 대상 선택 \n");
	gotoxy(5, 3);
	printf("1.저자  2.제목  3.출판사 ");
	SubMenu search_select = 10+(getch()-48);
	switch (search_select) {
	case WRITER:
		search(1, list_head); break;
	case TITLE:
		search(2, list_head); break;
	case PUBLISHING:
		search(3, list_head); break;
	default:
		printf("\n처음 화면 이동...");
		Sleep(2500); system("cls");
		return;
	}

}


static void search(int num,Book* head) {
	char category[3][20] = { "저자","제목","출판사" };
	gotoxy(5, 5);
	printf("%s 검색 : ", category[num - 1]);
	char keyword[250];
	gets(keyword);
	int (*comp[3])(Book*,char*);
	comp[0] = writerCmp;
	comp[1] = titleCmp;
	comp[2] = publishingCmp;
	for (int i = 0; i < bookCnt; i++) {

		if ( comp[num-1](&head[i], keyword)) {
			printf("\x1b[31m"); printf("%d.  ", i + 1);
			printf("\x1b[0m");
			printf("%s : %s  (%s) - %d\n",head[i].writer,head[i].title,
				head[i].publishing, head[i].yearOfPublication);
		}
	}
	system("pause");
}
static int writerCmp(Book* target, char* key) {
	return strstr(target->writer, key) != NULL ? 1 : 0;
}
static int titleCmp(Book* target, char* key) {
	return strstr(target->title, key) != NULL ? 1 : 0;
}
static int publishingCmp(Book* target, char* key) {
	return strstr(target->publishing, key) != NULL ? 1 : 0;
}







void kkk() {
	char ch;
	char board[10][20] = { 
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} ,
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,3,0,0,0,0,0,0,0,0,0,0,3,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	};
	COORD* pos = (COORD*)malloc(sizeof(COORD));
	pos->X = 9; pos->Y = 6;
	int cnt = 1 , eatCnt=5,speed=500,level=1;
	char x=9, y=6 ,stepx=1,stepy=0;
	while (1) {
		system("cls");
		printf("개발 중입니다.\n");
		printf("게임종료 - x\n");
		for(int i=0; i<10; i++){
			for (int k = 0; k < 20; k++) {
				if (board[i][k] == 1) printf("■");
				if (board[i][k] == 0)printf("  ");
				if (board[i][k] == 2)printf("○");
				if (board[i][k] == 3)printf("●");
			}
			printf("\n");
		}
		board[y][x] = 0;
		
		if (board[y+ stepy][x+ stepx] == 1) {
			printf("게임 오버 ! 5초뒤 종료"); Sleep(5000);
			return;
		}
		for (int i = 0; i < cnt; i++) {
			board[pos[i].Y][pos[i].X] = 0;
		}
		if (board[y+ stepy][x+ stepx] == 3) {
			pos = (COORD*)realloc(pos, sizeof(COORD) * (cnt + 1));
			cnt++;
			eatCnt--;
		}
		y += stepy;
		x += stepx;
		for (int i = cnt-1; i > 0; i--) {
			pos[i].X = pos[i - 1].X;
			pos[i].Y = pos[i - 1].Y;
		}
		pos[0].X = x;
		pos[0].Y = y;
		for (int i = 0; i < cnt; i++) {
			board[pos[i].Y][pos[i].X] = 2;
		}

		if (eatCnt == 0) {
			for (int i = 0; i < 5; i++) {
				int ex = rand() % 18 + 1;
				int ey = rand() % 8 + 1;
				char hasMe = 0;
				for (int k = 0; k < cnt; k++) {
					if (pos[i].X == ex & pos[i].Y == ey) {
						hasMe = 1; break;
					}
				}
				if (hasMe) { i--; continue; }
				board[ey][ex] = 3;
			}
			eatCnt = 5;
			level++;
			speed -= 50;
		}



		if (_kbhit()) {
			switch (_getch()) {
			case 'a':
				stepx = -1; stepy = 0; break;
			case 's':
				stepx = 0; stepy = 1; break;
			case 'd':
				stepx = 1; stepy = 0; break;
			case 'w':
				stepx = 0; stepy = -1; break;
			case 'x':
				return;
			}
		}
		Sleep(speed);
	}
}