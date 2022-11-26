#pragma once
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <ctime>

void playgame();                  // ���� ����

void match(int** arr);            // ���ο� ��ġ ����

void setColor(int color);         // �ܼ�text ����
void setCellColor(int a);         // Cell ����
void printField(int** arr);       // ���Ӹ�� ���
void randfill(int** arr);         // �������� ���� ��ġ

bool check(int** arr);            // ���̻� ������ �� �ִ���
void winMenu();                   // 2048 �޼�

bool movefuncUP(int** arr);       
bool movefuncDOWN(int** arr);     
bool movefuncLEFT(int** arr);     
bool movefuncRIGHT(int** arr);    

bool exitFunction();              