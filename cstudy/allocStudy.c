#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char* init(int); // ���� �Ҵ�
void print(char *prime, int size); //���
bool divisor(int num);

void main() {
	int size = 0;
	printf("��� �Է� : ");
	scanf("%d", &size);
	print(init(size), size);
}
void print(char* prime, int size) {
	for (int i = 0; i < size - 2; i++) {
		if (i % 5 == 0 && i != 0) printf("\n");
		if (prime[i] == 'X') printf(" %2c ", prime[i]);
		else printf(" %2d ", prime[i]);
	}
}
char* init( int size ) {
	char* temp = (char*)malloc(sizeof(char) * (size - 2));
	for (int i = 0; i < size - 2; i++) {
		if (divisor(i + 2) == true) temp[i] = 'X';
		else temp[i] = i + 2;
	}
	return temp;
}
bool divisor(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) return true;
	}
	return false;
}





//void print(int* prime, int size) {
//	for (int i = 0; i < size - 2; i++) {
//		if (i % 5 == 0 && i != 0) printf("\n");
//		bool isPrime = false;
//		for (int k = 2; k < prime[i]; k++) {
//			if (prime[i] % k == 0) {
//				isPrime = true; break;
//			}
//		}
//		if (isPrime == true) printf(" %2c ", 'X');
//		else printf(" %2d ", prime[i]);
//	}
//}
//int* init( int size ) {
//	int* temp = (int*)malloc(sizeof(int) * (size - 2));
//	for (int i = 0; i < size - 2; i++) {
//		temp[i] = i + 2;
//	}
//	return temp;
//}












	//int* p;
	//p = init();
	//printf("%d %d \n", p[0], p[1]);
	//printf("%d %d \n", p[0], p[1]);
	//free(p);
	//printf("%d %d \n", p[0], p[1]);



	/*int* pm = (int*)malloc(20);
	int* pc = (int*)calloc(5, sizeof(int));
	printf("%d %d \n", pm[0], pm[1]);
	printf("%d %d \n", pc[0], pc[1]);

	pm[0] = 10; pm[1] = 20; pm[2] = 30; pm[3] = 40; pm[4] = 50;
	pc[0] = 1; pc[1] = 2; pc[2] = 3; pc[3] = 4; pc[4] = 5;
	printf("%d %d %d \n", pm[0], pm[3], pm[4]);
	printf("%d %d %d\n", pc[0], pc[3], pc[4]);

	printf("pm -> %p ,  pc -> %p  \n", pm, pc);


	int new_size = 0;
	printf("�߰��� ������ ������ ���� : ");
	scanf("%d", &new_size);
	int* temp = NULL;
	temp = (int*)malloc(20 + (sizeof(int) * new_size));
	for (int i = 0; i < 5; i++) {
		temp[i] = pm[i];
	}
	free(pm);
	pm = temp;
	for (int i = 5; i < new_size + 5; i++) {
		printf("�߰� ������ �Է� : ");
		scanf("%d", &pm[i]);
	}
	for (int i = 0; i < new_size + 5; i++) {
		printf("%d  ", pm[i]);
	}
	printf("\n");
	*/

	//int* oldPm = pm;
	//if ((pm = (int*)realloc(pm, 28)) == NULL) {
	//	free(oldPm);
	//}
	//pm[5] = 60;
	//printf("%d \n", pm[5]);


	//int* tmp= (int*)realloc(pm, 28);
	//if (tmp != NULL) pm = tmp;
	//pm = (pm = (int*)realloc(pm, 28)) != NULL ? pm : NULL;

	//int* tmp = (int*)realloc(pm, 28);
	//if (tmp != NULL) {
	//	pm = tmp;
	//	//printf("pm -> %p ,  pr -> %p \n", pm, pr);
	//	pm[5] = 60; pm[6] = 70;
	//	printf("%d %d \n", pm[5], pm[6]);

	//}


	/*int size = 5;
	int arr[5];
	printf("�Ҵ� ũ�� :");
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
	}*/
//}
/*

���� �޸� �Ҵ� 
malloc, calloc, realloc, free

int num1=10;
char ch='a';
int arr[20]; 


�޸��� ������ User�� system���� ������
user������ ũ��  �ڵ�, ���� , ������, ������ ������ ���ȴ�.

��������, ������������ (�迭) - >  �޸��� ���ÿ����� �Ҵ�ȴ�.
��������, �ܺκ��� - > �޸��� ������ ������ �Ҵ�ȴ�.
�Ϲ� �Լ� -> �޸��� �ڵ� ������ �Ҵ�
�ڵ�, ����, ������ ������ ũ��� �������̴�.

�� - ���� �Ҵ�

*/