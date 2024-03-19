#include "book.h"


Book* file_load() { // book.txt 파일 불러오고  bookstate.txt 파일도 불러오기
	// bookstate.txt파일 내용은 stat 전역변수에 저장
}
void file_save() { //book.txt 와  bookstate.txt 파일 저장 

}
Member* member_load(int* size) {  // 로그인 필요할때만 동작
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
			// %19[^,]  , 앞의 문자열 최대 19자까지 읽기
			count++;
		}
		*size = count; // 파일 읽어온 갯수
		return memberlist; //파일 읽기 성공
		fclose(fp);
	}
	return NULL; //파일 읽기 실패
}


/*  https://github.com/kyerim1/cstudy   */