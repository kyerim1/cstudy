#include "book.h"


Book* return_book(Book* list_head) {
	system("cls");
	int cnt = 0,select=0;
	char keyword[250];
	
	printf("반납하실 도서번호 및 제목을 입력하세요 : ");
	gets(keyword);

	for (int i = 0; i < stateCnt; i++) {
		if ((strstr(stat[i].bookId, keyword) != NULL ||
			strstr(getTitle(list_head, stat[i].bookId), keyword)) && stat[i].state==RENT) {
			printf("\x1b[31m");	printf("%d. ", i+1); printf("\x1b[0m");
			printf("%20s  대여일:%9d (%s)\n", getTitle(list_head, stat[i].bookId)
				, stat[i].dateLending, stat[i].bookId);
			cnt++;
		}
	}
	printf("%d개의 도서가 조회되었습니다.\n 반납 하실 도서를 선택하세요 : ",cnt);
	scanf("%d", &select);
	stat[select - 1].state = RETURN;
	file_save();
	system("pause");
}