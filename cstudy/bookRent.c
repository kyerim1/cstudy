#include "book.h"

static char* retal_check(Book* list_head,char *id) { // 대여 가능 도서 인지 확인
	bool isRent = false;
	char num1;
	
	do {
		isRent = false;
		printf("대여할 도서번호를 입력 및 검색 해주세요 (번호-1,검색-2)\n");
		num1 = _getch();
		if (num1 == '1') {
			printf("도서 번호 : ");
			gets(id);
		}
		else if (num1 == '2') {
			book_search(list_head);
			printf("대여 책 선택 : ");
			int num2;
			scanf("%d", &num2);
			strcpy(id, list_head[num2 - 1].id);
		}

		for (int i = 0; i < stateCnt; i++) {
			if (strcmp(stat[i].bookId, id) == 0 && stat[i].state == RENT) {
				printf("대여중 인 도서 입니다. \n 다시 입력하세요\n");
				isRent = true;
				break;
			}
		}
	} while (isRent);
	return id;

}
static void book_rental_save(Book* list_head,char* id) {
	//대여 목록 저장
	if (stat == NULL)
		stat = (BookState*)malloc(sizeof(BookState));
	else
		stat = (BookState*)realloc(stat, sizeof(BookState) * (stateCnt + 1));
	strcpy(stat[stateCnt].bookId, id);
	stat[stateCnt].state = RENT;
	strcpy(stat[stateCnt].dateLending, getDate());
	for (int i = 0; i < bookCnt; i++) {
		if (strcmp(list_head[i].id, id) == 0) {
			stat[stateCnt].link = list_head + i; break;
		}
	}
	stateCnt++;

	// 파일 저장 대여상태변화
	file_save();
}


Book* rent_book(Book* list_head) {
	// 도서 대여 하려면  회원 인증 받아야 한다.
	// 대여 할 도서의 도서 번호를 입력또는 검색하여 가져와서 대여 진행
	system("cls");
	if (user == NULL) {
		printf("대여하시려면 회원 인증 받으셔야 합니다.\n");
		user = login();
		system("cls");
		if (user == NULL) return;
	}
	char id[15];
	retal_check(list_head,id);
	book_rental_save(list_head,id);

	printf("대여 처리 되었습니다. \n");
	Sleep(2000);
	return list;
}