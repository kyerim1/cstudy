#include "book.h"


Book* file_load() { // book.txt ���� �ҷ�����  bookstate.txt ���ϵ� �ҷ�����
	// bookstate.txt���� ������ stat ���������� ����
}
void file_save() { //book.txt ��  bookstate.txt ���� ���� 

}
Member* member_load(int* size) {  // �α��� �ʿ��Ҷ��� ����
	FILE* fp = NULL;

	Member* memberlist = NULL;
	int count = 0;

	fp = fopen("c:/test/member.txt", "r");
	if (fp != NULL) {
		
		char temp[100];
		while (fgets(temp,sizeof(temp),fp) !=NULL ) {
			if (memberlist == NULL)
				memberlist = (Member*)malloc(sizeof(Member));
			else
				memberlist = (Member*)realloc(memberlist, sizeof(Member) * (count + 1));

			sscanf(temp, "%19[^,],%d", memberlist[count].name, &memberlist[count].id);
			// %19[^,]  , ���� ���ڿ� �ִ� 19�ڱ��� �б�
			count++;
		}
		*size = count; // ���� �о�� ����
		return memberlist; //���� �б� ����
		fclose(fp);
	}
	return NULL; //���� �б� ����
}


/*  https://github.com/kyerim1/cstudy   */