#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 10

void main() {
	
	char ch[10] = { 'b','o','y',NULL,'g','i','r','l',NULL};

	printf("%s   %s \n", ch, ch + 4);

	//char word[6] = {'a','p','p','l','e',NULL};
	char word[6] = "apple";
	/*word[0] = 'a';
	word[1] = 'p';
	word[2] = 'p';
	word[3] = 'l';
	word[4] = 'e';
	word[5] = NULL;*/

	printf("%c%c%c%c%c \n", word[0], word[1], word[2], word[3], word[4]);

	printf("%s  \n", word+2);


	
	/*
	int num[20] = { 0, };
	int len = 0;
	len = sizeof(num) / sizeof(int);
	for (int i = 0; i < len; i++) {
		num[i] = rand() % 40 + 11;
	}

	for (int i = 0; i < len / 4; i++) {
		for (int k = 0; k < 4; k++) {
			printf("%2d ", num[4*i+k]);
		}
		printf("\n");
	}

	printf("\n\n");
	for (int i = 0; i < len; i++) {
		if (i % 4 == 0 && i != 0)
			printf("\n");
		printf("%2d ", num[i]);
	}*/


	// �迭�� ũ��� 20,   �迭�� ��������(���� 11~ 50)�� �����ϰ�,
	// ���ٿ� 4����  ��� �ϼ���. 



	/*int num[] = { 23,15,16,19,2,4,8,20,11 };
	int search[10] = { 0, };
	int idx = 0;

	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		if (num[i] % 2 == 0) {
			search[idx++] = num[i];
		}
	}

	for (int i = 0; i < sizeof(search) / sizeof(int); i++) {
		printf("%d   ", search[i]);
	}*/


	//num�迭�� ���߿��� ¦�� �� ã�Ƽ� search�迭�� �����ϰ� ���


	/*int banana[8] = { 2,3,4,5,1,2,3,9 };
	int apple[8] = { 0, };

	for (int i = 0; i < sizeof(banana) / sizeof(int); i++) {
		apple[i] = banana[i];
	}

	for (int i = 0; i < sizeof(apple) / sizeof(int); i++) {
		printf("%d  ", apple[i]);
	}*/
}


/*

int size=5; 

int[] arr = new int[size];

var size=5;
let arr = new Array(size);

*/