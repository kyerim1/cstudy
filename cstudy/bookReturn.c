#include "book.h"


Book* return_book(Book* list_head) {
	system("cls");
	int cnt = 0,select=0;
	char keyword[250];
	
	printf("�ݳ��Ͻ� ������ȣ �� ������ �Է��ϼ��� : ");
	gets(keyword);

	for (int i = 0; i < stateCnt; i++) {
		if ((strstr(stat[i].bookId, keyword) != NULL ||
			strstr(getTitle(list_head, stat[i].bookId), keyword)) && stat[i].state==RENT) {
			printf("\x1b[31m");	printf("%d. ", i+1); printf("\x1b[0m");
			printf("%20s  �뿩��:%9d (%s)\n", getTitle(list_head, stat[i].bookId)
				, stat[i].dateLending, stat[i].bookId);
			cnt++;
		}
	}
	printf("%d���� ������ ��ȸ�Ǿ����ϴ�.\n �ݳ� �Ͻ� ������ �����ϼ��� : ",cnt);
	scanf("%d", &select);
	stat[select - 1].state = RETURN;
	file_save();
	system("pause");
}