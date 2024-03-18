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
Book* file_load(); // ���� ���� �ҷ����� ( Book, BookState����ü�� ����)
void file_save(); // ���� ���� ����(Book, BookState ����ü ������ ����)
Member* member_load(); // ȸ�� ���� �ҷ�����

//bookFunc.c
MainMenu main_menu();
SubMenu sub_menu();
Member* login();  //�뿩, �ݳ�, �Ű����� ��Ͻ� �ʿ�

//bookNew.c
Book* new_book();//�Ű����� ��� - ������ �α��� �ʿ�
Book* update_book(Book*);// ���� ���� ���� - ������ �α��� �ʿ�

//bookRent.c
Book* rent_book(Book*); //�뿩�� ȸ�� ��ȣ �Է��Ͽ� ��ġ�� �뿩 ����

//bookReturn.c
Book* return_book(Book*);// �ݳ��� ���� ��ȣ �� ���� �Է��Ͽ� �ݳ� ����


