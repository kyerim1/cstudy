#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {
	char one[10], two[10], three[10] ,temp[10];
	char* p1, * p2, * p3 , *tmp;
	//printf(" %d  \n", strcmp("apple", "kiwi"));
	printf("�� �ܾ� �Է� : ");
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
//	printf("�ܾ� �Է� : ");
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
//	printf("�Է��� �ܾ� : %s  , ������ �ܾ� : %s ", word, visible);
//}
//

//
//void input_nums(int* lotto) {
//	int* start = lotto;
//	int* end = lotto + 6;
//	while (end != lotto) {
//		printf("��ȣ �Է� : ");
//		scanf("%d", lotto );
//		for (int* i = start; i != lotto; i++) {
//			if (*i == *lotto) {
//				printf("������ȣ�� �ֽ��ϴ�.!\n");
//				lotto -= 1; break;
//			}
//		}
//		lotto += 1;
//	}
//
//}
//void print_nums(int* lotto) {
//	printf("�ζǹ�ȣ : ");
//	for (int i = 0; i < 6; i++) {
//		printf(" %d ", lotto[i]);
//	}
//	puts("");
//}
//
//void main() {
//	int num, result;
//	char word[10];
//	printf("���� �Է� : ");
//	result = scanf("%d", &num);
//
//	//printf("scanf ��ȯ�� : %d \n", result);
//	//scanf("%s",word);  ���� - getchar(), getch()  ���ڿ� - gets()
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
//void input(int* p) {  // ���� �Է½� ¦�� �Է��ϸ� �ٽ� �Է� 
//	int* end = p + 5;
//	do {
//		printf("�����Է� : ");
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
//	for (int i = 0; i < size-1 ; i++) { // �������� - �迭��ũ�� n�̶�� n-1��ŭ
//		for (int k = 0; k < size-1-i; k++) { // ���ĵ������� ������ ���� -1 ��ŭ �ݺ�
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
//	printf("���� �Է� : ");
//	scanf("%d%d%d%d%d", arr, arr + 1, arr + 2, arr + 3, arr + 4);
//	sort(arr , sizeof(arr)/sizeof(int) );
//	printf("%d  %d  %d  %d  %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
//
//


	/*double max, mid, min;
	printf("�Ǽ� : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("���� : %.1lf, %.1lf, %.1lf\n", max, mid, min);*/





	//int arr[5], sum=0;
	//input(arr);
	//total(arr, &sum );
	//printf(" �Է� �� ���� �� ������ %d \n", sum);




	//int kor = 89, eng = 90, mat = 56;
	//int tot = 0;
	//total(kor, eng, mat, &tot );
	//printf("���� : %d \n", tot);


	//int num1 = 0, num2 = 0, sum=0;
	//int* p = NULL, *sump=NULL;

	//p = &num1;
	//printf("ù��° ���� �Է� : ");
	//scanf("%d", p);  //num1�� ���� ���� , ������ ���
	//p = &num2;
	//printf("�ι�° ���� �Է� : ");
	//scanf("%d",p); //num2�� ���� ����, ������ ���

	//sump = &sum;
	//*sump = num1 + num2;  // sum�� �������� �� ����,  �����ͻ��
	//printf("�������� �� : %d \n", *sump );





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
	printf("������ - %s \n", str);
	printf("�迭 - %s \n", word);
	
	printf("������ - %s \n", str + 5);
	printf("�迭 - %s \n", word + 5);

	word[0] = '{';
	printf("�迭 - %s \n", word);

	str[0] = 'a';
	printf("������ - %s \n", str);*/


	// �����ʹ� �޸��ּҸ� �����ϱ� ���� �޸� �����̴�.
	// ������ ������ �Ѵ�.
	// �⺻ ������ Ÿ�Կ� ������ ���� ������,  �����͸� ����
	// ���� �����ϰų� ����ϴ°�쿡�� Ÿ�Կ� ������ �޴´�.
	//  ���α׷������� ���Ǵ� �޸��ּҶ�� �����Ϳ� ������ �����ϴ�.


	//int num = 40;
	//char arr[10] = { 0, };

	//void* p;
	//int* ip;
	//char* cp;

	////  & -  �޸𸮰����� �ּ�, * -�޸��ּ��� ����

	//ip = &num;
	//*ip = 1023;  // *&num = 1023     num= 1023
	//
	//printf("%d", sizeof(ip));
	//printf("����num�� �� : %d  \n", num);

	////const int a = 10;
	////a = 20;
	//
	//// const int* p  �ϰ���  �����ͺ����� ����Ű�� ���� ���
	////  const int a �� �Ѱ�ó�� �����Ͱ� ����� ������ ���
	//
	//// int* const p �ϰ��� �����ͺ����� ���� ���
	////  �����ͺ��� ������ ���(�б� ����)
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


// ���α׷��� ���� , ������(�ü��)�� ����
// 00123423AB=40;
// printf("%d \n", 00123423AB);