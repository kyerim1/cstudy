#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char str1[100] = "한글도 잘 저장 되고출력되나??";
	
	char han[10] = "노재홈";

	char word[200];
	strcat_s(str1, sizeof(str1), "김만수");//문자열 복사
	strcpy_s(word, sizeof(word), str1);// 문자열 복사

	printf("%s  \n", str1);
	printf("%s \n", word);
	int len;
	len = strnlen_s(word, sizeof word);
	printf("%d  \n", len); // 문자열의 길이

	int cmp = 0;
	cmp = strcmp(word, str1); //문자열비교
	printf(" %d  \n", cmp);
	cmp = strcmp("apple", "banana");
	printf(" %d \n", cmp);

	cmp = strcmp("banana", "apple");
	printf(" %d \n", cmp);

}