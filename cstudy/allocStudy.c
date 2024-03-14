#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>h>

void main() {
	int size = 5;
	int arr[5];
	printf("할당 크기 :");
	scanf("%d", &size);
	int* p = (int*)malloc(size*4);
	p[0] = 10;
	p[1] = 20;
	p[2] = 30;
	p[3] = 40;
	p[4] = 50;

	for (int i = 0; i < size; i++) {
		printf("%d \n", p[i]);
	}
	free(p);
	for (int i = 0; i < size; i++) {
		printf("%d \n", p[i]);
	}
}
/*

동적 메모리 할당 
malloc, calloc, realloc, free

int num1=10;
char ch='a';
int arr[20]; 

*/