#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char str1[100] = "�ѱ۵� �� ���� �ǰ���µǳ�??";
	
	char han[10] = "����Ȩ";

	char word[200];
	strcat_s(str1, sizeof(str1), "�踸��");//���ڿ� ����
	strcpy_s(word, sizeof(word), str1);// ���ڿ� ����

	printf("%s  \n", str1);
	printf("%s \n", word);
	int len;
	len = strnlen_s(word, sizeof word);
	printf("%d  \n", len); // ���ڿ��� ����

	int cmp = 0;
	cmp = strcmp(word, str1); //���ڿ���
	printf(" %d  \n", cmp);
	cmp = strcmp("apple", "banana");
	printf(" %d \n", cmp);

	cmp = strcmp("banana", "apple");
	printf(" %d \n", cmp);

}