#include "book.h"

static char* retal_check(Book* list_head,char *id) { // �뿩 ���� ���� ���� Ȯ��
	bool isRent = false;
	char num1;
	
	do {
		isRent = false;
		printf("�뿩�� ������ȣ�� �Է� �� �˻� ���ּ��� (��ȣ-1,�˻�-2)\n");
		num1 = _getch();
		if (num1 == '1') {
			printf("���� ��ȣ : ");
			gets(id);
		}
		else if (num1 == '2') {
			book_search(list_head);
			printf("�뿩 å ���� : ");
			int num2;
			scanf("%d", &num2);
			strcpy(id, list_head[num2 - 1].id);
		}

		for (int i = 0; i < stateCnt; i++) {
			if (strcmp(stat[i].bookId, id) == 0 && stat[i].state == RENT) {
				printf("�뿩�� �� ���� �Դϴ�. \n �ٽ� �Է��ϼ���\n");
				isRent = true;
				break;
			}
		}
	} while (isRent);
	return id;

}
static void book_rental_save(Book* list_head,char* id) {
	//�뿩 ��� ����
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

	// ���� ���� �뿩���º�ȭ
	file_save();
}


Book* rent_book(Book* list_head) {
	// ���� �뿩 �Ϸ���  ȸ�� ���� �޾ƾ� �Ѵ�.
	// �뿩 �� ������ ���� ��ȣ�� �Է¶Ǵ� �˻��Ͽ� �����ͼ� �뿩 ����
	system("cls");
	if (user == NULL) {
		printf("�뿩�Ͻ÷��� ȸ�� ���� �����ž� �մϴ�.\n");
		user = login();
		system("cls");
		if (user == NULL) return;
	}
	char id[15];
	retal_check(list_head,id);
	book_rental_save(list_head,id);

	printf("�뿩 ó�� �Ǿ����ϴ�. \n");
	Sleep(2000);
	return list;
}