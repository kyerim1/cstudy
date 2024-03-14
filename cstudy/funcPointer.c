#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef void(*p)(int);

void print(int a);
void input();
void init();

void main() {
	int num = 10;
	char ch = 'a';
	float f = 3.24;
	char name[20]="이순신";
	
	void* vp;
	vp = &num;
	printf("%d \n", (int*)*vp);
	vp = &ch;
	printf("%c \n", *(char*)vp);
	vp = &f;
	printf("%f \n", *(float*)vp);
	vp = name;
	printf("%s \n", (char*)vp);


	


	p func_arr[3] = { init,input,print };

	func_arr[0](1);
	func_arr[1](1);
	func_arr[2](1);
	
}
void init() { printf("초기화함수 실행\n"); }
void input() { printf("입력 함수실행\n"); }
void print(int a) {
	printf("그냥출력 %d \n",a);
}

// 포인터
//  1차원 포인터, 2차원 포인터, 3차원 포인터 변수
//  포인터 배열,  배열 포인터
//  함수포인터