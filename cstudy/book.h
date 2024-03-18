#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>
#include <stdbool.h>


typedef struct book Book;
typedef struct bookState BookState;
typedef struct member Member;
typedef enum mainMenu MainMenu;
typedef enum subMenu SubMenu;
typedef enum rent_return rent_return;

//bookFile.c
Book* file_load(); // 도서 파일 불러오기 ( Book, BookState구조체에 저장)
void file_save(); // 도서 파일 저장(Book, BookState 구조체 데이터 저장)
Member* member_load(); // 회원 정보 불러오기

//bookFunc.c
MainMenu main_menu();
SubMenu sub_menu();
Member* login();  //대여, 반납, 신간도서 등록시 필요

//bookNew.c
Book* new_book();//신간도서 등록 - 관리자 로그인 필요
Book* update_book(Book*);// 도서 정보 수정 - 관리자 로그인 필요

//bookRent.c
Book* rent_book(Book*); //대여시 회원 번호 입력하여 일치시 대여 가능

//bookReturn.c
Book* return_book(Book*);// 반납시 도서 번호 및 제목 입력하여 반납 진행


