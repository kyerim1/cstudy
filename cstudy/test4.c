#include <stdio.h>

void main() {



	// 1���� 10���� ����ϸ鼭  ¦�� ����Ҷ��� *** �� ���� ����ϼ���.

	//for (int i = 1; i <= 10; i++) {
	//	if (i % 2 == 0)
	//		printf("%d***\n", i);
	//	else
	//		printf("%d\n", i);
	//}

	// 1���� 10���� �ݺ����� ����� ����ϴµ�
	// ���� ��� ��� ,  ���� ��ŭ *�� ����ϼ���. 

	for (int i = 1; i <= 4; i++) {
		for (int blank = 4; blank > i; blank--) {
			printf(" ");
		}
		for (int star = 1; star <= i*2-1; star++) {
			printf("*");
		}
		printf("\n");
	}




	// �ݺ��� - while, for, do~while
	//while (1) {

	//}
	/*for (int i = 1; i <= 10; i++) {
		printf("%d  \n", i);
	}*/

}