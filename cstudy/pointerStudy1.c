#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {
	char one[10], two[10], three[10] ,temp[10];
	char* p1, * p2, * p3 , *tmp;
	//printf(" %d  \n", strcmp("apple", "kiwi"));
	printf("세 단어 입력 : ");
	scanf("%s %s %s", one, two, three);
	p1 = one;  p2 = two; p3 = three;
	if (strcmp(p1, p3) == 1) {
		tmp = p1;
		p1 = p3;
		p3 = tmp;
	}
	if (strcmp(p1, p2) == 1) {
		tmp = p1;
		p1 = p2;
		p2 = tmp;
	}
	if (strcmp(p2, p3) == 1) {
		tmp = p2;
		p2 = p3;
		p3 = tmp;
	}

	/*if (strcmp(one, three) == 1) {
		strcpy(temp, one);
		strcpy(one, three);
		strcpy(three, temp);
	}*/
	
	printf("%s %s %s \n", p1, p2, p3);
}


//
//void main() {
//	char word[16], visible[16];
//	int size = sizeof(word) / sizeof(char);
//	printf("단어 입력 : ");
//	gets(word);
//
//
//	strncpy(visible, word, 5);
//	visible[5] = NULL;
//	if (strlen(word) > 5) {
//		for (int i = 5; i < strlen(word); i++) {
//			strcat(visible, "*");
//		}
//	}
//
//
//	printf("입력한 단어 : %s  , 생략한 단어 : %s ", word, visible);
//}
//

//
//void input_nums(int* lotto) {
//	int* start = lotto;
//	int* end = lotto + 6;
//	while (end != lotto) {
//		printf("번호 입력 : ");
//		scanf("%d", lotto );
//		for (int* i = start; i != lotto; i++) {
//			if (*i == *lotto) {
//				printf("같은번호가 있습니다.!\n");
//				lotto -= 1; break;
//			}
//		}
//		lotto += 1;
//	}
//
//}
//void print_nums(int* lotto) {
//	printf("로또번호 : ");
//	for (int i = 0; i < 6; i++) {
//		printf(" %d ", lotto[i]);
//	}
//	puts("");
//}
//
//void main() {
//	int num, result;
//	char word[10];
//	printf("정수 입력 : ");
//	result = scanf("%d", &num);
//
//	//printf("scanf 반환값 : %d \n", result);
//	//scanf("%s",word);  문자 - getchar(), getch()  문자열 - gets()
//
//	getchar();
//
//	gets( word);
//
//	printf("%d  \n", num);
//	printf("%s \n", word);
//
//}


//
////void total( int k, int e, int m, int*tot ) {
////	*tot = k + e + m;
////}
//
//
//void input(int* p) {  // 정수 입력시 짝수 입력하면 다시 입력 
//	int* end = p + 5;
//	do {
//		printf("정수입력 : ");
//		scanf("%d", p);
//		if( *p%2==1) p += 1;
//	} while ( end != p);
//}
//void total(int* p, int*sum) {
//	for (int i = 0; i < 5; i++) {
//		*sum = *sum + p[i];
//	}
//}
//
//void swap(double* pa, double* pb) {
//	double temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//void line_up(double* maxp, double* midp, double* minp) {
//
//	if (*maxp > *midp && *midp > *minp) {
//		return;
//	}
//	else if (*midp > *maxp && *maxp > *minp) {
//		swap(midp, maxp);
//	}
//	else if (*midp > *minp && *minp > *maxp) {
//		swap(minp, maxp);
//		swap(midp, maxp);
//	}
//	else if (*minp > *maxp && *maxp > *midp) {
//		swap(minp, maxp);
//		swap(midp, minp);
//	}
//	else if (*maxp > *minp && *minp > *midp) {
//		swap(minp, midp);
//	}
//	else if (*minp > *midp && *midp > *maxp) {
//		swap(minp, maxp);
//	}
//}
//int compareTo(int a, int b) {
//	return (a - b) * -1 ;
//}
//void sort(int* parr, int size) {
//	for (int i = 0; i < size-1 ; i++) { // 버블정렬 - 배열의크기 n이라면 n-1만큼
//		for (int k = 0; k < size-1-i; k++) { // 정렬되지않은 데이터 갯수 -1 만큼 반복
//			if ( compareTo(parr[k], parr[k+1]) > 0 ) {
//
//				int temp = parr[k];
//				parr[k] = parr[k + 1];
//				parr[k + 1] = temp;
//			}
//		}
//	}
//}
//
//void main() {
//	int arr[5] = { 0, };
//	printf("정수 입력 : ");
//	scanf("%d%d%d%d%d", arr, arr + 1, arr + 2, arr + 3, arr + 4);
//	sort(arr , sizeof(arr)/sizeof(int) );
//	printf("%d  %d  %d  %d  %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
//
//


	/*double max, mid, min;
	printf("실수 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬 : %.1lf, %.1lf, %.1lf\n", max, mid, min);*/





	//int arr[5], sum=0;
	//input(arr);
	//total(arr, &sum );
	//printf(" 입력 한 정수 의 총합은 %d \n", sum);




	//int kor = 89, eng = 90, mat = 56;
	//int tot = 0;
	//total(kor, eng, mat, &tot );
	//printf("총합 : %d \n", tot);


	//int num1 = 0, num2 = 0, sum=0;
	//int* p = NULL, *sump=NULL;

	//p = &num1;
	//printf("첫번째 정수 입력 : ");
	//scanf("%d", p);  //num1에 정수 저장 , 포인터 사용
	//p = &num2;
	//printf("두번째 정수 입력 : ");
	//scanf("%d",p); //num2에 정수 저장, 포인터 사용

	//sump = &sum;
	//*sump = num1 + num2;  // sum에 두정수의 합 저장,  포인터사용
	//printf("두정수의 합 : %d \n", *sump );





	/*int num = 20;
	int* p = &num;

	printf("%d  \n", *p);

	int arr[] = { 10,20,30,40,50 };
	int* arrp = arr+2;

	printf("%d %d \n", arrp[0], arrp[2]);
	arrp[0] = 1020;
	printf("%d \n", arr[2]);


	char word[50] = { "<div id=wrap></div>" };
	char* wordp = word;
	printf("%s  \n", wordp+4);
	wordp[5] = 'c';
	printf("%s \n", word);


	char* str = "using strings";
	printf("포인터 - %s \n", str);
	printf("배열 - %s \n", word);
	
	printf("포인터 - %s \n", str + 5);
	printf("배열 - %s \n", word + 5);

	word[0] = '{';
	printf("배열 - %s \n", word);

	str[0] = 'a';
	printf("포인터 - %s \n", str);*/


	// 포인터는 메모리주소를 저장하기 위한 메모리 공간이다.
	// 참조의 역할을 한다.
	// 기본 데이터 타입에 영향을 받지 않지만,  포인터를 통해
	// 값을 저장하거나 출력하는경우에는 타입에 영향을 받는다.
	//  프로그래내에서 사용되는 메모리주소라면 포인터에 저장이 가능하다.


	//int num = 40;
	//char arr[10] = { 0, };

	//void* p;
	//int* ip;
	//char* cp;

	////  & -  메모리공간의 주소, * -메모리주소의 공간

	//ip = &num;
	//*ip = 1023;  // *&num = 1023     num= 1023
	//
	//printf("%d", sizeof(ip));
	//printf("변수num의 값 : %d  \n", num);

	////const int a = 10;
	////a = 20;
	//
	//// const int* p  일경우는  포인터변수가 가리키는 값에 상수
	////  const int a 를 한것처럼 데이터가 저장된 공간에 상수
	//
	//// int* const p 일경우는 포인터변수에 대해 상수
	////  포인터변수 공간에 상수(읽기 권한)
	//

	//const int*  pp = &num;
	//char num1 = 50;
	//
	//printf("%d  \n", *pp);
	//
	//pp = &num1;
	//printf("%d  \n", *(char*)pp);

	//*pp = 10;






	/*printf("%d \n", num);
	printf("%p  \n", &num);
	printf("%p  \n", &num + 1);
	printf("arr %p  \n", arr);
	printf("&arr %p  \n", &arr);
	printf("arr+1  %p  \n", arr+1);
	printf("&arr+1  %p  \n", &arr+1);*/

//}


// 프로그램의 접근 , 윈도우(운영체제)의 접근
// 00123423AB=40;
// printf("%d \n", 00123423AB);